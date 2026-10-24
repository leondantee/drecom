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

// Function: entry_001a4ea0
// Address: 0x1a4ea0 - 0x1a4ebc
void entry_001a4ea0_0x1a4ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4ea0_0x1a4ea0");
#endif

    ctx->pc = 0x1a4ea0u;

    // 0x1a4ea0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4ea4: 0x90630306  lbu         $v1, 0x306($v1)
    ctx->pc = 0x1a4ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 774)));
    // 0x1a4ea8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4eac: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4EACu;
    {
        const bool branch_taken_0x1a4eac = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a4eac) {
            ctx->pc = 0x1A4EBCu;
            return;
        }
    }
    ctx->pc = 0x1A4EB4u;
    // 0x1a4eb4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4eb8: 0xa0600306  sb          $zero, 0x306($v1)
    ctx->pc = 0x1a4eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 774), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1a4ebcu;
}
