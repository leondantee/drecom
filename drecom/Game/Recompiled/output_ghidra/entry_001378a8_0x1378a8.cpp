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

// Function: entry_001378a8
// Address: 0x1378a8 - 0x1378f0
void entry_001378a8_0x1378a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001378a8_0x1378a8");
#endif

    ctx->pc = 0x1378a8u;

    // 0x1378a8: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x1378a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1378ac: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1378acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1378b0: 0x24434ee0  addiu       $v1, $v0, 0x4EE0
    ctx->pc = 0x1378b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20192));
    // 0x1378b4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1378b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1378b8: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x1378b8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1378bc: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x1378bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1378c0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1378c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1378c4: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1378c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1378c8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1378c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1378cc: 0x8ce30058  lw          $v1, 0x58($a3)
    ctx->pc = 0x1378ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x1378d0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1378d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1378d4: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x1378d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1378d8: 0x8e860024  lw          $a2, 0x24($s4)
    ctx->pc = 0x1378d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1378dc: 0x34c20002  ori         $v0, $a2, 0x2
    ctx->pc = 0x1378dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x1378e0: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x1378e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x1378e4: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1378e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1378e8: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1378e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1378ec: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1378ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1378f0u;
}
