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

// Function: entry_001bd3b8
// Address: 0x1bd3b8 - 0x1bd3dc
void entry_001bd3b8_0x1bd3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd3b8_0x1bd3b8");
#endif

    ctx->pc = 0x1bd3b8u;

    // 0x1bd3b8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bd3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bd3bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd3c0: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1bd3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bd3c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd3c8: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1bd3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bd3cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd3d0: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1bd3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd3d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BD3D4u;
    {
        const bool branch_taken_0x1bd3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd3d4) {
            ctx->pc = 0x1BD40Cu;
            return;
        }
    }
    ctx->pc = 0x1BD3DCu;
}
