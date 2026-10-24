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

// Function: entry_001b8af4
// Address: 0x1b8af4 - 0x1b8bb0
void entry_001b8af4_0x1b8af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8af4_0x1b8af4");
#endif

    switch (ctx->pc) {
        case 0x1b8b14u: goto label_1b8b14;
        case 0x1b8b28u: goto label_1b8b28;
        case 0x1b8b44u: goto label_1b8b44;
        case 0x1b8b58u: goto label_1b8b58;
        default: break;
    }

    ctx->pc = 0x1b8af4u;

    // 0x1b8af4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8af8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8afc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8b00: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1b8b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1b8b04: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1b8b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1b8b08: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x1b8b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b8b0c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B8B0Cu;
    SET_GPR_U32(ctx, 31, 0x1B8B14u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B8B14u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B8B14u) { return; }
    ctx->pc = 0x1B8B14u;
label_1b8b14:
    // 0x1b8b14: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8b18: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1b8b18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8b1c: 0xc60c1290  lwc1        $f12, 0x1290($s0)
    ctx->pc = 0x1b8b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b8b20: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1B8B20u;
    SET_GPR_U32(ctx, 31, 0x1B8B28u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1B8B20u, 0x1B8B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8B28u;
label_1b8b28:
    // 0x1b8b28: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b8b28u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b8b2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b8b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b8b30: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1b8b30u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8b34: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x1b8b34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1b8b38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b8b38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b8b3c: 0xc057480  jal         func_15D200
    ctx->pc = 0x1B8B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B8B44u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B8B3Cu, 0x1B8B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8B44u;
label_1b8b44:
    // 0x1b8b44: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b8b44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b8b48: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b8b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8b4c: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x1b8b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x1b8b50: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1B8B50u;
    SET_GPR_U32(ctx, 31, 0x1B8B58u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1B8B50u, 0x1B8B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8B58u;
label_1b8b58:
    // 0x1b8b58: 0x3c044467  lui         $a0, 0x4467
    ctx->pc = 0x1b8b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17511 << 16));
    // 0x1b8b5c: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1b8b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1b8b60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b8b60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b8b64: 0x0  nop
    ctx->pc = 0x1b8b64u;
    // NOP
    // 0x1b8b68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b8b68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b8b6c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b8b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1b8b70: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8b74: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b8b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8b78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8b7c: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x1b8b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8b80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b8b80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b8b84: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1b8b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1b8b88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8b8c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b8b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8b90: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b8b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8b94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b8b94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8b98: 0x0  nop
    ctx->pc = 0x1b8b98u;
    // NOP
    // 0x1b8b9c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8B9Cu;
    {
        const bool branch_taken_0x1b8b9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8b9c) {
            ctx->pc = 0x1B8BB0u;
            return;
        }
    }
    ctx->pc = 0x1B8BA4u;
    // 0x1b8ba4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b8ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8ba8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8bac: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1b8bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x1b8bb0u;
}
