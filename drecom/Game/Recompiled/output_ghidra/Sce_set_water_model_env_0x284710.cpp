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

// Function: Sce_set_water_model_env
// Address: 0x284710 - 0x2847c8
void Sce_set_water_model_env_0x284710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_set_water_model_env_0x284710");
#endif

    switch (ctx->pc) {
        case 0x284734u: goto label_284734;
        case 0x284780u: goto label_284780;
        case 0x284790u: goto label_284790;
        case 0x2847a4u: goto label_2847a4;
        case 0x2847b8u: goto label_2847b8;
        default: break;
    }

    ctx->pc = 0x284710u;

    // 0x284710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284714: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x284714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x284718: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x284718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x28471c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28471cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x284720: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x284720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x284724: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x284724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x284728: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x284728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x28472c: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x28472Cu;
    SET_GPR_U32(ctx, 31, 0x284734u);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x28472Cu, 0x284734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284734u;
label_284734:
    // 0x284734: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x284734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x284738: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x284738u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28473c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x28473cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x284740: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x284740u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x284744: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x284744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x284748: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x284748u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28474c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x28474cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x284750: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x284750u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x284754: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x284754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x284758: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x284758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28475c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x28475cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x284760: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x284760u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x284764: 0x24037fe0  addiu       $v1, $zero, 0x7FE0
    ctx->pc = 0x284764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32736));
    // 0x284768: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x284768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28476c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x28476cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x284770: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x284770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x284774: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x284774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284778: 0xc096390  jal         func_258E40
    ctx->pc = 0x284778u;
    SET_GPR_U32(ctx, 31, 0x284780u);
    ctx->pc = 0x258E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E40u, 0x284778u, 0x284780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284780u;
label_284780:
    // 0x284780: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x284780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x284784: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x284784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x284788: 0xc096188  jal         func_258620
    ctx->pc = 0x284788u;
    SET_GPR_U32(ctx, 31, 0x284790u);
    ctx->pc = 0x258620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258620u, 0x284788u, 0x284790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284790u;
label_284790:
    // 0x284790: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x284790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x284794: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x284794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x284798: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x284798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28479c: 0xc09620c  jal         func_258830
    ctx->pc = 0x28479Cu;
    SET_GPR_U32(ctx, 31, 0x2847A4u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x28479Cu, 0x2847A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847A4u;
label_2847a4:
    // 0x2847a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2847a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2847a8: 0x8c441248  lw          $a0, 0x1248($v0)
    ctx->pc = 0x2847a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4680)));
    // 0x2847ac: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2847acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2847b0: 0xc0d776c  jal         func_35DDB0
    ctx->pc = 0x2847B0u;
    SET_GPR_U32(ctx, 31, 0x2847B8u);
    ctx->pc = 0x35DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DDB0u, 0x2847B0u, 0x2847B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847B8u;
label_2847b8:
    // 0x2847b8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2847b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2847bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2847bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2847c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2847C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2847C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2847C8u;
}
