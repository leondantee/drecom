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

// Function: entry_0034c814
// Address: 0x34c814 - 0x34c83c
void entry_0034c814_0x34c814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034c814_0x34c814");
#endif

    ctx->pc = 0x34c814u;

    // 0x34c814: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x34c814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34c818: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c81c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x34c81cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34c820: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c824: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34c824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34c828: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x34c828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x34c82c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34c830: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34c830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34c834: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x34c834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x34c838: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x34c838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x34c83cu;
}
