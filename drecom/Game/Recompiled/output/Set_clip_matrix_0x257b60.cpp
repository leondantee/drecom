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

// Function: Set_clip_matrix
// Address: 0x257b60 - 0x257f0c
void Set_clip_matrix_0x257b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_clip_matrix_0x257b60");
#endif

    switch (ctx->pc) {
        case 0x257be4u: goto label_257be4;
        case 0x257cc4u: goto label_257cc4;
        case 0x257cdcu: goto label_257cdc;
        case 0x257cf4u: goto label_257cf4;
        case 0x257d0cu: goto label_257d0c;
        case 0x257d24u: goto label_257d24;
        case 0x257d44u: goto label_257d44;
        case 0x257d50u: goto label_257d50;
        case 0x257e1cu: goto label_257e1c;
        case 0x257e38u: goto label_257e38;
        case 0x257e54u: goto label_257e54;
        case 0x257e6cu: goto label_257e6c;
        case 0x257e84u: goto label_257e84;
        case 0x257ea0u: goto label_257ea0;
        case 0x257ebcu: goto label_257ebc;
        case 0x257ec8u: goto label_257ec8;
        case 0x257ee0u: goto label_257ee0;
        case 0x257ef8u: goto label_257ef8;
        default: break;
    }

    ctx->pc = 0x257b60u;

    // 0x257b60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x257b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x257b64: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x257b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x257b68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257b6c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x257b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x257b70: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x257b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x257b74: 0x8e020a70  lw          $v0, 0xA70($s0)
    ctx->pc = 0x257b74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x257b78: 0xc44001b4  lwc1        $f0, 0x1B4($v0)
    ctx->pc = 0x257b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257b7c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x257b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x257b80: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x257b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x257b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257b88: 0x0  nop
    ctx->pc = 0x257b88u;
    // NOP
    // 0x257b8c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x257b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x257b90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257b94: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x257b94u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257b98: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x257b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x257b9c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x257b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x257ba0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x257ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257ba4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x257ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257ba8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x257ba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x257bac: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x257bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257bb0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x257bb0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x257bb4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x257bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x257bb8: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x257bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x257bbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x257bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257bc0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x257bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257bc4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x257bc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x257bc8: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x257bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257bcc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x257bccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x257bd0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x257bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x257bd4: 0x8e020a70  lw          $v0, 0xA70($s0)
    ctx->pc = 0x257bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x257bd8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x257bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x257bdc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x257BDCu;
    SET_GPR_U32(ctx, 31, 0x257BE4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x257BE4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257BE4u) { return; }
    ctx->pc = 0x257BE4u;
label_257be4:
    // 0x257be4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x257be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x257be8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x257be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257bec: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x257becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257bf0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x257bf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x257bf4: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x257bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257bf8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x257bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257bfc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x257bfcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x257c00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x257c00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x257c04: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x257c04u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x257c08: 0x8e020a70  lw          $v0, 0xA70($s0)
    ctx->pc = 0x257c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x257c0c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x257c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x257c10: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x257c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x257c14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x257c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257c18: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x257c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257c1c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x257c1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x257c20: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x257c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257c24: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x257c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257c28: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x257c28u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x257c2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x257c2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x257c30: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x257c30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x257c34: 0x8e020a70  lw          $v0, 0xA70($s0)
    ctx->pc = 0x257c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x257c38: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x257c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x257c3c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x257c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257c40: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x257c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257c44: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x257c44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x257c48: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x257c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257c4c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x257c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257c50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x257c50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x257c54: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x257c54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x257c58: 0x8e020a70  lw          $v0, 0xA70($s0)
    ctx->pc = 0x257c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x257c5c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x257c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x257c60: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x257c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257c64: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x257c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257c68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x257c68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x257c6c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x257c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x257c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257c74: 0x0  nop
    ctx->pc = 0x257c74u;
    // NOP
    // 0x257c78: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x257c78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x257c7c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x257c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257c80: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x257c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257c84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x257c84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x257c88: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x257c88u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x257c8c: 0x8e020a70  lw          $v0, 0xA70($s0)
    ctx->pc = 0x257c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x257c90: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x257c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x257c94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x257c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x257c98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x257c98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257c9c: 0x8e020a70  lw          $v0, 0xA70($s0)
    ctx->pc = 0x257c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x257ca0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x257ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x257ca4: 0x8e040a70  lw          $a0, 0xA70($s0)
    ctx->pc = 0x257ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x257ca8: 0x8e030a70  lw          $v1, 0xA70($s0)
    ctx->pc = 0x257ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x257cac: 0x8e020a70  lw          $v0, 0xA70($s0)
    ctx->pc = 0x257cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x257cb0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x257cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x257cb4: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x257cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x257cb8: 0x24460090  addiu       $a2, $v0, 0x90
    ctx->pc = 0x257cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x257cbc: 0xc040c00  jal         func_103000
    ctx->pc = 0x257CBCu;
    SET_GPR_U32(ctx, 31, 0x257CC4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x257CC4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257CC4u) { return; }
    ctx->pc = 0x257CC4u;
label_257cc4:
    // 0x257cc4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257cc8: 0x2444e390  addiu       $a0, $v0, -0x1C70
    ctx->pc = 0x257cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960016));
    // 0x257ccc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257cd0: 0x2445e510  addiu       $a1, $v0, -0x1AF0
    ctx->pc = 0x257cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x257cd4: 0xc040ca2  jal         func_103288
    ctx->pc = 0x257CD4u;
    SET_GPR_U32(ctx, 31, 0x257CDCu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x257CDCu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257CDCu) { return; }
    ctx->pc = 0x257CDCu;
label_257cdc:
    // 0x257cdc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257ce0: 0x2444e3d0  addiu       $a0, $v0, -0x1C30
    ctx->pc = 0x257ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960080));
    // 0x257ce4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257ce8: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x257ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x257cec: 0xc040ca2  jal         func_103288
    ctx->pc = 0x257CECu;
    SET_GPR_U32(ctx, 31, 0x257CF4u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x257CF4u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257CF4u) { return; }
    ctx->pc = 0x257CF4u;
label_257cf4:
    // 0x257cf4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257cf8: 0x2444e090  addiu       $a0, $v0, -0x1F70
    ctx->pc = 0x257cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959248));
    // 0x257cfc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257d00: 0x2445e510  addiu       $a1, $v0, -0x1AF0
    ctx->pc = 0x257d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x257d04: 0xc040ca2  jal         func_103288
    ctx->pc = 0x257D04u;
    SET_GPR_U32(ctx, 31, 0x257D0Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x257D0Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257D0Cu) { return; }
    ctx->pc = 0x257D0Cu;
label_257d0c:
    // 0x257d0c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257d10: 0x2444e0d0  addiu       $a0, $v0, -0x1F30
    ctx->pc = 0x257d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959312));
    // 0x257d14: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257d18: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x257d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x257d1c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x257D1Cu;
    SET_GPR_U32(ctx, 31, 0x257D24u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x257D24u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257D24u) { return; }
    ctx->pc = 0x257D24u;
label_257d24:
    // 0x257d24: 0x92020d84  lbu         $v0, 0xD84($s0)
    ctx->pc = 0x257d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3460)));
    // 0x257d28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x257d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x257d2c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x257d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x257d30: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x257D30u;
    {
        const bool branch_taken_0x257d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257d30) {
            ctx->pc = 0x257EBCu;
            goto label_257ebc;
        }
    }
    ctx->pc = 0x257D38u;
    // 0x257d38: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x257d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257d3c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x257D3Cu;
    SET_GPR_U32(ctx, 31, 0x257D44u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x257D44u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257D44u) { return; }
    ctx->pc = 0x257D44u;
label_257d44:
    // 0x257d44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x257d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x257d48: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x257D48u;
    SET_GPR_U32(ctx, 31, 0x257D50u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x257D50u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257D50u) { return; }
    ctx->pc = 0x257D50u;
label_257d50:
    // 0x257d50: 0x92020d84  lbu         $v0, 0xD84($s0)
    ctx->pc = 0x257d50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3460)));
    // 0x257d54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x257d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x257d58: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x257d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x257d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257d60: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x257D60u;
    {
        const bool branch_taken_0x257d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x257d60) {
            ctx->pc = 0x257D98u;
            goto label_257d98;
        }
    }
    ctx->pc = 0x257D68u;
    // 0x257d68: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x257d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x257d6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x257d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257d70: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x257d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257d74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x257d74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x257d78: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x257d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x257d7c: 0xc6000d80  lwc1        $f0, 0xD80($s0)
    ctx->pc = 0x257d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257d80: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x257d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x257d84: 0xc6000d80  lwc1        $f0, 0xD80($s0)
    ctx->pc = 0x257d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257d88: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x257d88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x257d8c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x257d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x257d90: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x257D90u;
    {
        const bool branch_taken_0x257d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257d90) {
            ctx->pc = 0x257E08u;
            goto label_257e08;
        }
    }
    ctx->pc = 0x257D98u;
label_257d98:
    // 0x257d98: 0x92020d84  lbu         $v0, 0xD84($s0)
    ctx->pc = 0x257d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3460)));
    // 0x257d9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x257d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x257da0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x257da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x257da4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x257da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257da8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x257DA8u;
    {
        const bool branch_taken_0x257da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x257da8) {
            ctx->pc = 0x257DE0u;
            goto label_257de0;
        }
    }
    ctx->pc = 0x257DB0u;
    // 0x257db0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x257db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x257db4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x257db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257db8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x257db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257dbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x257dbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x257dc0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x257dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x257dc4: 0xc6000d80  lwc1        $f0, 0xD80($s0)
    ctx->pc = 0x257dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257dc8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x257dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x257dcc: 0xc6000d80  lwc1        $f0, 0xD80($s0)
    ctx->pc = 0x257dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257dd0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x257dd0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x257dd4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x257dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x257dd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x257DD8u;
    {
        const bool branch_taken_0x257dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257dd8) {
            ctx->pc = 0x257E08u;
            goto label_257e08;
        }
    }
    ctx->pc = 0x257DE0u;
label_257de0:
    // 0x257de0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x257de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x257de4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x257de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257de8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x257de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257dec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x257decu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x257df0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x257df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x257df4: 0xc6000d80  lwc1        $f0, 0xD80($s0)
    ctx->pc = 0x257df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257df8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x257df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x257dfc: 0xc6000d80  lwc1        $f0, 0xD80($s0)
    ctx->pc = 0x257dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257e00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x257e00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x257e04: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x257e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_257e08:
    // 0x257e08: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x257e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257e0c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x257e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257e10: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x257e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x257e14: 0xc040c00  jal         func_103000
    ctx->pc = 0x257E14u;
    SET_GPR_U32(ctx, 31, 0x257E1Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x257E1Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257E1Cu) { return; }
    ctx->pc = 0x257E1Cu;
label_257e1c:
    // 0x257e1c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e20: 0x2444e250  addiu       $a0, $v0, -0x1DB0
    ctx->pc = 0x257e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959696));
    // 0x257e24: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e28: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x257e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x257e2c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x257e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257e30: 0xc040c00  jal         func_103000
    ctx->pc = 0x257E30u;
    SET_GPR_U32(ctx, 31, 0x257E38u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x257E38u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257E38u) { return; }
    ctx->pc = 0x257E38u;
label_257e38:
    // 0x257e38: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e3c: 0x2444e210  addiu       $a0, $v0, -0x1DF0
    ctx->pc = 0x257e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959632));
    // 0x257e40: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e44: 0x2445e510  addiu       $a1, $v0, -0x1AF0
    ctx->pc = 0x257e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x257e48: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x257e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257e4c: 0xc040c00  jal         func_103000
    ctx->pc = 0x257E4Cu;
    SET_GPR_U32(ctx, 31, 0x257E54u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x257E54u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257E54u) { return; }
    ctx->pc = 0x257E54u;
label_257e54:
    // 0x257e54: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e58: 0x2444ddd0  addiu       $a0, $v0, -0x2230
    ctx->pc = 0x257e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958544));
    // 0x257e5c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e60: 0x2445e250  addiu       $a1, $v0, -0x1DB0
    ctx->pc = 0x257e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959696));
    // 0x257e64: 0xc040ca2  jal         func_103288
    ctx->pc = 0x257E64u;
    SET_GPR_U32(ctx, 31, 0x257E6Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x257E6Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257E6Cu) { return; }
    ctx->pc = 0x257E6Cu;
label_257e6c:
    // 0x257e6c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e70: 0x2444dd90  addiu       $a0, $v0, -0x2270
    ctx->pc = 0x257e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958480));
    // 0x257e74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e78: 0x2445e210  addiu       $a1, $v0, -0x1DF0
    ctx->pc = 0x257e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959632));
    // 0x257e7c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x257E7Cu;
    SET_GPR_U32(ctx, 31, 0x257E84u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x257E84u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257E84u) { return; }
    ctx->pc = 0x257E84u;
label_257e84:
    // 0x257e84: 0x8e030a70  lw          $v1, 0xA70($s0)
    ctx->pc = 0x257e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x257e88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257e8c: 0x2444df50  addiu       $a0, $v0, -0x20B0
    ctx->pc = 0x257e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x257e90: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x257e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x257e94: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x257e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257e98: 0xc040c00  jal         func_103000
    ctx->pc = 0x257E98u;
    SET_GPR_U32(ctx, 31, 0x257EA0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x257EA0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257EA0u) { return; }
    ctx->pc = 0x257EA0u;
label_257ea0:
    // 0x257ea0: 0x8e030a70  lw          $v1, 0xA70($s0)
    ctx->pc = 0x257ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x257ea4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257ea8: 0x2444df10  addiu       $a0, $v0, -0x20F0
    ctx->pc = 0x257ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958864));
    // 0x257eac: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x257eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x257eb0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x257eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x257eb4: 0xc040c00  jal         func_103000
    ctx->pc = 0x257EB4u;
    SET_GPR_U32(ctx, 31, 0x257EBCu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x257EBCu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257EBCu) { return; }
    ctx->pc = 0x257EBCu;
label_257ebc:
    // 0x257ebc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x257ebcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x257ec0: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x257EC0u;
    SET_GPR_U32(ctx, 31, 0x257EC8u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x257EC8u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257EC8u) { return; }
    ctx->pc = 0x257EC8u;
label_257ec8:
    // 0x257ec8: 0x8e030a70  lw          $v1, 0xA70($s0)
    ctx->pc = 0x257ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x257ecc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257ed0: 0x2444e550  addiu       $a0, $v0, -0x1AB0
    ctx->pc = 0x257ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x257ed4: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x257ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x257ed8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x257ED8u;
    SET_GPR_U32(ctx, 31, 0x257EE0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x257EE0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257EE0u) { return; }
    ctx->pc = 0x257EE0u;
label_257ee0:
    // 0x257ee0: 0x8e030a70  lw          $v1, 0xA70($s0)
    ctx->pc = 0x257ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x257ee4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x257ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x257ee8: 0x2444e510  addiu       $a0, $v0, -0x1AF0
    ctx->pc = 0x257ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x257eec: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x257eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x257ef0: 0xc040ca2  jal         func_103288
    ctx->pc = 0x257EF0u;
    SET_GPR_U32(ctx, 31, 0x257EF8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x257EF8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257EF8u) { return; }
    ctx->pc = 0x257EF8u;
label_257ef8:
    // 0x257ef8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x257ef8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257f00: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x257f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x257f04: 0x3e00008  jr          $ra
    ctx->pc = 0x257F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257F0Cu;
}
