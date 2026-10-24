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

// Function: entry_003275a8
// Address: 0x3275a8 - 0x3275e0
void entry_003275a8_0x3275a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003275a8_0x3275a8");
#endif

    ctx->pc = 0x3275a8u;

    // 0x3275a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3275a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3275ac: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x3275acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x3275b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3275b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3275b4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3275b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3275b8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3275b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3275bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3275bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3275c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3275c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3275c4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3275c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3275c8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3275c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3275cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3275ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3275d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3275d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3275d4: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x3275d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x3275d8: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3275d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3275dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3275dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x3275e0u;
}
