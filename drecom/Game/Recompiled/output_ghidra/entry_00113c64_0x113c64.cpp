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

// Function: entry_00113c64
// Address: 0x113c64 - 0x113c7c
void entry_00113c64_0x113c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113c64_0x113c64");
#endif

    ctx->pc = 0x113c64u;

    // 0x113c64: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x113c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x113c68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113c6c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x113c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113c70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x113c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x113c74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113C74u;
    {
        const bool branch_taken_0x113c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C74u;
        // 0x113c78: 0x3063007f  andi        $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c74) {
            ctx->pc = 0x113C90u;
            return;
        }
    }
    ctx->pc = 0x113C7Cu;
}
