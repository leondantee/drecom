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

// Function: entry_0012b07c
// Address: 0x12b07c - 0x12b0a0
void entry_0012b07c_0x12b07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b07c_0x12b07c");
#endif

    ctx->pc = 0x12b07cu;

    // 0x12b07c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b080: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12b080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12b084: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12b084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12b088: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12b088u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12b08c: 0xa602008c  sh          $v0, 0x8C($s0)
    ctx->pc = 0x12b08cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 140), (uint16_t)GPR_U32(ctx, 2));
    // 0x12b090: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b094: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12b094u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12b098: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b09c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12b09cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12b0a0u;
}
