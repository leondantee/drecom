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

// Function: entry_001583b8
// Address: 0x1583b8 - 0x1583c8
void entry_001583b8_0x1583b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001583b8_0x1583b8");
#endif

    ctx->pc = 0x1583b8u;

    // 0x1583b8: 0x2e240003  sltiu       $a0, $s1, 0x3
    ctx->pc = 0x1583b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1583bc: 0x1480ff56  bnez        $a0, . + 4 + (-0xAA << 2)
    ctx->pc = 0x1583BCu;
    {
        const bool branch_taken_0x1583bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1583bc) {
            ctx->pc = 0x158118u;
            return;
        }
    }
    ctx->pc = 0x1583C4u;
    // 0x1583c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1583c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1583c8u;
}
