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

// Function: entry_00217148
// Address: 0x217148 - 0x217178
void entry_00217148_0x217148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217148_0x217148");
#endif

    ctx->pc = 0x217148u;

label_217148:
    // 0x217148: 0x290200fc  slti        $v0, $t0, 0xFC
    ctx->pc = 0x217148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)252) ? 1 : 0);
    // 0x21714c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21714Cu;
    {
        const bool branch_taken_0x21714c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21714Cu;
        // 0x217150: 0xc81021  addu        $v0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21714c) {
            ctx->pc = 0x217180u;
            return;
        }
    }
    ctx->pc = 0x217154u;
    // 0x217154: 0x24e3cbc0  addiu       $v1, $a3, -0x3440
    ctx->pc = 0x217154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953920));
    // 0x217158: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x217158u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21715c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x21715cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x217160: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x217160u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x217164: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x217164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x217168: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x217168u;
    {
        const bool branch_taken_0x217168 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x217168) {
            ctx->pc = 0x21716Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217168u;
            // 0x21716c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217148;
        }
    }
    ctx->pc = 0x217170u;
    // 0x217170: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x217170u;
    {
        const bool branch_taken_0x217170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217170u;
        // 0x217174: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217170) {
            ctx->pc = 0x217184u;
            return;
        }
    }
    ctx->pc = 0x217178u;
}
