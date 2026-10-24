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

// Function: entry_001914c8
// Address: 0x1914c8 - 0x1914d4
void entry_001914c8_0x1914c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001914c8_0x1914c8");
#endif

    ctx->pc = 0x1914c8u;

    // 0x1914c8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1914c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1914cc: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x1914CCu;
    {
        const bool branch_taken_0x1914cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1914cc) {
            ctx->pc = 0x191AB8u;
            return;
        }
    }
    ctx->pc = 0x1914D4u;
}
