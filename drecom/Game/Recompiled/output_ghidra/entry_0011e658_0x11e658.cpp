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

// Function: entry_0011e658
// Address: 0x11e658 - 0x11e698
void entry_0011e658_0x11e658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e658_0x11e658");
#endif

    ctx->pc = 0x11e658u;

    // 0x11e658: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x11e658u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x11e65c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11e65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11e660: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11e660u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11e664: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x11e664u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e668: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x11e668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x11e66c: 0x480019  multu       $v0, $t0
    ctx->pc = 0x11e66cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11e670: 0x3810  mfhi        $a3
    ctx->pc = 0x11e670u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x11e674: 0x3012  mflo        $a2
    ctx->pc = 0x11e674u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x11e678: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x11e678u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e67c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E67Cu;
    {
        const bool branch_taken_0x11e67c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E67Cu;
        // 0x11e680: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e67c) {
            ctx->pc = 0x11E698u;
            return;
        }
    }
    ctx->pc = 0x11E684u;
    // 0x11e684: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E684u;
    {
        const bool branch_taken_0x11e684 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x11E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E684u;
        // 0x11e688: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e684) {
            ctx->pc = 0x11E6A8u;
            return;
        }
    }
    ctx->pc = 0x11E68Cu;
    // 0x11e68c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E68Cu;
    {
        const bool branch_taken_0x11e68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e68c) {
            ctx->pc = 0x11E6A8u;
            return;
        }
    }
    ctx->pc = 0x11E694u;
    // 0x11e694: 0x0  nop
    ctx->pc = 0x11e694u;
    // NOP
    ctx->pc = 0x11e698u;
}
