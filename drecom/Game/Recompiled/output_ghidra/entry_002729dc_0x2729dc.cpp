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

// Function: entry_002729dc
// Address: 0x2729dc - 0x2729e4
void entry_002729dc_0x2729dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002729dc_0x2729dc");
#endif

    ctx->pc = 0x2729dcu;

    // 0x2729dc: 0xc05db9c  jal         func_176E70
    ctx->pc = 0x2729DCu;
    SET_GPR_U32(ctx, 31, 0x2729E4u);
    ctx->pc = 0x176E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176E70u, 0x2729DCu, 0x2729E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2729E4u;
}
