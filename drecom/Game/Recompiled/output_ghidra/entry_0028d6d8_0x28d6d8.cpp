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

// Function: entry_0028d6d8
// Address: 0x28d6d8 - 0x28d6ec
void entry_0028d6d8_0x28d6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028d6d8_0x28d6d8");
#endif

    ctx->pc = 0x28d6d8u;

    // 0x28d6d8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d6dc: 0x8c2620f8  lw          $a2, 0x20F8($at)
    ctx->pc = 0x28d6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6220F8u));
    // 0x28d6e0: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x28d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28d6e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d6e8: 0xac2320f8  sw          $v1, 0x20F8($at)
    ctx->pc = 0x28d6e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    ctx->pc = 0x28d6ecu;
}
