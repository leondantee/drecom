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

// Function: entry_0011a458
// Address: 0x11a458 - 0x11a470
void entry_0011a458_0x11a458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a458_0x11a458");
#endif

    ctx->pc = 0x11a458u;

    // 0x11a458: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x11A458u;
    {
        const bool branch_taken_0x11a458 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A458u;
        // 0x11a45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a458) {
            ctx->pc = 0x11A498u;
            return;
        }
    }
    ctx->pc = 0x11A460u;
    // 0x11a460: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11a460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a464: 0x9303e  dsrl32      $a2, $t1, 0
    ctx->pc = 0x11a464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x11a468: 0x933823  subu        $a3, $a0, $s3
    ctx->pc = 0x11a468u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x11a46c: 0xb34023  subu        $t0, $a1, $s3
    ctx->pc = 0x11a46cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->pc = 0x11a470u;
}
