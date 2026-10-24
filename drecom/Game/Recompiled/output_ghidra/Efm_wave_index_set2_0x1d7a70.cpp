#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Efm_wave_index_set2
// Address: 0x1d7a70 - 0x1d7ef0
void Efm_wave_index_set2_0x1d7a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_wave_index_set2_0x1d7a70");
#endif

    switch (ctx->pc) {
        case 0x1d7af4u: goto label_1d7af4;
        case 0x1d7b80u: goto label_1d7b80;
        case 0x1d7bf8u: goto label_1d7bf8;
        case 0x1d7c0cu: goto label_1d7c0c;
        case 0x1d7da0u: goto label_1d7da0;
        default: break;
    }

    ctx->pc = 0x1d7a70u;

    // 0x1d7a70: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d7a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1d7a74: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1d7a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1d7a78: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d7a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d7a7c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d7a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d7a80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d7a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d7a84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d7a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d7a88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d7a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d7a8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d7a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d7a90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d7a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d7a94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7a9c: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x1d7a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
    // 0x1d7aa0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d7aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d7aa4: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1d7aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1d7aa8: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x1d7aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x1d7aac: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d7aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7ab0: 0x24640a68  addiu       $a0, $v1, 0xA68
    ctx->pc = 0x1d7ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d7ab4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d7ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7ab8: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1d7ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d7abc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d7abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d7ac0: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d7ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7ac4: 0x24650a68  addiu       $a1, $v1, 0xA68
    ctx->pc = 0x1d7ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d7ac8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d7ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d7acc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1d7accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1d7ad0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d7ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d7ad4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d7ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1d7ad8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1d7ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d7adc: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1d7adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1d7ae0: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1d7ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x1d7ae4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d7ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d7ae8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1d7ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1d7aec: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x1d7af0: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x1d7af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_1d7af4:
    // 0x1d7af4: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d7af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7af8: 0x24640a68  addiu       $a0, $v1, 0xA68
    ctx->pc = 0x1d7af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d7afc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d7afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7b00: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1d7b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d7b04: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d7b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d7b08: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d7b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7b0c: 0x24650a68  addiu       $a1, $v1, 0xA68
    ctx->pc = 0x1d7b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d7b10: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d7b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d7b14: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1d7b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1d7b18: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d7b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d7b1c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d7b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1d7b20: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d7b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7b24: 0x24630a68  addiu       $v1, $v1, 0xA68
    ctx->pc = 0x1d7b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d7b28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d7b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7b2c: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d7b30: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x1d7b30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x1d7b34: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d7b38: 0x8c770068  lw          $s7, 0x68($v1)
    ctx->pc = 0x1d7b38u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1d7b3c: 0x72e09628  paddub      $s2, $s7, $zero
    ctx->pc = 0x1d7b3cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1d7b40: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1d7b40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1d7b44: 0x26f70030  addiu       $s7, $s7, 0x30
    ctx->pc = 0x1d7b44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x1d7b48: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1d7b48u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d7b4c: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d7b50: 0x8c7100a8  lw          $s1, 0xA8($v1)
    ctx->pc = 0x1d7b50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1d7b54: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d7b58: 0x8c7e0020  lw          $fp, 0x20($v1)
    ctx->pc = 0x1d7b58u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d7b5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7b5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7b60: 0x0  nop
    ctx->pc = 0x1d7b60u;
    // NOP
    // 0x1d7b64: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d7b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1d7b68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7b6c: 0x0  nop
    ctx->pc = 0x1d7b6cu;
    // NOP
    // 0x1d7b70: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d7b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1d7b74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7b78: 0x0  nop
    ctx->pc = 0x1d7b78u;
    // NOP
    // 0x1d7b7c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d7b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1d7b80:
    // 0x1d7b80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d7b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7b84: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d7b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7b88: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7b88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7b8c: 0x0  nop
    ctx->pc = 0x1d7b8cu;
    // NOP
    // 0x1d7b90: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1D7B90u;
    {
        const bool branch_taken_0x1d7b90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7b90) {
            ctx->pc = 0x1D7BD0u;
            goto label_1d7bd0;
        }
    }
    ctx->pc = 0x1D7B98u;
    // 0x1d7b98: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1d7b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7b9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7b9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7ba0: 0x0  nop
    ctx->pc = 0x1d7ba0u;
    // NOP
    // 0x1d7ba4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d7ba4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7ba8: 0x0  nop
    ctx->pc = 0x1d7ba8u;
    // NOP
    // 0x1d7bac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7BACu;
    {
        const bool branch_taken_0x1d7bac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7bac) {
            ctx->pc = 0x1D7BD0u;
            goto label_1d7bd0;
        }
    }
    ctx->pc = 0x1D7BB4u;
    // 0x1d7bb4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d7bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7bb8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d7bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1d7bbc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1d7bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7bc0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d7bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1d7bc4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1d7bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7bc8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d7bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1d7bcc: 0x0  nop
    ctx->pc = 0x1d7bccu;
    // NOP
label_1d7bd0:
    // 0x1d7bd0: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1d7bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1d7bd4: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1d7bd4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1d7bd8: 0x17c0ffe9  bnez        $fp, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1D7BD8u;
    {
        const bool branch_taken_0x1d7bd8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7bd8) {
            ctx->pc = 0x1D7B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7b80;
        }
    }
    ctx->pc = 0x1D7BE0u;
    // 0x1d7be0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1d7be0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d7be4: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d7be8: 0x8c7100a8  lw          $s1, 0xA8($v1)
    ctx->pc = 0x1d7be8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1d7bec: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d7bf0: 0x8c7e0020  lw          $fp, 0x20($v1)
    ctx->pc = 0x1d7bf0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d7bf4: 0x0  nop
    ctx->pc = 0x1d7bf4u;
    // NOP
label_1d7bf8:
    // 0x1d7bf8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1d7bf8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d7bfc: 0x72e08628  paddub      $s0, $s7, $zero
    ctx->pc = 0x1d7bfcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1d7c00: 0x72c0ae28  paddub      $s5, $s6, $zero
    ctx->pc = 0x1d7c00u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1d7c04: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D7C04u;
    {
        const bool branch_taken_0x1d7c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c04) {
            ctx->pc = 0x1D7C88u;
            goto label_1d7c88;
        }
    }
    ctx->pc = 0x1D7C0Cu;
label_1d7c0c:
    // 0x1d7c0c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1d7c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7c10: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d7c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7c14: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7c14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7c18: 0x0  nop
    ctx->pc = 0x1d7c18u;
    // NOP
    // 0x1d7c1c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1D7C1Cu;
    {
        const bool branch_taken_0x1d7c1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7c1c) {
            ctx->pc = 0x1D7C80u;
            goto label_1d7c80;
        }
    }
    ctx->pc = 0x1D7C24u;
    // 0x1d7c24: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1d7c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7c28: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1d7c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7c2c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7c2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7c30: 0x0  nop
    ctx->pc = 0x1d7c30u;
    // NOP
    // 0x1d7c34: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1D7C34u;
    {
        const bool branch_taken_0x1d7c34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7c34) {
            ctx->pc = 0x1D7C80u;
            goto label_1d7c80;
        }
    }
    ctx->pc = 0x1D7C3Cu;
    // 0x1d7c3c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1d7c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7c40: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1d7c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7c44: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7c44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7c48: 0x0  nop
    ctx->pc = 0x1d7c48u;
    // NOP
    // 0x1d7c4c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1D7C4Cu;
    {
        const bool branch_taken_0x1d7c4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7c4c) {
            ctx->pc = 0x1D7C80u;
            goto label_1d7c80;
        }
    }
    ctx->pc = 0x1D7C54u;
    // 0x1d7c54: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1d7c54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7c58: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x1d7c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x1d7c5c: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x1d7c5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1d7c60: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d7c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d7c64: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d7c68: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1d7c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d7c6c: 0xa4640008  sh          $a0, 0x8($v1)
    ctx->pc = 0x1d7c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d7c70: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x1d7c70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1d7c74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d7c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d7c78: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1d7c78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d7c7c: 0x0  nop
    ctx->pc = 0x1d7c7cu;
    // NOP
label_1d7c80:
    // 0x1d7c80: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1d7c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d7c84: 0x0  nop
    ctx->pc = 0x1d7c84u;
    // NOP
label_1d7c88:
    // 0x1d7c88: 0x72a01e28  paddub      $v1, $s5, $zero
    ctx->pc = 0x1d7c88u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1d7c8c: 0x2475ffff  addiu       $s5, $v1, -0x1
    ctx->pc = 0x1d7c8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d7c90: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D7C90u;
    {
        const bool branch_taken_0x1d7c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c90) {
            ctx->pc = 0x1D7C0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7c0c;
        }
    }
    ctx->pc = 0x1D7C98u;
    // 0x1d7c98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d7c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7c9c: 0x16830005  bne         $s4, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7C9Cu;
    {
        const bool branch_taken_0x1d7c9c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7c9c) {
            ctx->pc = 0x1D7CB4u;
            goto label_1d7cb4;
        }
    }
    ctx->pc = 0x1D7CA4u;
    // 0x1d7ca4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d7ca4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d7ca8: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1d7ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1d7cac: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1D7CACu;
    {
        const bool branch_taken_0x1d7cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7cac) {
            ctx->pc = 0x1D7DB0u;
            goto label_1d7db0;
        }
    }
    ctx->pc = 0x1D7CB4u;
label_1d7cb4:
    // 0x1d7cb4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d7cb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d7cb8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d7cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7cbc: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1d7cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1d7cc0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1d7cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7cc4: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1d7cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1d7cc8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1d7cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7ccc: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x1d7cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x1d7cd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d7cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d7cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7cd8: 0x0  nop
    ctx->pc = 0x1d7cd8u;
    // NOP
    // 0x1d7cdc: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x1d7cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x1d7ce0: 0xa6400004  sh          $zero, 0x4($s2)
    ctx->pc = 0x1d7ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d7ce4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7ce8: 0x0  nop
    ctx->pc = 0x1d7ce8u;
    // NOP
    // 0x1d7cec: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1d7cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1d7cf0: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x1d7cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x1d7cf4: 0xa6420008  sh          $v0, 0x8($s2)
    ctx->pc = 0x1d7cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d7cf8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d7cfc: 0xa642000a  sh          $v0, 0xA($s2)
    ctx->pc = 0x1d7cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d7d00: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d7d04: 0xa642000c  sh          $v0, 0xC($s2)
    ctx->pc = 0x1d7d04u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d7d08: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d7d0c: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x1d7d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d7d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7d14: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x1d7d14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d7d18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7d1c: 0x0  nop
    ctx->pc = 0x1d7d1cu;
    // NOP
    // 0x1d7d20: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1d7d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1d7d24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7d28: 0x0  nop
    ctx->pc = 0x1d7d28u;
    // NOP
    // 0x1d7d2c: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x1d7d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x1d7d30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7d30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7d34: 0x0  nop
    ctx->pc = 0x1d7d34u;
    // NOP
    // 0x1d7d38: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1d7d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1d7d3c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1d7d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7d40: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d7d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7d44: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1d7d44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7d48: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1d7d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7d4c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d7d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7d50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d7d50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7d54: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x1d7d54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1d7d58: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1d7d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7d5c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d7d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7d60: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1d7d60u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7d64: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1d7d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7d68: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d7d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7d6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d7d6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7d70: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1d7d70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1d7d74: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x1d7d74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1d7d78: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1d7d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7d7c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d7d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7d80: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1d7d80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7d84: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1d7d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7d88: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d7d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7d8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d7d8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7d90: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1d7d90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1d7d94: 0x46030300  add.s       $f12, $f0, $f3
    ctx->pc = 0x1d7d94u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1d7d98: 0xc045630  jal         func_1158C0
    ctx->pc = 0x1D7D98u;
    SET_GPR_U32(ctx, 31, 0x1D7DA0u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x1D7D98u, 0x1D7DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DA0u;
label_1d7da0:
    // 0x1d7da0: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x1d7da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1d7da4: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1d7da4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1d7da8: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1d7da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1d7dac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d7dacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d7db0:
    // 0x1d7db0: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1d7db0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1d7db4: 0x17c0ff90  bnez        $fp, . + 4 + (-0x70 << 2)
    ctx->pc = 0x1D7DB4u;
    {
        const bool branch_taken_0x1d7db4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7db4) {
            ctx->pc = 0x1D7BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7bf8;
        }
    }
    ctx->pc = 0x1D7DBCu;
    // 0x1d7dbc: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d7dc0: 0x8c770068  lw          $s7, 0x68($v1)
    ctx->pc = 0x1d7dc0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1d7dc4: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x1d7dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x1d7dc8: 0xa6e30006  sh          $v1, 0x6($s7)
    ctx->pc = 0x1d7dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d7dcc: 0xa6e00004  sh          $zero, 0x4($s7)
    ctx->pc = 0x1d7dccu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d7dd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7dd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7dd4: 0x0  nop
    ctx->pc = 0x1d7dd4u;
    // NOP
    // 0x1d7dd8: 0xe6e00010  swc1        $f0, 0x10($s7)
    ctx->pc = 0x1d7dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 16), bits); }
    // 0x1d7ddc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7de0: 0x0  nop
    ctx->pc = 0x1d7de0u;
    // NOP
    // 0x1d7de4: 0xe6e00014  swc1        $f0, 0x14($s7)
    ctx->pc = 0x1d7de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 20), bits); }
    // 0x1d7de8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7dec: 0x0  nop
    ctx->pc = 0x1d7decu;
    // NOP
    // 0x1d7df0: 0xe6e00018  swc1        $f0, 0x18($s7)
    ctx->pc = 0x1d7df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 24), bits); }
    // 0x1d7df4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7df4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7df8: 0x0  nop
    ctx->pc = 0x1d7df8u;
    // NOP
    // 0x1d7dfc: 0xe6e0001c  swc1        $f0, 0x1C($s7)
    ctx->pc = 0x1d7dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 28), bits); }
    // 0x1d7e00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7e04: 0x0  nop
    ctx->pc = 0x1d7e04u;
    // NOP
    // 0x1d7e08: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x1d7e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x1d7e0c: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x1d7e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d7e10: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d7e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d7e14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d7e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d7e18: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1d7e18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d7e1c: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7e20: 0x24640a68  addiu       $a0, $v1, 0xA68
    ctx->pc = 0x1d7e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d7e24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d7e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7e28: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d7e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d7e2c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d7e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d7e30: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d7e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7e34: 0x24640a68  addiu       $a0, $v1, 0xA68
    ctx->pc = 0x1d7e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d7e38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d7e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7e3c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1d7e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d7e40: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d7e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d7e44: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d7e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7e48: 0x24650a68  addiu       $a1, $v1, 0xA68
    ctx->pc = 0x1d7e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d7e4c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d7e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d7e50: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1d7e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1d7e54: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d7e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d7e58: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d7e58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1d7e5c: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d7e60: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x1d7e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1d7e64: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x1d7e68: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1d7e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d7e6c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1d7e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d7e70: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x1d7e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x1d7e74: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d7e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d7e78: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1d7e78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1d7e7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d7e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d7e80: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1d7e80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d7e84: 0x1460ff1b  bnez        $v1, . + 4 + (-0xE5 << 2)
    ctx->pc = 0x1D7E84u;
    {
        const bool branch_taken_0x1d7e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e84) {
            ctx->pc = 0x1D7AF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7af4;
        }
    }
    ctx->pc = 0x1D7E8Cu;
    // 0x1d7e8c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d7e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d7e90: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x1d7e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x1d7e94: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1d7e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x1d7e98: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x1d7e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1d7e9c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1d7e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d7ea0: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x1d7ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x1d7ea4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1d7ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d7ea8: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1d7ea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1d7eac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d7eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d7eb0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1d7eb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d7eb4: 0x1460ff0f  bnez        $v1, . + 4 + (-0xF1 << 2)
    ctx->pc = 0x1D7EB4u;
    {
        const bool branch_taken_0x1d7eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7eb4) {
            ctx->pc = 0x1D7AF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7af4;
        }
    }
    ctx->pc = 0x1D7EBCu;
    // 0x1d7ebc: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1d7ebcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d7ec0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d7ec0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d7ec4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d7ec4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d7ec8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d7ec8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d7ecc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d7eccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d7ed0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d7ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7ed4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d7ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7ed8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d7ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7edc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7ee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7ee4: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1d7ee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d7ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7EF0u;
}
