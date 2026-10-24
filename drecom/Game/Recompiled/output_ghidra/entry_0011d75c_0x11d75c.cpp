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

// Function: entry_0011d75c
// Address: 0x11d75c - 0x11d7a8
void entry_0011d75c_0x11d75c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d75c_0x11d75c");
#endif

    ctx->pc = 0x11d75cu;

    // 0x11d75c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x11d75cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d760: 0x1012  mflo        $v0
    ctx->pc = 0x11d760u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11d764: 0x1810  mfhi        $v1
    ctx->pc = 0x11d764u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11d768: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d76c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11d76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11d770: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d770u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d774: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x11d774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11d778: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11d778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11d77c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d77cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d780: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11D780u;
    {
        const bool branch_taken_0x11d780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d780) {
            ctx->pc = 0x11D784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D780u;
            // 0x11d784: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D7ACu;
            return;
        }
    }
    ctx->pc = 0x11D788u;
    // 0x11d788: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11d788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11d78c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11d78cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d790: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D790u;
    {
        const bool branch_taken_0x11d790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d790) {
            ctx->pc = 0x11D794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D790u;
            // 0x11d794: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D7ACu;
            return;
        }
    }
    ctx->pc = 0x11D798u;
    // 0x11d798: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d79c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x11D79Cu;
    {
        const bool branch_taken_0x11d79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d79c) {
            ctx->pc = 0x11D7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D79Cu;
            // 0x11d7a0: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D7A8u;
            return;
        }
    }
    ctx->pc = 0x11D7A4u;
    // 0x11d7a4: 0x0  nop
    ctx->pc = 0x11d7a4u;
    // NOP
    ctx->pc = 0x11d7a8u;
}
