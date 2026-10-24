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

// Function: entry_001fb400
// Address: 0x1fb400 - 0x1fb40c
void entry_001fb400_0x1fb400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb400_0x1fb400");
#endif

    ctx->pc = 0x1fb400u;

    // 0x1fb400: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1fb400u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb404: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x1FB404u;
    {
        const bool branch_taken_0x1fb404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb404) {
            ctx->pc = 0x1FBB20u;
            return;
        }
    }
    ctx->pc = 0x1FB40Cu;
}
