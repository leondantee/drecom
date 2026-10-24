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

// Function: entry_00191f38
// Address: 0x191f38 - 0x191f4c
void entry_00191f38_0x191f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191f38_0x191f38");
#endif

    ctx->pc = 0x191f38u;

    // 0x191f38: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x191f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x191f3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191F3Cu;
    {
        const bool branch_taken_0x191f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191f3c) {
            ctx->pc = 0x191F4Cu;
            return;
        }
    }
    ctx->pc = 0x191F44u;
    // 0x191f44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191f48: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x191f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    ctx->pc = 0x191f4cu;
}
