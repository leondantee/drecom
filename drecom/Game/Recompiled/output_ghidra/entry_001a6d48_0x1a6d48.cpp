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

// Function: entry_001a6d48
// Address: 0x1a6d48 - 0x1a6da8
void entry_001a6d48_0x1a6d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6d48_0x1a6d48");
#endif

    switch (ctx->pc) {
        case 0x1a6d7cu: goto label_1a6d7c;
        case 0x1a6da0u: goto label_1a6da0;
        default: break;
    }

    ctx->pc = 0x1a6d48u;

    // 0x1a6d48: 0x9222031a  lbu         $v0, 0x31A($s1)
    ctx->pc = 0x1a6d48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 794)));
    // 0x1a6d4c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A6D4Cu;
    {
        const bool branch_taken_0x1a6d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6d4c) {
            ctx->pc = 0x1A6DA8u;
            return;
        }
    }
    ctx->pc = 0x1A6D54u;
    // 0x1a6d54: 0x1040c0  sll         $t0, $s0, 3
    ctx->pc = 0x1a6d54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6d58: 0x1103823  subu        $a3, $t0, $s0
    ctx->pc = 0x1a6d58u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1a6d5c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1a6d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a6d60: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x1a6d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a6d64: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a6d68: 0x24461614  addiu       $a2, $v0, 0x1614
    ctx->pc = 0x1a6d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a6d6c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1a6d6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1a6d70: 0x246506f0  addiu       $a1, $v1, 0x6F0
    ctx->pc = 0x1a6d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1776));
    // 0x1a6d74: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A6D74u;
    SET_GPR_U32(ctx, 31, 0x1A6D7Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A6D74u, 0x1A6D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D7Cu;
label_1a6d7c:
    // 0x1a6d7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a6d7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6d80: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1a6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6d84: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x1a6d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a6d88: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a6d8c: 0x24431614  addiu       $v1, $v0, 0x1614
    ctx->pc = 0x1a6d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a6d90: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1a6d90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a6d94: 0x24a502b8  addiu       $a1, $a1, 0x2B8
    ctx->pc = 0x1a6d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 696));
    // 0x1a6d98: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A6D98u;
    SET_GPR_U32(ctx, 31, 0x1A6DA0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A6D98u, 0x1A6DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6DA0u;
label_1a6da0:
    // 0x1a6da0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1a6da0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6da4: 0x0  nop
    ctx->pc = 0x1a6da4u;
    // NOP
    ctx->pc = 0x1a6da8u;
}
