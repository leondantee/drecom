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

// Function: entry_0036d810
// Address: 0x36d810 - 0x36d848
void entry_0036d810_0x36d810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d810_0x36d810");
#endif

    switch (ctx->pc) {
        case 0x36d834u: goto label_36d834;
        case 0x36d844u: goto label_36d844;
        default: break;
    }

    ctx->pc = 0x36d810u;

    // 0x36d810: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x36d810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x36d814: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x36d814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x36d818: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36d818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36d81c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x36d81cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36d820: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x36d820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d824: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36d824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36d828: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x36d828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x36d82c: 0xc05c848  jal         func_172120
    ctx->pc = 0x36D82Cu;
    SET_GPR_U32(ctx, 31, 0x36D834u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x36D82Cu, 0x36D834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D834u;
label_36d834:
    // 0x36d834: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x36d834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d838: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x36d838u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d83c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x36D83Cu;
    SET_GPR_U32(ctx, 31, 0x36D844u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x36D83Cu, 0x36D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D844u;
label_36d844:
    // 0x36d844: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36d844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->pc = 0x36d848u;
}
