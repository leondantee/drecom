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

// Function: entry_001ff3dc
// Address: 0x1ff3dc - 0x1ff418
void entry_001ff3dc_0x1ff3dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff3dc_0x1ff3dc");
#endif

    ctx->pc = 0x1ff3dcu;

    // 0x1ff3dc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff3e0: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1ff3e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1ff3e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ff3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff3e8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ff3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ff3ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ff3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ff3f0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff3f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ff3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ff3f8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1ff3f8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ff3fc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1ff3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ff400: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff404: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1ff404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff408: 0x24830480  addiu       $v1, $a0, 0x480
    ctx->pc = 0x1ff408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1ff40c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1ff40cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1ff410: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1ff410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ff414: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1ff414u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ff418u;
}
