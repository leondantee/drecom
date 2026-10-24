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

// Function: entry_002e790c
// Address: 0x2e790c - 0x2e79c4
void entry_002e790c_0x2e790c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e790c_0x2e790c");
#endif

    switch (ctx->pc) {
        case 0x2e791cu: goto label_2e791c;
        case 0x2e7960u: goto label_2e7960;
        case 0x2e797cu: goto label_2e797c;
        default: break;
    }

    ctx->pc = 0x2e790cu;

    // 0x2e790c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e790cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e7910: 0xc60c0078  lwc1        $f12, 0x78($s0)
    ctx->pc = 0x2e7910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7914: 0xc067844  jal         func_19E110
    ctx->pc = 0x2E7914u;
    SET_GPR_U32(ctx, 31, 0x2E791Cu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x2E7914u, 0x2E791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E791Cu;
label_2e791c:
    // 0x2e791c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e791cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7920: 0x0  nop
    ctx->pc = 0x2e7920u;
    // NOP
    // 0x2e7924: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e7924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e7928: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e7928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e792c: 0x0  nop
    ctx->pc = 0x2e792cu;
    // NOP
    // 0x2e7930: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2e7930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2e7934: 0xc600007c  lwc1        $f0, 0x7C($s0)
    ctx->pc = 0x2e7934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7938: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2e7938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e793c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e793cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e7940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7944: 0x0  nop
    ctx->pc = 0x2e7944u;
    // NOP
    // 0x2e7948: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2e7948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2e794c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e794cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e7950: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e7950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e7954: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e7954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e7958: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2E7958u;
    SET_GPR_U32(ctx, 31, 0x2E7960u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2E7960u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E7960u) { return; }
    ctx->pc = 0x2E7960u;
label_2e7960:
    // 0x2e7960: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e7960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e7964: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e7964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e7968: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2e7968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2e796c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2e796cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2e7970: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e7970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e7974: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2E7974u;
    SET_GPR_U32(ctx, 31, 0x2E797Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2E7974u, 0x2E797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E797Cu;
label_2e797c:
    // 0x2e797c: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x2e797cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7980: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2e7980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2e7984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e7984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7988: 0x0  nop
    ctx->pc = 0x2e7988u;
    // NOP
    // 0x2e798c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e798cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e7990: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x2e7990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x2e7994: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x2e7994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7998: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e7998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e799c: 0x0  nop
    ctx->pc = 0x2e799cu;
    // NOP
    // 0x2e79a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e79a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e79a4: 0x0  nop
    ctx->pc = 0x2e79a4u;
    // NOP
    // 0x2e79a8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E79A8u;
    {
        const bool branch_taken_0x2e79a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e79a8) {
            ctx->pc = 0x2E79C4u;
            return;
        }
    }
    ctx->pc = 0x2E79B0u;
    // 0x2e79b0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e79b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e79b4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e79b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e79b8: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x2e79b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x2e79bc: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x2e79bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x2e79c0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2e79c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x2e79c4u;
}
