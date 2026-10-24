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

// Function: entry_00158cc4
// Address: 0x158cc4 - 0x158cf0
void entry_00158cc4_0x158cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158cc4_0x158cc4");
#endif

    ctx->pc = 0x158cc4u;

    // 0x158cc4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158cc8: 0xac20f840  sw          $zero, -0x7C0($at)
    ctx->pc = 0x158cc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EF840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF840u, _value); } while (0);
    // 0x158ccc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158cd0: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x158cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x158cd4: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x158cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x158cd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x158cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x158cdc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x158cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x158ce0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158ce4: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x158ce4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x158ce8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158cec: 0xa0204f11  sb          $zero, 0x4F11($at)
    ctx->pc = 0x158cecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    ctx->pc = 0x158cf0u;
}
