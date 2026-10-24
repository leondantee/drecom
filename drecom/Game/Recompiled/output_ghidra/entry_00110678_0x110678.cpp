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

// Function: entry_00110678
// Address: 0x110678 - 0x110698
void entry_00110678_0x110678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110678_0x110678");
#endif

    ctx->pc = 0x110678u;

    // 0x110678: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x110678u;
    {
        const bool branch_taken_0x110678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110678u;
        // 0x11067c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110678) {
            ctx->pc = 0x110698u;
            return;
        }
    }
    ctx->pc = 0x110680u;
    // 0x110680: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x110680u;
    {
        const bool branch_taken_0x110680 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x110684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110680u;
        // 0x110684: 0xae404618  sw          $zero, 0x4618($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 17944), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110680) {
            ctx->pc = 0x110698u;
            return;
        }
    }
    ctx->pc = 0x110688u;
    // 0x110688: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x110688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11068c: 0x8c4367c0  lw          $v1, 0x67C0($v0)
    ctx->pc = 0x11068cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B67C0u));
    // 0x110690: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x110690u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x110694: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x110694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110698u;
}
