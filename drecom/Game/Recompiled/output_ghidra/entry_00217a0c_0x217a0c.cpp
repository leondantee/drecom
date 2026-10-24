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

// Function: entry_00217a0c
// Address: 0x217a0c - 0x217a28
void entry_00217a0c_0x217a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217a0c_0x217a0c");
#endif

    ctx->pc = 0x217a0cu;

    // 0x217a0c: 0x24e3ccc0  addiu       $v1, $a3, -0x3340
    ctx->pc = 0x217a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954176));
    // 0x217a10: 0xacf2ccc0  sw          $s2, -0x3340($a3)
    ctx->pc = 0x217a10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294954176), GPR_U32(ctx, 18));
    // 0x217a14: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217A14u;
    {
        const bool branch_taken_0x217a14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x217A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A14u;
        // 0x217a18: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a14) {
            ctx->pc = 0x217A28u;
            return;
        }
    }
    ctx->pc = 0x217A1Cu;
    // 0x217a1c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x217a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x217a20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x217A20u;
    {
        const bool branch_taken_0x217a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A20u;
        // 0x217a24: 0xa0620008  sb          $v0, 0x8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a20) {
            ctx->pc = 0x217A58u;
            return;
        }
    }
    ctx->pc = 0x217A28u;
}
