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

// Function: entry_0011e32c
// Address: 0x11e32c - 0x11e378
void entry_0011e32c_0x11e32c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e32c_0x11e32c");
#endif

    ctx->pc = 0x11e32cu;

    // 0x11e32c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x11e32cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e330: 0x1012  mflo        $v0
    ctx->pc = 0x11e330u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e334: 0x1810  mfhi        $v1
    ctx->pc = 0x11e334u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11e338: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11e338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11e33c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11e33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11e340: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11e340u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11e344: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x11e344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11e348: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11e348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11e34c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11e34cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11e350: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11E350u;
    {
        const bool branch_taken_0x11e350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e350) {
            ctx->pc = 0x11E354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E350u;
            // 0x11e354: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E37Cu;
            return;
        }
    }
    ctx->pc = 0x11E358u;
    // 0x11e358: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11e358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11e35c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11e35cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e360: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E360u;
    {
        const bool branch_taken_0x11e360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e360) {
            ctx->pc = 0x11E364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E360u;
            // 0x11e364: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E37Cu;
            return;
        }
    }
    ctx->pc = 0x11E368u;
    // 0x11e368: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11e368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11e36c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x11E36Cu;
    {
        const bool branch_taken_0x11e36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e36c) {
            ctx->pc = 0x11E370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E36Cu;
            // 0x11e370: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E378u;
            return;
        }
    }
    ctx->pc = 0x11E374u;
    // 0x11e374: 0x0  nop
    ctx->pc = 0x11e374u;
    // NOP
    ctx->pc = 0x11e378u;
}
