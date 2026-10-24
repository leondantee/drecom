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

// Function: entry_0015b1d0
// Address: 0x15b1d0 - 0x15b21c
void entry_0015b1d0_0x15b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b1d0_0x15b1d0");
#endif

    ctx->pc = 0x15b1d0u;

    // 0x15b1d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b1d4: 0x8c231a54  lw          $v1, 0x1A54($at)
    ctx->pc = 0x15b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A54u));
    // 0x15b1d8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x15b1dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b1e0: 0xac231a54  sw          $v1, 0x1A54($at)
    ctx->pc = 0x15b1e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A54u, _value); } while (0);
    // 0x15b1e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b1e8: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x15b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x15b1ec: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x15b1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x15b1f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b1f4: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x15b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x15b1f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15b1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15b1fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b200: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x15b200u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    // 0x15b204: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b208: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x15b208u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x15b20c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x15b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x15b210: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15b210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15b214: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b218: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x15b218u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    ctx->pc = 0x15b21cu;
}
