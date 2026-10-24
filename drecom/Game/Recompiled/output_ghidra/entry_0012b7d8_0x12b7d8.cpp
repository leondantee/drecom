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

// Function: entry_0012b7d8
// Address: 0x12b7d8 - 0x12b810
void entry_0012b7d8_0x12b7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b7d8_0x12b7d8");
#endif

    ctx->pc = 0x12b7d8u;

    // 0x12b7d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b7dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b7e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12b7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b7e4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x12b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12b7e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b7ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12b7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b7f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b7f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12b7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b7f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b7fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12b7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b800: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b804: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12b804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12b808: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x12B808u;
    {
        const bool branch_taken_0x12b808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b808) {
            ctx->pc = 0x12B888u;
            return;
        }
    }
    ctx->pc = 0x12B810u;
}
