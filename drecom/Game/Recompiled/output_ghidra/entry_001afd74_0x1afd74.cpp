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

// Function: entry_001afd74
// Address: 0x1afd74 - 0x1afe10
void entry_001afd74_0x1afd74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afd74_0x1afd74");
#endif

    ctx->pc = 0x1afd74u;

    // 0x1afd74: 0x8fbe04a8  lw          $fp, 0x4A8($sp)
    ctx->pc = 0x1afd74u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1afd78: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x1afd78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1afd7c: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1afd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1afd80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1afd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1afd84: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1afd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1afd88: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1afd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1afd8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1afd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1afd90: 0xafa304a4  sw          $v1, 0x4A4($sp)
    ctx->pc = 0x1afd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 3));
    // 0x1afd94: 0x8fa304a4  lw          $v1, 0x4A4($sp)
    ctx->pc = 0x1afd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1afd98: 0xafa3049c  sw          $v1, 0x49C($sp)
    ctx->pc = 0x1afd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1180), GPR_U32(ctx, 3));
    // 0x1afd9c: 0x8fa4049c  lw          $a0, 0x49C($sp)
    ctx->pc = 0x1afd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x1afda0: 0x24960004  addiu       $s6, $a0, 0x4
    ctx->pc = 0x1afda0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1afda4: 0x8fa304c8  lw          $v1, 0x4C8($sp)
    ctx->pc = 0x1afda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x1afda8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1afda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1afdac: 0xafa30494  sw          $v1, 0x494($sp)
    ctx->pc = 0x1afdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 3));
    // 0x1afdb0: 0x8fa3049c  lw          $v1, 0x49C($sp)
    ctx->pc = 0x1afdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x1afdb4: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1afdb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1afdb8: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1afdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1afdbc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1afdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1afdc0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1afdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1afdc4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1afdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1afdc8: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1afdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1afdcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1afdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1afdd0: 0xafa30494  sw          $v1, 0x494($sp)
    ctx->pc = 0x1afdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 3));
    // 0x1afdd4: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1afdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1afdd8: 0x8c750034  lw          $s5, 0x34($v1)
    ctx->pc = 0x1afdd8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1afddc: 0xafa004b0  sw          $zero, 0x4B0($sp)
    ctx->pc = 0x1afddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 0));
    // 0x1afde0: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1afde0u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1afde4: 0x8fa3049c  lw          $v1, 0x49C($sp)
    ctx->pc = 0x1afde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x1afde8: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1afde8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1afdec: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1afdecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1afdf0: 0x8fa304a0  lw          $v1, 0x4A0($sp)
    ctx->pc = 0x1afdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1afdf4: 0x10830082  beq         $a0, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x1AFDF4u;
    {
        const bool branch_taken_0x1afdf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1afdf4) {
            ctx->pc = 0x1B0000u;
            return;
        }
    }
    ctx->pc = 0x1AFDFCu;
    // 0x1afdfc: 0x8fa3049c  lw          $v1, 0x49C($sp)
    ctx->pc = 0x1afdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x1afe00: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1afe00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1afe04: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1afe04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1afe08: 0xafa304a0  sw          $v1, 0x4A0($sp)
    ctx->pc = 0x1afe08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 3));
    // 0x1afe0c: 0x0  nop
    ctx->pc = 0x1afe0cu;
    // NOP
    ctx->pc = 0x1afe10u;
}
