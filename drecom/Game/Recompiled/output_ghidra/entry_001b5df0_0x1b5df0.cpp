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

// Function: entry_001b5df0
// Address: 0x1b5df0 - 0x1b5ea4
void entry_001b5df0_0x1b5df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5df0_0x1b5df0");
#endif

    switch (ctx->pc) {
        case 0x1b5e14u: goto label_1b5e14;
        case 0x1b5e28u: goto label_1b5e28;
        case 0x1b5e3cu: goto label_1b5e3c;
        case 0x1b5e4cu: goto label_1b5e4c;
        default: break;
    }

    ctx->pc = 0x1b5df0u;

    // 0x1b5df0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5df4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b5df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5df8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5dfc: 0x24a30180  addiu       $v1, $a1, 0x180
    ctx->pc = 0x1b5dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1b5e00: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1b5e00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1b5e04: 0x24c50180  addiu       $a1, $a2, 0x180
    ctx->pc = 0x1b5e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x1b5e08: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x1b5e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b5e0c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B5E0Cu;
    SET_GPR_U32(ctx, 31, 0x1B5E14u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B5E14u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B5E14u) { return; }
    ctx->pc = 0x1B5E14u;
label_1b5e14:
    // 0x1b5e14: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5e18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5e1c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b5e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b5e20: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1B5E20u;
    SET_GPR_U32(ctx, 31, 0x1B5E28u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1B5E20u, 0x1B5E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5E28u;
label_1b5e28:
    // 0x1b5e28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b5e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b5e2c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5e30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b5e30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b5e34: 0xc057480  jal         func_15D200
    ctx->pc = 0x1B5E34u;
    SET_GPR_U32(ctx, 31, 0x1B5E3Cu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B5E34u, 0x1B5E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5E3Cu;
label_1b5e3c:
    // 0x1b5e3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5e40: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1b5e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1b5e44: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1B5E44u;
    SET_GPR_U32(ctx, 31, 0x1B5E4Cu);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1B5E44u, 0x1B5E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5E4Cu;
label_1b5e4c:
    // 0x1b5e4c: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1b5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x1b5e50: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1b5e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1b5e54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b5e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5e58: 0x0  nop
    ctx->pc = 0x1b5e58u;
    // NOP
    // 0x1b5e5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b5e5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b5e60: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b5e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1b5e64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5e68: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1b5e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5e6c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5e70: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x1b5e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5e74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b5e74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b5e78: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1b5e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1b5e7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5e80: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b5e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5e84: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b5e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5e88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5e88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5e8c: 0x0  nop
    ctx->pc = 0x1b5e8cu;
    // NOP
    // 0x1b5e90: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5E90u;
    {
        const bool branch_taken_0x1b5e90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5e90) {
            ctx->pc = 0x1B5EA4u;
            return;
        }
    }
    ctx->pc = 0x1B5E98u;
    // 0x1b5e98: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b5e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5e9c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5ea0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1b5ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x1b5ea4u;
}
