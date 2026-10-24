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
// Address: 0x1bb690 - 0x1bb6bc
void caseD_9_0x1bb690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1bb690");
#endif

    ctx->pc = 0x1bb690u;

    // 0x1bb690: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb694: 0x8c441b6c  lw          $a0, 0x1B6C($v0)
    ctx->pc = 0x1bb694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x1bb698: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB698u;
    {
        const bool branch_taken_0x1bb698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb698) {
            ctx->pc = 0x1BB6BCu;
            return;
        }
    }
    ctx->pc = 0x1BB6A0u;
    // 0x1bb6a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bb6a4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1bb6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1bb6a8: 0x3c06ff7f  lui         $a2, 0xFF7F
    ctx->pc = 0x1bb6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65407 << 16));
    // 0x1bb6ac: 0x34c5ffff  ori         $a1, $a2, 0xFFFF
    ctx->pc = 0x1bb6acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1bb6b0: 0x453824  and         $a3, $v0, $a1
    ctx->pc = 0x1bb6b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1bb6b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bb6b8: 0xac271a98  sw          $a3, 0x1A98($at)
    ctx->pc = 0x1bb6b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1bb6bcu;
}
