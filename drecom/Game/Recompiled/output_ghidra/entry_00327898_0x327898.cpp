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

// Function: entry_00327898
// Address: 0x327898 - 0x3278d0
void entry_00327898_0x327898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327898_0x327898");
#endif

    ctx->pc = 0x327898u;

    // 0x327898: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x32789c: 0x90650345  lbu         $a1, 0x345($v1)
    ctx->pc = 0x32789cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x3278a0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x3278a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3278a4: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x3278a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x3278a8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3278a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3278ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3278acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3278b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3278b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3278b4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3278b4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3278b8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3278b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3278bc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3278bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3278c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3278c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3278c4: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x3278c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x3278c8: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3278c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3278cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3278ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x3278d0u;
}
