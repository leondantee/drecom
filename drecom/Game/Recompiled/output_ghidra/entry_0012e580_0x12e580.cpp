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

// Function: entry_0012e580
// Address: 0x12e580 - 0x12e5a0
void entry_0012e580_0x12e580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e580_0x12e580");
#endif

    ctx->pc = 0x12e580u;

    // 0x12e580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12e580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e584: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e588: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x12e588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x12e58c: 0xa0430d80  sb          $v1, 0xD80($v0)
    ctx->pc = 0x12e58cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3456), (uint8_t)GPR_U32(ctx, 3));
    // 0x12e590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12e590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e594: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e598: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x12e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x12e59c: 0xa0430e10  sb          $v1, 0xE10($v0)
    ctx->pc = 0x12e59cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3600), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x12e5a0u;
}
