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

// Function: entry_0014b3bc
// Address: 0x14b3bc - 0x14b410
void entry_0014b3bc_0x14b3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b3bc_0x14b3bc");
#endif

    ctx->pc = 0x14b3bcu;

    // 0x14b3bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b3c0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14b3c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14b3c4: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x14B3C4u;
    {
        const bool branch_taken_0x14b3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b3c4) {
            ctx->pc = 0x14B670u;
            return;
        }
    }
    ctx->pc = 0x14B3CCu;
    // 0x14b3cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b3d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b3d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14b3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14b3d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b3dc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14b3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b3e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b3e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14b3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b3e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b3ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14b3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b3f0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14b3f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b3f8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14b3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14b3fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14b3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b400: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b404: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14b404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x14b408: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x14B408u;
    {
        const bool branch_taken_0x14b408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b408) {
            ctx->pc = 0x14B670u;
            return;
        }
    }
    ctx->pc = 0x14B410u;
}
