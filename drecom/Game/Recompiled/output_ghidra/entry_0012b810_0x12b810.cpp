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

// Function: entry_0012b810
// Address: 0x12b810 - 0x12b848
void entry_0012b810_0x12b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b810_0x12b810");
#endif

    ctx->pc = 0x12b810u;

    // 0x12b810: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12b810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b814: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b818: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12b818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b81c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x12b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12b820: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b824: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12b824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b828: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b82c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12b82cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b830: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b834: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12b834u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b838: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b83c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12b83cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12b840: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12B840u;
    {
        const bool branch_taken_0x12b840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b840) {
            ctx->pc = 0x12B888u;
            return;
        }
    }
    ctx->pc = 0x12B848u;
}
