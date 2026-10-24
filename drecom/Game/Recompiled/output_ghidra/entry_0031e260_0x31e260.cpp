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

// Function: entry_0031e260
// Address: 0x31e260 - 0x31e2b8
void entry_0031e260_0x31e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e260_0x31e260");
#endif

    switch (ctx->pc) {
        case 0x31e284u: goto label_31e284;
        default: break;
    }

    ctx->pc = 0x31e260u;

    // 0x31e260: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x31e260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e264: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x31e264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e268: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x31e268u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31e26c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x31e26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e270: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x31e270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e274: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31e274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31e278: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x31e278u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31e27c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x31E27Cu;
    SET_GPR_U32(ctx, 31, 0x31E284u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x31E27Cu, 0x31E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E284u;
label_31e284:
    // 0x31e284: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x31e284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x31e288: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x31e288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e28c: 0x3c0244a2  lui         $v0, 0x44A2
    ctx->pc = 0x31e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17570 << 16));
    // 0x31e290: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x31e290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x31e294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e298: 0x0  nop
    ctx->pc = 0x31e298u;
    // NOP
    // 0x31e29c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31e29cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e2a0: 0x0  nop
    ctx->pc = 0x31e2a0u;
    // NOP
    // 0x31e2a4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x31E2A4u;
    {
        const bool branch_taken_0x31e2a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e2a4) {
            ctx->pc = 0x31E2B8u;
            return;
        }
    }
    ctx->pc = 0x31E2ACu;
    // 0x31e2ac: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x31e2acu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e2b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31E2B0u;
    {
        const bool branch_taken_0x31e2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e2b0) {
            ctx->pc = 0x31E2BCu;
            return;
        }
    }
    ctx->pc = 0x31E2B8u;
}
