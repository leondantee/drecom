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

// Function: entry_001380bc
// Address: 0x1380bc - 0x1380f8
void entry_001380bc_0x1380bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001380bc_0x1380bc");
#endif

    ctx->pc = 0x1380bcu;

    // 0x1380bc: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x1380bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1380c0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1380c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1380c4: 0x24634ec0  addiu       $v1, $v1, 0x4EC0
    ctx->pc = 0x1380c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20160));
    // 0x1380c8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1380c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1380cc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1380ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1380d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1380d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1380d4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1380d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1380d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1380d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1380dc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1380dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1380e0: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x1380e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1380e4: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1380e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1380e8: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1380e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1380ec: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1380ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1380f0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1380f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1380f4: 0x0  nop
    ctx->pc = 0x1380f4u;
    // NOP
    ctx->pc = 0x1380f8u;
}
