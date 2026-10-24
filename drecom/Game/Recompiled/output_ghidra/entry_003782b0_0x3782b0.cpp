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

// Function: entry_003782b0
// Address: 0x3782b0 - 0x3782d0
void entry_003782b0_0x3782b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003782b0_0x3782b0");
#endif

    ctx->pc = 0x3782b0u;

    // 0x3782b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3782b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3782b4: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x3782b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x3782b8: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x3782b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x3782bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3782bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3782c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3782c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3782c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3782c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3782c8: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x3782c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x3782cc: 0x0  nop
    ctx->pc = 0x3782ccu;
    // NOP
    ctx->pc = 0x3782d0u;
}
