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

// Function: R108_main
// Address: 0x27e730 - 0x27e78c
void R108_main_0x27e730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R108_main_0x27e730");
#endif

    switch (ctx->pc) {
        case 0x27e744u: goto label_27e744;
        case 0x27e75cu: goto label_27e75c;
        case 0x27e778u: goto label_27e778;
        default: break;
    }

    ctx->pc = 0x27e730u;

    // 0x27e730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27e730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27e734: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27e734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27e738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27e738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27e73c: 0xc09fb18  jal         func_27EC60
    ctx->pc = 0x27E73Cu;
    SET_GPR_U32(ctx, 31, 0x27E744u);
    ctx->pc = 0x27EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EC60u, 0x27E73Cu, 0x27E744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E744u;
label_27e744:
    // 0x27e744: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e748: 0x8c301a8c  lw          $s0, 0x1A8C($at)
    ctx->pc = 0x27e748u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D1A8Cu));
    // 0x27e74c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27e74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e750: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27e750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e754: 0xc0ce20c  jal         func_338830
    ctx->pc = 0x27E754u;
    SET_GPR_U32(ctx, 31, 0x27E75Cu);
    ctx->pc = 0x338830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338830u, 0x27E754u, 0x27E75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E75Cu;
label_27e75c:
    // 0x27e75c: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27E75Cu;
    {
        const bool branch_taken_0x27e75c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x27e75c) {
            ctx->pc = 0x27E778u;
            goto label_27e778;
        }
    }
    ctx->pc = 0x27E764u;
    // 0x27e764: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27e764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27e768: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27e768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27e76c: 0x2445f020  addiu       $a1, $v0, -0xFE0
    ctx->pc = 0x27e76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963232));
    // 0x27e770: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27E770u;
    SET_GPR_U32(ctx, 31, 0x27E778u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27E770u, 0x27E778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E778u;
label_27e778:
    // 0x27e778: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27e778u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e77c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27e77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e780: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27e780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e784: 0x3e00008  jr          $ra
    ctx->pc = 0x27E784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E78Cu;
}
