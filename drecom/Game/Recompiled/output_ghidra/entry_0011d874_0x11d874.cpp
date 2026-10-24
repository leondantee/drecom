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

// Function: entry_0011d874
// Address: 0x11d874 - 0x11d8b4
void entry_0011d874_0x11d874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d874_0x11d874");
#endif

    ctx->pc = 0x11d874u;

    // 0x11d874: 0x1012  mflo        $v0
    ctx->pc = 0x11d874u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11d878: 0x1810  mfhi        $v1
    ctx->pc = 0x11d878u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11d87c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d880: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11d880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11d884: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d884u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d888: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x11d888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11d88c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11d88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11d890: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d894: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11D894u;
    {
        const bool branch_taken_0x11d894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d894) {
            ctx->pc = 0x11D8B4u;
            return;
        }
    }
    ctx->pc = 0x11D89Cu;
    // 0x11d89c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11d8a0: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11d8a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d8a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D8A4u;
    {
        const bool branch_taken_0x11d8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8A4u;
        // 0x11d8a8: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8a4) {
            ctx->pc = 0x11D8B4u;
            return;
        }
    }
    ctx->pc = 0x11D8ACu;
    // 0x11d8ac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D8ACu;
    {
        const bool branch_taken_0x11d8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d8ac) {
            ctx->pc = 0x11D8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D8ACu;
            // 0x11d8b0: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D8B4u;
            return;
        }
    }
    ctx->pc = 0x11D8B4u;
}
