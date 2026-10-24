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

// Function: entry_0011e38c
// Address: 0x11e38c - 0x11e3d0
void entry_0011e38c_0x11e38c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e38c_0x11e38c");
#endif

    ctx->pc = 0x11e38cu;

    // 0x11e38c: 0x1012  mflo        $v0
    ctx->pc = 0x11e38cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e390: 0x1810  mfhi        $v1
    ctx->pc = 0x11e390u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11e394: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11e394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11e398: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11e398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11e39c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11e39cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11e3a0: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x11e3a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11e3a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11e3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11e3a8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11e3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11e3ac: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E3ACu;
    {
        const bool branch_taken_0x11e3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e3ac) {
            ctx->pc = 0x11E3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E3ACu;
            // 0x11e3b0: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E3D4u;
            return;
        }
    }
    ctx->pc = 0x11E3B4u;
    // 0x11e3b4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11e3b8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11e3b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e3bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E3BCu;
    {
        const bool branch_taken_0x11e3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E3BCu;
        // 0x11e3c0: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3bc) {
            ctx->pc = 0x11E3D4u;
            return;
        }
    }
    ctx->pc = 0x11E3C4u;
    // 0x11e3c4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11e3c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11e3c8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E3C8u;
    {
        const bool branch_taken_0x11e3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e3c8) {
            ctx->pc = 0x11E3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E3C8u;
            // 0x11e3cc: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E3D0u;
            return;
        }
    }
    ctx->pc = 0x11E3D0u;
}
