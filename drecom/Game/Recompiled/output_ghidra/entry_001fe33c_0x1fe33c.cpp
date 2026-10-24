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

// Function: entry_001fe33c
// Address: 0x1fe33c - 0x1fe378
void entry_001fe33c_0x1fe33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe33c_0x1fe33c");
#endif

    ctx->pc = 0x1fe33cu;

    // 0x1fe33c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe340: 0x90640345  lbu         $a0, 0x345($v1)
    ctx->pc = 0x1fe340u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fe344: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fe344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fe348: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fe348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fe34c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fe34cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe350: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe354: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe358: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fe358u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe35c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe35cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe360: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe364: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe368: 0x24640480  addiu       $a0, $v1, 0x480
    ctx->pc = 0x1fe368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fe36c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x1fe36cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x1fe370: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1fe370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe374: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1fe374u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1fe378u;
}
