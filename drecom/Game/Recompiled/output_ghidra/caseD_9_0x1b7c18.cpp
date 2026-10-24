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
// Address: 0x1b7c18 - 0x1b7c44
void caseD_9_0x1b7c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1b7c18");
#endif

    ctx->pc = 0x1b7c18u;

    // 0x1b7c18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7c1c: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1b7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x1b7c20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7C20u;
    {
        const bool branch_taken_0x1b7c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7c20) {
            ctx->pc = 0x1B7C44u;
            return;
        }
    }
    ctx->pc = 0x1B7C28u;
    // 0x1b7c28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b7c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b7c2c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1b7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b7c30: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1b7c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x1b7c34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b7c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b7c38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b7c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b7c3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b7c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b7c40: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1b7c40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1b7c44u;
}
