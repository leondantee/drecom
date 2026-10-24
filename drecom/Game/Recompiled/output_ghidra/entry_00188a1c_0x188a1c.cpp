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

// Function: entry_00188a1c
// Address: 0x188a1c - 0x188a70
void entry_00188a1c_0x188a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188a1c_0x188a1c");
#endif

    switch (ctx->pc) {
        case 0x188a3cu: goto label_188a3c;
        default: break;
    }

    ctx->pc = 0x188a1cu;

    // 0x188a1c: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x188a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x188a20: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x188a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x188a24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x188a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188a28: 0xc62001b4  lwc1        $f0, 0x1B4($s1)
    ctx->pc = 0x188a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188a2c: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x188a2cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x188a30: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x188a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x188a34: 0xc0455e6  jal         func_115798
    ctx->pc = 0x188A34u;
    SET_GPR_U32(ctx, 31, 0x188A3Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x188A34u, 0x188A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A3Cu;
label_188a3c:
    // 0x188a3c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x188a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x188a40: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x188a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188a44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188a48: 0x0  nop
    ctx->pc = 0x188a48u;
    // NOP
    // 0x188a4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188a4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188a50: 0x0  nop
    ctx->pc = 0x188a50u;
    // NOP
    // 0x188a54: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x188A54u;
    {
        const bool branch_taken_0x188a54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188a54) {
            ctx->pc = 0x188A70u;
            return;
        }
    }
    ctx->pc = 0x188A5Cu;
    // 0x188a5c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x188a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x188a60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x188a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188a64: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x188a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188a68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x188a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x188a6c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x188a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->pc = 0x188a70u;
}
