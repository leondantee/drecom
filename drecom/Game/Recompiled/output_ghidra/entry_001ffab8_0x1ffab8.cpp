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

// Function: entry_001ffab8
// Address: 0x1ffab8 - 0x1ffb38
void entry_001ffab8_0x1ffab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffab8_0x1ffab8");
#endif

    ctx->pc = 0x1ffab8u;

    // 0x1ffab8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffabc: 0x9085034f  lbu         $a1, 0x34F($a0)
    ctx->pc = 0x1ffabcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 847)));
    // 0x1ffac0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1ffac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffac4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffac8: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x1ffac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x1ffacc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffaccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffad0: 0xa38021  addu        $s0, $a1, $v1
    ctx->pc = 0x1ffad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ffad4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffad8: 0x90640347  lbu         $a0, 0x347($v1)
    ctx->pc = 0x1ffad8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1ffadc: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1ffadcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ffae0: 0x207182a  slt         $v1, $s0, $a3
    ctx->pc = 0x1ffae0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1ffae4: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1FFAE4u;
    {
        const bool branch_taken_0x1ffae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffae4) {
            ctx->pc = 0x1FFBA0u;
            return;
        }
    }
    ctx->pc = 0x1FFAECu;
    // 0x1ffaec: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ffaecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffaf0: 0x90c30348  lbu         $v1, 0x348($a2)
    ctx->pc = 0x1ffaf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 840)));
    // 0x1ffaf4: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x1ffaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ffaf8: 0xa0c50348  sb          $a1, 0x348($a2)
    ctx->pc = 0x1ffaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 840), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ffafc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffb00: 0x90660348  lbu         $a2, 0x348($v1)
    ctx->pc = 0x1ffb00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1ffb04: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x1ffb04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ffb08: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x1ffb08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ffb0c: 0x24c40002  addiu       $a0, $a2, 0x2
    ctx->pc = 0x1ffb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1ffb10: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ffb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ffb14: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffb14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffb18: 0xa0a3034b  sb          $v1, 0x34B($a1)
    ctx->pc = 0x1ffb18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 843), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffb1c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffb20: 0x90640345  lbu         $a0, 0x345($v1)
    ctx->pc = 0x1ffb20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1ffb24: 0x24900001  addiu       $s0, $a0, 0x1
    ctx->pc = 0x1ffb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ffb28: 0xa0700345  sb          $s0, 0x345($v1)
    ctx->pc = 0x1ffb28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ffb2c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ffb2cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ffb30: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FFB30u;
    {
        const bool branch_taken_0x1ffb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffb30) {
            ctx->pc = 0x1FFB78u;
            return;
        }
    }
    ctx->pc = 0x1FFB38u;
}
