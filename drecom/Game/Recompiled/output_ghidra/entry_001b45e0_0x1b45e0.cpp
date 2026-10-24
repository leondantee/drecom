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

// Function: entry_001b45e0
// Address: 0x1b45e0 - 0x1b45f8
void entry_001b45e0_0x1b45e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b45e0_0x1b45e0");
#endif

    ctx->pc = 0x1b45e0u;

    // 0x1b45e0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b45e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b45e4: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x1b45e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b45e8: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b45e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b45ec: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b45f0: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1b45f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b45f4: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b45f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1b45f8u;
}
