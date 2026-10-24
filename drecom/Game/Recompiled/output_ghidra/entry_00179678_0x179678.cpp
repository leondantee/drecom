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

// Function: entry_00179678
// Address: 0x179678 - 0x179684
void entry_00179678_0x179678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179678_0x179678");
#endif

    ctx->pc = 0x179678u;

    // 0x179678: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x179678u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17967c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x17967Cu;
    {
        const bool branch_taken_0x17967c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17967c) {
            ctx->pc = 0x179770u;
            return;
        }
    }
    ctx->pc = 0x179684u;
}
