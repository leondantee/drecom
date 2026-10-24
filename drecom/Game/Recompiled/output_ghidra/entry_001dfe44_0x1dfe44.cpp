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

// Function: entry_001dfe44
// Address: 0x1dfe44 - 0x1dff0c
void entry_001dfe44_0x1dfe44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfe44_0x1dfe44");
#endif

    ctx->pc = 0x1dfe44u;

    // 0x1dfe44: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfe48: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfe4c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dfe50: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfe54: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfe58: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dfe5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dfe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfe60: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dfe60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfe64: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfe68: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dfe68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dfe6c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1dfe6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1dfe70: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfe74: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1dfe74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1dfe78: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfe7c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfe80: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dfe84: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfe88: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfe8c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dfe90: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfe94: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfe98: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dfe9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1dfe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfea0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dfea0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfea4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfea8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dfea8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dfeac: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1dfeacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1dfeb0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfeb4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1dfeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1dfeb8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfebc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfec0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dfec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dfec4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfec8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfecc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dfeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dfed0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfed4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfed8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dfed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dfedc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1dfedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfee0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dfee0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfee4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfee8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dfee8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dfeec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1dfeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dfef0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfef4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1dfef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1dfef8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfefc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dff00: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dff00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dff04: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dff08: 0x0  nop
    ctx->pc = 0x1dff08u;
    // NOP
    ctx->pc = 0x1dff0cu;
}
