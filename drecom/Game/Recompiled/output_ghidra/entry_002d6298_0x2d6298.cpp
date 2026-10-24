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

// Function: entry_002d6298
// Address: 0x2d6298 - 0x2d62fc
void entry_002d6298_0x2d6298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d6298_0x2d6298");
#endif

    ctx->pc = 0x2d6298u;

    // 0x2d6298: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d629c: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d629cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d62a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d62a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d62a4: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d62a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d62a8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2d62a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2d62ac: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D62ACu;
    {
        const bool branch_taken_0x2d62ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d62ac) {
            ctx->pc = 0x2D62FCu;
            return;
        }
    }
    ctx->pc = 0x2D62B4u;
    // 0x2d62b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d62b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d62b8: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d62b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d62bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d62bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d62c0: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d62c4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2d62c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2d62c8: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d62c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d62cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d62ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d62d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d62d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d62d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d62d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d62d8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2d62d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d62dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d62dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d62e0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d62e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d62e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d62e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d62e8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d62e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d62ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d62ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d62f0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d62f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d62f4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d62f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d62f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d62fcu;
}
