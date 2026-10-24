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

// Function: entry_0011d098
// Address: 0x11d098 - 0x11d0e8
void entry_0011d098_0x11d098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d098_0x11d098");
#endif

    ctx->pc = 0x11d098u;

    // 0x11d098: 0x1012  mflo        $v0
    ctx->pc = 0x11d098u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11d09c: 0x1810  mfhi        $v1
    ctx->pc = 0x11d09cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11d0a0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x11d0a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d0a8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11d0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11d0ac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d0acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d0b0: 0xe93018  mult        $a2, $a3, $t1
    ctx->pc = 0x11d0b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11d0b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11d0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11d0b8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d0b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d0bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x11D0BCu;
    {
        const bool branch_taken_0x11d0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d0bc) {
            ctx->pc = 0x11D0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D0BCu;
            // 0x11d0c0: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D0ECu;
            return;
        }
    }
    ctx->pc = 0x11D0C4u;
    // 0x11d0c4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11d0c8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11d0c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d0cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D0CCu;
    {
        const bool branch_taken_0x11d0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D0CCu;
        // 0x11d0d0: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0cc) {
            ctx->pc = 0x11D0E8u;
            return;
        }
    }
    ctx->pc = 0x11D0D4u;
    // 0x11d0d4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d0d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D0D8u;
    {
        const bool branch_taken_0x11d0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d0d8) {
            ctx->pc = 0x11D0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D0D8u;
            // 0x11d0dc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D0ECu;
            return;
        }
    }
    ctx->pc = 0x11D0E0u;
    // 0x11d0e0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x11d0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11d0e4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11d0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    ctx->pc = 0x11d0e8u;
}
