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

// Function: entry_0011e6a8
// Address: 0x11e6a8 - 0x11e6e0
void entry_0011e6a8_0x11e6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e6a8_0x11e6a8");
#endif

    ctx->pc = 0x11e6a8u;

    // 0x11e6a8: 0x1300000e  beqz        $t8, . + 4 + (0xE << 2)
    ctx->pc = 0x11E6A8u;
    {
        const bool branch_taken_0x11e6a8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6A8u;
        // 0x11e6ac: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6a8) {
            ctx->pc = 0x11E6E4u;
            return;
        }
    }
    ctx->pc = 0x11E6B0u;
    // 0x11e6b0: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x11e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x11e6b4: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x11e6b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11e6b8: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x11e6b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e6bc: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x11e6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x11e6c0: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x11e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e6c4: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x11e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e6c8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x11e6c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x11e6cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11e6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11e6d0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11e6d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11e6d4: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x11e6d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11e6d8: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x11e6d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x11e6dc: 0x0  nop
    ctx->pc = 0x11e6dcu;
    // NOP
    ctx->pc = 0x11e6e0u;
}
