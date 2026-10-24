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

// Function: Md_set_parts_prim
// Address: 0x2584c0 - 0x25852c
void Md_set_parts_prim_0x2584c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_parts_prim_0x2584c0");
#endif

    switch (ctx->pc) {
        case 0x2584e4u: goto label_2584e4;
        case 0x2584fcu: goto label_2584fc;
        default: break;
    }

    ctx->pc = 0x2584c0u;

    // 0x2584c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2584c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2584c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2584c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2584c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2584c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2584cc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2584ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2584d0: 0xffa50030  sd          $a1, 0x30($sp)
    ctx->pc = 0x2584d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 5));
    // 0x2584d4: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x2584d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x2584d8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2584d8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2584dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2584DCu;
    {
        const bool branch_taken_0x2584dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2584dc) {
            ctx->pc = 0x258508u;
            goto label_258508;
        }
    }
    ctx->pc = 0x2584E4u;
label_2584e4:
    // 0x2584e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2584e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2584e8: 0xdfa50030  ld          $a1, 0x30($sp)
    ctx->pc = 0x2584e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2584ec: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x2584ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2584f0: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2584f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2584f4: 0xc09614c  jal         func_258530
    ctx->pc = 0x2584F4u;
    SET_GPR_U32(ctx, 31, 0x2584FCu);
    ctx->pc = 0x258530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258530u, 0x2584F4u, 0x2584FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2584FCu;
label_2584fc:
    // 0x2584fc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2584fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x258500: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x258500u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258504: 0x0  nop
    ctx->pc = 0x258504u;
    // NOP
label_258508:
    // 0x258508: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x258508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x25850c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x25850cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x258510: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x258510u;
    {
        const bool branch_taken_0x258510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258510) {
            ctx->pc = 0x2584E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2584e4;
        }
    }
    ctx->pc = 0x258518u;
    // 0x258518: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x258518u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25851c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25851cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258520: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x258520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x258524: 0x3e00008  jr          $ra
    ctx->pc = 0x258524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25852Cu;
}
