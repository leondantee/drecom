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

// Function: entry_00119f24
// Address: 0x119f24 - 0x119f40
void entry_00119f24_0x119f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119f24_0x119f24");
#endif

    ctx->pc = 0x119f24u;

    // 0x119f24: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x119f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x119f28: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x119f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f2c: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x119f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x119f30: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x119F30u;
    {
        const bool branch_taken_0x119f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F30u;
        // 0x119f34: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f30) {
            ctx->pc = 0x119E70u;
            return;
        }
    }
    ctx->pc = 0x119F38u;
    // 0x119f38: 0x10000223  b           . + 4 + (0x223 << 2)
    ctx->pc = 0x119F38u;
    {
        const bool branch_taken_0x119f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F38u;
        // 0x119f3c: 0xdfbf0100  ld          $ra, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f38) {
            ctx->pc = 0x11A7C8u;
            return;
        }
    }
    ctx->pc = 0x119F40u;
}
