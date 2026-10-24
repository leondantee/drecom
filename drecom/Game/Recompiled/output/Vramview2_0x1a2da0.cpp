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

// Function: Vramview2
// Address: 0x1a2da0 - 0x1a2df8
void Vramview2_0x1a2da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Vramview2_0x1a2da0");
#endif

    switch (ctx->pc) {
        case 0x1a2dc0u: goto label_1a2dc0;
        case 0x1a2dccu: goto label_1a2dcc;
        case 0x1a2dd8u: goto label_1a2dd8;
        case 0x1a2de4u: goto label_1a2de4;
        case 0x1a2df0u: goto label_1a2df0;
        default: break;
    }

    ctx->pc = 0x1a2da0u;

    // 0x1a2da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2da4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1a2da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a2da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a2da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2dac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a2dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a2db0: 0x245029f0  addiu       $s0, $v0, 0x29F0
    ctx->pc = 0x1a2db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
    // 0x1a2db4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1a2db4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a2db8: 0xc068b80  jal         func_1A2E00
    ctx->pc = 0x1A2DB8u;
    SET_GPR_U32(ctx, 31, 0x1A2DC0u);
    ctx->pc = 0x1A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2E00u, 0x1A2DB8u, 0x1A2DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DC0u;
label_1a2dc0:
    // 0x1a2dc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a2dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2dc4: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1A2DC4u;
    SET_GPR_U32(ctx, 31, 0x1A2DCCu);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1A2DC4u, 0x1A2DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DCCu;
label_1a2dcc:
    // 0x1a2dcc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1a2dccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a2dd0: 0xc069070  jal         func_1A41C0
    ctx->pc = 0x1A2DD0u;
    SET_GPR_U32(ctx, 31, 0x1A2DD8u);
    ctx->pc = 0x1A41C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A41C0u, 0x1A2DD0u, 0x1A2DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DD8u;
label_1a2dd8:
    // 0x1a2dd8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1a2dd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a2ddc: 0xc0693b4  jal         func_1A4ED0
    ctx->pc = 0x1A2DDCu;
    SET_GPR_U32(ctx, 31, 0x1A2DE4u);
    ctx->pc = 0x1A4ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4ED0u, 0x1A2DDCu, 0x1A2DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DE4u;
label_1a2de4:
    // 0x1a2de4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a2de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2de8: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1A2DE8u;
    SET_GPR_U32(ctx, 31, 0x1A2DF0u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1A2DE8u, 0x1A2DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2DF0u;
label_1a2df0:
    // 0x1a2df0: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1A2DF0u;
    {
        const bool branch_taken_0x1a2df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2df0) {
            ctx->pc = 0x1A2DCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2dcc;
        }
    }
    ctx->pc = 0x1A2DF8u;
}
