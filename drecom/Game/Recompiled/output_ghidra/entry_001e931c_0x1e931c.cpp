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

// Function: entry_001e931c
// Address: 0x1e931c - 0x1e9330
void entry_001e931c_0x1e931c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e931c_0x1e931c");
#endif

    ctx->pc = 0x1e931cu;

    // 0x1e931c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e931cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e9320: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x1e9320u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x1e9324: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x1e9324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x1e9328: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e9328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e932c: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x1e932cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    ctx->pc = 0x1e9330u;
}
