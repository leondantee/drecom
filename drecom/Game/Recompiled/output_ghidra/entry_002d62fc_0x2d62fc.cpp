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

// Function: entry_002d62fc
// Address: 0x2d62fc - 0x2d6360
void entry_002d62fc_0x2d62fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d62fc_0x2d62fc");
#endif

    ctx->pc = 0x2d62fcu;

    // 0x2d62fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d62fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6300: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d6300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6304: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d6304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6308: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d6308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d630c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2d630cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2d6310: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D6310u;
    {
        const bool branch_taken_0x2d6310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6310) {
            ctx->pc = 0x2D6360u;
            return;
        }
    }
    ctx->pc = 0x2D6318u;
    // 0x2d6318: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d631c: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6320: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d6320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6324: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d6324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d6328: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2d6328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2d632c: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d632cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d6330: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d6330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6334: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6338: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d6338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d633c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2d633cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d6340: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6344: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d6344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6348: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d634c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d634cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6350: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6354: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d6354u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6358: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d635c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d635cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d6360u;
}
