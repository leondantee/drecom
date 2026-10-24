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

// Function: entry_00378660
// Address: 0x378660 - 0x37866c
void entry_00378660_0x378660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378660_0x378660");
#endif

    ctx->pc = 0x378660u;

    // 0x378660: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x378660u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x378664: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x378664u;
    {
        const bool branch_taken_0x378664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378664) {
            ctx->pc = 0x3786A0u;
            return;
        }
    }
    ctx->pc = 0x37866Cu;
}
