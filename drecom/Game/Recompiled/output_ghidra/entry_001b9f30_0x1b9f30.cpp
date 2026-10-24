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

// Function: entry_001b9f30
// Address: 0x1b9f30 - 0x1b9fec
void entry_001b9f30_0x1b9f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9f30_0x1b9f30");
#endif

    switch (ctx->pc) {
        case 0x1b9f50u: goto label_1b9f50;
        case 0x1b9f64u: goto label_1b9f64;
        case 0x1b9f80u: goto label_1b9f80;
        case 0x1b9f94u: goto label_1b9f94;
        default: break;
    }

    ctx->pc = 0x1b9f30u;

    // 0x1b9f30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9f34: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9f38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9f3c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1b9f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1b9f40: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1b9f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1b9f44: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x1b9f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b9f48: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B9F48u;
    SET_GPR_U32(ctx, 31, 0x1B9F50u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B9F50u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B9F50u) { return; }
    ctx->pc = 0x1B9F50u;
label_1b9f50:
    // 0x1b9f50: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9f54: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1b9f54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9f58: 0xc60c1290  lwc1        $f12, 0x1290($s0)
    ctx->pc = 0x1b9f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b9f5c: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1B9F5Cu;
    SET_GPR_U32(ctx, 31, 0x1B9F64u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1B9F5Cu, 0x1B9F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F64u;
label_1b9f64:
    // 0x1b9f64: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9f64u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9f68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b9f68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9f6c: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1b9f6cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9f70: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x1b9f70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1b9f74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b9f74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b9f78: 0xc057480  jal         func_15D200
    ctx->pc = 0x1B9F78u;
    SET_GPR_U32(ctx, 31, 0x1B9F80u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B9F78u, 0x1B9F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F80u;
label_1b9f80:
    // 0x1b9f80: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b9f80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9f84: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9f88: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x1b9f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1b9f8c: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1B9F8Cu;
    SET_GPR_U32(ctx, 31, 0x1B9F94u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1B9F8Cu, 0x1B9F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F94u;
label_1b9f94:
    // 0x1b9f94: 0x3c034467  lui         $v1, 0x4467
    ctx->pc = 0x1b9f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17511 << 16));
    // 0x1b9f98: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1b9f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1b9f9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b9f9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9fa0: 0x0  nop
    ctx->pc = 0x1b9fa0u;
    // NOP
    // 0x1b9fa4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b9fa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b9fa8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b9fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1b9fac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9fb0: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x1b9fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9fb4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9fb8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1b9fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9fbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9fbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b9fc0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b9fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1b9fc4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9fc8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b9fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9fcc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b9fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9fd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9fd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9fd4: 0x0  nop
    ctx->pc = 0x1b9fd4u;
    // NOP
    // 0x1b9fd8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9FD8u;
    {
        const bool branch_taken_0x1b9fd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9fd8) {
            ctx->pc = 0x1B9FECu;
            return;
        }
    }
    ctx->pc = 0x1B9FE0u;
    // 0x1b9fe0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b9fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9fe4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9fe8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b9fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x1b9fecu;
}
