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

// Function: entry_0023190c
// Address: 0x23190c - 0x231970
void entry_0023190c_0x23190c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023190c_0x23190c");
#endif

    switch (ctx->pc) {
        case 0x23191cu: goto label_23191c;
        default: break;
    }

    ctx->pc = 0x23190cu;

    // 0x23190c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x23190cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x231910: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x231910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x231914: 0xc05d00c  jal         func_174030
    ctx->pc = 0x231914u;
    SET_GPR_U32(ctx, 31, 0x23191Cu);
    ctx->pc = 0x174030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174030u, 0x231914u, 0x23191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23191Cu;
label_23191c:
    // 0x23191c: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x23191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231920: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x231920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x231924: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x231924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231928: 0x0  nop
    ctx->pc = 0x231928u;
    // NOP
    // 0x23192c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x23192cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x231930: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x231930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231934: 0x0  nop
    ctx->pc = 0x231934u;
    // NOP
    // 0x231938: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x231938u;
    {
        const bool branch_taken_0x231938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231938) {
            ctx->pc = 0x231970u;
            return;
        }
    }
    ctx->pc = 0x231940u;
    // 0x231940: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x231940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231944: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x231944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231948: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231948u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23194c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x23194cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x231950: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x231950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231954: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x231954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231958: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231958u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23195c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x23195cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x231960: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x231960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231964: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x231964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231968: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23196c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x23196cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x231970u;
}
