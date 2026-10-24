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

// Function: entry_0011df64
// Address: 0x11df64 - 0x11dfb0
void entry_0011df64_0x11df64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011df64_0x11df64");
#endif

    ctx->pc = 0x11df64u;

    // 0x11df64: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x11df64u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11df68: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x11df68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x11df6c: 0x1012  mflo        $v0
    ctx->pc = 0x11df6cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11df70: 0x1810  mfhi        $v1
    ctx->pc = 0x11df70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11df74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11df74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11df78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11df7c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11df7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11df80: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11df80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11df84: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x11df84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11df88: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11df88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11df8c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11df8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11df90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DF90u;
    {
        const bool branch_taken_0x11df90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF90u;
        // 0x11df94: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df90) {
            ctx->pc = 0x11DFB0u;
            return;
        }
    }
    ctx->pc = 0x11DF98u;
    // 0x11df98: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x11df98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11df9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DF9Cu;
    {
        const bool branch_taken_0x11df9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF9Cu;
        // 0x11dfa0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df9c) {
            ctx->pc = 0x11DFB0u;
            return;
        }
    }
    ctx->pc = 0x11DFA4u;
    // 0x11dfa4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11dfa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11dfa8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DFA8u;
    {
        const bool branch_taken_0x11dfa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11dfa8) {
            ctx->pc = 0x11DFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DFA8u;
            // 0x11dfac: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DFB0u;
            return;
        }
    }
    ctx->pc = 0x11DFB0u;
}
