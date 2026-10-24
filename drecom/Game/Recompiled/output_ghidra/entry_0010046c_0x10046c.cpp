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

// Function: entry_0010046c
// Address: 0x10046c - 0x1004ac
void entry_0010046c_0x10046c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010046c_0x10046c");
#endif

    ctx->pc = 0x10046cu;

    // 0x10046c: 0x33b38  dsll        $a3, $v1, 12
    ctx->pc = 0x10046cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 12);
    // 0x100470: 0x84c60004  lh          $a2, 0x4($a2)
    ctx->pc = 0x100470u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x100474: 0x1012  mflo        $v0
    ctx->pc = 0x100474u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x100478: 0x72822818  mult1       $a1, $s4, $v0
    ctx->pc = 0x100478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x10047c: 0x502018  mult        $a0, $v0, $s0
    ctx->pc = 0x10047cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x100480: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x100480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x100484: 0x64a30290  daddiu      $v1, $a1, 0x290
    ctx->pc = 0x100484u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)656);
    // 0x100488: 0x255f8  dsll        $t2, $v0, 23
    ctx->pc = 0x100488u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << 23);
    // 0x10048c: 0x30650fff  andi        $a1, $v1, 0xFFF
    ctx->pc = 0x10048cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x100490: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x100490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x100494: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x100494u;
    {
        const bool branch_taken_0x100494 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100494u;
        // 0x100498: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100494) {
            ctx->pc = 0x1004ACu;
            return;
        }
    }
    ctx->pc = 0x10049Cu;
    // 0x10049c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x10049cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1004a0: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x1004a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x1004a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1004A4u;
    {
        const bool branch_taken_0x1004a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1004A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004A4u;
        // 0x1004a8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004a4) {
            ctx->pc = 0x1004B4u;
            return;
        }
    }
    ctx->pc = 0x1004ACu;
}
