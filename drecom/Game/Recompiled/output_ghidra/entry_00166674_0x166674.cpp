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

// Function: entry_00166674
// Address: 0x166674 - 0x166694
void entry_00166674_0x166674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166674_0x166674");
#endif

    ctx->pc = 0x166674u;

    // 0x166674: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x166674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166678: 0xae030a50  sw          $v1, 0xA50($s0)
    ctx->pc = 0x166678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2640), GPR_U32(ctx, 3));
    // 0x16667c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x16667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166680: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x166680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x166684: 0xae030a54  sw          $v1, 0xA54($s0)
    ctx->pc = 0x166684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2644), GPR_U32(ctx, 3));
    // 0x166688: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x166688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16668c: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x16668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x166690: 0xae030a58  sw          $v1, 0xA58($s0)
    ctx->pc = 0x166690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2648), GPR_U32(ctx, 3));
    ctx->pc = 0x166694u;
}
