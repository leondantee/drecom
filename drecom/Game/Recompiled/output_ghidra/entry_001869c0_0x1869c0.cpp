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

// Function: entry_001869c0
// Address: 0x1869c0 - 0x1869d4
void entry_001869c0_0x1869c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001869c0_0x1869c0");
#endif

    ctx->pc = 0x1869c0u;

    // 0x1869c0: 0x2e030007  sltiu       $v1, $s0, 0x7
    ctx->pc = 0x1869c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1869c4: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1869C4u;
    {
        const bool branch_taken_0x1869c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1869c4) {
            ctx->pc = 0x18694Cu;
            return;
        }
    }
    ctx->pc = 0x1869CCu;
    // 0x1869cc: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x1869CCu;
    {
        const bool branch_taken_0x1869cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1869cc) {
            ctx->pc = 0x186CA0u;
            return;
        }
    }
    ctx->pc = 0x1869D4u;
}
