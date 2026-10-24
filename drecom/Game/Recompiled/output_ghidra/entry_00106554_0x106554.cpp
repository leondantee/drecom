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

// Function: entry_00106554
// Address: 0x106554 - 0x106580
void entry_00106554_0x106554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106554_0x106554");
#endif

    ctx->pc = 0x106554u;

    // 0x106554: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x106554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x106558: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x106558u;
    {
        const bool branch_taken_0x106558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106558u;
        // 0x10655c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106558) {
            ctx->pc = 0x106584u;
            return;
        }
    }
    ctx->pc = 0x106560u;
    // 0x106560: 0x8c433db8  lw          $v1, 0x3DB8($v0)
    ctx->pc = 0x106560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15800)));
    // 0x106564: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x106564u;
    {
        const bool branch_taken_0x106564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106564u;
        // 0x106568: 0x3c050038  lui         $a1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106564) {
            ctx->pc = 0x106584u;
            return;
        }
    }
    ctx->pc = 0x10656Cu;
    // 0x10656c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10656cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106570: 0x8ca33dac  lw          $v1, 0x3DAC($a1)
    ctx->pc = 0x106570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 15788)));
    // 0x106574: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x106574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106578: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x106578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x10657c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x10657cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    ctx->pc = 0x106580u;
}
