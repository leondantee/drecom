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

// Function: entry_002d63c4
// Address: 0x2d63c4 - 0x2d643c
void entry_002d63c4_0x2d63c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d63c4_0x2d63c4");
#endif

    ctx->pc = 0x2d63c4u;

    // 0x2d63c4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d63c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d63c8: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d63c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d63cc: 0x2c6101f5  sltiu       $at, $v1, 0x1F5
    ctx->pc = 0x2d63ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)501) ? 1 : 0);
    // 0x2d63d0: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D63D0u;
    {
        const bool branch_taken_0x2d63d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d63d0) {
            ctx->pc = 0x2D643Cu;
            return;
        }
    }
    ctx->pc = 0x2D63D8u;
    // 0x2d63d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d63d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d63dc: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d63dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d63e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d63e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d63e4: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d63e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d63e8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2d63e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2d63ec: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d63ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d63f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d63f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d63f4: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d63f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d63f8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d63f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d63fc: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d63fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d6400: 0x2403ff05  addiu       $v1, $zero, -0xFB
    ctx->pc = 0x2d6400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967045));
    // 0x2d6404: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d6404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d6408: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d6408u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d640c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d640cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6410: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6414: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d6414u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6418: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d6418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d641c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6420: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d6420u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6424: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6428: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d6428u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d642c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d642cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6430: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d6430u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6434: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6438: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d6438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d643cu;
}
