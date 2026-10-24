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

// Function: entry_0025a2b4
// Address: 0x25a2b4 - 0x25a2c8
void entry_0025a2b4_0x25a2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a2b4_0x25a2b4");
#endif

    ctx->pc = 0x25a2b4u;

    // 0x25a2b4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a2b8: 0xa0601083  sb          $zero, 0x1083($v1)
    ctx->pc = 0x25a2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4227), (uint8_t)GPR_U32(ctx, 0));
    // 0x25a2bc: 0x300400ff  andi        $a0, $zero, 0xFF
    ctx->pc = 0x25a2bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x25a2c0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a2c4: 0xa0641084  sb          $a0, 0x1084($v1)
    ctx->pc = 0x25a2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4228), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x25a2c8u;
}
