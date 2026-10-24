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

// Function: entry_002d6360
// Address: 0x2d6360 - 0x2d63c4
void entry_002d6360_0x2d6360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d6360_0x2d6360");
#endif

    ctx->pc = 0x2d6360u;

    // 0x2d6360: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6364: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d6364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6368: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d6368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d636c: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d6370: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2d6370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2d6374: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D6374u;
    {
        const bool branch_taken_0x2d6374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6374) {
            ctx->pc = 0x2D63C4u;
            return;
        }
    }
    ctx->pc = 0x2D637Cu;
    // 0x2d637c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d637cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6380: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d6380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6384: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d6384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6388: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d6388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d638c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2d638cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2d6390: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d6390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d6394: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d6394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6398: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d639c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d639cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d63a0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2d63a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d63a4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d63a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d63a8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d63a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d63ac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d63acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d63b0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d63b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d63b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d63b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d63b8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d63b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d63bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d63bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d63c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d63c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d63c4u;
}
