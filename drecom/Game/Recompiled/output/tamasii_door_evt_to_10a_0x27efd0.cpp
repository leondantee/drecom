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

// Function: tamasii_door_evt_to_10a
// Address: 0x27efd0 - 0x27f020
void tamasii_door_evt_to_10a_0x27efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("tamasii_door_evt_to_10a_0x27efd0");
#endif

    switch (ctx->pc) {
        case 0x27eff8u: goto label_27eff8;
        case 0x27f004u: goto label_27f004;
        case 0x27f00cu: goto label_27f00c;
        default: break;
    }

    ctx->pc = 0x27efd0u;

    // 0x27efd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27efd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27efd4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27efd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27efd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27efd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27efdc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x27efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x27efe0: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x27efe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x27efe4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27efe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27efe8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27efe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27efec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27efecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27eff0: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x27EFF0u;
    SET_GPR_U32(ctx, 31, 0x27EFF8u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x27EFF0u, 0x27EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFF8u;
label_27eff8:
    // 0x27eff8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27effc: 0xc084964  jal         func_212590
    ctx->pc = 0x27EFFCu;
    SET_GPR_U32(ctx, 31, 0x27F004u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27EFFCu, 0x27F004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F004u;
label_27f004:
    // 0x27f004: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27F004u;
    SET_GPR_U32(ctx, 31, 0x27F00Cu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27F004u, 0x27F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F00Cu;
label_27f00c:
    // 0x27f00c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27f00cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27f010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f014: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27f014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27f018: 0x3e00008  jr          $ra
    ctx->pc = 0x27F018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F020u;
}
