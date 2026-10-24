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

// Function: entry_0020fde8
// Address: 0x20fde8 - 0x20fe20
void entry_0020fde8_0x20fde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fde8_0x20fde8");
#endif

    ctx->pc = 0x20fde8u;

    // 0x20fde8: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fdec: 0x84661278  lh          $a2, 0x1278($v1)
    ctx->pc = 0x20fdecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20fdf0: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x20fdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x20fdf4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20fdf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20fdf8: 0x2864028f  slti        $a0, $v1, 0x28F
    ctx->pc = 0x20fdf8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)655) ? 1 : 0);
    // 0x20fdfc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20FDFCu;
    {
        const bool branch_taken_0x20fdfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fdfc) {
            ctx->pc = 0x20FE20u;
            return;
        }
    }
    ctx->pc = 0x20FE04u;
    // 0x20fe04: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20fe04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fe08: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x20fe08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x20fe0c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x20fe0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20fe10: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20fe10u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x20fe14: 0x28810295  slti        $at, $a0, 0x295
    ctx->pc = 0x20fe14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)661) ? 1 : 0);
    // 0x20fe18: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x20FE18u;
    {
        const bool branch_taken_0x20fe18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fe18) {
            ctx->pc = 0x20FE58u;
            return;
        }
    }
    ctx->pc = 0x20FE20u;
}
