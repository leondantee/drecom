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

// Function: entry_00350bbc
// Address: 0x350bbc - 0x350be8
void entry_00350bbc_0x350bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00350bbc_0x350bbc");
#endif

    ctx->pc = 0x350bbcu;

    // 0x350bbc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350bc0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350bc4: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x350bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x350bc8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x350bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x350bcc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350bd0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350bd4: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x350bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x350bd8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x350bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x350bdc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350be0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350be4: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x350be4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x350be8u;
}
