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

// Function: entry_0011d27c
// Address: 0x11d27c - 0x11d2d4
void entry_0011d27c_0x11d27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d27c_0x11d27c");
#endif

    ctx->pc = 0x11d27cu;

    // 0x11d27c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x11d27cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11d280: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x11d280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x11d284: 0x1012  mflo        $v0
    ctx->pc = 0x11d284u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11d288: 0x1810  mfhi        $v1
    ctx->pc = 0x11d288u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11d28c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11d28cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d290: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d294: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11d294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11d298: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d298u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d29c: 0xcb3818  mult        $a3, $a2, $t3
    ctx->pc = 0x11d29cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11d2a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11d2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11d2a4: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11d2a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11d2a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11D2A8u;
    {
        const bool branch_taken_0x11d2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2A8u;
        // 0x11d2ac: 0x9103c  dsll32      $v0, $t1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2a8) {
            ctx->pc = 0x11D2D8u;
            return;
        }
    }
    ctx->pc = 0x11D2B0u;
    // 0x11d2b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11d2b4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x11d2b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11d2b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D2B8u;
    {
        const bool branch_taken_0x11d2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2B8u;
        // 0x11d2bc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2b8) {
            ctx->pc = 0x11D2D4u;
            return;
        }
    }
    ctx->pc = 0x11D2C0u;
    // 0x11d2c0: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11d2c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11d2c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D2C4u;
    {
        const bool branch_taken_0x11d2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2C4u;
        // 0x11d2c8: 0x9103c  dsll32      $v0, $t1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2c4) {
            ctx->pc = 0x11D2D8u;
            return;
        }
    }
    ctx->pc = 0x11D2CCu;
    // 0x11d2cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11d2d0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11d2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->pc = 0x11d2d4u;
}
