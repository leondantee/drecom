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

// Function: entry_0018427c
// Address: 0x18427c - 0x1842d8
void entry_0018427c_0x18427c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018427c_0x18427c");
#endif

    switch (ctx->pc) {
        case 0x184294u: goto label_184294;
        case 0x1842a8u: goto label_1842a8;
        default: break;
    }

    ctx->pc = 0x18427cu;

    // 0x18427c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x18427cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x184280: 0x26640190  addiu       $a0, $s3, 0x190
    ctx->pc = 0x184280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 400));
    // 0x184284: 0x26850190  addiu       $a1, $s4, 0x190
    ctx->pc = 0x184284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
    // 0x184288: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x184288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18428c: 0xc040c60  jal         func_103180
    ctx->pc = 0x18428Cu;
    SET_GPR_U32(ctx, 31, 0x184294u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x184294u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x184294u) { return; }
    ctx->pc = 0x184294u;
label_184294:
    // 0x184294: 0x266401a0  addiu       $a0, $s3, 0x1A0
    ctx->pc = 0x184294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 416));
    // 0x184298: 0x268501a0  addiu       $a1, $s4, 0x1A0
    ctx->pc = 0x184298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 416));
    // 0x18429c: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x18429cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1842a0: 0xc040c60  jal         func_103180
    ctx->pc = 0x1842A0u;
    SET_GPR_U32(ctx, 31, 0x1842A8u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1842A8u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1842A8u) { return; }
    ctx->pc = 0x1842A8u;
label_1842a8:
    // 0x1842a8: 0xc68101bc  lwc1        $f1, 0x1BC($s4)
    ctx->pc = 0x1842a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1842ac: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1842acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1842b0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1842b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1842b4: 0xe66001bc  swc1        $f0, 0x1BC($s3)
    ctx->pc = 0x1842b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 444), bits); }
    // 0x1842b8: 0xc68101b0  lwc1        $f1, 0x1B0($s4)
    ctx->pc = 0x1842b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1842bc: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1842bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1842c0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1842c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1842c4: 0x0  nop
    ctx->pc = 0x1842c4u;
    // NOP
    // 0x1842c8: 0xe66001b0  swc1        $f0, 0x1B0($s3)
    ctx->pc = 0x1842c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 432), bits); }
    // 0x1842cc: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x1842ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1842d0: 0xc056488  jal         func_159220
    ctx->pc = 0x1842D0u;
    SET_GPR_U32(ctx, 31, 0x1842D8u);
    ctx->pc = 0x159220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159220u, 0x1842D0u, 0x1842D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1842D8u;
}
