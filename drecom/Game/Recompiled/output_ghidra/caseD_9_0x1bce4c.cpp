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

// Function: caseD_9
// Address: 0x1bce4c - 0x1bce78
void caseD_9_0x1bce4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1bce4c");
#endif

    ctx->pc = 0x1bce4cu;

    // 0x1bce4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bce50: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1bce50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x1bce54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCE54u;
    {
        const bool branch_taken_0x1bce54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bce54) {
            ctx->pc = 0x1BCE78u;
            return;
        }
    }
    ctx->pc = 0x1BCE5Cu;
    // 0x1bce5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bce5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bce60: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1bce60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1bce64: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1bce64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x1bce68: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1bce68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1bce6c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1bce6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bce70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bce70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bce74: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1bce74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1bce78u;
}
