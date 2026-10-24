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

// Function: entry_00165a0c
// Address: 0x165a0c - 0x165a20
void entry_00165a0c_0x165a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165a0c_0x165a0c");
#endif

    switch (ctx->pc) {
        case 0x165a1cu: goto label_165a1c;
        default: break;
    }

    ctx->pc = 0x165a0cu;

    // 0x165a0c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x165a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x165a10: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x165a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x165a14: 0xc0599ac  jal         func_1666B0
    ctx->pc = 0x165A14u;
    SET_GPR_U32(ctx, 31, 0x165A1Cu);
    ctx->pc = 0x1666B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1666B0u, 0x165A14u, 0x165A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A1Cu;
label_165a1c:
    // 0x165a1c: 0x0  nop
    ctx->pc = 0x165a1cu;
    // NOP
    ctx->pc = 0x165a20u;
}
