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

// Function: entry_00361a6c
// Address: 0x361a6c - 0x361aac
void entry_00361a6c_0x361a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361a6c_0x361a6c");
#endif

    ctx->pc = 0x361a6cu;

    // 0x361a6c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x361a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x361a70: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x361a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x361a74: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x361a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x361a78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x361a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361a7c: 0x8c511390  lw          $s1, 0x1390($v0)
    ctx->pc = 0x361a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x361a80: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x361a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x361a84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x361a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x361a88: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x361A88u;
    {
        const bool branch_taken_0x361a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361a88) {
            ctx->pc = 0x361C40u;
            return;
        }
    }
    ctx->pc = 0x361A90u;
    // 0x361a90: 0x92221340  lbu         $v0, 0x1340($s1)
    ctx->pc = 0x361a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4928)));
    // 0x361a94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361a98: 0x18400069  blez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x361A98u;
    {
        const bool branch_taken_0x361a98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x361a98) {
            ctx->pc = 0x361C40u;
            return;
        }
    }
    ctx->pc = 0x361AA0u;
    // 0x361aa0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x361aa0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x361aa4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x361AA4u;
    {
        const bool branch_taken_0x361aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361aa4) {
            ctx->pc = 0x361C28u;
            return;
        }
    }
    ctx->pc = 0x361AACu;
}
