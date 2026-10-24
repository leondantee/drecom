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

// Function: entry_00119e0c
// Address: 0x119e0c - 0x119e30
void entry_00119e0c_0x119e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119e0c_0x119e0c");
#endif

    ctx->pc = 0x119e0cu;

    // 0x119e0c: 0x32c20007  andi        $v0, $s6, 0x7
    ctx->pc = 0x119e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)7);
    // 0x119e10: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x119E10u;
    {
        const bool branch_taken_0x119e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E10u;
        // 0x119e14: 0x241e0002  addiu       $fp, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e10) {
            ctx->pc = 0x119E30u;
            return;
        }
    }
    ctx->pc = 0x119E18u;
    // 0x119e18: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x119e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x119e1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119E1Cu;
    {
        const bool branch_taken_0x119e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E1Cu;
        // 0x119e20: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e1c) {
            ctx->pc = 0x119E34u;
            return;
        }
    }
    ctx->pc = 0x119E24u;
    // 0x119e24: 0x3a620008  xori        $v0, $s3, 0x8
    ctx->pc = 0x119e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)8);
    // 0x119e28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x119E28u;
    {
        const bool branch_taken_0x119e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E28u;
        // 0x119e2c: 0x2f02b  sltu        $fp, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e28) {
            ctx->pc = 0x119E34u;
            return;
        }
    }
    ctx->pc = 0x119E30u;
}
