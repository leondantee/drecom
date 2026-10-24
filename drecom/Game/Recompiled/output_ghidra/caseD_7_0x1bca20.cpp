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

// Function: caseD_7
// Address: 0x1bca20 - 0x1bca4c
void caseD_7_0x1bca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1bca20");
#endif

    ctx->pc = 0x1bca20u;

    // 0x1bca20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bca24: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1bca24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x1bca28: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCA28u;
    {
        const bool branch_taken_0x1bca28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bca28) {
            ctx->pc = 0x1BCA4Cu;
            return;
        }
    }
    ctx->pc = 0x1BCA30u;
    // 0x1bca30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bca30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bca34: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1bca34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1bca38: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1bca38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x1bca3c: 0x3471ffff  ori         $s1, $v1, 0xFFFF
    ctx->pc = 0x1bca3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bca40: 0x919824  and         $s3, $a0, $s1
    ctx->pc = 0x1bca40u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x1bca44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bca44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bca48: 0xac331a98  sw          $s3, 0x1A98($at)
    ctx->pc = 0x1bca48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1bca4cu;
}
