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

// Function: entry_003457bc
// Address: 0x3457bc - 0x3457e4
void entry_003457bc_0x3457bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003457bc_0x3457bc");
#endif

    ctx->pc = 0x3457bcu;

    // 0x3457bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3457bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3457c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3457c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3457c4: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x3457c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3457c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3457c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3457cc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3457ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3457d0: 0xa040006f  sb          $zero, 0x6F($v0)
    ctx->pc = 0x3457d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x3457d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3457d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3457d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3457d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3457dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3457dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3457e0: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x3457e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x3457e4u;
}
