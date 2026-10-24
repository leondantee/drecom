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
// Address: 0x1b65e8 - 0x1b6614
void caseD_7_0x1b65e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1b65e8");
#endif

    ctx->pc = 0x1b65e8u;

    // 0x1b65e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b65e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b65ec: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1b65ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x1b65f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B65F0u;
    {
        const bool branch_taken_0x1b65f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b65f0) {
            ctx->pc = 0x1B6614u;
            return;
        }
    }
    ctx->pc = 0x1B65F8u;
    // 0x1b65f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b65f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b65fc: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1b65fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b6600: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1b6600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x1b6604: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b6604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b6608: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1b6608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1b660c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b660cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b6610: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1b6610u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1b6614u;
}
