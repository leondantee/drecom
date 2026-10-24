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

// Function: Mk_index_set_xyzf
// Address: 0x1dfd80 - 0x1dff18
void Mk_index_set_xyzf_0x1dfd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mk_index_set_xyzf_0x1dfd80");
#endif

    ctx->pc = 0x1dfd80u;

    // 0x1dfd80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dfd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dfd84: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1dfd84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1dfd88: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1dfd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1dfd8c: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x1dfd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x1dfd90: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x1dfd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x1dfd94: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x1dfd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x1dfd98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1dfd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dfd9c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1dfd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1dfda0: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1DFDA0u;
    {
        const bool branch_taken_0x1dfda0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dfda0) {
            ctx->pc = 0x1DFE44u;
            goto label_1dfe44;
        }
    }
    ctx->pc = 0x1DFDA8u;
    // 0x1dfda8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfdac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfdb0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dfdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dfdb4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfdb8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfdbc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dfdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dfdc0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1dfdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1dfdc4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfdc8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1dfdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1dfdcc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfdd0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfdd4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dfdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dfdd8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfddc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfde0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dfde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dfde4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfde8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfdec: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dfdecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dfdf0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1dfdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1dfdf4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfdf8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1dfdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1dfdfc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfe00: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfe04: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dfe08: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfe0c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfe10: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dfe14: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfe18: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfe1c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dfe20: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1dfe20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1dfe24: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfe28: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1dfe28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1dfe2c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfe30: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1dfe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dfe34: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1dfe38: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1dfe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfe3c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1DFE3Cu;
    {
        const bool branch_taken_0x1dfe3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfe3c) {
            ctx->pc = 0x1DFF0Cu;
            goto label_1dff0c;
        }
    }
    ctx->pc = 0x1DFE44u;
label_1dfe44:
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
label_1dff0c:
    // 0x1dff0c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1dff0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dff10: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFF18u;
}
