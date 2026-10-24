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

// Function: entry_0030946c
// Address: 0x30946c - 0x309484
void entry_0030946c_0x30946c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030946c_0x30946c");
#endif

    ctx->pc = 0x30946cu;

    // 0x30946c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309470: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x309470u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x309474: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309478: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x309478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30947c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30947cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x309480: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x309480u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x309484u;
}
