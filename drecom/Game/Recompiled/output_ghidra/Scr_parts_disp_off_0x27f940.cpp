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

// Function: Scr_parts_disp_off
// Address: 0x27f940 - 0x27f98c
void Scr_parts_disp_off_0x27f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_parts_disp_off_0x27f940");
#endif

    switch (ctx->pc) {
        case 0x27f958u: goto label_27f958;
        case 0x27f964u: goto label_27f964;
        case 0x27f974u: goto label_27f974;
        case 0x27f97cu: goto label_27f97c;
        default: break;
    }

    ctx->pc = 0x27f940u;

    // 0x27f940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27f940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27f944: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x27f944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x27f948: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27f948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f94c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27f94cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f950: 0xc050018  jal         func_140060
    ctx->pc = 0x27F950u;
    SET_GPR_U32(ctx, 31, 0x27F958u);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x27F950u, 0x27F958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F958u;
label_27f958:
    // 0x27f958: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x27f958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x27f95c: 0xc084964  jal         func_212590
    ctx->pc = 0x27F95Cu;
    SET_GPR_U32(ctx, 31, 0x27F964u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27F95Cu, 0x27F964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F964u;
label_27f964:
    // 0x27f964: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27f964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f968: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27f968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f96c: 0xc050018  jal         func_140060
    ctx->pc = 0x27F96Cu;
    SET_GPR_U32(ctx, 31, 0x27F974u);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x27F96Cu, 0x27F974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F974u;
label_27f974:
    // 0x27f974: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27F974u;
    SET_GPR_U32(ctx, 31, 0x27F97Cu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27F974u, 0x27F97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F97Cu;
label_27f97c:
    // 0x27f97c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x27f97cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f980: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27f980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27f984: 0x3e00008  jr          $ra
    ctx->pc = 0x27F984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F98Cu;
}
