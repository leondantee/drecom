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

// Function: entry_0027c4f8
// Address: 0x27c4f8 - 0x27c560
void entry_0027c4f8_0x27c4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c4f8_0x27c4f8");
#endif

    switch (ctx->pc) {
        case 0x27c500u: goto label_27c500;
        case 0x27c540u: goto label_27c540;
        case 0x27c55cu: goto label_27c55c;
        default: break;
    }

    ctx->pc = 0x27c4f8u;

    // 0x27c4f8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27C4F8u;
    SET_GPR_U32(ctx, 31, 0x27C500u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27C4F8u, 0x27C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C500u;
label_27c500:
    // 0x27c500: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27c500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27c504: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27c504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27c508: 0x0  nop
    ctx->pc = 0x27c508u;
    // NOP
    // 0x27c50c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27c50cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27c510: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x27c510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x27c514: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c518: 0x0  nop
    ctx->pc = 0x27c518u;
    // NOP
    // 0x27c51c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27c51cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27c520: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x27c520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27c524: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c528: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x27c528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c52c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c52cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27c530: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c534: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27c534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27c538: 0xc084964  jal         func_212590
    ctx->pc = 0x27C538u;
    SET_GPR_U32(ctx, 31, 0x27C540u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C538u, 0x27C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C540u;
label_27c540:
    // 0x27c540: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c544: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x27c544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c548: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c548u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27c54c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c550: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27c550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27c554: 0xc084964  jal         func_212590
    ctx->pc = 0x27C554u;
    SET_GPR_U32(ctx, 31, 0x27C55Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C554u, 0x27C55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C55Cu;
label_27c55c:
    // 0x27c55c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27c55cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x27c560u;
}
