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

// Function: entry_00216138
// Address: 0x216138 - 0x216168
void entry_00216138_0x216138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216138_0x216138");
#endif

    switch (ctx->pc) {
        case 0x216158u: goto label_216158;
        default: break;
    }

    ctx->pc = 0x216138u;

label_216138:
    // 0x216138: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x216138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x21613c: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x21613cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x216140: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x216140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x216144: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216148: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x216148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x21614c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21614cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216150: 0xc08543e  jal         func_2150F8
    ctx->pc = 0x216150u;
    SET_GPR_U32(ctx, 31, 0x216158u);
    ctx->pc = 0x216154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216150u;
    // 0x216154: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2150F8u;
    {
        ctx->pc = 0x216158u;
        ps2_syscalls::sceSifSendCmd(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x216158u) { return; }
    ctx->pc = 0x216158u;
label_216158:
    // 0x216158: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x216158u;
    {
        const bool branch_taken_0x216158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216158u;
        // 0x21615c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216158) {
            ctx->pc = 0x216138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216138;
        }
    }
    ctx->pc = 0x216160u;
    // 0x216160: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x216160u;
    {
        const bool branch_taken_0x216160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216160u;
        // 0x216164: 0xdfb40060  ld          $s4, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216160) {
            ctx->pc = 0x216214u;
            return;
        }
    }
    ctx->pc = 0x216168u;
}
