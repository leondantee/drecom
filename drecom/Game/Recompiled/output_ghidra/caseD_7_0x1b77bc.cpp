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
// Address: 0x1b77bc - 0x1b77e8
void caseD_7_0x1b77bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1b77bc");
#endif

    ctx->pc = 0x1b77bcu;

    // 0x1b77bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b77c0: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1b77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x1b77c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B77C4u;
    {
        const bool branch_taken_0x1b77c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b77c4) {
            ctx->pc = 0x1B77E8u;
            return;
        }
    }
    ctx->pc = 0x1B77CCu;
    // 0x1b77cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b77ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b77d0: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1b77d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b77d4: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1b77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x1b77d8: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1b77d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b77dc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1b77dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b77e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b77e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b77e4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1b77e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1b77e8u;
}
