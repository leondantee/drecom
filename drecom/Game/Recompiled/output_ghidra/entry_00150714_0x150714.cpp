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

// Function: entry_00150714
// Address: 0x150714 - 0x150734
void entry_00150714_0x150714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150714_0x150714");
#endif

    ctx->pc = 0x150714u;

    // 0x150714: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150718: 0x844415ee  lh          $a0, 0x15EE($v0)
    ctx->pc = 0x150718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5614)));
    // 0x15071c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15071Cu;
    {
        const bool branch_taken_0x15071c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15071c) {
            ctx->pc = 0x150734u;
            return;
        }
    }
    ctx->pc = 0x150724u;
    // 0x150724: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x150724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150728: 0x84a615ee  lh          $a2, 0x15EE($a1)
    ctx->pc = 0x150728u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5614)));
    // 0x15072c: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x15072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x150730: 0xa4a215ee  sh          $v0, 0x15EE($a1)
    ctx->pc = 0x150730u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5614), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x150734u;
}
