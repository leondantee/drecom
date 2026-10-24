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

// Function: entry_00207ed0
// Address: 0x207ed0 - 0x207eec
void entry_00207ed0_0x207ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207ed0_0x207ed0");
#endif

    ctx->pc = 0x207ed0u;

    // 0x207ed0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x207ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x207ed4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x207ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x207ed8: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x207ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x207edc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x207edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x207ee0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x207ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x207ee4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x207ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x207ee8: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x207ee8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x207eecu;
}
