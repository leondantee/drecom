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

// Function: entry_0011d0f4
// Address: 0x11d0f4 - 0x11d140
void entry_0011d0f4_0x11d0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d0f4_0x11d0f4");
#endif

    ctx->pc = 0x11d0f4u;

    // 0x11d0f4: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x11d0f4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11d0f8: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x11d0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x11d0fc: 0x1012  mflo        $v0
    ctx->pc = 0x11d0fcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11d100: 0x1810  mfhi        $v1
    ctx->pc = 0x11d100u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11d104: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d108: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d10c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11d10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11d110: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d110u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d114: 0xa93018  mult        $a2, $a1, $t1
    ctx->pc = 0x11d114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11d118: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11d118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11d11c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d11cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d120: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11D120u;
    {
        const bool branch_taken_0x11d120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D120u;
        // 0x11d124: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d120) {
            ctx->pc = 0x11D140u;
            return;
        }
    }
    ctx->pc = 0x11D128u;
    // 0x11d128: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11d128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d12c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D12Cu;
    {
        const bool branch_taken_0x11d12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D12Cu;
        // 0x11d130: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d12c) {
            ctx->pc = 0x11D140u;
            return;
        }
    }
    ctx->pc = 0x11D134u;
    // 0x11d134: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d138: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D138u;
    {
        const bool branch_taken_0x11d138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d138) {
            ctx->pc = 0x11D13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D138u;
            // 0x11d13c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D140u;
            return;
        }
    }
    ctx->pc = 0x11D140u;
}
