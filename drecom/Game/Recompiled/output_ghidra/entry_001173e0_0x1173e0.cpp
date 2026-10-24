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

// Function: entry_001173e0
// Address: 0x1173e0 - 0x117410
void entry_001173e0_0x1173e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001173e0_0x1173e0");
#endif

    ctx->pc = 0x1173e0u;

    // 0x1173e0: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x1173e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1173e4: 0xaccb0004  sw          $t3, 0x4($a2)
    ctx->pc = 0x1173e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 11));
    // 0x1173e8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1173E8u;
    {
        const bool branch_taken_0x1173e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1173ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173E8u;
        // 0x1173ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173e8) {
            ctx->pc = 0x117420u;
            return;
        }
    }
    ctx->pc = 0x1173F0u;
    // 0x1173f0: 0x8e05fff8  lw          $a1, -0x8($s0)
    ctx->pc = 0x1173f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x1173f4: 0x25820008  addiu       $v0, $t4, 0x8
    ctx->pc = 0x1173f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x1173f8: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x1173f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1173fc: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x1173fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x117400: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117400u;
    {
        const bool branch_taken_0x117400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x117404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117400u;
        // 0x117404: 0x1254821  addu        $t1, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117400) {
            ctx->pc = 0x117410u;
            return;
        }
    }
    ctx->pc = 0x117408u;
    // 0x117408: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x117408u;
    {
        const bool branch_taken_0x117408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117408u;
        // 0x11740c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117408) {
            ctx->pc = 0x117420u;
            return;
        }
    }
    ctx->pc = 0x117410u;
}
