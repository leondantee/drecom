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

// Function: entry_002d52f8
// Address: 0x2d52f8 - 0x2d5354
void entry_002d52f8_0x2d52f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d52f8_0x2d52f8");
#endif

    ctx->pc = 0x2d52f8u;

    // 0x2d52f8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d52f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d52fc: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x2d52fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5300: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d5300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5304: 0x8c711210  lw          $s1, 0x1210($v1)
    ctx->pc = 0x2d5304u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x2d5308: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d5308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d530c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2d530cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2d5310: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d5310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d5314: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d5314u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d5318: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D5318u;
    {
        const bool branch_taken_0x2d5318 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2d5318) {
            ctx->pc = 0x2D5354u;
            return;
        }
    }
    ctx->pc = 0x2D5320u;
    // 0x2d5320: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d5320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d5324: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d5324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5328: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d5328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d532c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d532cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5330: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d5330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5334: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d5334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5338: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d5338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d533c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5340: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d5340u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5344: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d5344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5348: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d5348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d534c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D534Cu;
    {
        const bool branch_taken_0x2d534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d534c) {
            ctx->pc = 0x2D53ACu;
            return;
        }
    }
    ctx->pc = 0x2D5354u;
}
