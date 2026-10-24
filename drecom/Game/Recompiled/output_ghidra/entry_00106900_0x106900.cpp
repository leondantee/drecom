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

// Function: entry_00106900
// Address: 0x106900 - 0x106948
void entry_00106900_0x106900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106900_0x106900");
#endif

    ctx->pc = 0x106900u;

    // 0x106900: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x106900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106904: 0x8ce43d7c  lw          $a0, 0x3D7C($a3)
    ctx->pc = 0x106904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 15740)));
    // 0x106908: 0x14820018  bne         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x106908u;
    {
        const bool branch_taken_0x106908 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106908u;
        // 0x10690c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106908) {
            ctx->pc = 0x10696Cu;
            return;
        }
    }
    ctx->pc = 0x106910u;
    // 0x106910: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x106910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106914: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x106914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x106918: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x106918u;
    {
        const bool branch_taken_0x106918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106918u;
        // 0x10691c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106918) {
            ctx->pc = 0x10696Cu;
            return;
        }
    }
    ctx->pc = 0x106920u;
    // 0x106920: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x106920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x106924: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x106924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x106928: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x106928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x10692c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10692cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x106930: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x106930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x106934: 0x8ca23dac  lw          $v0, 0x3DAC($a1)
    ctx->pc = 0x106934u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383DACu));
    // 0x106938: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x106938u;
    {
        const bool branch_taken_0x106938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106938u;
        // 0x10693c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106938) {
            ctx->pc = 0x106948u;
            return;
        }
    }
    ctx->pc = 0x106940u;
    // 0x106940: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x106940u;
    {
        const bool branch_taken_0x106940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106940u;
        // 0x106944: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106940) {
            ctx->pc = 0x106968u;
            return;
        }
    }
    ctx->pc = 0x106948u;
}
