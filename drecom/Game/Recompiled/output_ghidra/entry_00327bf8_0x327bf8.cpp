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

// Function: entry_00327bf8
// Address: 0x327bf8 - 0x327c30
void entry_00327bf8_0x327bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327bf8_0x327bf8");
#endif

    ctx->pc = 0x327bf8u;

    // 0x327bf8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327bfc: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x327bfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x327c00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327c04: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x327c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x327c08: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x327c08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x327c0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327c10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327c14: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x327c14u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x327c18: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x327c18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x327c1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327c20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327c24: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x327c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x327c28: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x327c28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x327c2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x327c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x327c30u;
}
