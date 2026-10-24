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

// Function: entry_0011ce24
// Address: 0x11ce24 - 0x11ce78
void entry_0011ce24_0x11ce24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ce24_0x11ce24");
#endif

    ctx->pc = 0x11ce24u;

    // 0x11ce24: 0x1012  mflo        $v0
    ctx->pc = 0x11ce24u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11ce28: 0x1810  mfhi        $v1
    ctx->pc = 0x11ce28u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11ce2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x11ce2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11ce30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11ce34: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11ce34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11ce38: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11ce38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11ce3c: 0xe93018  mult        $a2, $a3, $t1
    ctx->pc = 0x11ce3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11ce40: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11ce40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11ce44: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11ce44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11ce48: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11CE48u;
    {
        const bool branch_taken_0x11ce48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ce48) {
            ctx->pc = 0x11CE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CE48u;
            // 0x11ce4c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CE7Cu;
            return;
        }
    }
    ctx->pc = 0x11CE50u;
    // 0x11ce50: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11ce54: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11ce54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11ce58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11CE58u;
    {
        const bool branch_taken_0x11ce58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE58u;
        // 0x11ce5c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce58) {
            ctx->pc = 0x11CE78u;
            return;
        }
    }
    ctx->pc = 0x11CE60u;
    // 0x11ce60: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11ce60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11ce64: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CE64u;
    {
        const bool branch_taken_0x11ce64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ce64) {
            ctx->pc = 0x11CE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CE64u;
            // 0x11ce68: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CE7Cu;
            return;
        }
    }
    ctx->pc = 0x11CE6Cu;
    // 0x11ce6c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x11ce6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11ce70: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11ce74: 0x0  nop
    ctx->pc = 0x11ce74u;
    // NOP
    ctx->pc = 0x11ce78u;
}
