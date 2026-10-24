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

// Function: entry_001b3450
// Address: 0x1b3450 - 0x1b3468
void entry_001b3450_0x1b3450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3450_0x1b3450");
#endif

    ctx->pc = 0x1b3450u;

    // 0x1b3450: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b3450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b3454: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3458: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b3458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b345c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B345Cu;
    {
        const bool branch_taken_0x1b345c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b345c) {
            ctx->pc = 0x1B3468u;
            return;
        }
    }
    ctx->pc = 0x1B3464u;
    // 0x1b3464: 0x36730008  ori         $s3, $s3, 0x8
    ctx->pc = 0x1b3464u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
    ctx->pc = 0x1b3468u;
}
