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

// Function: entry_0011e0f4
// Address: 0x11e0f4 - 0x11e14c
void entry_0011e0f4_0x11e0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e0f4_0x11e0f4");
#endif

    ctx->pc = 0x11e0f4u;

    // 0x11e0f4: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x11e0f4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11e0f8: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x11e0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x11e0fc: 0x1012  mflo        $v0
    ctx->pc = 0x11e0fcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e100: 0x1810  mfhi        $v1
    ctx->pc = 0x11e100u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11e104: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11e104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e108: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11e108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11e10c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11e10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11e110: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11e110u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11e114: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x11e114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11e118: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11e118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11e11c: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11e11cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e120: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11E120u;
    {
        const bool branch_taken_0x11e120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E120u;
        // 0x11e124: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e120) {
            ctx->pc = 0x11E150u;
            return;
        }
    }
    ctx->pc = 0x11E128u;
    // 0x11e128: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11e128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11e12c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11e12cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e130: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E130u;
    {
        const bool branch_taken_0x11e130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E130u;
        // 0x11e134: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e130) {
            ctx->pc = 0x11E14Cu;
            return;
        }
    }
    ctx->pc = 0x11E138u;
    // 0x11e138: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11e138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e13c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E13Cu;
    {
        const bool branch_taken_0x11e13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E13Cu;
        // 0x11e140: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e13c) {
            ctx->pc = 0x11E150u;
            return;
        }
    }
    ctx->pc = 0x11E144u;
    // 0x11e144: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11e144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11e148: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11e148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->pc = 0x11e14cu;
}
