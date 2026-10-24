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

// Function: entry_0028a15c
// Address: 0x28a15c - 0x28a168
void entry_0028a15c_0x28a15c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028a15c_0x28a15c");
#endif

    ctx->pc = 0x28a15cu;

    // 0x28a15c: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x28a15cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28a160: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x28A160u;
    {
        const bool branch_taken_0x28a160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a160) {
            ctx->pc = 0x28A1C0u;
            return;
        }
    }
    ctx->pc = 0x28A168u;
}
