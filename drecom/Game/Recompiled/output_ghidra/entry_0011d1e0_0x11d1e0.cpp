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

// Function: entry_0011d1e0
// Address: 0x11d1e0 - 0x11d21c
void entry_0011d1e0_0x11d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d1e0_0x11d1e0");
#endif

    ctx->pc = 0x11d1e0u;

    // 0x11d1e0: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x11d1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x11d1e4: 0xec2006  srlv        $a0, $t4, $a3
    ctx->pc = 0x11d1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x11d1e8: 0xe81806  srlv        $v1, $t0, $a3
    ctx->pc = 0x11d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x11d1ec: 0xea3806  srlv        $a3, $t2, $a3
    ctx->pc = 0x11d1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x11d1f0: 0xca1004  sllv        $v0, $t2, $a2
    ctx->pc = 0x11d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x11d1f4: 0x445025  or          $t2, $v0, $a0
    ctx->pc = 0x11d1f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x11d1f8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x11d1f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x11d1fc: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x11d1fcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x11d200: 0xc84004  sllv        $t0, $t0, $a2
    ctx->pc = 0x11d200u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x11d204: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x11d204u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x11d208: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x11d208u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x11d20c: 0x30abffff  andi        $t3, $a1, 0xFFFF
    ctx->pc = 0x11d20cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x11d210: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x11d210u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x11d214: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D214u;
    {
        const bool branch_taken_0x11d214 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d214) {
            ctx->pc = 0x11D218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D214u;
            // 0x11d218: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D21Cu;
            return;
        }
    }
    ctx->pc = 0x11D21Cu;
}
