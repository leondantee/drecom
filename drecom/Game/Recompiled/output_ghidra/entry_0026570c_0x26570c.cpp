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

// Function: entry_0026570c
// Address: 0x26570c - 0x265718
void entry_0026570c_0x26570c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026570c_0x26570c");
#endif

    ctx->pc = 0x26570cu;

    // 0x26570c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x26570cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x265710: 0xc0772f0  jal         func_1DCBC0
    ctx->pc = 0x265710u;
    SET_GPR_U32(ctx, 31, 0x265718u);
    ctx->pc = 0x1DCBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBC0u, 0x265710u, 0x265718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265718u;
}
