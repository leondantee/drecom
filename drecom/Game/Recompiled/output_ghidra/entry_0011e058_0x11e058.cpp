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

// Function: entry_0011e058
// Address: 0x11e058 - 0x11e094
void entry_0011e058_0x11e058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e058_0x11e058");
#endif

    ctx->pc = 0x11e058u;

    // 0x11e058: 0xc82804  sllv        $a1, $t0, $a2
    ctx->pc = 0x11e058u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x11e05c: 0xec2006  srlv        $a0, $t4, $a3
    ctx->pc = 0x11e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x11e060: 0xe91806  srlv        $v1, $t1, $a3
    ctx->pc = 0x11e060u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x11e064: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x11e064u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x11e068: 0xcb1004  sllv        $v0, $t3, $a2
    ctx->pc = 0x11e068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x11e06c: 0x445825  or          $t3, $v0, $a0
    ctx->pc = 0x11e06cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x11e070: 0xa34025  or          $t0, $a1, $v1
    ctx->pc = 0x11e070u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x11e074: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x11e074u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x11e078: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x11e078u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x11e07c: 0x83402  srl         $a2, $t0, 16
    ctx->pc = 0x11e07cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11e080: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x11e080u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x11e084: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x11e084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x11e088: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x11e088u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x11e08c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E08Cu;
    {
        const bool branch_taken_0x11e08c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e08c) {
            ctx->pc = 0x11E090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E08Cu;
            // 0x11e090: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E094u;
            return;
        }
    }
    ctx->pc = 0x11E094u;
}
