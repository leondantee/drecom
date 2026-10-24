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

// Function: entry_0011e2f8
// Address: 0x11e2f8 - 0x11e32c
void entry_0011e2f8_0x11e2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e2f8_0x11e2f8");
#endif

    ctx->pc = 0x11e2f8u;

    // 0x11e2f8: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x11e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e2fc: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x11e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x11e300: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x11e300u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x11e304: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x11e304u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11e308: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x11e308u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e30c: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x11e30cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e310: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x11e310u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11e314: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x11e314u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x11e318: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x11e318u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x11e31c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x11e31cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e320: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x11e320u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x11e324: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E324u;
    {
        const bool branch_taken_0x11e324 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e324) {
            ctx->pc = 0x11E328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E324u;
            // 0x11e328: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E32Cu;
            return;
        }
    }
    ctx->pc = 0x11E32Cu;
}
