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
// Address: 0x1b6ce0 - 0x1b6d0c
void ps2_default_0x1b6ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1b6ce0");
#endif

    ctx->pc = 0x1b6ce0u;

    // 0x1b6ce0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b6ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6ce4: 0x8cc71b6c  lw          $a3, 0x1B6C($a2)
    ctx->pc = 0x1b6ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7020)));
    // 0x1b6ce8: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6CE8u;
    {
        const bool branch_taken_0x1b6ce8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6ce8) {
            ctx->pc = 0x1B6D0Cu;
            return;
        }
    }
    ctx->pc = 0x1B6CF0u;
    // 0x1b6cf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b6cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b6cf4: 0x8c281a98  lw          $t0, 0x1A98($at)
    ctx->pc = 0x1b6cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b6cf8: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1b6cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x1b6cfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b6cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b6d00: 0x1032824  and         $a1, $t0, $v1
    ctx->pc = 0x1b6d00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x1b6d04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b6d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b6d08: 0xac251a98  sw          $a1, 0x1A98($at)
    ctx->pc = 0x1b6d08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1b6d0cu;
}
