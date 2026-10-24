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

// Function: entry_0011da2c
// Address: 0x11da2c - 0x11da84
void entry_0011da2c_0x11da2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011da2c_0x11da2c");
#endif

    ctx->pc = 0x11da2cu;

    // 0x11da2c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x11da2cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11da30: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x11da30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x11da34: 0x1012  mflo        $v0
    ctx->pc = 0x11da34u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11da38: 0x1810  mfhi        $v1
    ctx->pc = 0x11da38u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11da3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11da3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11da40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11da44: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11da44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11da48: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11da48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11da4c: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x11da4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11da50: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x11da50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11da54: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x11da54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11da58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11DA58u;
    {
        const bool branch_taken_0x11da58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA58u;
        // 0x11da5c: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da58) {
            ctx->pc = 0x11DA88u;
            return;
        }
    }
    ctx->pc = 0x11DA60u;
    // 0x11da60: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x11da60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x11da64: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x11da64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11da68: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DA68u;
    {
        const bool branch_taken_0x11da68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA68u;
        // 0x11da6c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da68) {
            ctx->pc = 0x11DA84u;
            return;
        }
    }
    ctx->pc = 0x11DA70u;
    // 0x11da70: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x11da70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11da74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DA74u;
    {
        const bool branch_taken_0x11da74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA74u;
        // 0x11da78: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da74) {
            ctx->pc = 0x11DA88u;
            return;
        }
    }
    ctx->pc = 0x11DA7Cu;
    // 0x11da7c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11da7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11da80: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x11da80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    ctx->pc = 0x11da84u;
}
