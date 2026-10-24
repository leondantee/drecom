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

// Function: entry_001af040
// Address: 0x1af040 - 0x1af050
void entry_001af040_0x1af040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af040_0x1af040");
#endif

    ctx->pc = 0x1af040u;

    // 0x1af040: 0x2e0307d0  sltiu       $v1, $s0, 0x7D0
    ctx->pc = 0x1af040u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1af044: 0x1460ff44  bnez        $v1, . + 4 + (-0xBC << 2)
    ctx->pc = 0x1AF044u;
    {
        const bool branch_taken_0x1af044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af044) {
            ctx->pc = 0x1AED58u;
            return;
        }
    }
    ctx->pc = 0x1AF04Cu;
    // 0x1af04c: 0x0  nop
    ctx->pc = 0x1af04cu;
    // NOP
    ctx->pc = 0x1af050u;
}
