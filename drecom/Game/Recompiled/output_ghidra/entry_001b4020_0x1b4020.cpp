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

// Function: entry_001b4020
// Address: 0x1b4020 - 0x1b4040
void entry_001b4020_0x1b4020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4020_0x1b4020");
#endif

    ctx->pc = 0x1b4020u;

    // 0x1b4020: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b4020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b4024: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4028: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1b4028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1b402c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B402Cu;
    {
        const bool branch_taken_0x1b402c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b402c) {
            ctx->pc = 0x1B4040u;
            return;
        }
    }
    ctx->pc = 0x1B4034u;
    // 0x1b4034: 0x36b50009  ori         $s5, $s5, 0x9
    ctx->pc = 0x1b4034u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)9);
    // 0x1b4038: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4038u;
    {
        const bool branch_taken_0x1b4038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4038) {
            ctx->pc = 0x1B4048u;
            return;
        }
    }
    ctx->pc = 0x1B4040u;
}
