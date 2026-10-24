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

// Function: entry_001c0500
// Address: 0x1c0500 - 0x1c0538
void entry_001c0500_0x1c0500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0500_0x1c0500");
#endif

    switch (ctx->pc) {
        case 0x1c0520u: goto label_1c0520;
        default: break;
    }

    ctx->pc = 0x1c0500u;

    // 0x1c0500: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0504: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0508: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c050c: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1c050cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c0510: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c0510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0514: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0518: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C0518u;
    SET_GPR_U32(ctx, 31, 0x1C0520u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C0518u, 0x1C0520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0520u;
label_1c0520:
    // 0x1c0520: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0524: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c0524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0528: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1c0528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c052c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1c052cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c0530: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C0530u;
    SET_GPR_U32(ctx, 31, 0x1C0538u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C0530u, 0x1C0538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0538u;
}
