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

// Function: default
// Address: 0x283128 - 0x2831b4
void ps2_default_0x283128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x283128");
#endif

    switch (ctx->pc) {
        case 0x2831a0u: goto label_2831a0;
        case 0x2831acu: goto label_2831ac;
        default: break;
    }

    ctx->pc = 0x283128u;

    // 0x283128: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x283128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28312c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x28312cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x283130: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x283130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x283134: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x283134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x283138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28313c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283140: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x283140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x283144: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x283144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x283148: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x283148u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x28314c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28314cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x283150: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x283150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x283154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283158: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x283158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x28315c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x28315cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x283160: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x283160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x283164: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x283164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x283168: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x283168u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x28316c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28316cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283170: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283174: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x283174u;
    {
        const bool branch_taken_0x283174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283174) {
            ctx->pc = 0x2831B4u;
            return;
        }
    }
    ctx->pc = 0x28317Cu;
    // 0x28317c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x28317cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x283180: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x283180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x283184: 0x24424e30  addiu       $v0, $v0, 0x4E30
    ctx->pc = 0x283184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20016));
    // 0x283188: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x283188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28318c: 0x24047303  addiu       $a0, $zero, 0x7303
    ctx->pc = 0x28318cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29443));
    // 0x283190: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x283190u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283194: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x283194u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283198: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x283198u;
    SET_GPR_U32(ctx, 31, 0x2831A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x283198u, 0x2831A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2831A0u;
label_2831a0:
    // 0x2831a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2831a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2831a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2831A4u;
    SET_GPR_U32(ctx, 31, 0x2831ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2831A4u, 0x2831ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2831ACu;
label_2831ac:
    // 0x2831ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2831ACu;
    {
        const bool branch_taken_0x2831ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2831ac) {
            ctx->pc = 0x2831E8u;
            return;
        }
    }
    ctx->pc = 0x2831B4u;
}
