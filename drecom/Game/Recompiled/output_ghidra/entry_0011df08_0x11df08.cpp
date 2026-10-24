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

// Function: entry_0011df08
// Address: 0x11df08 - 0x11df58
void entry_0011df08_0x11df08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011df08_0x11df08");
#endif

    ctx->pc = 0x11df08u;

    // 0x11df08: 0x1012  mflo        $v0
    ctx->pc = 0x11df08u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11df0c: 0x1810  mfhi        $v1
    ctx->pc = 0x11df0cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11df10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x11df10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df14: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11df14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11df18: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11df18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11df1c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11df1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11df20: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x11df20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11df24: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11df24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11df28: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11df28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11df2c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x11DF2Cu;
    {
        const bool branch_taken_0x11df2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11df2c) {
            ctx->pc = 0x11DF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DF2Cu;
            // 0x11df30: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DF5Cu;
            return;
        }
    }
    ctx->pc = 0x11DF34u;
    // 0x11df34: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11df34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11df38: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x11df38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11df3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DF3Cu;
    {
        const bool branch_taken_0x11df3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF3Cu;
        // 0x11df40: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df3c) {
            ctx->pc = 0x11DF58u;
            return;
        }
    }
    ctx->pc = 0x11DF44u;
    // 0x11df44: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11df44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11df48: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DF48u;
    {
        const bool branch_taken_0x11df48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11df48) {
            ctx->pc = 0x11DF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DF48u;
            // 0x11df4c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DF5Cu;
            return;
        }
    }
    ctx->pc = 0x11DF50u;
    // 0x11df50: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x11df50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11df54: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11df54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    ctx->pc = 0x11df58u;
}
