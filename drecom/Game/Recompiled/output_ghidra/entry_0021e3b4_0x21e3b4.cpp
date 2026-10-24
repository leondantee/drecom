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

// Function: entry_0021e3b4
// Address: 0x21e3b4 - 0x21e3dc
void entry_0021e3b4_0x21e3b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e3b4_0x21e3b4");
#endif

    ctx->pc = 0x21e3b4u;

    // 0x21e3b4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e3b8: 0x8c64012c  lw          $a0, 0x12C($v1)
    ctx->pc = 0x21e3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x21e3bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21e3c0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E3C0u;
    {
        const bool branch_taken_0x21e3c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21e3c0) {
            ctx->pc = 0x21E3DCu;
            return;
        }
    }
    ctx->pc = 0x21E3C8u;
    // 0x21e3c8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x21e3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21e3cc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x21e3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e3d0: 0xaca4012c  sw          $a0, 0x12C($a1)
    ctx->pc = 0x21e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 300), GPR_U32(ctx, 4));
    // 0x21e3d4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x21E3D4u;
    {
        const bool branch_taken_0x21e3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e3d4) {
            ctx->pc = 0x21E4ACu;
            return;
        }
    }
    ctx->pc = 0x21E3DCu;
}
