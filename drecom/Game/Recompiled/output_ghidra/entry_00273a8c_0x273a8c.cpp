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

// Function: entry_00273a8c
// Address: 0x273a8c - 0x273a98
void entry_00273a8c_0x273a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273a8c_0x273a8c");
#endif

    ctx->pc = 0x273a8cu;

    // 0x273a8c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x273a8cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x273a90: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x273A90u;
    {
        const bool branch_taken_0x273a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273a90) {
            ctx->pc = 0x273B20u;
            return;
        }
    }
    ctx->pc = 0x273A98u;
}
