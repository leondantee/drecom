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

// Function: entry_001af814
// Address: 0x1af814 - 0x1af8b0
void entry_001af814_0x1af814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af814_0x1af814");
#endif

    ctx->pc = 0x1af814u;

    // 0x1af814: 0x8fa304a4  lw          $v1, 0x4A4($sp)
    ctx->pc = 0x1af814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1af818: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1af818u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af81c: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1af81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1af820: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1af820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af824: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1af824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1af828: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1af828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1af82c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1af82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af830: 0xafa304a0  sw          $v1, 0x4A0($sp)
    ctx->pc = 0x1af830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 3));
    // 0x1af834: 0x8fa304a0  lw          $v1, 0x4A0($sp)
    ctx->pc = 0x1af834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1af838: 0xafa30498  sw          $v1, 0x498($sp)
    ctx->pc = 0x1af838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1176), GPR_U32(ctx, 3));
    // 0x1af83c: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1af83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1af840: 0x24760004  addiu       $s6, $v1, 0x4
    ctx->pc = 0x1af840u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1af844: 0x8fa304b8  lw          $v1, 0x4B8($sp)
    ctx->pc = 0x1af844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x1af848: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1af848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1af84c: 0xafa30490  sw          $v1, 0x490($sp)
    ctx->pc = 0x1af84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 3));
    // 0x1af850: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1af850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1af854: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1af854u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1af858: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1af858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1af85c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1af85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1af860: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1af860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af864: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1af864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1af868: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x1af868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1af86c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1af86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1af870: 0xafa30490  sw          $v1, 0x490($sp)
    ctx->pc = 0x1af870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 3));
    // 0x1af874: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x1af874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1af878: 0x8c750034  lw          $s5, 0x34($v1)
    ctx->pc = 0x1af878u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1af87c: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1af87cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1af880: 0xafa004a8  sw          $zero, 0x4A8($sp)
    ctx->pc = 0x1af880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 0));
    // 0x1af884: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1af884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1af888: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1af888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1af88c: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1af88cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1af890: 0x8fa3049c  lw          $v1, 0x49C($sp)
    ctx->pc = 0x1af890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x1af894: 0x1083006e  beq         $a0, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x1AF894u;
    {
        const bool branch_taken_0x1af894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1af894) {
            ctx->pc = 0x1AFA50u;
            return;
        }
    }
    ctx->pc = 0x1AF89Cu;
    // 0x1af89c: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1af89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1af8a0: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1af8a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1af8a4: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1af8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1af8a8: 0xafa3049c  sw          $v1, 0x49C($sp)
    ctx->pc = 0x1af8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1180), GPR_U32(ctx, 3));
    // 0x1af8ac: 0x0  nop
    ctx->pc = 0x1af8acu;
    // NOP
    ctx->pc = 0x1af8b0u;
}
