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

// Function: effscr01_draw
// Address: 0x299bb0 - 0x29a61c
void effscr01_draw_0x299bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("effscr01_draw_0x299bb0");
#endif

    switch (ctx->pc) {
        case 0x299d18u: goto label_299d18;
        case 0x299d54u: goto label_299d54;
        case 0x299d78u: goto label_299d78;
        case 0x299ddcu: goto label_299ddc;
        case 0x299df8u: goto label_299df8;
        case 0x299e2cu: goto label_299e2c;
        case 0x299e48u: goto label_299e48;
        case 0x299e64u: goto label_299e64;
        case 0x299e78u: goto label_299e78;
        case 0x29a04cu: goto label_29a04c;
        case 0x29a0d4u: goto label_29a0d4;
        case 0x29a0fcu: goto label_29a0fc;
        case 0x29a108u: goto label_29a108;
        case 0x29a11cu: goto label_29a11c;
        case 0x29a1d4u: goto label_29a1d4;
        case 0x29a1e4u: goto label_29a1e4;
        case 0x29a1f8u: goto label_29a1f8;
        case 0x29a20cu: goto label_29a20c;
        case 0x29a228u: goto label_29a228;
        case 0x29a3d8u: goto label_29a3d8;
        case 0x29a42cu: goto label_29a42c;
        case 0x29a448u: goto label_29a448;
        case 0x29a474u: goto label_29a474;
        case 0x29a4b4u: goto label_29a4b4;
        case 0x29a4ccu: goto label_29a4cc;
        case 0x29a5a8u: goto label_29a5a8;
        case 0x29a5ccu: goto label_29a5cc;
        default: break;
    }

    ctx->pc = 0x299bb0u;

    // 0x299bb0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x299bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x299bb4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x299bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x299bb8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x299bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x299bbc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x299bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x299bc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x299bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x299bc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x299bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x299bc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x299bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x299bcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x299bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x299bd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x299bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x299bd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x299bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x299bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x299bdc: 0xafa401a8  sw          $a0, 0x1A8($sp)
    ctx->pc = 0x299bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 4));
    // 0x299be0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x299be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x299be4: 0x2442e550  addiu       $v0, $v0, -0x1AB0
    ctx->pc = 0x299be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x299be8: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x299be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x299bec: 0x8fb301a8  lw          $s3, 0x1A8($sp)
    ctx->pc = 0x299becu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299bf0: 0x8e6201c8  lw          $v0, 0x1C8($s3)
    ctx->pc = 0x299bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 456)));
    // 0x299bf4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x299bf4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x299bf8: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299bfc: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x299bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299c00: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x299c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x299c04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x299c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299c08: 0x0  nop
    ctx->pc = 0x299c08u;
    // NOP
    // 0x299c0c: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x299c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x299c10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x299c10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299c14: 0x0  nop
    ctx->pc = 0x299c14u;
    // NOP
    // 0x299c18: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x299c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x299c1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x299c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299c20: 0x0  nop
    ctx->pc = 0x299c20u;
    // NOP
    // 0x299c24: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x299c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x299c28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x299c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299c2c: 0x0  nop
    ctx->pc = 0x299c2cu;
    // NOP
    // 0x299c30: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x299c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x299c34: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299c38: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x299c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299c3c: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x299c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x299c40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x299c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299c44: 0x0  nop
    ctx->pc = 0x299c44u;
    // NOP
    // 0x299c48: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x299c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x299c4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x299c4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299c50: 0x0  nop
    ctx->pc = 0x299c50u;
    // NOP
    // 0x299c54: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x299c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x299c58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x299c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299c5c: 0x0  nop
    ctx->pc = 0x299c5cu;
    // NOP
    // 0x299c60: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x299c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x299c64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x299c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299c68: 0x0  nop
    ctx->pc = 0x299c68u;
    // NOP
    // 0x299c6c: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x299c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x299c70: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299c74: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x299c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299c78: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x299c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x299c7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x299c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299c80: 0x0  nop
    ctx->pc = 0x299c80u;
    // NOP
    // 0x299c84: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x299c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x299c88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x299c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x299c8c: 0x8c330af0  lw          $s3, 0xAF0($at)
    ctx->pc = 0x299c8cu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x299c90: 0xafb300a0  sw          $s3, 0xA0($sp)
    ctx->pc = 0x299c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 19));
    // 0x299c94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x299c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x299c98: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x299c98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x299c9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x299c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x299ca0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x299CA0u;
    {
        const bool branch_taken_0x299ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299ca0) {
            ctx->pc = 0x299CD0u;
            goto label_299cd0;
        }
    }
    ctx->pc = 0x299CA8u;
    // 0x299ca8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x299ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x299cac: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x299cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x299cb0: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x299cb0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
    // 0x299cb4: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x299cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x299cb8: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x299cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x299cbc: 0x531825  or          $v1, $v0, $s3
    ctx->pc = 0x299cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x299cc0: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299cc4: 0xfc430170  sd          $v1, 0x170($v0)
    ctx->pc = 0x299cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 368), GPR_U64(ctx, 3));
    // 0x299cc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x299CC8u;
    {
        const bool branch_taken_0x299cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299cc8) {
            ctx->pc = 0x299CECu;
            goto label_299cec;
        }
    }
    ctx->pc = 0x299CD0u;
label_299cd0:
    // 0x299cd0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x299cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x299cd4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x299cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x299cd8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x299cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x299cdc: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x299cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x299ce0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x299ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299ce4: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299ce8: 0xfc430170  sd          $v1, 0x170($v0)
    ctx->pc = 0x299ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 368), GPR_U64(ctx, 3));
label_299cec:
    // 0x299cec: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299cf0: 0x8c4201a4  lw          $v0, 0x1A4($v0)
    ctx->pc = 0x299cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
    // 0x299cf4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x299CF4u;
    {
        const bool branch_taken_0x299cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299cf4) {
            ctx->pc = 0x299D94u;
            goto label_299d94;
        }
    }
    ctx->pc = 0x299CFCu;
    // 0x299cfc: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d00: 0x8fb201a8  lw          $s2, 0x1A8($sp)
    ctx->pc = 0x299d00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d04: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x299d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x299d08: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x299d08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x299d0c: 0x8e4501a4  lw          $a1, 0x1A4($s2)
    ctx->pc = 0x299d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 420)));
    // 0x299d10: 0xc040ca2  jal         func_103288
    ctx->pc = 0x299D10u;
    SET_GPR_U32(ctx, 31, 0x299D18u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x299D18u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299D18u) { return; }
    ctx->pc = 0x299D18u;
label_299d18:
    // 0x299d18: 0x8fb501a8  lw          $s5, 0x1A8($sp)
    ctx->pc = 0x299d18u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d1c: 0x96a201a8  lhu         $v0, 0x1A8($s5)
    ctx->pc = 0x299d1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 424)));
    // 0x299d20: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x299d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x299d24: 0x30520002  andi        $s2, $v0, 0x2
    ctx->pc = 0x299d24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x299d28: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x299D28u;
    {
        const bool branch_taken_0x299d28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x299d28) {
            ctx->pc = 0x299D5Cu;
            goto label_299d5c;
        }
    }
    ctx->pc = 0x299D30u;
    // 0x299d30: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x299d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d34: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d38: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x299d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299d3c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x299d3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x299d40: 0x24660050  addiu       $a2, $v1, 0x50
    ctx->pc = 0x299d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x299d44: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x299d44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x299d48: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x299d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x299d4c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x299D4Cu;
    SET_GPR_U32(ctx, 31, 0x299D54u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x299D4Cu, 0x299D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299D54u;
label_299d54:
    // 0x299d54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x299D54u;
    {
        const bool branch_taken_0x299d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299d54) {
            ctx->pc = 0x299D78u;
            goto label_299d78;
        }
    }
    ctx->pc = 0x299D5Cu;
label_299d5c:
    // 0x299d5c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x299d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d60: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x299d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d64: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x299d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299d68: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x299d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x299d6c: 0x24c600c0  addiu       $a2, $a2, 0xC0
    ctx->pc = 0x299d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x299d70: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x299D70u;
    SET_GPR_U32(ctx, 31, 0x299D78u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x299D78u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299D78u) { return; }
    ctx->pc = 0x299D78u;
label_299d78:
    // 0x299d78: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x299d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299d7c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x299d7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299d80: 0x8fb301a8  lw          $s3, 0x1A8($sp)
    ctx->pc = 0x299d80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d84: 0x267100a0  addiu       $s1, $s3, 0xA0
    ctx->pc = 0x299d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x299d88: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x299d88u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x299d8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x299D8Cu;
    {
        const bool branch_taken_0x299d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299d8c) {
            ctx->pc = 0x299DA8u;
            goto label_299da8;
        }
    }
    ctx->pc = 0x299D94u;
label_299d94:
    // 0x299d94: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d98: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x299d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x299d9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x299d9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299da0: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x299da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299da4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x299da4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_299da8:
    // 0x299da8: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x299da8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299dac: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x299dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x299db0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x299db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x299db4: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x299db4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
    // 0x299db8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299dbc: 0x0  nop
    ctx->pc = 0x299dbcu;
    // NOP
    // 0x299dc0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x299dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x299dc4: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x299dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x299dc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x299dc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x299dcc: 0x27b60150  addiu       $s6, $sp, 0x150
    ctx->pc = 0x299dccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x299dd0: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x299dd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x299dd4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x299DD4u;
    SET_GPR_U32(ctx, 31, 0x299DDCu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x299DDCu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299DDCu) { return; }
    ctx->pc = 0x299DDCu;
label_299ddc:
    // 0x299ddc: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x299ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299de0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x299de0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x299de4: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x299de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299de8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x299de8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x299dec: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x299decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x299df0: 0xc040c80  jal         func_103200
    ctx->pc = 0x299DF0u;
    SET_GPR_U32(ctx, 31, 0x299DF8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x299DF8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299DF8u) { return; }
    ctx->pc = 0x299DF8u;
label_299df8:
    // 0x299df8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x299df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x299dfc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x299dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x299e00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x299e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x299e04: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x299e04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x299e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299e0c: 0x0  nop
    ctx->pc = 0x299e0cu;
    // NOP
    // 0x299e10: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x299e10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x299e14: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x299e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x299e18: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x299e18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x299e1c: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x299e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x299e20: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x299e20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x299e24: 0xc040c8c  jal         func_103230
    ctx->pc = 0x299E24u;
    SET_GPR_U32(ctx, 31, 0x299E2Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x299E2Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299E2Cu) { return; }
    ctx->pc = 0x299E2Cu;
label_299e2c:
    // 0x299e2c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x299e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299e30: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x299e30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x299e34: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x299e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299e38: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x299e38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x299e3c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x299e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x299e40: 0xc040c80  jal         func_103200
    ctx->pc = 0x299E40u;
    SET_GPR_U32(ctx, 31, 0x299E48u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x299E48u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299E48u) { return; }
    ctx->pc = 0x299E48u;
label_299e48:
    // 0x299e48: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x299e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x299e4c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x299e4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x299e50: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x299e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x299e54: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x299e54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x299e58: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x299e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299e5c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x299E5Cu;
    SET_GPR_U32(ctx, 31, 0x299E64u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x299E64u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299E64u) { return; }
    ctx->pc = 0x299E64u;
label_299e64:
    // 0x299e64: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x299e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299e68: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x299e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x299e6c: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x299e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x299e70: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x299E70u;
    SET_GPR_U32(ctx, 31, 0x299E78u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x299E70u, 0x299E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E78u;
label_299e78:
    // 0x299e78: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x299e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x299e7c: 0x8fa30194  lw          $v1, 0x194($sp)
    ctx->pc = 0x299e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x299e80: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x299e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x299e84: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x299e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x299e88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299E88u;
    {
        const bool branch_taken_0x299e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299e88) {
            ctx->pc = 0x299E98u;
            goto label_299e98;
        }
    }
    ctx->pc = 0x299E90u;
    // 0x299e90: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x299e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x299e94: 0xafa30194  sw          $v1, 0x194($sp)
    ctx->pc = 0x299e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
label_299e98:
    // 0x299e98: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x299e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x299e9c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x299e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x299ea0: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x299ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x299ea4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x299ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299ea8: 0x946201a8  lhu         $v0, 0x1A8($v1)
    ctx->pc = 0x299ea8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 424)));
    // 0x299eac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x299eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x299eb0: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x299eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x299eb4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x299EB4u;
    {
        const bool branch_taken_0x299eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x299eb4) {
            ctx->pc = 0x299ED0u;
            goto label_299ed0;
        }
    }
    ctx->pc = 0x299EBCu;
    // 0x299ebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x299ebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299ec0: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299ec4: 0xe44001d4  swc1        $f0, 0x1D4($v0)
    ctx->pc = 0x299ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 468), bits); }
    // 0x299ec8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x299EC8u;
    {
        const bool branch_taken_0x299ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299ec8) {
            ctx->pc = 0x299F14u;
            goto label_299f14;
        }
    }
    ctx->pc = 0x299ED0u;
label_299ed0:
    // 0x299ed0: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x299ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x299ed4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x299ED4u;
    {
        const bool branch_taken_0x299ed4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x299ed4) {
            ctx->pc = 0x299EF0u;
            goto label_299ef0;
        }
    }
    ctx->pc = 0x299EDCu;
    // 0x299edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299ee0: 0x0  nop
    ctx->pc = 0x299ee0u;
    // NOP
    // 0x299ee4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x299ee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x299ee8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x299EE8u;
    {
        const bool branch_taken_0x299ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299ee8) {
            ctx->pc = 0x299F0Cu;
            goto label_299f0c;
        }
    }
    ctx->pc = 0x299EF0u;
label_299ef0:
    // 0x299ef0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x299ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x299ef4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x299ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x299ef8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x299ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x299efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x299efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299f00: 0x0  nop
    ctx->pc = 0x299f00u;
    // NOP
    // 0x299f04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x299f04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x299f08: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x299f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_299f0c:
    // 0x299f0c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x299f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299f10: 0xe46001d4  swc1        $f0, 0x1D4($v1)
    ctx->pc = 0x299f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 468), bits); }
label_299f14:
    // 0x299f14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x299f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x299f18: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x299f18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x299f1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x299f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x299f20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x299F20u;
    {
        const bool branch_taken_0x299f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299f20) {
            ctx->pc = 0x299F40u;
            goto label_299f40;
        }
    }
    ctx->pc = 0x299F28u;
    // 0x299f28: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x299f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x299f2c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x299f2cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x299f30: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x299f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299f34: 0xaca201d0  sw          $v0, 0x1D0($a1)
    ctx->pc = 0x299f34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 464), GPR_U32(ctx, 2));
    // 0x299f38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x299F38u;
    {
        const bool branch_taken_0x299f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299f38) {
            ctx->pc = 0x299F50u;
            goto label_299f50;
        }
    }
    ctx->pc = 0x299F40u;
label_299f40:
    // 0x299f40: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x299f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x299f44: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x299f44u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x299f48: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x299f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299f4c: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x299f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
label_299f50:
    // 0x299f50: 0xafb20188  sw          $s2, 0x188($sp)
    ctx->pc = 0x299f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 18));
    // 0x299f54: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x299f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x299f58: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x299f58u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x299f5c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x299f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x299f60: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x299f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x299f64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x299f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299f68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x299f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x299f6c: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x299f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x299f70: 0x3c030eee  lui         $v1, 0xEEE
    ctx->pc = 0x299f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3822 << 16));
    // 0x299f74: 0x3463eeee  ori         $v1, $v1, 0xEEEE
    ctx->pc = 0x299f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61166);
    // 0x299f78: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x299f78u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x299f7c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x299f7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x299f80: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299f84: 0xdc420160  ld          $v0, 0x160($v0)
    ctx->pc = 0x299f84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x299f88: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x299f88u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x299f8c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x299f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x299f90: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x299f90u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x299f94: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x299f94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x299f98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299f9c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x299f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x299fa0: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x299fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x299fa4: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x299fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x299fa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x299fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299fac: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x299facu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x299fb0: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x299fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x299fb4: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x299fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x299fb8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x299fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x299fbc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x299fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x299fc0: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x299fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x299fc4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x299fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x299fc8: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x299fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x299fcc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x299fccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x299fd0: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299fd4: 0xdc420168  ld          $v0, 0x168($v0)
    ctx->pc = 0x299fd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x299fd8: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x299fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x299fdc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x299fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x299fe0: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x299fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x299fe4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x299fe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x299fe8: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299fec: 0xdc420170  ld          $v0, 0x170($v0)
    ctx->pc = 0x299fecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 368)));
    // 0x299ff0: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x299ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x299ff4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x299ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x299ff8: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x299ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x299ffc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x299ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29a000: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x29a000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29a004: 0xdc420180  ld          $v0, 0x180($v0)
    ctx->pc = 0x29a004u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x29a008: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x29a008u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x29a00c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x29a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x29a010: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x29a010u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x29a014: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x29a014u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29a018: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x29a018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29a01c: 0xdc420178  ld          $v0, 0x178($v0)
    ctx->pc = 0x29a01cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x29a020: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x29a020u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x29a024: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x29a024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x29a028: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x29a028u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x29a02c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x29a02cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29a030: 0xafb2018c  sw          $s2, 0x18C($sp)
    ctx->pc = 0x29a030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 18));
    // 0x29a034: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x29a034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29a038: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x29a038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29a03c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x29a03cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29a040: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x29a040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29a044: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x29A044u;
    SET_GPR_U32(ctx, 31, 0x29A04Cu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x29A04Cu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A04Cu) { return; }
    ctx->pc = 0x29A04Cu;
label_29a04c:
    // 0x29a04c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x29a04cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29a050: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x29a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x29a054: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x29a054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29a058: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x29a058u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x29a05c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x29a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29a060: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x29a060u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x29a064: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x29a064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x29a068: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x29a068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x29a06c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x29a06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a070: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x29a070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x29a074: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x29a074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x29a078: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29a078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a07c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29a07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29a080: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x29a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x29a084: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x29a084u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x29a088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29a088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a08c: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x29a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x29a090: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x29a090u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x29a094: 0xafb2018c  sw          $s2, 0x18C($sp)
    ctx->pc = 0x29a094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 18));
    // 0x29a098: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x29a098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29a09c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x29a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29a0a0: 0x944201a8  lhu         $v0, 0x1A8($v0)
    ctx->pc = 0x29a0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 424)));
    // 0x29a0a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x29a0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29a0a8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x29a0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x29a0ac: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29A0ACu;
    {
        const bool branch_taken_0x29a0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a0ac) {
            ctx->pc = 0x29A0DCu;
            goto label_29a0dc;
        }
    }
    ctx->pc = 0x29A0B4u;
    // 0x29a0b4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x29a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29a0b8: 0xc44001b4  lwc1        $f0, 0x1B4($v0)
    ctx->pc = 0x29a0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a0bc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x29a0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x29a0c0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x29a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29a0c4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x29a0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29a0c8: 0xc7ac0198  lwc1        $f12, 0x198($sp)
    ctx->pc = 0x29a0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29a0cc: 0xc040c60  jal         func_103180
    ctx->pc = 0x29A0CCu;
    SET_GPR_U32(ctx, 31, 0x29A0D4u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29A0D4u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A0D4u) { return; }
    ctx->pc = 0x29A0D4u;
label_29a0d4:
    // 0x29a0d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29A0D4u;
    {
        const bool branch_taken_0x29a0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a0d4) {
            ctx->pc = 0x29A0ECu;
            goto label_29a0ec;
        }
    }
    ctx->pc = 0x29A0DCu;
label_29a0dc:
    // 0x29a0dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29a0e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a0e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a0e4: 0x0  nop
    ctx->pc = 0x29a0e4u;
    // NOP
    // 0x29a0e8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x29a0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_29a0ec:
    // 0x29a0ec: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29a0f0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x29a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a0f4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x29A0F4u;
    SET_GPR_U32(ctx, 31, 0x29A0FCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x29A0FCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A0FCu) { return; }
    ctx->pc = 0x29A0FCu;
label_29a0fc:
    // 0x29a0fc: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x29a0fcu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29a100: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x29A100u;
    {
        const bool branch_taken_0x29a100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a100) {
            ctx->pc = 0x29A4D0u;
            goto label_29a4d0;
        }
    }
    ctx->pc = 0x29A108u;
label_29a108:
    // 0x29a108: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29a108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a10c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x29a10cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29a110: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x29a110u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29a114: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x29A114u;
    {
        const bool branch_taken_0x29a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a114) {
            ctx->pc = 0x29A488u;
            goto label_29a488;
        }
    }
    ctx->pc = 0x29A11Cu;
label_29a11c:
    // 0x29a11c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x29a11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x29a120: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A120u;
    {
        const bool branch_taken_0x29a120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a120) {
            ctx->pc = 0x29A134u;
            goto label_29a134;
        }
    }
    ctx->pc = 0x29A128u;
    // 0x29a128: 0x26d40001  addiu       $s4, $s6, 0x1
    ctx->pc = 0x29a128u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x29a12c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29A12Cu;
    {
        const bool branch_taken_0x29a12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a12c) {
            ctx->pc = 0x29A138u;
            goto label_29a138;
        }
    }
    ctx->pc = 0x29A134u;
label_29a134:
    // 0x29a134: 0x72c0a628  paddub      $s4, $s6, $zero
    ctx->pc = 0x29a134u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_29a138:
    // 0x29a138: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x29a138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a13c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29a13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29a140: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x29a140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29a144: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29a144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a148: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29a14c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a150: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29a150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29a154: 0x111042  srl         $v0, $s1, 1
    ctx->pc = 0x29a154u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x29a158: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29a158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a15c: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x29a15cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a160: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x29a160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a164: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29a164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29a168: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x29a168u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29a16c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a170: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29a170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29a174: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29a174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a178: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29a178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29a17c: 0x111042  srl         $v0, $s1, 1
    ctx->pc = 0x29a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x29a180: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29a180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a184: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a188: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x29a188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x29a18c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x29a18cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a190: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29a190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29a194: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x29a194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29a198: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29a198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a19c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x29a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29a1a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a1a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29a1a8: 0x111042  srl         $v0, $s1, 1
    ctx->pc = 0x29a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x29a1ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a1b0: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x29a1b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a1b4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x29a1b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29a1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a1bc: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x29a1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a1c0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x29a1c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29a1c4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x29a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29a1c8: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x29a1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x29a1cc: 0xc040c8c  jal         func_103230
    ctx->pc = 0x29A1CCu;
    SET_GPR_U32(ctx, 31, 0x29A1D4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x29A1D4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A1D4u) { return; }
    ctx->pc = 0x29A1D4u;
label_29a1d4:
    // 0x29a1d4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x29a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29a1d8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x29a1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a1dc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x29A1DCu;
    SET_GPR_U32(ctx, 31, 0x29A1E4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x29A1E4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A1E4u) { return; }
    ctx->pc = 0x29A1E4u;
label_29a1e4:
    // 0x29a1e4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x29a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29a1e8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x29a1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29a1ec: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29a1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29a1f0: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29A1F0u;
    SET_GPR_U32(ctx, 31, 0x29A1F8u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29A1F8u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A1F8u) { return; }
    ctx->pc = 0x29A1F8u;
label_29a1f8:
    // 0x29a1f8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x29a1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29a1fc: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x29a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x29a200: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x29a200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29a204: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29A204u;
    SET_GPR_U32(ctx, 31, 0x29A20Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29A20Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A20Cu) { return; }
    ctx->pc = 0x29A20Cu;
label_29a20c:
    // 0x29a20c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x29a20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a210: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x29a210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x29a214: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x29a214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29a218: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x29a218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29a21c: 0xc7ac0198  lwc1        $f12, 0x198($sp)
    ctx->pc = 0x29a21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29a220: 0xc040c60  jal         func_103180
    ctx->pc = 0x29A220u;
    SET_GPR_U32(ctx, 31, 0x29A228u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29A228u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A228u) { return; }
    ctx->pc = 0x29A228u;
label_29a228:
    // 0x29a228: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x29a228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x29a22c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29a22cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a230: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x29a230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a234: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29a234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a238: 0x0  nop
    ctx->pc = 0x29a238u;
    // NOP
    // 0x29a23c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x29A23Cu;
    {
        const bool branch_taken_0x29a23c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a23c) {
            ctx->pc = 0x29A260u;
            goto label_29a260;
        }
    }
    ctx->pc = 0x29A244u;
    // 0x29a244: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29a244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29a248: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29a248u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a24c: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x29a24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a250: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29a250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a254: 0x0  nop
    ctx->pc = 0x29a254u;
    // NOP
    // 0x29a258: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29A258u;
    {
        const bool branch_taken_0x29a258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a258) {
            ctx->pc = 0x29A268u;
            goto label_29a268;
        }
    }
    ctx->pc = 0x29A260u;
label_29a260:
    // 0x29a260: 0x36620003  ori         $v0, $s3, 0x3
    ctx->pc = 0x29a260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)3);
    // 0x29a264: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x29a264u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_29a268:
    // 0x29a268: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x29a268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a26c: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x29a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x29a270: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x29a270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29a274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a278: 0x0  nop
    ctx->pc = 0x29a278u;
    // NOP
    // 0x29a27c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29a27cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a280: 0x0  nop
    ctx->pc = 0x29a280u;
    // NOP
    // 0x29a284: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29A284u;
    {
        const bool branch_taken_0x29a284 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a284) {
            ctx->pc = 0x29A2B0u;
            goto label_29a2b0;
        }
    }
    ctx->pc = 0x29A28Cu;
    // 0x29a28c: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x29a28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a290: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x29a290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
    // 0x29a294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a298: 0x0  nop
    ctx->pc = 0x29a298u;
    // NOP
    // 0x29a29c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29a29cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a2a0: 0x0  nop
    ctx->pc = 0x29a2a0u;
    // NOP
    // 0x29a2a4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29A2A4u;
    {
        const bool branch_taken_0x29a2a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a2a4) {
            ctx->pc = 0x29A2B8u;
            goto label_29a2b8;
        }
    }
    ctx->pc = 0x29A2ACu;
    // 0x29a2ac: 0x0  nop
    ctx->pc = 0x29a2acu;
    // NOP
label_29a2b0:
    // 0x29a2b0: 0x36620003  ori         $v0, $s3, 0x3
    ctx->pc = 0x29a2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)3);
    // 0x29a2b4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x29a2b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_29a2b8:
    // 0x29a2b8: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x29a2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a2bc: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x29a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x29a2c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a2c4: 0x0  nop
    ctx->pc = 0x29a2c4u;
    // NOP
    // 0x29a2c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29a2c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a2cc: 0x0  nop
    ctx->pc = 0x29a2ccu;
    // NOP
    // 0x29a2d0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x29A2D0u;
    {
        const bool branch_taken_0x29a2d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a2d0) {
            ctx->pc = 0x29A300u;
            goto label_29a300;
        }
    }
    ctx->pc = 0x29A2D8u;
    // 0x29a2d8: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x29a2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a2dc: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x29a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x29a2e0: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x29a2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29a2e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a2e8: 0x0  nop
    ctx->pc = 0x29a2e8u;
    // NOP
    // 0x29a2ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29a2ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a2f0: 0x0  nop
    ctx->pc = 0x29a2f0u;
    // NOP
    // 0x29a2f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29A2F4u;
    {
        const bool branch_taken_0x29a2f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a2f4) {
            ctx->pc = 0x29A308u;
            goto label_29a308;
        }
    }
    ctx->pc = 0x29A2FCu;
    // 0x29a2fc: 0x0  nop
    ctx->pc = 0x29a2fcu;
    // NOP
label_29a300:
    // 0x29a300: 0x36620003  ori         $v0, $s3, 0x3
    ctx->pc = 0x29a300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)3);
    // 0x29a304: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x29a304u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_29a308:
    // 0x29a308: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x29a308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x29a30c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29a30cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29a310: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x29a310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a314: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x29a314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x29a318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a31c: 0x0  nop
    ctx->pc = 0x29a31cu;
    // NOP
    // 0x29a320: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29a320u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a324: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x29a324u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a328: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x29a328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x29a32c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29a32cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a330: 0x0  nop
    ctx->pc = 0x29a330u;
    // NOP
    // 0x29a334: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x29a334u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29a338: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x29a338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x29a33c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a340: 0x0  nop
    ctx->pc = 0x29a340u;
    // NOP
    // 0x29a344: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29a344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a348: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x29a348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x29a34c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x29a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x29a350: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29a350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29a354: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x29a354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a358: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x29a358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x29a35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a360: 0x0  nop
    ctx->pc = 0x29a360u;
    // NOP
    // 0x29a364: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29a364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a368: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x29a368u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a36c: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x29a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x29a370: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29a370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a374: 0x0  nop
    ctx->pc = 0x29a374u;
    // NOP
    // 0x29a378: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x29a378u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29a37c: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x29a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x29a380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a384: 0x0  nop
    ctx->pc = 0x29a384u;
    // NOP
    // 0x29a388: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x29a388u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a38c: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x29a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
    // 0x29a390: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x29a390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x29a394: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29a394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a398: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x29a398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a39c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29a39cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29a3a0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x29a3a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a3a4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x29a3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x29a3a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29a3ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a3b0: 0x0  nop
    ctx->pc = 0x29a3b0u;
    // NOP
    // 0x29a3b4: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x29a3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x29a3b8: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x29a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x29a3bc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x29a3bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a3c0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x29a3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x29a3c4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x29a3c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29a3c8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x29a3c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29a3cc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x29a3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29a3d0: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29A3D0u;
    SET_GPR_U32(ctx, 31, 0x29A3D8u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29A3D8u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A3D8u) { return; }
    ctx->pc = 0x29A3D8u;
label_29a3d8:
    // 0x29a3d8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29a3d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a3dc: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A3DCu;
    {
        const bool branch_taken_0x29a3dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a3dc) {
            ctx->pc = 0x29A3F4u;
            goto label_29a3f4;
        }
    }
    ctx->pc = 0x29A3E4u;
    // 0x29a3e4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29a3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29a3e8: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x29a3e8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a3ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29A3ECu;
    {
        const bool branch_taken_0x29a3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a3ec) {
            ctx->pc = 0x29A3F8u;
            goto label_29a3f8;
        }
    }
    ctx->pc = 0x29A3F4u;
label_29a3f4:
    // 0x29a3f4: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x29a3f4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_29a3f8:
    // 0x29a3f8: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x29a3f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29a3fc: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x29a3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x29a400: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x29a400u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x29a404: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x29a404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29a408: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x29a408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x29a40c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x29A40Cu;
    {
        const bool branch_taken_0x29a40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a40c) {
            ctx->pc = 0x29A454u;
            goto label_29a454;
        }
    }
    ctx->pc = 0x29A414u;
    // 0x29a414: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x29a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a418: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29a418u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a41c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x29a41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x29a420: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x29a420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a424: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29A424u;
    SET_GPR_U32(ctx, 31, 0x29A42Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29A42Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A42Cu) { return; }
    ctx->pc = 0x29A42Cu;
label_29a42c:
    // 0x29a42c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x29a42cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a430: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x29a430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a434: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29a434u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a438: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x29a438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a43c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29a43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29a440: 0xc040c80  jal         func_103200
    ctx->pc = 0x29A440u;
    SET_GPR_U32(ctx, 31, 0x29A448u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x29A448u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A448u) { return; }
    ctx->pc = 0x29A448u;
label_29a448:
    // 0x29a448: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29a448u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a44c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29A44Cu;
    {
        const bool branch_taken_0x29a44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a44c) {
            ctx->pc = 0x29A478u;
            goto label_29a478;
        }
    }
    ctx->pc = 0x29A454u;
label_29a454:
    // 0x29a454: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x29a454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a458: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x29a458u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29a45c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29a45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29a460: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x29a460u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x29a464: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x29a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a468: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x29a468u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a46c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29A46Cu;
    SET_GPR_U32(ctx, 31, 0x29A474u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29A474u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A474u) { return; }
    ctx->pc = 0x29A474u;
label_29a474:
    // 0x29a474: 0x0  nop
    ctx->pc = 0x29a474u;
    // NOP
label_29a478:
    // 0x29a478: 0x131042  srl         $v0, $s3, 1
    ctx->pc = 0x29a478u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x29a47c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x29a47cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29a480: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29a480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29a484: 0x0  nop
    ctx->pc = 0x29a484u;
    // NOP
label_29a488:
    // 0x29a488: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x29a488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a48c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29a48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29a490: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x29a490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x29a494: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x29a494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29a498: 0x1440ff20  bnez        $v0, . + 4 + (-0xE0 << 2)
    ctx->pc = 0x29A498u;
    {
        const bool branch_taken_0x29a498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a498) {
            ctx->pc = 0x29A11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a11c;
        }
    }
    ctx->pc = 0x29A4A0u;
    // 0x29a4a0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29a4a4: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x29a4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29a4a8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x29a4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29a4ac: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29A4ACu;
    SET_GPR_U32(ctx, 31, 0x29A4B4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29A4B4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A4B4u) { return; }
    ctx->pc = 0x29A4B4u;
label_29a4b4:
    // 0x29a4b4: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x29a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a4b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29a4b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a4bc: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x29a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29a4c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29a4c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a4c4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x29A4C4u;
    SET_GPR_U32(ctx, 31, 0x29A4CCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x29A4CCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A4CCu) { return; }
    ctx->pc = 0x29A4CCu;
label_29a4cc:
    // 0x29a4cc: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x29a4ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_29a4d0:
    // 0x29a4d0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x29a4d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29a4d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29a4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29a4d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29a4dc: 0x2c2302b  sltu        $a2, $s6, $v0
    ctx->pc = 0x29a4dcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29a4e0: 0x14c0ff09  bnez        $a2, . + 4 + (-0xF7 << 2)
    ctx->pc = 0x29A4E0u;
    {
        const bool branch_taken_0x29a4e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a4e0) {
            ctx->pc = 0x29A108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a108;
        }
    }
    ctx->pc = 0x29A4E8u;
    // 0x29a4e8: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x29a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x29a4ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x29a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29a4f0: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x29a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x29a4f4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x29a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29a4f8: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x29a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x29a4fc: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x29a4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x29a500: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x29a500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x29a504: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29a504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a508: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29a508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29a50c: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x29a50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29a510: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x29a510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x29a514: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29a514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a518: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29a518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29a51c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x29a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x29a520: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x29a520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a524: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x29a524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29a528: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x29a528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x29a52c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29a52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29a530: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x29a530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29a534: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x29a534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x29a538: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x29a538u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x29a53c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x29a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x29a540: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x29a540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x29a544: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x29a544u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x29a548: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x29a548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x29a54c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x29a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29a550: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x29a550u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x29a554: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x29a554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29a558: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x29a558u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x29a55c: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x29a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x29a560: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x29a560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x29a564: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x29a564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x29a568: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29a568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29a56c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x29a56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a570: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x29a570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x29a574: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x29a574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x29a578: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x29a578u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x29a57c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x29a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x29a580: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x29a580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x29a584: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x29a584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x29a588: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x29a588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x29a58c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29a58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29a590: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x29a590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x29a594: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x29a594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x29a598: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x29a598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29a59c: 0xc44c01d4  lwc1        $f12, 0x1D4($v0)
    ctx->pc = 0x29a59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29a5a0: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29A5A0u;
    SET_GPR_U32(ctx, 31, 0x29A5A8u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29A5A0u, 0x29A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5A8u;
label_29a5a8:
    // 0x29a5a8: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x29a5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29a5ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29a5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29a5b0: 0x8c24013c  lw          $a0, 0x13C($at)
    ctx->pc = 0x29a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x29a5b4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x29a5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x29a5b8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x29a5b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29a5bc: 0x8ca401d0  lw          $a0, 0x1D0($a1)
    ctx->pc = 0x29a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 464)));
    // 0x29a5c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29a5c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a5c4: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x29A5C4u;
    SET_GPR_U32(ctx, 31, 0x29A5CCu);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x29A5C4u, 0x29A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5CCu;
label_29a5cc:
    // 0x29a5cc: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x29a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29a5d0: 0x8c6301d0  lw          $v1, 0x1D0($v1)
    ctx->pc = 0x29a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 464)));
    // 0x29a5d4: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x29a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x29a5d8: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x29a5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x29a5dc: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x29a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x29a5e0: 0x8fb201a8  lw          $s2, 0x1A8($sp)
    ctx->pc = 0x29a5e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x29a5e4: 0xae4301cc  sw          $v1, 0x1CC($s2)
    ctx->pc = 0x29a5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 3));
    // 0x29a5e8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x29a5e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29a5ec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29a5ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29a5f0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29a5f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29a5f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29a5f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29a5f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29a5f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a5fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29a5fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a600: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29a600u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a604: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29a604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a608: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a60c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a610: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x29a610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x29a614: 0x3e00008  jr          $ra
    ctx->pc = 0x29A614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A61Cu;
}
