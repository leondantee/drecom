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

// Function: entry_001864c0
// Address: 0x1864c0 - 0x186548
void entry_001864c0_0x1864c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001864c0_0x1864c0");
#endif

    switch (ctx->pc) {
        case 0x1864d0u: goto label_1864d0;
        case 0x1864e0u: goto label_1864e0;
        case 0x186528u: goto label_186528;
        default: break;
    }

    ctx->pc = 0x1864c0u;

    // 0x1864c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1864c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1864c4: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x1864c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1864c8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1864C8u;
    SET_GPR_U32(ctx, 31, 0x1864D0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1864D0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1864D0u) { return; }
    ctx->pc = 0x1864D0u;
label_1864d0:
    // 0x1864d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1864d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1864d4: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x1864d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1864d8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1864D8u;
    SET_GPR_U32(ctx, 31, 0x1864E0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1864E0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1864E0u) { return; }
    ctx->pc = 0x1864E0u;
label_1864e0:
    // 0x1864e0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1864e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1864e4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1864e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1864e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1864e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1864ec: 0x0  nop
    ctx->pc = 0x1864ecu;
    // NOP
    // 0x1864f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1864f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1864f4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1864f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1864f8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1864f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1864fc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1864fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x186500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186504: 0x0  nop
    ctx->pc = 0x186504u;
    // NOP
    // 0x186508: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x186508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18650c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x18650cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x186510: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x186510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186514: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x186514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186518: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x186518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18651c: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x18651cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x186520: 0xc05aa7c  jal         func_16A9F0
    ctx->pc = 0x186520u;
    SET_GPR_U32(ctx, 31, 0x186528u);
    ctx->pc = 0x16A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A9F0u, 0x186520u, 0x186528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186528u;
label_186528:
    // 0x186528: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x186528u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18652c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18652Cu;
    {
        const bool branch_taken_0x18652c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18652c) {
            ctx->pc = 0x186548u;
            return;
        }
    }
    ctx->pc = 0x186534u;
    // 0x186534: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x186534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x186538: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x186538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18653c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x18653cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186540: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x186540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186544: 0xe6000194  swc1        $f0, 0x194($s0)
    ctx->pc = 0x186544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
    ctx->pc = 0x186548u;
}
