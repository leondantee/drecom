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

// Function: entry_002d1648
// Address: 0x2d1648 - 0x2d16a4
void entry_002d1648_0x2d1648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d1648_0x2d1648");
#endif

    ctx->pc = 0x2d1648u;

    // 0x2d1648: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2d1648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2d164c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x2d164cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x2d1650: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d1650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d1654: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d1654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d1658: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D1658u;
    {
        const bool branch_taken_0x2d1658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1658) {
            ctx->pc = 0x2D16A4u;
            return;
        }
    }
    ctx->pc = 0x2D1660u;
    // 0x2d1660: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d1660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1664: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d1664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d1668: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d1668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d166c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d166cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d1670: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d1670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d1674: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1678: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d167c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d167cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1680: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2d1680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d1684: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1688: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1688u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d168c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d168cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1690: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1694: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1698: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1698u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d169c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d169cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d16a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d16a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d16a4u;
}
