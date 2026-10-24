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

// Function: entry_0024c1e4
// Address: 0x24c1e4 - 0x24c1f8
void entry_0024c1e4_0x24c1e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c1e4_0x24c1e4");
#endif

    ctx->pc = 0x24c1e4u;

    // 0x24c1e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24c1e8: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24c1ec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24c1ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c1f0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24c1f4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24c1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x24c1f8u;
}
