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

// Function: entry_0015e6fc
// Address: 0x15e6fc - 0x15e748
void entry_0015e6fc_0x15e6fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e6fc_0x15e6fc");
#endif

    ctx->pc = 0x15e6fcu;

    // 0x15e6fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15e6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15e700: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x15e700u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x15e704: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x15e704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x15e708: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x15E708u;
    {
        const bool branch_taken_0x15e708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e708) {
            ctx->pc = 0x15E748u;
            return;
        }
    }
    ctx->pc = 0x15E710u;
    // 0x15e710: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15e710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e714: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e718: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x15e718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e71c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15e71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e720: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e724: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x15e724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e728: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e72c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x15e72cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e730: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e734: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x15e734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e738: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e73c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15e740: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x15E740u;
    {
        const bool branch_taken_0x15e740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e740) {
            ctx->pc = 0x15E7E0u;
            return;
        }
    }
    ctx->pc = 0x15E748u;
}
