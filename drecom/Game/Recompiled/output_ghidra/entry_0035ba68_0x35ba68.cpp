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

// Function: entry_0035ba68
// Address: 0x35ba68 - 0x35ba80
void entry_0035ba68_0x35ba68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035ba68_0x35ba68");
#endif

    ctx->pc = 0x35ba68u;

    // 0x35ba68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ba6c: 0xac40128c  sw          $zero, 0x128C($v0)
    ctx->pc = 0x35ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 0));
    // 0x35ba70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ba74: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x35ba74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35ba78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35ba7c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x35ba7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x35ba80u;
}
