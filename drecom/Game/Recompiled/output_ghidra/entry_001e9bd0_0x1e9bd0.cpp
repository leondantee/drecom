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

// Function: entry_001e9bd0
// Address: 0x1e9bd0 - 0x1e9c04
void entry_001e9bd0_0x1e9bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9bd0_0x1e9bd0");
#endif

    ctx->pc = 0x1e9bd0u;

    // 0x1e9bd0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1e9bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e9bd4: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9bd8: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x1e9bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e9bdc: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9be0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1e9be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9be4: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9be8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1e9be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9bec: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9bf0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1e9bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9bf4: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9bf8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1e9bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1e9bfc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E9BFCu;
    {
        const bool branch_taken_0x1e9bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9bfc) {
            ctx->pc = 0x1E9C30u;
            return;
        }
    }
    ctx->pc = 0x1E9C04u;
}
