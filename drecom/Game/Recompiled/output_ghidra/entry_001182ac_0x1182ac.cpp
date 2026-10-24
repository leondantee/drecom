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

// Function: entry_001182ac
// Address: 0x1182ac - 0x1182d8
void entry_001182ac_0x1182ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001182ac_0x1182ac");
#endif

    ctx->pc = 0x1182acu;

    // 0x1182ac: 0x52050012  beql        $s0, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1182ACu;
    {
        const bool branch_taken_0x1182ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x1182ac) {
            ctx->pc = 0x1182B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1182ACu;
            // 0x1182b0: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1182F8u;
            return;
        }
    }
    ctx->pc = 0x1182B4u;
    // 0x1182b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1182b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1182b8: 0x444024  and         $t0, $v0, $a0
    ctx->pc = 0x1182b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1182bc: 0x111182b  sltu        $v1, $t0, $s1
    ctx->pc = 0x1182bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1182c0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1182C0u;
    {
        const bool branch_taken_0x1182c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1182C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182C0u;
        // 0x1182c4: 0x2281023  subu        $v0, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182c0) {
            ctx->pc = 0x1182D8u;
            return;
        }
    }
    ctx->pc = 0x1182C8u;
    // 0x1182c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1182c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1182cc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1182ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1182d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1182D0u;
    {
        const bool branch_taken_0x1182d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1182D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182D0u;
        // 0x1182d4: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182d0) {
            ctx->pc = 0x1182E4u;
            return;
        }
    }
    ctx->pc = 0x1182D8u;
}
