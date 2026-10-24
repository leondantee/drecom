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

// Function: caseD_b
// Address: 0x1baa7c - 0x1baaa8
void caseD_b_0x1baa7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1baa7c");
#endif

    ctx->pc = 0x1baa7cu;

    // 0x1baa7c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1baa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1baa80: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1baa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x1baa84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAA84u;
    {
        const bool branch_taken_0x1baa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baa84) {
            ctx->pc = 0x1BAAA8u;
            return;
        }
    }
    ctx->pc = 0x1BAA8Cu;
    // 0x1baa8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1baa8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1baa90: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1baa90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1baa94: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1baa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x1baa98: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x1baa98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1baa9c: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x1baa9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1baaa0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1baaa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1baaa4: 0xac251a98  sw          $a1, 0x1A98($at)
    ctx->pc = 0x1baaa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1baaa8u;
}
