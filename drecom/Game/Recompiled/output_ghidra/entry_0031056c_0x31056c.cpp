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

// Function: entry_0031056c
// Address: 0x31056c - 0x310614
void entry_0031056c_0x31056c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031056c_0x31056c");
#endif

    ctx->pc = 0x31056cu;

    // 0x31056c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310570: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x310570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x310574: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x310574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x310578: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x310578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x31057c: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x31057Cu;
    {
        const bool branch_taken_0x31057c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31057c) {
            ctx->pc = 0x310614u;
            return;
        }
    }
    ctx->pc = 0x310584u;
    // 0x310584: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x310584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310588: 0x8c831368  lw          $v1, 0x1368($a0)
    ctx->pc = 0x310588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4968)));
    // 0x31058c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x31058cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x310590: 0xac831368  sw          $v1, 0x1368($a0)
    ctx->pc = 0x310590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4968), GPR_U32(ctx, 3));
    // 0x310594: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x310594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310598: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x31059c: 0x24700cf0  addiu       $s0, $v1, 0xCF0
    ctx->pc = 0x31059cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
    // 0x3105a0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3105a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3105a4: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x3105a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3105a8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3105a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3105ac: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3105acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3105b0: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x3105b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x3105b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3105b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3105b8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3105b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3105bc: 0x24700c60  addiu       $s0, $v1, 0xC60
    ctx->pc = 0x3105bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3168));
    // 0x3105c0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3105c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3105c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3105c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3105c8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3105c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3105cc: 0x24700480  addiu       $s0, $v1, 0x480
    ctx->pc = 0x3105ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x3105d0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3105d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3105d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3105d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3105d8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3105d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3105dc: 0x24700510  addiu       $s0, $v1, 0x510
    ctx->pc = 0x3105dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x3105e0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3105e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3105e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3105e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3105e8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3105e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3105ec: 0x247005a0  addiu       $s0, $v1, 0x5A0
    ctx->pc = 0x3105ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1440));
    // 0x3105f0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3105f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3105f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3105f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3105f8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3105f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3105fc: 0x24700750  addiu       $s0, $v1, 0x750
    ctx->pc = 0x3105fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1872));
    // 0x310600: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x310600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x310604: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x310604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310608: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x31060c: 0x24700900  addiu       $s0, $v1, 0x900
    ctx->pc = 0x31060cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2304));
    // 0x310610: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x310610u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x310614u;
}
