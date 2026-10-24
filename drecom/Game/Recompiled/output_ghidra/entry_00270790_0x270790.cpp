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

// Function: entry_00270790
// Address: 0x270790 - 0x270798
void entry_00270790_0x270790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270790_0x270790");
#endif

    ctx->pc = 0x270790u;

    // 0x270790: 0xc0bc094  jal         func_2F0250
    ctx->pc = 0x270790u;
    SET_GPR_U32(ctx, 31, 0x270798u);
    ctx->pc = 0x2F0250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0250u, 0x270790u, 0x270798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270798u;
}
