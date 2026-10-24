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

// Function: entry_001c1344
// Address: 0x1c1344 - 0x1c13c8
void entry_001c1344_0x1c1344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1344_0x1c1344");
#endif

    ctx->pc = 0x1c1344u;

    // 0x1c1344: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1348: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c1348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c134c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c134cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c1350: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1c1350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c1354: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C1354u;
    {
        const bool branch_taken_0x1c1354 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1354) {
            ctx->pc = 0x1C13C8u;
            return;
        }
    }
    ctx->pc = 0x1C135Cu;
    // 0x1c135c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c135cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1360: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c1360u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c1364: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C1364u;
    {
        const bool branch_taken_0x1c1364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1364) {
            ctx->pc = 0x1C13C8u;
            return;
        }
    }
    ctx->pc = 0x1C136Cu;
    // 0x1c136c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c136cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1370: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c1374: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c1374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c1378: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c1378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c137c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C137Cu;
    {
        const bool branch_taken_0x1c137c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c137c) {
            ctx->pc = 0x1C13C8u;
            return;
        }
    }
    ctx->pc = 0x1C1384u;
    // 0x1c1384: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c1384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c1388: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c138c: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c138cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c1390: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c1390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1394: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1398: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c1398u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c139c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c139cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c13a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c13a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c13a4: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1c13a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c13a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c13a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c13ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c13acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c13b0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c13b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c13b4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c13b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c13b8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c13bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c13bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c13c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c13c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c13c4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c13c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1c13c8u;
}
