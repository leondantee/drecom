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

// Function: entry_0011e094
// Address: 0x11e094 - 0x11e0e8
void entry_0011e094_0x11e094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e094_0x11e094");
#endif

    ctx->pc = 0x11e094u;

    // 0x11e094: 0x1012  mflo        $v0
    ctx->pc = 0x11e094u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e098: 0x1810  mfhi        $v1
    ctx->pc = 0x11e098u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11e09c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x11e09cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11e0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11e0a4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11e0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11e0a8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11e0a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11e0ac: 0x1453818  mult        $a3, $t2, $a1
    ctx->pc = 0x11e0acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11e0b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11e0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11e0b4: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11e0b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e0b8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11E0B8u;
    {
        const bool branch_taken_0x11e0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e0b8) {
            ctx->pc = 0x11E0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E0B8u;
            // 0x11e0bc: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E0ECu;
            return;
        }
    }
    ctx->pc = 0x11E0C0u;
    // 0x11e0c0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11e0c4: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11e0c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e0c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E0C8u;
    {
        const bool branch_taken_0x11e0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0C8u;
        // 0x11e0cc: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0c8) {
            ctx->pc = 0x11E0E8u;
            return;
        }
    }
    ctx->pc = 0x11E0D0u;
    // 0x11e0d0: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11e0d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e0d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E0D4u;
    {
        const bool branch_taken_0x11e0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e0d4) {
            ctx->pc = 0x11E0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E0D4u;
            // 0x11e0d8: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E0ECu;
            return;
        }
    }
    ctx->pc = 0x11E0DCu;
    // 0x11e0dc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x11e0dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x11e0e0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11e0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11e0e4: 0x0  nop
    ctx->pc = 0x11e0e4u;
    // NOP
    ctx->pc = 0x11e0e8u;
}
