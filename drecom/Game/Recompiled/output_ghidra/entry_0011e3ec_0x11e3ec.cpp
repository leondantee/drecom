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

// Function: entry_0011e3ec
// Address: 0x11e3ec - 0x11e430
void entry_0011e3ec_0x11e3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e3ec_0x11e3ec");
#endif

    ctx->pc = 0x11e3ecu;

    // 0x11e3ec: 0x1012  mflo        $v0
    ctx->pc = 0x11e3ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e3f0: 0x1810  mfhi        $v1
    ctx->pc = 0x11e3f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11e3f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11e3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11e3f8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11e3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11e3fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11e3fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11e400: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x11e400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11e404: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11e404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11e408: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11e408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11e40c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E40Cu;
    {
        const bool branch_taken_0x11e40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e40c) {
            ctx->pc = 0x11E410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E40Cu;
            // 0x11e410: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E434u;
            return;
        }
    }
    ctx->pc = 0x11E414u;
    // 0x11e414: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11e414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11e418: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11e418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e41c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E41Cu;
    {
        const bool branch_taken_0x11e41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e41c) {
            ctx->pc = 0x11E420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E41Cu;
            // 0x11e420: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E434u;
            return;
        }
    }
    ctx->pc = 0x11E424u;
    // 0x11e424: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11e424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11e428: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E428u;
    {
        const bool branch_taken_0x11e428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e428) {
            ctx->pc = 0x11E42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E428u;
            // 0x11e42c: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E430u;
            return;
        }
    }
    ctx->pc = 0x11E430u;
}
