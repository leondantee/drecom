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

// Function: entry_002d5f88
// Address: 0x2d5f88 - 0x2d5fe4
void entry_002d5f88_0x2d5f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d5f88_0x2d5f88");
#endif

    ctx->pc = 0x2d5f88u;

    // 0x2d5f88: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x2d5f88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2d5f8c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2d5f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d5f90: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D5F90u;
    {
        const bool branch_taken_0x2d5f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5f90) {
            ctx->pc = 0x2D5FE4u;
            return;
        }
    }
    ctx->pc = 0x2D5F98u;
    // 0x2d5f98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5f9c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2d5f9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d5fa0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d5fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d5fa4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d5fa4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d5fa8: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x2d5fa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x2d5fac: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2D5FACu;
    {
        const bool branch_taken_0x2d5fac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5fac) {
            ctx->pc = 0x2D5FE4u;
            return;
        }
    }
    ctx->pc = 0x2D5FB4u;
    // 0x2d5fb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d5fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5fb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5fbc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d5fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d5fc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d5fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d5fc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5fc8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d5fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d5fcc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5fd0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d5fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5fd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5fd8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d5fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5fdc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5fe0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d5fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d5fe4u;
}
