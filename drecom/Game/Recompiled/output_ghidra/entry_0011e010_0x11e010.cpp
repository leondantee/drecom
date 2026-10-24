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

// Function: entry_0011e010
// Address: 0x11e010 - 0x11e058
void entry_0011e010_0x11e010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e010_0x11e010");
#endif

    ctx->pc = 0x11e010u;

    // 0x11e010: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11e010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11e014: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x11e014u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x11e018: 0x2442df28  addiu       $v0, $v0, -0x20D8
    ctx->pc = 0x11e018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958888));
    // 0x11e01c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x11e01cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11e020: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11e020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11e024: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11e024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e028: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11e028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11e02c: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x11e02cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11e030: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E030u;
    {
        const bool branch_taken_0x11e030 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e030) {
            ctx->pc = 0x11E034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E030u;
            // 0x11e034: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E058u;
            return;
        }
    }
    ctx->pc = 0x11E038u;
    // 0x11e038: 0x10b102b  sltu        $v0, $t0, $t3
    ctx->pc = 0x11e038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x11e03c: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x11E03Cu;
    {
        const bool branch_taken_0x11e03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E03Cu;
        // 0x11e040: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e03c) {
            ctx->pc = 0x11E190u;
            return;
        }
    }
    ctx->pc = 0x11E044u;
    // 0x11e044: 0x189102b  sltu        $v0, $t4, $t1
    ctx->pc = 0x11e044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11e048: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x11E048u;
    {
        const bool branch_taken_0x11e048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E048u;
        // 0x11e04c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e048) {
            ctx->pc = 0x11E190u;
            return;
        }
    }
    ctx->pc = 0x11E050u;
    // 0x11e050: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x11E050u;
    {
        const bool branch_taken_0x11e050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E050u;
        // 0x11e054: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e050) {
            ctx->pc = 0x11E190u;
            return;
        }
    }
    ctx->pc = 0x11E058u;
}
