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

// Function: entry_0020f30c
// Address: 0x20f30c - 0x20f344
void entry_0020f30c_0x20f30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f30c_0x20f30c");
#endif

    ctx->pc = 0x20f30cu;

    // 0x20f30c: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20f30cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f310: 0x85231278  lh          $v1, 0x1278($t1)
    ctx->pc = 0x20f310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4728)));
    // 0x20f314: 0x3543c  dsll32      $t2, $v1, 16
    ctx->pc = 0x20f314u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20f318: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x20f318u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x20f31c: 0x29410169  slti        $at, $t2, 0x169
    ctx->pc = 0x20f31cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)361) ? 1 : 0);
    // 0x20f320: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x20F320u;
    {
        const bool branch_taken_0x20f320 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f320) {
            ctx->pc = 0x20F344u;
            return;
        }
    }
    ctx->pc = 0x20F328u;
    // 0x20f328: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f32c: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x20f32cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20f330: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x20f330u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
    // 0x20f334: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x20f334u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x20f338: 0x28c402d0  slti        $a0, $a2, 0x2D0
    ctx->pc = 0x20f338u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)720) ? 1 : 0);
    // 0x20f33c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F33Cu;
    {
        const bool branch_taken_0x20f33c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f33c) {
            ctx->pc = 0x20F354u;
            return;
        }
    }
    ctx->pc = 0x20F344u;
}
