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

// Function: entry_001beda0
// Address: 0x1beda0 - 0x1bedd8
void entry_001beda0_0x1beda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001beda0_0x1beda0");
#endif

    switch (ctx->pc) {
        case 0x1bedc0u: goto label_1bedc0;
        default: break;
    }

    ctx->pc = 0x1beda0u;

    // 0x1beda0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1beda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1beda4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1beda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1beda8: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1beda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bedac: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1bedacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bedb0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bedb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bedb4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bedb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bedb8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BEDB8u;
    SET_GPR_U32(ctx, 31, 0x1BEDC0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BEDB8u, 0x1BEDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDC0u;
label_1bedc0:
    // 0x1bedc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bedc4: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bedc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bedc8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bedc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bedcc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1bedccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bedd0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BEDD0u;
    SET_GPR_U32(ctx, 31, 0x1BEDD8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BEDD0u, 0x1BEDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDD8u;
}
