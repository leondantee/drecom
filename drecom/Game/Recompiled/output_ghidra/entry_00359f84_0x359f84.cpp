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

// Function: entry_00359f84
// Address: 0x359f84 - 0x359fb8
void entry_00359f84_0x359f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359f84_0x359f84");
#endif

    ctx->pc = 0x359f84u;

    // 0x359f84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x359f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x359f88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359f8c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x359f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x359f90: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359f94: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x359f94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x359f98: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359f9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x359f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x359fa0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359fa4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x359fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x359fa8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359fac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x359facu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x359fb0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x359FB0u;
    {
        const bool branch_taken_0x359fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359fb0) {
            ctx->pc = 0x35A1F8u;
            return;
        }
    }
    ctx->pc = 0x359FB8u;
}
