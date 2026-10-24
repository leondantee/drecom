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

// Function: default
// Address: 0x1be70c - 0x1be738
void ps2_default_0x1be70c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1be70c");
#endif

    ctx->pc = 0x1be70cu;

    // 0x1be70c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be710: 0x8c641b6c  lw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1be710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1be714: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE714u;
    {
        const bool branch_taken_0x1be714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be714) {
            ctx->pc = 0x1BE738u;
            return;
        }
    }
    ctx->pc = 0x1BE71Cu;
    // 0x1be71c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1be71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1be720: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1be720u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1be724: 0x3c05ff7f  lui         $a1, 0xFF7F
    ctx->pc = 0x1be724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65407 << 16));
    // 0x1be728: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x1be728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1be72c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1be72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1be730: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1be730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1be734: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1be734u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1be738u;
}
