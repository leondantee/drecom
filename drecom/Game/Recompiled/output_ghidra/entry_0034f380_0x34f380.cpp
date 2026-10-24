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

// Function: entry_0034f380
// Address: 0x34f380 - 0x34f3a8
void entry_0034f380_0x34f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034f380_0x34f380");
#endif

    ctx->pc = 0x34f380u;

    // 0x34f380: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f384: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f388: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x34f388u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f38c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f390: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f394: 0xa040006f  sb          $zero, 0x6F($v0)
    ctx->pc = 0x34f394u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f398: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34f398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34f39c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f3a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f3a4: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x34f3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x34f3a8u;
}
