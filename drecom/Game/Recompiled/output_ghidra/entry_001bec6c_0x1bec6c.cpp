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

// Function: entry_001bec6c
// Address: 0x1bec6c - 0x1becf0
void entry_001bec6c_0x1bec6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bec6c_0x1bec6c");
#endif

    ctx->pc = 0x1bec6cu;

    // 0x1bec6c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1bec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bec70: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x1bec70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x1bec74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bec74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bec78: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1bec78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bec7c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BEC7Cu;
    {
        const bool branch_taken_0x1bec7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bec7c) {
            ctx->pc = 0x1BECF0u;
            return;
        }
    }
    ctx->pc = 0x1BEC84u;
    // 0x1bec84: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1bec84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bec88: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1bec88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1bec8c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BEC8Cu;
    {
        const bool branch_taken_0x1bec8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bec8c) {
            ctx->pc = 0x1BECF0u;
            return;
        }
    }
    ctx->pc = 0x1BEC94u;
    // 0x1bec94: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1bec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bec98: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bec98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bec9c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1beca0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1beca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1beca4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BECA4u;
    {
        const bool branch_taken_0x1beca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beca4) {
            ctx->pc = 0x1BECF0u;
            return;
        }
    }
    ctx->pc = 0x1BECACu;
    // 0x1becac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1becacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1becb0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1becb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1becb4: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1becb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1becb8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1becb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1becbc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1becbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1becc0: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1becc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1becc4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1becc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1becc8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1becc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beccc: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1becccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1becd0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1becd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1becd4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1becd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1becd8: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1becd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1becdc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1becdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bece0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1bece0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1bece4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bece4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bece8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bece8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1becec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bececu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1becf0u;
}
