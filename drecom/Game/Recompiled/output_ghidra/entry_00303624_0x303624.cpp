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

// Function: entry_00303624
// Address: 0x303624 - 0x303654
void entry_00303624_0x303624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303624_0x303624");
#endif

    ctx->pc = 0x303624u;

    // 0x303624: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x303624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303628: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30362c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30362cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x303630: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x303630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x303634: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303638: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x303638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30363c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30363cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303640: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x303640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x303644: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303648: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x303648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30364c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30364cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303650: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x303650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x303654u;
}
