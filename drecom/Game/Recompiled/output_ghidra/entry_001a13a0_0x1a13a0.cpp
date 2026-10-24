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

// Function: entry_001a13a0
// Address: 0x1a13a0 - 0x1a1428
void entry_001a13a0_0x1a13a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a13a0_0x1a13a0");
#endif

    ctx->pc = 0x1a13a0u;

    // 0x1a13a0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1a13a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a13a4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A13A4u;
    {
        const bool branch_taken_0x1a13a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a13a4) {
            ctx->pc = 0x1A1388u;
            return;
        }
    }
    ctx->pc = 0x1A13ACu;
    // 0x1a13ac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a13acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a13b0: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x1a13b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1a13b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a13b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a13b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a13b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a13bc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1a13bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a13c0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a13c4: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1a13c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1a13c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a13c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a13cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a13ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a13d0: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1a13d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a13d4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a13d8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1a13d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1a13dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a13dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a13e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a13e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a13e4: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1a13e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a13e8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a13e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a13ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a13ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a13f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a13f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a13f4: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x1a13f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a13f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a13f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a13fc: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1a13fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1a1400: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1404: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1408: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1a1408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a140c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a140cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1410: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1414: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a1414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a1418: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a141c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1a141cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a1420: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x1a1420u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a1424: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x1a1424u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1a1428u;
}
