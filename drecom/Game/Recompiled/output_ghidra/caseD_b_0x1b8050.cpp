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
// Address: 0x1b8050 - 0x1b807c
void caseD_b_0x1b8050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1b8050");
#endif

    ctx->pc = 0x1b8050u;

    // 0x1b8050: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b8050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8054: 0x8cc71b6c  lw          $a3, 0x1B6C($a2)
    ctx->pc = 0x1b8054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7020)));
    // 0x1b8058: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8058u;
    {
        const bool branch_taken_0x1b8058 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8058) {
            ctx->pc = 0x1B807Cu;
            return;
        }
    }
    ctx->pc = 0x1B8060u;
    // 0x1b8060: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b8060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b8064: 0x8c281a98  lw          $t0, 0x1A98($at)
    ctx->pc = 0x1b8064u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b8068: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1b8068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x1b806c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b806cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b8070: 0x1022824  and         $a1, $t0, $v0
    ctx->pc = 0x1b8070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1b8074: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b8074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b8078: 0xac251a98  sw          $a1, 0x1A98($at)
    ctx->pc = 0x1b8078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1b807cu;
}
