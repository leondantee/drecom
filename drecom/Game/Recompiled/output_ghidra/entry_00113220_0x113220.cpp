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

// Function: entry_00113220
// Address: 0x113220 - 0x113248
void entry_00113220_0x113220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113220_0x113220");
#endif

    ctx->pc = 0x113220u;

    // 0x113220: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x113220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x113224: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x113224u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113228: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x113228u;
    {
        const bool branch_taken_0x113228 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113228u;
        // 0x11322c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113228) {
            ctx->pc = 0x1132A4u;
            return;
        }
    }
    ctx->pc = 0x113230u;
    // 0x113230: 0x2f49023  subu        $s2, $s7, $s4
    ctx->pc = 0x113230u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x113234: 0x640001c  bltz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x113234u;
    {
        const bool branch_taken_0x113234 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x113238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113234u;
        // 0x113238: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113234) {
            ctx->pc = 0x1132A8u;
            return;
        }
    }
    ctx->pc = 0x11323Cu;
    // 0x11323c: 0x2691ffff  addiu       $s1, $s4, -0x1
    ctx->pc = 0x11323cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x113240: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x113240u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x113244: 0x0  nop
    ctx->pc = 0x113244u;
    // NOP
    ctx->pc = 0x113248u;
}
