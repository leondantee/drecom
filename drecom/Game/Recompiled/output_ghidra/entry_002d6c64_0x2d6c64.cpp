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

// Function: entry_002d6c64
// Address: 0x2d6c64 - 0x2d6c7c
void entry_002d6c64_0x2d6c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d6c64_0x2d6c64");
#endif

    ctx->pc = 0x2d6c64u;

    // 0x2d6c64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6c68: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2d6c68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d6c6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6c70: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d6c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d6c74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d6c78: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d6c78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d6c7cu;
}
