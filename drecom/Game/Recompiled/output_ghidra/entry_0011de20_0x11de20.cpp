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

// Function: entry_0011de20
// Address: 0x11de20 - 0x11de78
void entry_0011de20_0x11de20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011de20_0x11de20");
#endif

    ctx->pc = 0x11de20u;

    // 0x11de20: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x11de20u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de24: 0x1012  mflo        $v0
    ctx->pc = 0x11de24u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11de28: 0x1810  mfhi        $v1
    ctx->pc = 0x11de28u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11de2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x11de2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11de30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11de34: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11de34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11de38: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11de38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11de3c: 0xea3018  mult        $a2, $a3, $t2
    ctx->pc = 0x11de3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11de40: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11de40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11de44: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11de44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11de48: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11DE48u;
    {
        const bool branch_taken_0x11de48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11de48) {
            ctx->pc = 0x11DE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DE48u;
            // 0x11de4c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DE7Cu;
            return;
        }
    }
    ctx->pc = 0x11DE50u;
    // 0x11de50: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11de50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11de54: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x11de54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11de58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DE58u;
    {
        const bool branch_taken_0x11de58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE58u;
        // 0x11de5c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de58) {
            ctx->pc = 0x11DE78u;
            return;
        }
    }
    ctx->pc = 0x11DE60u;
    // 0x11de60: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11de60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11de64: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DE64u;
    {
        const bool branch_taken_0x11de64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11de64) {
            ctx->pc = 0x11DE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DE64u;
            // 0x11de68: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DE7Cu;
            return;
        }
    }
    ctx->pc = 0x11DE6Cu;
    // 0x11de6c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x11de6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11de70: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11de70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11de74: 0x0  nop
    ctx->pc = 0x11de74u;
    // NOP
    ctx->pc = 0x11de78u;
}
