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

// Function: entry_00118728
// Address: 0x118728 - 0x118758
void entry_00118728_0x118728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118728_0x118728");
#endif

    ctx->pc = 0x118728u;

    // 0x118728: 0x26924928  addiu       $s2, $s4, 0x4928
    ctx->pc = 0x118728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 18728));
    // 0x11872c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x11872cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x118730: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x118730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x118734: 0x3610fffc  ori         $s0, $s0, 0xFFFC
    ctx->pc = 0x118734u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65532);
    // 0x118738: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x118738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11873c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x11873cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x118740: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x118740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x118744: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118744u;
    {
        const bool branch_taken_0x118744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118744u;
        // 0x118748: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118744) {
            ctx->pc = 0x118758u;
            return;
        }
    }
    ctx->pc = 0x11874Cu;
    // 0x11874c: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x11874cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x118750: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x118750u;
    {
        const bool branch_taken_0x118750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118750u;
        // 0x118754: 0x26864928  addiu       $a2, $s4, 0x4928 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 18728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118750) {
            ctx->pc = 0x118888u;
            return;
        }
    }
    ctx->pc = 0x118758u;
}
