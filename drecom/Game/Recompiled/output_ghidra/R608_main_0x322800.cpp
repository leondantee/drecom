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

// Function: R608_main
// Address: 0x322800 - 0x32283c
void R608_main_0x322800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R608_main_0x322800");
#endif

    switch (ctx->pc) {
        case 0x32281cu: goto label_32281c;
        case 0x322828u: goto label_322828;
        default: break;
    }

    ctx->pc = 0x322800u;

    // 0x322800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x322800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x322804: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x322804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x322808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x322808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32280c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x32280cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x322810: 0xc42cdce4  lwc1        $f12, -0x231C($at)
    ctx->pc = 0x322810u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x322814: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x322814u;
    SET_GPR_U32(ctx, 31, 0x32281Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x322814u, 0x32281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32281Cu;
label_32281c:
    // 0x32281c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x32281cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x322820: 0xc0c8a10  jal         func_322840
    ctx->pc = 0x322820u;
    SET_GPR_U32(ctx, 31, 0x322828u);
    ctx->pc = 0x322840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322840u, 0x322820u, 0x322828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322828u;
label_322828:
    // 0x322828: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x322828u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32282c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32282cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322830: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x322830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x322834: 0x3e00008  jr          $ra
    ctx->pc = 0x322834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32283Cu;
}
