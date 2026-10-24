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

// Function: entry_00110520
// Address: 0x110520 - 0x110540
void entry_00110520_0x110520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110520_0x110520");
#endif

    ctx->pc = 0x110520u;

    // 0x110520: 0x26025280  addiu       $v0, $s0, 0x5280
    ctx->pc = 0x110520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 21120));
    // 0x110524: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x110524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110528: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x110528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x11052c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x11052Cu;
    {
        const bool branch_taken_0x11052c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11052Cu;
        // 0x110530: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11052c) {
            ctx->pc = 0x110568u;
            return;
        }
    }
    ctx->pc = 0x110534u;
    // 0x110534: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x110534u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x110538: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x110538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x11053c: 0x24e45280  addiu       $a0, $a3, 0x5280
    ctx->pc = 0x11053cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 21120));
    ctx->pc = 0x110540u;
}
