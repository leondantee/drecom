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

// Function: entry_0011f6cc
// Address: 0x11f6cc - 0x11f6e4
void entry_0011f6cc_0x11f6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f6cc_0x11f6cc");
#endif

    ctx->pc = 0x11f6ccu;

    // 0x11f6cc: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x11f6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x11f6d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F6D0u;
    {
        const bool branch_taken_0x11f6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6D0u;
        // 0x11f6d4: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6d0) {
            ctx->pc = 0x11F6E4u;
            return;
        }
    }
    ctx->pc = 0x11F6D8u;
    // 0x11f6d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11f6d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11F6DCu;
    {
        const bool branch_taken_0x11f6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6DCu;
        // 0x11f6e0: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6dc) {
            ctx->pc = 0x11F6F0u;
            return;
        }
    }
    ctx->pc = 0x11F6E4u;
}
