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

// Function: entry_00283c9c
// Address: 0x283c9c - 0x283e3c
void entry_00283c9c_0x283c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283c9c_0x283c9c");
#endif

    switch (ctx->pc) {
        case 0x283cccu: goto label_283ccc;
        case 0x283ce8u: goto label_283ce8;
        case 0x283d10u: goto label_283d10;
        case 0x283d48u: goto label_283d48;
        case 0x283d80u: goto label_283d80;
        case 0x283de4u: goto label_283de4;
        case 0x283e18u: goto label_283e18;
        default: break;
    }

    ctx->pc = 0x283c9cu;

    // 0x283c9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283ca0: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x283ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x283ca4: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x283ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x283ca8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x283ca8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283cac: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x283cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x283cb0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x283cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x283cb4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x283cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x283cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283cbc: 0x0  nop
    ctx->pc = 0x283cbcu;
    // NOP
    // 0x283cc0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x283cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x283cc4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283CC4u;
    SET_GPR_U32(ctx, 31, 0x283CCCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283CC4u, 0x283CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283CCCu;
label_283ccc:
    // 0x283ccc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x283cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x283cd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283cd4: 0x0  nop
    ctx->pc = 0x283cd4u;
    // NOP
    // 0x283cd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x283cd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283cdc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x283cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x283ce0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283CE0u;
    SET_GPR_U32(ctx, 31, 0x283CE8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283CE0u, 0x283CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283CE8u;
label_283ce8:
    // 0x283ce8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x283ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x283cec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283cf0: 0x0  nop
    ctx->pc = 0x283cf0u;
    // NOP
    // 0x283cf4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x283cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283cf8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x283cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x283cfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x283cfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283d00: 0x0  nop
    ctx->pc = 0x283d00u;
    // NOP
    // 0x283d04: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x283d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x283d08: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283D08u;
    SET_GPR_U32(ctx, 31, 0x283D10u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283D08u, 0x283D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D10u;
label_283d10:
    // 0x283d10: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x283d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x283d14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283d18: 0x0  nop
    ctx->pc = 0x283d18u;
    // NOP
    // 0x283d1c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x283d1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283d20: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x283d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x283d24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283d28: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x283d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283d2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x283d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283d30: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x283d30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x283d34: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x283d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283d38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x283d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x283d3c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x283d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x283d40: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283D40u;
    SET_GPR_U32(ctx, 31, 0x283D48u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283D40u, 0x283D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D48u;
label_283d48:
    // 0x283d48: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x283d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x283d4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283d50: 0x0  nop
    ctx->pc = 0x283d50u;
    // NOP
    // 0x283d54: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x283d54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283d58: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x283d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x283d5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283d60: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x283d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283d64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x283d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283d68: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x283d68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x283d6c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x283d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283d70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x283d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x283d74: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x283d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x283d78: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283D78u;
    SET_GPR_U32(ctx, 31, 0x283D80u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283D78u, 0x283D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D80u;
label_283d80:
    // 0x283d80: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x283d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x283d84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283d88: 0x0  nop
    ctx->pc = 0x283d88u;
    // NOP
    // 0x283d8c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x283d8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283d90: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x283d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x283d94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283d98: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x283d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283d9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x283d9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283da0: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x283da0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x283da4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x283da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283da8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x283da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x283dac: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x283dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x283db0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x283db0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283db4: 0x0  nop
    ctx->pc = 0x283db4u;
    // NOP
    // 0x283db8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x283db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x283dbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283dc0: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x283dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x283dc4: 0xc4410194  lwc1        $f1, 0x194($v0)
    ctx->pc = 0x283dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283dc8: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x283dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283dcc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x283dccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283dd0: 0x0  nop
    ctx->pc = 0x283dd0u;
    // NOP
    // 0x283dd4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x283DD4u;
    {
        const bool branch_taken_0x283dd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x283dd4) {
            ctx->pc = 0x283E3Cu;
            return;
        }
    }
    ctx->pc = 0x283DDCu;
    // 0x283ddc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283DDCu;
    SET_GPR_U32(ctx, 31, 0x283DE4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283DDCu, 0x283DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283DE4u;
label_283de4:
    // 0x283de4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x283de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x283de8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283dec: 0x0  nop
    ctx->pc = 0x283decu;
    // NOP
    // 0x283df0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x283df0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283df4: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x283df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x283df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283dfc: 0x0  nop
    ctx->pc = 0x283dfcu;
    // NOP
    // 0x283e00: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x283e00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x283e04: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x283e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283e08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x283e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x283e0c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x283e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x283e10: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283E10u;
    SET_GPR_U32(ctx, 31, 0x283E18u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283E10u, 0x283E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E18u;
label_283e18:
    // 0x283e18: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x283e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x283e1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283e20: 0x0  nop
    ctx->pc = 0x283e20u;
    // NOP
    // 0x283e24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x283e24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283e28: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x283e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283e2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x283e2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x283e30: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x283e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x283e34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x283E34u;
    {
        const bool branch_taken_0x283e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283e34) {
            ctx->pc = 0x283E70u;
            return;
        }
    }
    ctx->pc = 0x283E3Cu;
}
