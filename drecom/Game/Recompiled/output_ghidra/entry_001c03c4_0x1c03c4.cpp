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

// Function: entry_001c03c4
// Address: 0x1c03c4 - 0x1c0448
void entry_001c03c4_0x1c03c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c03c4_0x1c03c4");
#endif

    ctx->pc = 0x1c03c4u;

    // 0x1c03c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c03c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c03c8: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c03c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c03cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c03ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c03d0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1c03d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c03d4: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C03D4u;
    {
        const bool branch_taken_0x1c03d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c03d4) {
            ctx->pc = 0x1C0448u;
            return;
        }
    }
    ctx->pc = 0x1C03DCu;
    // 0x1c03dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c03dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c03e0: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c03e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c03e4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C03E4u;
    {
        const bool branch_taken_0x1c03e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c03e4) {
            ctx->pc = 0x1C0448u;
            return;
        }
    }
    ctx->pc = 0x1C03ECu;
    // 0x1c03ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c03ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c03f0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c03f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c03f4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c03f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c03f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c03f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c03fc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C03FCu;
    {
        const bool branch_taken_0x1c03fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c03fc) {
            ctx->pc = 0x1C0448u;
            return;
        }
    }
    ctx->pc = 0x1C0404u;
    // 0x1c0404: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c0404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0408: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c040c: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c040cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c0410: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c0410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0414: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0418: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c0418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c041c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c041cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0420: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0424: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1c0424u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c0428: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c042c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c042cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0430: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c0430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0434: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c0434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c0438: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c0438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c043c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c043cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c0440: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c0440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c0444: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c0444u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1c0448u;
}
