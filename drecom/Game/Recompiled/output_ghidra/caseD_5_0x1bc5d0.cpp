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
// Address: 0x1bc5d0 - 0x1bc5fc
void caseD_5_0x1bc5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1bc5d0");
#endif

    ctx->pc = 0x1bc5d0u;

    // 0x1bc5d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc5d4: 0x8c651b6c  lw          $a1, 0x1B6C($v1)
    ctx->pc = 0x1bc5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1bc5d8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC5D8u;
    {
        const bool branch_taken_0x1bc5d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc5d8) {
            ctx->pc = 0x1BC5FCu;
            return;
        }
    }
    ctx->pc = 0x1BC5E0u;
    // 0x1bc5e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bc5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bc5e4: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1bc5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1bc5e8: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1bc5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x1bc5ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bc5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bc5f0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1bc5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bc5f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bc5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bc5f8: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1bc5f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1bc5fcu;
}
