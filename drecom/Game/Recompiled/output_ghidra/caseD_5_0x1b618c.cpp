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

// Function: caseD_5
// Address: 0x1b618c - 0x1b61b8
void caseD_5_0x1b618c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1b618c");
#endif

    ctx->pc = 0x1b618cu;

    // 0x1b618c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b618cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6190: 0x8c431b6c  lw          $v1, 0x1B6C($v0)
    ctx->pc = 0x1b6190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x1b6194: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6194u;
    {
        const bool branch_taken_0x1b6194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6194) {
            ctx->pc = 0x1B61B8u;
            return;
        }
    }
    ctx->pc = 0x1B619Cu;
    // 0x1b619c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b619cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b61a0: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1b61a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b61a4: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1b61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x1b61a8: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x1b61a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b61ac: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1b61acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1b61b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b61b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b61b4: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1b61b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1b61b8u;
}
