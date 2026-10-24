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

// Function: entry_00106584
// Address: 0x106584 - 0x1065b4
void entry_00106584_0x106584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106584_0x106584");
#endif

    ctx->pc = 0x106584u;

    // 0x106584: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x106584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x106588: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x106588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10658c: 0x8cc33dac  lw          $v1, 0x3DAC($a2)
    ctx->pc = 0x10658cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DACu));
    // 0x106590: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x106590u;
    {
        const bool branch_taken_0x106590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x106594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106590u;
        // 0x106594: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106590) {
            ctx->pc = 0x1065B4u;
            return;
        }
    }
    ctx->pc = 0x106598u;
    // 0x106598: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x106598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10659c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10659cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1065a0: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x1065a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x1065a4: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x1065a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x1065a8: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x1065a8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x1065ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1065ACu;
    {
        const bool branch_taken_0x1065ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1065B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065ACu;
        // 0x1065b0: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065ac) {
            ctx->pc = 0x1065C8u;
            return;
        }
    }
    ctx->pc = 0x1065B4u;
}
