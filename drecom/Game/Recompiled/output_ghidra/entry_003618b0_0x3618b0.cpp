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

// Function: entry_003618b0
// Address: 0x3618b0 - 0x3618c4
void entry_003618b0_0x3618b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003618b0_0x3618b0");
#endif

    ctx->pc = 0x3618b0u;

    // 0x3618b0: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x3618b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3618b4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3618B4u;
    {
        const bool branch_taken_0x3618b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3618b4) {
            ctx->pc = 0x36189Cu;
            return;
        }
    }
    ctx->pc = 0x3618BCu;
    // 0x3618bc: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3618BCu;
    {
        const bool branch_taken_0x3618bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3618bc) {
            ctx->pc = 0x361A0Cu;
            return;
        }
    }
    ctx->pc = 0x3618C4u;
}
