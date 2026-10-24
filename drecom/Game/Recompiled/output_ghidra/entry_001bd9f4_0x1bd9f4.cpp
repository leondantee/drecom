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

// Function: entry_001bd9f4
// Address: 0x1bd9f4 - 0x1bda20
void entry_001bd9f4_0x1bd9f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd9f4_0x1bd9f4");
#endif

    ctx->pc = 0x1bd9f4u;

    // 0x1bd9f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd9f8: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1bd9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1bd9fc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD9FCu;
    {
        const bool branch_taken_0x1bd9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd9fc) {
            ctx->pc = 0x1BDA20u;
            return;
        }
    }
    ctx->pc = 0x1BDA04u;
    // 0x1bda04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bda04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bda08: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1bda08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1bda0c: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1bda0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x1bda10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bda10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bda14: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1bda14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bda18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bda18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bda1c: 0xac251a98  sw          $a1, 0x1A98($at)
    ctx->pc = 0x1bda1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1bda20u;
}
