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
// Address: 0x1b978c - 0x1b97b8
void ps2_default_0x1b978c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1b978c");
#endif

    ctx->pc = 0x1b978cu;

    // 0x1b978c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b978cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9790: 0x8c641b6c  lw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1b9790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1b9794: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9794u;
    {
        const bool branch_taken_0x1b9794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9794) {
            ctx->pc = 0x1B97B8u;
            return;
        }
    }
    ctx->pc = 0x1B979Cu;
    // 0x1b979c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b979cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b97a0: 0x8c321a98  lw          $s2, 0x1A98($at)
    ctx->pc = 0x1b97a0u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b97a4: 0x3c05ff7f  lui         $a1, 0xFF7F
    ctx->pc = 0x1b97a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65407 << 16));
    // 0x1b97a8: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x1b97a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1b97ac: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x1b97acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x1b97b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b97b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b97b4: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1b97b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1b97b8u;
}
