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

// Function: entry_0027d694
// Address: 0x27d694 - 0x27d6a8
void entry_0027d694_0x27d694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d694_0x27d694");
#endif

    ctx->pc = 0x27d694u;

    // 0x27d694: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27d694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27d698: 0x8c231b38  lw          $v1, 0x1B38($at)
    ctx->pc = 0x27d698u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B38u));
    // 0x27d69c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27d6a0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27d6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27d6a4: 0xac231b38  sw          $v1, 0x1B38($at)
    ctx->pc = 0x27d6a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B38u, _value); } while (0);
    ctx->pc = 0x27d6a8u;
}
