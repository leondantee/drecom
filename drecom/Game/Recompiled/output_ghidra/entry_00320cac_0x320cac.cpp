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

// Function: entry_00320cac
// Address: 0x320cac - 0x320ce8
void entry_00320cac_0x320cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320cac_0x320cac");
#endif

    ctx->pc = 0x320cacu;

    // 0x320cac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320cb0: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x320cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x320cb4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320cb8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x320cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x320cbc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x320cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x320cc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320cc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320cc8: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x320cc8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320ccc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320cd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320cd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320cd8: 0x24650480  addiu       $a1, $v1, 0x480
    ctx->pc = 0x320cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x320cdc: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x320cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x320ce0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x320ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x320ce4: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x320ce4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x320ce8u;
}
