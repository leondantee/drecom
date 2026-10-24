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

// Function: entry_00193d8c
// Address: 0x193d8c - 0x193d98
void entry_00193d8c_0x193d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193d8c_0x193d8c");
#endif

    ctx->pc = 0x193d8cu;

    // 0x193d8c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x193d8cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x193d90: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x193D90u;
    {
        const bool branch_taken_0x193d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193d90) {
            ctx->pc = 0x194070u;
            return;
        }
    }
    ctx->pc = 0x193D98u;
}
