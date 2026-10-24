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

// Function: entry_00136a84
// Address: 0x136a84 - 0x136a90
void entry_00136a84_0x136a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136a84_0x136a84");
#endif

    ctx->pc = 0x136a84u;

    // 0x136a84: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x136a84u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136a88: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x136A88u;
    {
        const bool branch_taken_0x136a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a88) {
            ctx->pc = 0x136B70u;
            return;
        }
    }
    ctx->pc = 0x136A90u;
}
