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

// Function: entry_0029309c
// Address: 0x29309c - 0x2930ac
void entry_0029309c_0x29309c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029309c_0x29309c");
#endif

    switch (ctx->pc) {
        case 0x2930a4u: goto label_2930a4;
        default: break;
    }

    ctx->pc = 0x29309cu;

    // 0x29309c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x29309Cu;
    SET_GPR_U32(ctx, 31, 0x2930A4u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x29309Cu, 0x2930A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2930A4u;
label_2930a4:
    // 0x2930a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2930a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2930a8: 0xae035dc0  sw          $v1, 0x5DC0($s0)
    ctx->pc = 0x2930a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24000), GPR_U32(ctx, 3));
    ctx->pc = 0x2930acu;
}
