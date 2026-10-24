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

// Function: entry_0011dc94
// Address: 0x11dc94 - 0x11dce8
void entry_0011dc94_0x11dc94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dc94_0x11dc94");
#endif

    ctx->pc = 0x11dc94u;

    // 0x11dc94: 0x1012  mflo        $v0
    ctx->pc = 0x11dc94u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11dc98: 0x1810  mfhi        $v1
    ctx->pc = 0x11dc98u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11dc9c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x11dc9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dca0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11dca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11dca4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11dca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11dca8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11dca8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11dcac: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x11dcacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11dcb0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11dcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11dcb4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11dcb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11dcb8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11DCB8u;
    {
        const bool branch_taken_0x11dcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dcb8) {
            ctx->pc = 0x11DCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DCB8u;
            // 0x11dcbc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DCECu;
            return;
        }
    }
    ctx->pc = 0x11DCC0u;
    // 0x11dcc0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11dcc4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x11dcc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11dcc8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DCC8u;
    {
        const bool branch_taken_0x11dcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCC8u;
        // 0x11dccc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dcc8) {
            ctx->pc = 0x11DCE8u;
            return;
        }
    }
    ctx->pc = 0x11DCD0u;
    // 0x11dcd0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11dcd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11dcd4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DCD4u;
    {
        const bool branch_taken_0x11dcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dcd4) {
            ctx->pc = 0x11DCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DCD4u;
            // 0x11dcd8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DCECu;
            return;
        }
    }
    ctx->pc = 0x11DCDCu;
    // 0x11dcdc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x11dcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11dce0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11dce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11dce4: 0x0  nop
    ctx->pc = 0x11dce4u;
    // NOP
    ctx->pc = 0x11dce8u;
}
