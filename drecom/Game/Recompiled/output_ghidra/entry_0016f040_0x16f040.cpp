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

// Function: entry_0016f040
// Address: 0x16f040 - 0x16f050
void entry_0016f040_0x16f040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f040_0x16f040");
#endif

    ctx->pc = 0x16f040u;

    // 0x16f040: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x16f040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x16f044: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x16f044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x16f048: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16F048u;
    {
        const bool branch_taken_0x16f048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f048) {
            ctx->pc = 0x16F024u;
            return;
        }
    }
    ctx->pc = 0x16F050u;
}
