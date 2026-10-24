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

// Function: entry_0015f95c
// Address: 0x15f95c - 0x15f9c4
void entry_0015f95c_0x15f95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f95c_0x15f95c");
#endif

    switch (ctx->pc) {
        case 0x15f970u: goto label_15f970;
        case 0x15f994u: goto label_15f994;
        default: break;
    }

    ctx->pc = 0x15f95cu;

    // 0x15f95c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15f95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f960: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x15f960u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x15f964: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x15f964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x15f968: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15F968u;
    SET_GPR_U32(ctx, 31, 0x15F970u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15F968u, 0x15F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F970u;
label_15f970:
    // 0x15f970: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x15f970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f974: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x15f974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f978: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15f978u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15f97c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x15f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f980: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x15f980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f984: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15f984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15f988: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15f988u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15f98c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15F98Cu;
    SET_GPR_U32(ctx, 31, 0x15F994u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15F98Cu, 0x15F994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F994u;
label_15f994:
    // 0x15f994: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x15f994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x15f998: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x15f998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f99c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x15f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x15f9a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f9a4: 0x0  nop
    ctx->pc = 0x15f9a4u;
    // NOP
    // 0x15f9a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15f9a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f9ac: 0x0  nop
    ctx->pc = 0x15f9acu;
    // NOP
    // 0x15f9b0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15F9B0u;
    {
        const bool branch_taken_0x15f9b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f9b0) {
            ctx->pc = 0x15F9C4u;
            return;
        }
    }
    ctx->pc = 0x15F9B8u;
    // 0x15f9b8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f9b8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f9bc: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x15F9BCu;
    {
        const bool branch_taken_0x15f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f9bc) {
            ctx->pc = 0x15FBC4u;
            return;
        }
    }
    ctx->pc = 0x15F9C4u;
}
