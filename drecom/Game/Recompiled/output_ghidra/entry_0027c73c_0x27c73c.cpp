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

// Function: entry_0027c73c
// Address: 0x27c73c - 0x27c7a8
void entry_0027c73c_0x27c73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c73c_0x27c73c");
#endif

    switch (ctx->pc) {
        case 0x27c744u: goto label_27c744;
        case 0x27c784u: goto label_27c784;
        case 0x27c7a0u: goto label_27c7a0;
        default: break;
    }

    ctx->pc = 0x27c73cu;

    // 0x27c73c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27C73Cu;
    SET_GPR_U32(ctx, 31, 0x27C744u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27C73Cu, 0x27C744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C744u;
label_27c744:
    // 0x27c744: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27c744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27c748: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27c748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27c74c: 0x0  nop
    ctx->pc = 0x27c74cu;
    // NOP
    // 0x27c750: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27c750u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27c754: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x27c754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x27c758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c75c: 0x0  nop
    ctx->pc = 0x27c75cu;
    // NOP
    // 0x27c760: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27c760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27c764: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x27c764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27c768: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c76c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x27c76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c770: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27c774: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c778: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27c778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27c77c: 0xc084964  jal         func_212590
    ctx->pc = 0x27C77Cu;
    SET_GPR_U32(ctx, 31, 0x27C784u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C77Cu, 0x27C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C784u;
label_27c784:
    // 0x27c784: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c788: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x27c788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c78c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c78cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27c790: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c794: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27c794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27c798: 0xc084964  jal         func_212590
    ctx->pc = 0x27C798u;
    SET_GPR_U32(ctx, 31, 0x27C7A0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C798u, 0x27C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C7A0u;
label_27c7a0:
    // 0x27c7a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27c7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27c7a4: 0x0  nop
    ctx->pc = 0x27c7a4u;
    // NOP
    ctx->pc = 0x27c7a8u;
}
