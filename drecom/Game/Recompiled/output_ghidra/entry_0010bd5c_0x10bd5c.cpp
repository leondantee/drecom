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

// Function: entry_0010bd5c
// Address: 0x10bd5c - 0x10bda4
void entry_0010bd5c_0x10bd5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bd5c_0x10bd5c");
#endif

    switch (ctx->pc) {
        case 0x10bd80u: goto label_10bd80;
        case 0x10bd9cu: goto label_10bd9c;
        default: break;
    }

    ctx->pc = 0x10bd5cu;

    // 0x10bd5c: 0x26b23990  addiu       $s2, $s5, 0x3990
    ctx->pc = 0x10bd5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 14736));
    // 0x10bd60: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x10bd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x10bd64: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x10bd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x10bd68: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x10bd68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10bd6c: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x10bd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x10bd70: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x10bd70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd74: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x10bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x10bd78: 0xc084b70  jal         func_212DC0
    ctx->pc = 0x10BD78u;
    SET_GPR_U32(ctx, 31, 0x10BD80u);
    ctx->pc = 0x10BD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BD78u;
    // 0x10bd7c: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DC0u;
    {
        ctx->pc = 0x10BD80u;
        ps2_stubs::sceSifDmaStat(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10BD80u) { return; }
    ctx->pc = 0x10BD80u;
label_10bd80:
    // 0x10bd80: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10BD80u;
    {
        const bool branch_taken_0x10bd80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD80u;
        // 0x10bd84: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd80) {
            ctx->pc = 0x10BDA4u;
            return;
        }
    }
    ctx->pc = 0x10BD88u;
    // 0x10bd88: 0x8c434564  lw          $v1, 0x4564($v0)
    ctx->pc = 0x10bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17764)));
    // 0x10bd8c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x10BD8Cu;
    {
        const bool branch_taken_0x10bd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD8Cu;
        // 0x10bd90: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd8c) {
            ctx->pc = 0x10BE34u;
            return;
        }
    }
    ctx->pc = 0x10BD94u;
    // 0x10bd94: 0xc046760  jal         func_119D80
    ctx->pc = 0x10BD94u;
    SET_GPR_U32(ctx, 31, 0x10BD9Cu);
    ctx->pc = 0x10BD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BD94u;
    // 0x10bd98: 0x2484ca90  addiu       $a0, $a0, -0x3570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10BD9Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10BD9Cu) { return; }
    ctx->pc = 0x10BD9Cu;
label_10bd9c:
    // 0x10bd9c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x10BD9Cu;
    {
        const bool branch_taken_0x10bd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD9Cu;
        // 0x10bda0: 0xdfbf0160  ld          $ra, 0x160($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd9c) {
            ctx->pc = 0x10BE38u;
            return;
        }
    }
    ctx->pc = 0x10BDA4u;
}
