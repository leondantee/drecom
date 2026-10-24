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

// Function: caseD_1
// Address: 0x1b597c - 0x1b59a8
void caseD_1_0x1b597c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1b597c");
#endif

    ctx->pc = 0x1b597cu;

    // 0x1b597c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5980: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1b5980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1b5984: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5984u;
    {
        const bool branch_taken_0x1b5984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5984) {
            ctx->pc = 0x1B59A8u;
            return;
        }
    }
    ctx->pc = 0x1B598Cu;
    // 0x1b598c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b598cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b5990: 0x8c261a98  lw          $a2, 0x1A98($at)
    ctx->pc = 0x1b5990u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b5994: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1b5994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x1b5998: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1b5998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b599c: 0xc42824  and         $a1, $a2, $a0
    ctx->pc = 0x1b599cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1b59a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b59a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b59a4: 0xac251a98  sw          $a1, 0x1A98($at)
    ctx->pc = 0x1b59a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1b59a8u;
}
