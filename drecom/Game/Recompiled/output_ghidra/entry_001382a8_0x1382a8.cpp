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

// Function: entry_001382a8
// Address: 0x1382a8 - 0x1382f0
void entry_001382a8_0x1382a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001382a8_0x1382a8");
#endif

    ctx->pc = 0x1382a8u;

    // 0x1382a8: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x1382a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1382ac: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1382acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1382b0: 0x24644ee0  addiu       $a0, $v1, 0x4EE0
    ctx->pc = 0x1382b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20192));
    // 0x1382b4: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1382b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1382b8: 0x90720000  lbu         $s2, 0x0($v1)
    ctx->pc = 0x1382b8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1382bc: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x1382bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1382c0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1382c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1382c4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1382c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1382c8: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1382c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1382cc: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x1382ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x1382d0: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1382d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1382d4: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x1382d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1382d8: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1382d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1382dc: 0x34830002  ori         $v1, $a0, 0x2
    ctx->pc = 0x1382dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1382e0: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x1382e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
    // 0x1382e4: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1382e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1382e8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1382e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1382ec: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1382ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1382f0u;
}
