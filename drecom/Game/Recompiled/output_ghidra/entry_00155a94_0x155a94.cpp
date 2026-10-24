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

// Function: entry_00155a94
// Address: 0x155a94 - 0x155af4
void entry_00155a94_0x155a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155a94_0x155a94");
#endif

    ctx->pc = 0x155a94u;

    // 0x155a94: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x155a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x155a98: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x155a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x155a9c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x155a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155aa0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x155aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x155aa4: 0x2463f920  addiu       $v1, $v1, -0x6E0
    ctx->pc = 0x155aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965536));
    // 0x155aa8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x155aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155aac: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x155aacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155ab0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155ab4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x155ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x155ab8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x155AB8u;
    {
        const bool branch_taken_0x155ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155ab8) {
            ctx->pc = 0x155AF4u;
            return;
        }
    }
    ctx->pc = 0x155AC0u;
    // 0x155ac0: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x155ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x155ac4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x155ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155ac8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x155ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155acc: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x155ACCu;
    {
        const bool branch_taken_0x155acc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x155acc) {
            ctx->pc = 0x155AF4u;
            return;
        }
    }
    ctx->pc = 0x155AD4u;
    // 0x155ad4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x155ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x155ad8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155adc: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x155adcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x155ae0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x155ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x155ae4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155ae8: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x155ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x155aec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x155AECu;
    {
        const bool branch_taken_0x155aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155aec) {
            ctx->pc = 0x155B28u;
            return;
        }
    }
    ctx->pc = 0x155AF4u;
}
