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
// Address: 0x1bb3f8 - 0x1bb424
void caseD_7_0x1bb3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1bb3f8");
#endif

    ctx->pc = 0x1bb3f8u;

    // 0x1bb3f8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb3fc: 0x8ca31b6c  lw          $v1, 0x1B6C($a1)
    ctx->pc = 0x1bb3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7020)));
    // 0x1bb400: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB400u;
    {
        const bool branch_taken_0x1bb400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb400) {
            ctx->pc = 0x1BB424u;
            return;
        }
    }
    ctx->pc = 0x1BB408u;
    // 0x1bb408: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bb40c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1bb40cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1bb410: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1bb410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x1bb414: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bb414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bb418: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1bb418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bb41c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bb420: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1bb420u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1bb424u;
}
