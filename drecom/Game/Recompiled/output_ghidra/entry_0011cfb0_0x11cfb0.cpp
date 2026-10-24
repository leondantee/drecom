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

// Function: entry_0011cfb0
// Address: 0x11cfb0 - 0x11d008
void entry_0011cfb0_0x11cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cfb0_0x11cfb0");
#endif

    ctx->pc = 0x11cfb0u;

    // 0x11cfb0: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x11cfb0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfb4: 0x1012  mflo        $v0
    ctx->pc = 0x11cfb4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11cfb8: 0x1810  mfhi        $v1
    ctx->pc = 0x11cfb8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11cfbc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x11cfbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfc0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11cfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11cfc4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11cfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11cfc8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11cfc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11cfcc: 0xeb3018  mult        $a2, $a3, $t3
    ctx->pc = 0x11cfccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11cfd0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11cfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11cfd4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11cfd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11cfd8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11CFD8u;
    {
        const bool branch_taken_0x11cfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cfd8) {
            ctx->pc = 0x11CFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CFD8u;
            // 0x11cfdc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D00Cu;
            return;
        }
    }
    ctx->pc = 0x11CFE0u;
    // 0x11cfe0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11cfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11cfe4: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11cfe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11cfe8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11CFE8u;
    {
        const bool branch_taken_0x11cfe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CFE8u;
        // 0x11cfec: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfe8) {
            ctx->pc = 0x11D008u;
            return;
        }
    }
    ctx->pc = 0x11CFF0u;
    // 0x11cff0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11cff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11cff4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CFF4u;
    {
        const bool branch_taken_0x11cff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cff4) {
            ctx->pc = 0x11CFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CFF4u;
            // 0x11cff8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D00Cu;
            return;
        }
    }
    ctx->pc = 0x11CFFCu;
    // 0x11cffc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x11cffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11d000: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11d000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11d004: 0x0  nop
    ctx->pc = 0x11d004u;
    // NOP
    ctx->pc = 0x11d008u;
}
