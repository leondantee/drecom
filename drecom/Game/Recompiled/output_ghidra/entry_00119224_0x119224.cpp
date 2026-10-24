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

// Function: entry_00119224
// Address: 0x119224 - 0x119268
void entry_00119224_0x119224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119224_0x119224");
#endif

    switch (ctx->pc) {
        case 0x11923cu: goto label_11923c;
        default: break;
    }

    ctx->pc = 0x119224u;

    // 0x119224: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x119224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x119228: 0x253a021  addu        $s4, $s2, $s3
    ctx->pc = 0x119228u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x11922c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x11922cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x119230: 0xb4282a  slt         $a1, $a1, $s4
    ctx->pc = 0x119230u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x119234: 0xc046348  jal         func_118D20
    ctx->pc = 0x119234u;
    SET_GPR_U32(ctx, 31, 0x11923Cu);
    ctx->pc = 0x119238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119234u;
    // 0x119238: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D20u, 0x119234u, 0x11923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11923Cu;
label_11923c:
    // 0x11923c: 0x40c82d  daddu       $t9, $v0, $zero
    ctx->pc = 0x11923cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119240: 0x14a880  sll         $s5, $s4, 2
    ctx->pc = 0x119240u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x119244: 0x27380014  addiu       $t8, $t9, 0x14
    ctx->pc = 0x119244u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), 20));
    // 0x119248: 0x3152021  addu        $a0, $t8, $s5
    ctx->pc = 0x119248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x11924c: 0x304102b  sltu        $v0, $t8, $a0
    ctx->pc = 0x11924cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x119250: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x119250u;
    {
        const bool branch_taken_0x119250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119250u;
        // 0x119254: 0x300482d  daddu       $t1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119250) {
            ctx->pc = 0x11928Cu;
            return;
        }
    }
    ctx->pc = 0x119258u;
    // 0x119258: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x119258u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x11925c: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x11925cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x119260: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x119260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x119264: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x119264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    ctx->pc = 0x119268u;
}
