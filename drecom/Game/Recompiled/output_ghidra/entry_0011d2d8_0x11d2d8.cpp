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

// Function: entry_0011d2d8
// Address: 0x11d2d8 - 0x11d318
void entry_0011d2d8_0x11d2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d2d8_0x11d2d8");
#endif

    ctx->pc = 0x11d2d8u;

    // 0x11d2d8: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x11d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x11d2dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11d2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11d2e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11d2e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11d2e4: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x11d2e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x11d2e8: 0xa80019  multu       $a1, $t0
    ctx->pc = 0x11d2e8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11d2ec: 0x3010  mfhi        $a2
    ctx->pc = 0x11d2ecu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x11d2f0: 0x2012  mflo        $a0
    ctx->pc = 0x11d2f0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x11d2f4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d2f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d2f8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x11D2F8u;
    {
        const bool branch_taken_0x11d2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d2f8) {
            ctx->pc = 0x11D2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D2F8u;
            // 0x11d2fc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D318u;
            return;
        }
    }
    ctx->pc = 0x11D300u;
    // 0x11d300: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11D300u;
    {
        const bool branch_taken_0x11d300 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x11D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D300u;
        // 0x11d304: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d300) {
            ctx->pc = 0x11D320u;
            return;
        }
    }
    ctx->pc = 0x11D308u;
    // 0x11d308: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x11d308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11d30c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D30Cu;
    {
        const bool branch_taken_0x11d30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D30Cu;
        // 0x11d310: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d30c) {
            ctx->pc = 0x11D324u;
            return;
        }
    }
    ctx->pc = 0x11D314u;
    // 0x11d314: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11d314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x11d318u;
}
