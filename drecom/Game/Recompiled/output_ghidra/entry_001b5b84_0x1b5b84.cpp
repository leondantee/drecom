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

// Function: entry_001b5b84
// Address: 0x1b5b84 - 0x1b5bb0
void entry_001b5b84_0x1b5b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5b84_0x1b5b84");
#endif

    ctx->pc = 0x1b5b84u;

    // 0x1b5b84: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5b88: 0x8ca21b6c  lw          $v0, 0x1B6C($a1)
    ctx->pc = 0x1b5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7020)));
    // 0x1b5b8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5B8Cu;
    {
        const bool branch_taken_0x1b5b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5b8c) {
            ctx->pc = 0x1B5BB0u;
            return;
        }
    }
    ctx->pc = 0x1B5B94u;
    // 0x1b5b94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b5b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b5b98: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1b5b98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b5b9c: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1b5b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x1b5ba0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b5ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b5ba4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b5ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b5ba8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b5ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b5bac: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1b5bacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1b5bb0u;
}
