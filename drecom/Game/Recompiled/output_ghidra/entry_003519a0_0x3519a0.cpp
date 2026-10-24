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

// Function: entry_003519a0
// Address: 0x3519a0 - 0x3519d8
void entry_003519a0_0x3519a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003519a0_0x3519a0");
#endif

    ctx->pc = 0x3519a0u;

    // 0x3519a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3519a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3519a4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x3519a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x3519a8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3519a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3519ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3519acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3519b0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x3519b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3519b4: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3519B4u;
    {
        const bool branch_taken_0x3519b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3519b4) {
            ctx->pc = 0x3519D8u;
            return;
        }
    }
    ctx->pc = 0x3519BCu;
    // 0x3519bc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3519bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3519c0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x3519c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x3519c4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3519c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3519c8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3519c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3519cc: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x3519ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x3519d0: 0x14830092  bne         $a0, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x3519D0u;
    {
        const bool branch_taken_0x3519d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3519d0) {
            ctx->pc = 0x351C1Cu;
            return;
        }
    }
    ctx->pc = 0x3519D8u;
}
