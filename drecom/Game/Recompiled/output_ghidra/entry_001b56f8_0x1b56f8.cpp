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

// Function: entry_001b56f8
// Address: 0x1b56f8 - 0x1b5730
void entry_001b56f8_0x1b56f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b56f8_0x1b56f8");
#endif

    ctx->pc = 0x1b56f8u;

    // 0x1b56f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b56f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b56fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b56fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5700: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1b5700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b5704: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5708: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1b5708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b570c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b570cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5710: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1b5710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b5714: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5718: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b5718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b571c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b571cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b5720: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5724: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1b5724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1b5728: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B5728u;
    {
        const bool branch_taken_0x1b5728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5728) {
            ctx->pc = 0x1B5794u;
            return;
        }
    }
    ctx->pc = 0x1B5730u;
}
