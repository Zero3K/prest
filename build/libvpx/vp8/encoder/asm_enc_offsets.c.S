	.file	"asm_enc_offsets.c"
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB86:
	.cfi_startproc
#APP
# 23 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_block_coeff EQU $8
# 0 "" 2
# 24 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_block_zbin EQU $40
# 0 "" 2
# 25 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_block_round EQU $56
# 0 "" 2
# 26 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_block_quant EQU $16
# 0 "" 2
# 27 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_block_quant_fast EQU $24
# 0 "" 2
# 28 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_block_zbin_extra EQU $64
# 0 "" 2
# 29 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_block_zrun_zbin_boost EQU $48
# 0 "" 2
# 30 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_block_quant_shift EQU $32
# 0 "" 2
# 32 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_blockd_qcoeff EQU $0
# 0 "" 2
# 33 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_blockd_dequant EQU $24
# 0 "" 2
# 34 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_blockd_dqcoeff EQU $8
# 0 "" 2
# 35 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_blockd_eob EQU $40
# 0 "" 2
# 38 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_block_base_src EQU $72
# 0 "" 2
# 39 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_block_src EQU $80
# 0 "" 2
# 40 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_block_src_diff EQU $0
# 0 "" 2
# 41 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_block_src_stride EQU $84
# 0 "" 2
# 43 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_blockd_predictor EQU $16
# 0 "" 2
# 46 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_writer_lowvalue EQU $0
# 0 "" 2
# 47 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_writer_range EQU $4
# 0 "" 2
# 48 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_writer_count EQU $8
# 0 "" 2
# 49 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_writer_pos EQU $12
# 0 "" 2
# 50 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_writer_buffer EQU $16
# 0 "" 2
# 51 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_writer_buffer_end EQU $24
# 0 "" 2
# 52 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_writer_error EQU $32
# 0 "" 2
# 54 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
tokenextra_token EQU $10
# 0 "" 2
# 55 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
tokenextra_extra EQU $8
# 0 "" 2
# 56 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
tokenextra_context_tree EQU $0
# 0 "" 2
# 57 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
tokenextra_skip_eob_node EQU $11
# 0 "" 2
# 58 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
TOKENEXTRA_SZ EQU $16
# 0 "" 2
# 60 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_extra_bit_struct_sz EQU $24
# 0 "" 2
# 62 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_token_value EQU $0
# 0 "" 2
# 63 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_token_len EQU $4
# 0 "" 2
# 65 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_extra_bit_struct_tree EQU $0
# 0 "" 2
# 66 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_extra_bit_struct_prob EQU $8
# 0 "" 2
# 67 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_extra_bit_struct_len EQU $16
# 0 "" 2
# 68 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_extra_bit_struct_base_val EQU $20
# 0 "" 2
# 70 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_comp_tplist EQU $169712
# 0 "" 2
# 71 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_comp_common EQU $105920
# 0 "" 2
# 72 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_comp_bc EQU $115040
# 0 "" 2
# 73 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_writer_sz EQU $56
# 0 "" 2
# 75 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
tokenlist_start EQU $0
# 0 "" 2
# 76 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
tokenlist_stop EQU $8
# 0 "" 2
# 77 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
TOKENLIST_SZ EQU $16
# 0 "" 2
# 79 "/home/baka/Build/browser/platforms/media_backends/libvpx/vp8/encoder/asm_enc_offsets.c" 1
	
vp8_common_mb_rows EQU $2324
# 0 "" 2
#NO_APP
	xorl	%eax, %eax
	ret
	.cfi_endproc
.LFE86:
	.size	main, .-main
	.ident	"GCC: (GNU) 6.3.1 20161221 (Red Hat 6.3.1-1)"
	.section	.note.GNU-stack,"",@progbits
