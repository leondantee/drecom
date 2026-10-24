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

// Function: entry_0011a60c
// Address: 0x11a60c - 0x11a628
void entry_0011a60c_0x11a60c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a60c_0x11a60c");
#endif

    ctx->pc = 0x11a60cu;

    // 0x11a60c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x11a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11a610: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x11a610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a614: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x11a614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11a618: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x11A618u;
    {
        const bool branch_taken_0x11a618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A618u;
        // 0x11a61c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a618) {
            ctx->pc = 0x11A558u;
            return;
        }
    }
    ctx->pc = 0x11A620u;
    // 0x11a620: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x11A620u;
    {
        const bool branch_taken_0x11a620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A620u;
        // 0x11a624: 0xdfbf0100  ld          $ra, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a620) {
            ctx->pc = 0x11A7C8u;
            return;
        }
    }
    ctx->pc = 0x11A628u;
}
