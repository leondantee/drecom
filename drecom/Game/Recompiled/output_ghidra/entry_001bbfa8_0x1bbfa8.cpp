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

// Function: entry_001bbfa8
// Address: 0x1bbfa8 - 0x1bbfd4
void entry_001bbfa8_0x1bbfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbfa8_0x1bbfa8");
#endif

    ctx->pc = 0x1bbfa8u;

    // 0x1bbfa8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbfac: 0x8c641b6c  lw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1bbfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1bbfb0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBFB0u;
    {
        const bool branch_taken_0x1bbfb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbfb0) {
            ctx->pc = 0x1BBFD4u;
            return;
        }
    }
    ctx->pc = 0x1BBFB8u;
    // 0x1bbfb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbfb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bbfbc: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x1bbfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1bbfc0: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x1bbfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
    // 0x1bbfc4: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x1bbfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1bbfc8: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x1bbfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1bbfcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bbfd0: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1bbfd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1bbfd4u;
}
