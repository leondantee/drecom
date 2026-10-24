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

// Function: entry_001db6d8
// Address: 0x1db6d8 - 0x1db6e4
void entry_001db6d8_0x1db6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db6d8_0x1db6d8");
#endif

    ctx->pc = 0x1db6d8u;

    // 0x1db6d8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1db6d8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1db6dc: 0x1000028c  b           . + 4 + (0x28C << 2)
    ctx->pc = 0x1DB6DCu;
    {
        const bool branch_taken_0x1db6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db6dc) {
            ctx->pc = 0x1DC110u;
            return;
        }
    }
    ctx->pc = 0x1DB6E4u;
}
