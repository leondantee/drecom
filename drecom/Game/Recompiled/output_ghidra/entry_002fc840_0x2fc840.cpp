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

// Function: entry_002fc840
// Address: 0x2fc840 - 0x2fc850
void entry_002fc840_0x2fc840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc840_0x2fc840");
#endif

    ctx->pc = 0x2fc840u;

    // 0x2fc840: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2fc840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2fc844: 0x204282b  sltu        $a1, $s0, $a0
    ctx->pc = 0x2fc844u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2fc848: 0x14a0ffc7  bnez        $a1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2FC848u;
    {
        const bool branch_taken_0x2fc848 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc848) {
            ctx->pc = 0x2FC768u;
            return;
        }
    }
    ctx->pc = 0x2FC850u;
}
