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

// Function: entry_0019287c
// Address: 0x19287c - 0x1928e0
void entry_0019287c_0x19287c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019287c_0x19287c");
#endif

    ctx->pc = 0x19287cu;

    // 0x19287c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x19287cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x192880: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x192880u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x192884: 0x2a28023  subu        $s0, $s5, $v0
    ctx->pc = 0x192884u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x192888: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x192888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19288c: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x19288cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x192890: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x192890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192894: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x192894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x192898: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x192898u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x19289c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x19289cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1928a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1928a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1928a4: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1928a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1928a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1928a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1928ac: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x1928acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x1928b0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1928b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1928b4: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x1928b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x1928b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1928b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1928bc: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x1928bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x1928c0: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x1928c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x1928c4: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x1928c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1928c8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1928c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1928cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1928CCu;
    {
        const bool branch_taken_0x1928cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1928cc) {
            ctx->pc = 0x1928E0u;
            return;
        }
    }
    ctx->pc = 0x1928D4u;
    // 0x1928d4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1928d4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1928d8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1928D8u;
    {
        const bool branch_taken_0x1928d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1928d8) {
            ctx->pc = 0x19294Cu;
            return;
        }
    }
    ctx->pc = 0x1928E0u;
}
