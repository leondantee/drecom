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

// Function: entry_0027b9b0
// Address: 0x27b9b0 - 0x27b9e8
void entry_0027b9b0_0x27b9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027b9b0_0x27b9b0");
#endif

    switch (ctx->pc) {
        case 0x27b9d0u: goto label_27b9d0;
        default: break;
    }

    ctx->pc = 0x27b9b0u;

    // 0x27b9b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b9b4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x27b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x27b9b8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x27b9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x27b9bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b9c0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x27b9c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x27b9c4: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x27b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x27b9c8: 0xc062010  jal         func_188040
    ctx->pc = 0x27B9C8u;
    SET_GPR_U32(ctx, 31, 0x27B9D0u);
    ctx->pc = 0x188040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188040u, 0x27B9C8u, 0x27B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B9D0u;
label_27b9d0:
    // 0x27b9d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b9d4: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x27b9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x27b9d8: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x27b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x27b9dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27b9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27b9e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b9e4: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x27b9e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x27b9e8u;
}
