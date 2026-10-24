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

// Function: entry_001003c4
// Address: 0x1003c4 - 0x100404
void entry_001003c4_0x1003c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001003c4_0x1003c4");
#endif

    ctx->pc = 0x1003c4u;

    // 0x1003c4: 0x33b38  dsll        $a3, $v1, 12
    ctx->pc = 0x1003c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 12);
    // 0x1003c8: 0x84c60004  lh          $a2, 0x4($a2)
    ctx->pc = 0x1003c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1003cc: 0x1012  mflo        $v0
    ctx->pc = 0x1003ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1003d0: 0x72822818  mult1       $a1, $s4, $v0
    ctx->pc = 0x1003d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1003d4: 0x502018  mult        $a0, $v0, $s0
    ctx->pc = 0x1003d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1003d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1003d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1003dc: 0x64a3027c  daddiu      $v1, $a1, 0x27C
    ctx->pc = 0x1003dcu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)636);
    // 0x1003e0: 0x255f8  dsll        $t2, $v0, 23
    ctx->pc = 0x1003e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << 23);
    // 0x1003e4: 0x30650fff  andi        $a1, $v1, 0xFFF
    ctx->pc = 0x1003e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1003e8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1003e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1003ec: 0x10c0002f  beqz        $a2, . + 4 + (0x2F << 2)
    ctx->pc = 0x1003ECu;
    {
        const bool branch_taken_0x1003ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1003F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003ECu;
        // 0x1003f0: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1003ec) {
            ctx->pc = 0x1004ACu;
            return;
        }
    }
    ctx->pc = 0x1003F4u;
    // 0x1003f4: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1003f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1003f8: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x1003f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x1003fc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1003FCu;
    {
        const bool branch_taken_0x1003fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003FCu;
        // 0x100400: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1003fc) {
            ctx->pc = 0x1004B4u;
            return;
        }
    }
    ctx->pc = 0x100404u;
}
