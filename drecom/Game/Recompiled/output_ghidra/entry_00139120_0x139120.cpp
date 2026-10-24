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

// Function: entry_00139120
// Address: 0x139120 - 0x13912c
void entry_00139120_0x139120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139120_0x139120");
#endif

    ctx->pc = 0x139120u;

    // 0x139120: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x139120u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x139124: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x139124u;
    {
        const bool branch_taken_0x139124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139124) {
            ctx->pc = 0x139160u;
            return;
        }
    }
    ctx->pc = 0x13912Cu;
}
