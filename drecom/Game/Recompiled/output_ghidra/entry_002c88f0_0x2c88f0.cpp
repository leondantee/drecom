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

// Function: entry_002c88f0
// Address: 0x2c88f0 - 0x2c8aac
void entry_002c88f0_0x2c88f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c88f0_0x2c88f0");
#endif

    switch (ctx->pc) {
        case 0x2c8994u: goto label_2c8994;
        case 0x2c89a8u: goto label_2c89a8;
        case 0x2c89f0u: goto label_2c89f0;
        case 0x2c8a00u: goto label_2c8a00;
        case 0x2c8a30u: goto label_2c8a30;
        case 0x2c8a48u: goto label_2c8a48;
        default: break;
    }

    ctx->pc = 0x2c88f0u;

    // 0x2c88f0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c88f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c88f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c88f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c88f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c88fc: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x2C88FCu;
    {
        const bool branch_taken_0x2c88fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c88fc) {
            ctx->pc = 0x2C8AACu;
            return;
        }
    }
    ctx->pc = 0x2C8904u;
    // 0x2c8904: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8908: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c890c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8910: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2c8910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8914: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c8914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c8918: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c891c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8920: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c8920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8924: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2c8924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8928: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2c8928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c892c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8930: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8934: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c8934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8938: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2c8938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c893c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2c893cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c8940: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c8940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8948: 0x0  nop
    ctx->pc = 0x2c8948u;
    // NOP
    // 0x2c894c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c894cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c8950: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8954: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2c8954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8958: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2c8958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c895c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8960: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2c8960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8964: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2c8964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c8968: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c896c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2c896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8970: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2c8970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c8974: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c8974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c897c: 0x0  nop
    ctx->pc = 0x2c897cu;
    // NOP
    // 0x2c8980: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2c8980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2c8984: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c8984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8988: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2c8988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c898c: 0xc040c24  jal         func_103090
    ctx->pc = 0x2C898Cu;
    SET_GPR_U32(ctx, 31, 0x2C8994u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2C8994u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C8994u) { return; }
    ctx->pc = 0x2C8994u;
label_2c8994:
    // 0x2c8994: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c8994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8998: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c8998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c899c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2c899cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c89a0: 0xc040c86  jal         func_103218
    ctx->pc = 0x2C89A0u;
    SET_GPR_U32(ctx, 31, 0x2C89A8u);
    ctx->pc = 0x103218u;
    {
        ctx->pc = 0x2C89A8u;
        ps2_stubs::sceVu0MulVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C89A8u) { return; }
    ctx->pc = 0x2C89A8u;
label_2c89a8:
    // 0x2c89a8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2c89a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c89ac: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2c89acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c89b0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2c89b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c89b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c89b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c89b8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2c89b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c89bc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2c89bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2c89c0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c89c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c89c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c89c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c89c8: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x2c89c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c89cc: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2C89CCu;
    {
        const bool branch_taken_0x2c89cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c89cc) {
            ctx->pc = 0x2C8AACu;
            return;
        }
    }
    ctx->pc = 0x2C89D4u;
    // 0x2c89d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c89d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c89d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c89dc: 0x0  nop
    ctx->pc = 0x2c89dcu;
    // NOP
    // 0x2c89e0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2c89e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2c89e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c89e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c89e8: 0xc067588  jal         func_19D620
    ctx->pc = 0x2C89E8u;
    SET_GPR_U32(ctx, 31, 0x2C89F0u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x2C89E8u, 0x2C89F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C89F0u;
label_2c89f0:
    // 0x2c89f0: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2c89f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c89f4: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x2c89f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c89f8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2C89F8u;
    SET_GPR_U32(ctx, 31, 0x2C8A00u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2C89F8u, 0x2C8A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A00u;
label_2c8a00:
    // 0x2c8a00: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a04: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8a08: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2c8a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2c8a0c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2c8a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8a10: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2c8a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8a14: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2c8a14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c8a18: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2c8a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8a1c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c8a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8a20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c8a20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c8a24: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2c8a24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c8a28: 0xc045630  jal         func_1158C0
    ctx->pc = 0x2C8A28u;
    SET_GPR_U32(ctx, 31, 0x2C8A30u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x2C8A28u, 0x2C8A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A30u;
label_2c8a30:
    // 0x2c8a30: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2c8a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2c8a34: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2c8a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8a38: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2c8a38u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2c8a3c: 0xc7ad006c  lwc1        $f13, 0x6C($sp)
    ctx->pc = 0x2c8a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c8a40: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2C8A40u;
    SET_GPR_U32(ctx, 31, 0x2C8A48u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2C8A40u, 0x2C8A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A48u;
label_2c8a48:
    // 0x2c8a48: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a4c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8a50: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2c8a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2c8a54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c8a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8a58: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a5c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c8a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c8a60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c8a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8a64: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a68: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c8a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c8a6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a70: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c8a70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8a74: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a78: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c8a78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8a7c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a80: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c8a84: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c8a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c8a88: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a8c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8a90: 0xa0640038  sb          $a0, 0x38($v1)
    ctx->pc = 0x2c8a90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c8a94: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8a9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c8a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c8aa0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8aa4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8aa8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2c8aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    ctx->pc = 0x2c8aacu;
}
