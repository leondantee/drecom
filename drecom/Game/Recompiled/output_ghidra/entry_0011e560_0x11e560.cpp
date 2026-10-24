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

// Function: entry_0011e560
// Address: 0x11e560 - 0x11e59c
void entry_0011e560_0x11e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e560_0x11e560");
#endif

    ctx->pc = 0x11e560u;

    // 0x11e560: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x11e560u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e564: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x11e564u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x11e568: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x11e568u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x11e56c: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x11e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x11e570: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x11e570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e574: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x11e574u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11e578: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x11e578u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x11e57c: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x11e57cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e580: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x11e580u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e584: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x11e584u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x11e588: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x11e588u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x11e58c: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x11e58cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x11e590: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x11e590u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x11e594: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E594u;
    {
        const bool branch_taken_0x11e594 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e594) {
            ctx->pc = 0x11E598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E594u;
            // 0x11e598: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E59Cu;
            return;
        }
    }
    ctx->pc = 0x11E59Cu;
}
