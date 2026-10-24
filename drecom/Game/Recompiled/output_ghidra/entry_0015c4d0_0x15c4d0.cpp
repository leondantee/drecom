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

// Function: entry_0015c4d0
// Address: 0x15c4d0 - 0x15c500
void entry_0015c4d0_0x15c4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c4d0_0x15c4d0");
#endif

    ctx->pc = 0x15c4d0u;

    // 0x15c4d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c4d4: 0x90621561  lbu         $v0, 0x1561($v1)
    ctx->pc = 0x15c4d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5473)));
    // 0x15c4d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15c4dc: 0xa0621561  sb          $v0, 0x1561($v1)
    ctx->pc = 0x15c4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5473), (uint8_t)GPR_U32(ctx, 2));
    // 0x15c4e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c4e4: 0x90421561  lbu         $v0, 0x1561($v0)
    ctx->pc = 0x15c4e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5473)));
    // 0x15c4e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c4ec: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x15c4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x15c4f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C4F0u;
    {
        const bool branch_taken_0x15c4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c4f0) {
            ctx->pc = 0x15C500u;
            return;
        }
    }
    ctx->pc = 0x15C4F8u;
    // 0x15c4f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c4fc: 0xa0401561  sb          $zero, 0x1561($v0)
    ctx->pc = 0x15c4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5473), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x15c500u;
}
