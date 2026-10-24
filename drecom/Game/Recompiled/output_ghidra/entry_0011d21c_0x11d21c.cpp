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

// Function: entry_0011d21c
// Address: 0x11d21c - 0x11d270
void entry_0011d21c_0x11d21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d21c_0x11d21c");
#endif

    ctx->pc = 0x11d21cu;

    // 0x11d21c: 0x1012  mflo        $v0
    ctx->pc = 0x11d21cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11d220: 0x1810  mfhi        $v1
    ctx->pc = 0x11d220u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11d224: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x11d224u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d228: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d22c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11d22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11d230: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d230u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d234: 0x12b3818  mult        $a3, $t1, $t3
    ctx->pc = 0x11d234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11d238: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11d238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11d23c: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11d23cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11d240: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11D240u;
    {
        const bool branch_taken_0x11d240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d240) {
            ctx->pc = 0x11D244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D240u;
            // 0x11d244: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D274u;
            return;
        }
    }
    ctx->pc = 0x11D248u;
    // 0x11d248: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11d248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11d24c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x11d24cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11d250: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11D250u;
    {
        const bool branch_taken_0x11d250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D250u;
        // 0x11d254: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d250) {
            ctx->pc = 0x11D270u;
            return;
        }
    }
    ctx->pc = 0x11D258u;
    // 0x11d258: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x11d258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11d25c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D25Cu;
    {
        const bool branch_taken_0x11d25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d25c) {
            ctx->pc = 0x11D260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D25Cu;
            // 0x11d260: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D274u;
            return;
        }
    }
    ctx->pc = 0x11D264u;
    // 0x11d264: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x11d264u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x11d268: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11d268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11d26c: 0x0  nop
    ctx->pc = 0x11d26cu;
    // NOP
    ctx->pc = 0x11d270u;
}
