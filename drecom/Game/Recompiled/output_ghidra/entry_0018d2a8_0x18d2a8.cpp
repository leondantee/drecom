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

// Function: entry_0018d2a8
// Address: 0x18d2a8 - 0x18d2b4
void entry_0018d2a8_0x18d2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d2a8_0x18d2a8");
#endif

    ctx->pc = 0x18d2a8u;

    // 0x18d2a8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x18d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x18d2ac: 0x3442001b  ori         $v0, $v0, 0x1B
    ctx->pc = 0x18d2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
    // 0x18d2b0: 0xfe020ab0  sd          $v0, 0xAB0($s0)
    ctx->pc = 0x18d2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2736), GPR_U64(ctx, 2));
    ctx->pc = 0x18d2b4u;
}
