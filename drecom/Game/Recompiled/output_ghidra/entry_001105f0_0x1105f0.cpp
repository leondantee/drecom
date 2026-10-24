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

// Function: entry_001105f0
// Address: 0x1105f0 - 0x11060c
void entry_001105f0_0x1105f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001105f0_0x1105f0");
#endif

    ctx->pc = 0x1105f0u;

    // 0x1105f0: 0x8e424618  lw          $v0, 0x4618($s2)
    ctx->pc = 0x1105f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17944)));
    // 0x1105f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1105f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1105f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1105fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1105FCu;
    {
        const bool branch_taken_0x1105fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105FCu;
        // 0x110600: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105fc) {
            ctx->pc = 0x11060Cu;
            return;
        }
    }
    ctx->pc = 0x110604u;
    // 0x110604: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x110604u;
    {
        const bool branch_taken_0x110604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110604u;
        // 0x110608: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110604) {
            ctx->pc = 0x110698u;
            return;
        }
    }
    ctx->pc = 0x11060Cu;
}
