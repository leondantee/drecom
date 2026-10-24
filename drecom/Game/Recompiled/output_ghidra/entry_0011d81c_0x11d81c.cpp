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

// Function: entry_0011d81c
// Address: 0x11d81c - 0x11d860
void entry_0011d81c_0x11d81c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d81c_0x11d81c");
#endif

    ctx->pc = 0x11d81cu;

    // 0x11d81c: 0x1012  mflo        $v0
    ctx->pc = 0x11d81cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11d820: 0x1810  mfhi        $v1
    ctx->pc = 0x11d820u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11d824: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d828: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11d828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11d82c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d82cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d830: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x11d830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11d834: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11d834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11d838: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d83c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D83Cu;
    {
        const bool branch_taken_0x11d83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d83c) {
            ctx->pc = 0x11D840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D83Cu;
            // 0x11d840: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D864u;
            return;
        }
    }
    ctx->pc = 0x11D844u;
    // 0x11d844: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11d844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11d848: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11d848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d84c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D84Cu;
    {
        const bool branch_taken_0x11d84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d84c) {
            ctx->pc = 0x11D850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D84Cu;
            // 0x11d850: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D864u;
            return;
        }
    }
    ctx->pc = 0x11D854u;
    // 0x11d854: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d858: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D858u;
    {
        const bool branch_taken_0x11d858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d858) {
            ctx->pc = 0x11D85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D858u;
            // 0x11d85c: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D860u;
            return;
        }
    }
    ctx->pc = 0x11D860u;
}
