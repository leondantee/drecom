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

// Function: entry_0011dcf4
// Address: 0x11dcf4 - 0x11dd40
void entry_0011dcf4_0x11dcf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dcf4_0x11dcf4");
#endif

    ctx->pc = 0x11dcf4u;

    // 0x11dcf4: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x11dcf4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11dcf8: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x11dcf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x11dcfc: 0x1012  mflo        $v0
    ctx->pc = 0x11dcfcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11dd00: 0x1810  mfhi        $v1
    ctx->pc = 0x11dd00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11dd04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11dd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11dd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11dd0c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11dd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11dd10: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11dd10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11dd14: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x11dd14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11dd18: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11dd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11dd1c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11dd1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11dd20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DD20u;
    {
        const bool branch_taken_0x11dd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD20u;
        // 0x11dd24: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd20) {
            ctx->pc = 0x11DD40u;
            return;
        }
    }
    ctx->pc = 0x11DD28u;
    // 0x11dd28: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x11dd28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11dd2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DD2Cu;
    {
        const bool branch_taken_0x11dd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD2Cu;
        // 0x11dd30: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd2c) {
            ctx->pc = 0x11DD40u;
            return;
        }
    }
    ctx->pc = 0x11DD34u;
    // 0x11dd34: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11dd34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11dd38: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DD38u;
    {
        const bool branch_taken_0x11dd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11dd38) {
            ctx->pc = 0x11DD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DD38u;
            // 0x11dd3c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DD40u;
            return;
        }
    }
    ctx->pc = 0x11DD40u;
}
