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

// Function: entry_00145810
// Address: 0x145810 - 0x14585c
void entry_00145810_0x145810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145810_0x145810");
#endif

    switch (ctx->pc) {
        case 0x145828u: goto label_145828;
        default: break;
    }

    ctx->pc = 0x145810u;

    // 0x145810: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145814: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145818: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x145818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14581c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145820: 0xc058f20  jal         func_163C80
    ctx->pc = 0x145820u;
    SET_GPR_U32(ctx, 31, 0x145828u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x145820u, 0x145828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145828u;
label_145828:
    // 0x145828: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x145828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x14582c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x14582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145830: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x145830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145834: 0x0  nop
    ctx->pc = 0x145834u;
    // NOP
    // 0x145838: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14583c: 0x0  nop
    ctx->pc = 0x14583cu;
    // NOP
    // 0x145840: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x145840u;
    {
        const bool branch_taken_0x145840 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x145840) {
            ctx->pc = 0x14585Cu;
            return;
        }
    }
    ctx->pc = 0x145848u;
    // 0x145848: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x145848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x14584c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14584cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145850: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x145850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145854: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x145854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x145858: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x145858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->pc = 0x14585cu;
}
