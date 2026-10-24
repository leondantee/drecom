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

// Function: entry_003405dc
// Address: 0x3405dc - 0x3405ec
void entry_003405dc_0x3405dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003405dc_0x3405dc");
#endif

    ctx->pc = 0x3405dcu;

    // 0x3405dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3405dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3405e0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3405e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3405e4: 0xc0cfdfc  jal         func_33F7F0
    ctx->pc = 0x3405E4u;
    SET_GPR_U32(ctx, 31, 0x3405ECu);
    ctx->pc = 0x33F7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F7F0u, 0x3405E4u, 0x3405ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3405ECu;
}
