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

// Function: entry_001bf5b4
// Address: 0x1bf5b4 - 0x1bf5d0
void entry_001bf5b4_0x1bf5b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf5b4_0x1bf5b4");
#endif

    ctx->pc = 0x1bf5b4u;

    // 0x1bf5b4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bf5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bf5b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf5bc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1bf5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bf5c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf5c4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bf5c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bf5c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf5cc: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bf5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1bf5d0u;
}
