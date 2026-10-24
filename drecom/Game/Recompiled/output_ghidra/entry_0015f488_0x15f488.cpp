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

// Function: entry_0015f488
// Address: 0x15f488 - 0x15f4f0
void entry_0015f488_0x15f488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f488_0x15f488");
#endif

    switch (ctx->pc) {
        case 0x15f49cu: goto label_15f49c;
        case 0x15f4c0u: goto label_15f4c0;
        default: break;
    }

    ctx->pc = 0x15f488u;

    // 0x15f488: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15f488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f48c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x15f48cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x15f490: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x15f490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x15f494: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15F494u;
    SET_GPR_U32(ctx, 31, 0x15F49Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15F494u, 0x15F49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F49Cu;
label_15f49c:
    // 0x15f49c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x15f49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f4a0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x15f4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f4a4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15f4a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15f4a8: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x15f4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f4ac: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x15f4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f4b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15f4b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15f4b4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15f4b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15f4b8: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15F4B8u;
    SET_GPR_U32(ctx, 31, 0x15F4C0u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15F4B8u, 0x15F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F4C0u;
label_15f4c0:
    // 0x15f4c0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x15f4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x15f4c4: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x15f4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f4c8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x15f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x15f4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f4d0: 0x0  nop
    ctx->pc = 0x15f4d0u;
    // NOP
    // 0x15f4d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15f4d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f4d8: 0x0  nop
    ctx->pc = 0x15f4d8u;
    // NOP
    // 0x15f4dc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15F4DCu;
    {
        const bool branch_taken_0x15f4dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f4dc) {
            ctx->pc = 0x15F4F0u;
            return;
        }
    }
    ctx->pc = 0x15F4E4u;
    // 0x15f4e4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15f4e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f4e8: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x15F4E8u;
    {
        const bool branch_taken_0x15f4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f4e8) {
            ctx->pc = 0x15F8E4u;
            return;
        }
    }
    ctx->pc = 0x15F4F0u;
}
