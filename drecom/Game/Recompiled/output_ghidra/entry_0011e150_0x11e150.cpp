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

// Function: entry_0011e150
// Address: 0x11e150 - 0x11e190
void entry_0011e150_0x11e150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e150_0x11e150");
#endif

    ctx->pc = 0x11e150u;

    // 0x11e150: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x11e150u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x11e154: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11e154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11e158: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11e158u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11e15c: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x11e15cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x11e160: 0xa90019  multu       $a1, $t1
    ctx->pc = 0x11e160u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11e164: 0x3010  mfhi        $a2
    ctx->pc = 0x11e164u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x11e168: 0x2012  mflo        $a0
    ctx->pc = 0x11e168u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x11e16c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11e16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11e170: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E170u;
    {
        const bool branch_taken_0x11e170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e170) {
            ctx->pc = 0x11E174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E170u;
            // 0x11e174: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E190u;
            return;
        }
    }
    ctx->pc = 0x11E178u;
    // 0x11e178: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E178u;
    {
        const bool branch_taken_0x11e178 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x11E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E178u;
        // 0x11e17c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e178) {
            ctx->pc = 0x11E198u;
            return;
        }
    }
    ctx->pc = 0x11E180u;
    // 0x11e180: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x11e180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11e184: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E184u;
    {
        const bool branch_taken_0x11e184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E184u;
        // 0x11e188: 0x5183c  dsll32      $v1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e184) {
            ctx->pc = 0x11E19Cu;
            return;
        }
    }
    ctx->pc = 0x11E18Cu;
    // 0x11e18c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11e18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x11e190u;
}
