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

// Function: entry_003106c4
// Address: 0x3106c4 - 0x31071c
void entry_003106c4_0x3106c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003106c4_0x3106c4");
#endif

    ctx->pc = 0x3106c4u;

    // 0x3106c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3106c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3106c8: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x3106c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x3106cc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3106ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3106d0: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x3106d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x3106d4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3106D4u;
    {
        const bool branch_taken_0x3106d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3106d4) {
            ctx->pc = 0x31071Cu;
            return;
        }
    }
    ctx->pc = 0x3106DCu;
    // 0x3106dc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3106dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3106e0: 0x8ca31368  lw          $v1, 0x1368($a1)
    ctx->pc = 0x3106e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4968)));
    // 0x3106e4: 0x34640008  ori         $a0, $v1, 0x8
    ctx->pc = 0x3106e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3106e8: 0xaca41368  sw          $a0, 0x1368($a1)
    ctx->pc = 0x3106e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4968), GPR_U32(ctx, 4));
    // 0x3106ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3106ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3106f0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3106f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3106f4: 0x24701320  addiu       $s0, $v1, 0x1320
    ctx->pc = 0x3106f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4896));
    // 0x3106f8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3106f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3106fc: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x3106fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x310700: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x310700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x310704: 0x34850002  ori         $a1, $a0, 0x2
    ctx->pc = 0x310704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x310708: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x310708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
    // 0x31070c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310710: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x310714: 0x247007e0  addiu       $s0, $v1, 0x7E0
    ctx->pc = 0x310714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x310718: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x310718u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x31071cu;
}
