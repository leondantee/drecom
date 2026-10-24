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

// Function: entry_001fe158
// Address: 0x1fe158 - 0x1fe198
void entry_001fe158_0x1fe158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe158_0x1fe158");
#endif

    ctx->pc = 0x1fe158u;

    // 0x1fe158: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe15c: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fe15cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fe160: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe164: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x1fe164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1fe168: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fe168u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe16c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe170: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe174: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fe174u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe178: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe17c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe180: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe184: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fe184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fe188: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fe188u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fe18c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1fe18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe190: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1fe190u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1fe194: 0x0  nop
    ctx->pc = 0x1fe194u;
    // NOP
    ctx->pc = 0x1fe198u;
}
