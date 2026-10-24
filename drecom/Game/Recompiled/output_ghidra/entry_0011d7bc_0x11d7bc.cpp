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

// Function: entry_0011d7bc
// Address: 0x11d7bc - 0x11d800
void entry_0011d7bc_0x11d7bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d7bc_0x11d7bc");
#endif

    ctx->pc = 0x11d7bcu;

    // 0x11d7bc: 0x1012  mflo        $v0
    ctx->pc = 0x11d7bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11d7c0: 0x1810  mfhi        $v1
    ctx->pc = 0x11d7c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11d7c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d7c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11d7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11d7cc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d7ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d7d0: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x11d7d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11d7d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11d7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11d7d8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d7d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d7dc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D7DCu;
    {
        const bool branch_taken_0x11d7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d7dc) {
            ctx->pc = 0x11D7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D7DCu;
            // 0x11d7e0: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D804u;
            return;
        }
    }
    ctx->pc = 0x11D7E4u;
    // 0x11d7e4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11d7e8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11d7e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d7ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D7ECu;
    {
        const bool branch_taken_0x11d7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D7ECu;
        // 0x11d7f0: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7ec) {
            ctx->pc = 0x11D804u;
            return;
        }
    }
    ctx->pc = 0x11D7F4u;
    // 0x11d7f4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d7f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d7f8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D7F8u;
    {
        const bool branch_taken_0x11d7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d7f8) {
            ctx->pc = 0x11D7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D7F8u;
            // 0x11d7fc: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D800u;
            return;
        }
    }
    ctx->pc = 0x11D800u;
}
