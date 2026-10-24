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

// Function: entry_00110068
// Address: 0x110068 - 0x110088
void entry_00110068_0x110068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110068_0x110068");
#endif

    ctx->pc = 0x110068u;

    // 0x110068: 0x8c434618  lw          $v1, 0x4618($v0)
    ctx->pc = 0x110068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17944)));
    // 0x11006c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11006cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110070: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x110070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110074: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x110074u;
    {
        const bool branch_taken_0x110074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110074u;
        // 0x110078: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110074) {
            ctx->pc = 0x110088u;
            return;
        }
    }
    ctx->pc = 0x11007Cu;
    // 0x11007c: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x11007cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x110080: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x110080u;
    {
        const bool branch_taken_0x110080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110080u;
        // 0x110084: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110080) {
            ctx->pc = 0x1100D8u;
            return;
        }
    }
    ctx->pc = 0x110088u;
}
