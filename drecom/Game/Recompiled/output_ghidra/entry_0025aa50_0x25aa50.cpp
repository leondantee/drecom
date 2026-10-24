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

// Function: entry_0025aa50
// Address: 0x25aa50 - 0x25aa64
void entry_0025aa50_0x25aa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025aa50_0x25aa50");
#endif

    ctx->pc = 0x25aa50u;

    // 0x25aa50: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aa54: 0xa04009e5  sb          $zero, 0x9E5($v0)
    ctx->pc = 0x25aa54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2533), (uint8_t)GPR_U32(ctx, 0));
    // 0x25aa58: 0x300300ff  andi        $v1, $zero, 0xFF
    ctx->pc = 0x25aa58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x25aa5c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25aa60: 0xa04309e6  sb          $v1, 0x9E6($v0)
    ctx->pc = 0x25aa60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2534), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x25aa64u;
}
