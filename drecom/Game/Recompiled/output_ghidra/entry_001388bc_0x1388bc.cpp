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

// Function: entry_001388bc
// Address: 0x1388bc - 0x1388f8
void entry_001388bc_0x1388bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001388bc_0x1388bc");
#endif

    ctx->pc = 0x1388bcu;

    // 0x1388bc: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1388bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1388c0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1388c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1388c4: 0x24634eb0  addiu       $v1, $v1, 0x4EB0
    ctx->pc = 0x1388c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20144));
    // 0x1388c8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1388c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1388cc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1388ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1388d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1388d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1388d4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1388d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1388d8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1388d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1388dc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1388dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1388e0: 0x8cb20058  lw          $s2, 0x58($a1)
    ctx->pc = 0x1388e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1388e4: 0x243a021  addu        $s4, $s2, $v1
    ctx->pc = 0x1388e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1388e8: 0x72809628  paddub      $s2, $s4, $zero
    ctx->pc = 0x1388e8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1388ec: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1388ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1388f0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1388f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1388f4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1388f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1388f8u;
}
