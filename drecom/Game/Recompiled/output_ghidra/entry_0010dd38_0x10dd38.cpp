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

// Function: entry_0010dd38
// Address: 0x10dd38 - 0x10dd74
void entry_0010dd38_0x10dd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dd38_0x10dd38");
#endif

    ctx->pc = 0x10dd38u;

label_10dd38:
    // 0x10dd38: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x10dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x10dd3c: 0x26c34000  addiu       $v1, $s6, 0x4000
    ctx->pc = 0x10dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 16384));
    // 0x10dd40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10dd44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10dd44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x10dd48: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x10dd4c: 0x2a2200c0  slti        $v0, $s1, 0xC0
    ctx->pc = 0x10dd4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x10dd50: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10DD50u;
    {
        const bool branch_taken_0x10dd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD50u;
        // 0x10dd54: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd50) {
            ctx->pc = 0x10DD7Cu;
            return;
        }
    }
    ctx->pc = 0x10DD58u;
    // 0x10dd58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10dd5c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10dd60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10dd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10dd64: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x10DD64u;
    {
        const bool branch_taken_0x10dd64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD64u;
        // 0x10dd68: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd64) {
            ctx->pc = 0x10DD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dd38;
        }
    }
    ctx->pc = 0x10DD6Cu;
    // 0x10dd6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10DD6Cu;
    {
        const bool branch_taken_0x10dd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD6Cu;
        // 0x10dd70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd6c) {
            ctx->pc = 0x10DD80u;
            return;
        }
    }
    ctx->pc = 0x10DD74u;
}
