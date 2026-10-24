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

// Function: entry_001b36b8
// Address: 0x1b36b8 - 0x1b36c4
void entry_001b36b8_0x1b36b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b36b8_0x1b36b8");
#endif

    ctx->pc = 0x1b36b8u;

    // 0x1b36b8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b36b8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b36bc: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1B36BCu;
    {
        const bool branch_taken_0x1b36bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b36bc) {
            ctx->pc = 0x1B38CCu;
            return;
        }
    }
    ctx->pc = 0x1B36C4u;
}
