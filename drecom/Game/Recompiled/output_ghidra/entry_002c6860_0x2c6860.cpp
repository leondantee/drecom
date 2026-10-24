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

// Function: entry_002c6860
// Address: 0x2c6860 - 0x2c6a3c
void entry_002c6860_0x2c6860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c6860_0x2c6860");
#endif

    switch (ctx->pc) {
        case 0x2c6914u: goto label_2c6914;
        case 0x2c6928u: goto label_2c6928;
        case 0x2c6980u: goto label_2c6980;
        case 0x2c6990u: goto label_2c6990;
        case 0x2c69c0u: goto label_2c69c0;
        case 0x2c69d8u: goto label_2c69d8;
        default: break;
    }

    ctx->pc = 0x2c6860u;

    // 0x2c6860: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6864: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6868: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c6868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c686c: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x2C686Cu;
    {
        const bool branch_taken_0x2c686c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c686c) {
            ctx->pc = 0x2C6A3Cu;
            return;
        }
    }
    ctx->pc = 0x2C6874u;
    // 0x2c6874: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6878: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x2c6878u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x2c687c: 0x1460006f  bnez        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x2C687Cu;
    {
        const bool branch_taken_0x2c687c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c687c) {
            ctx->pc = 0x2C6A3Cu;
            return;
        }
    }
    ctx->pc = 0x2C6884u;
    // 0x2c6884: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6888: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c688c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c688cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c6890: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2c6890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6894: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c6894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c6898: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c689c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c689cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c68a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c68a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c68a4: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2c68a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c68a8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2c68a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c68ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c68acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c68b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c68b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c68b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c68b8: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2c68b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c68bc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2c68bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c68c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c68c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c68c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c68c8: 0x0  nop
    ctx->pc = 0x2c68c8u;
    // NOP
    // 0x2c68cc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c68ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c68d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c68d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c68d4: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2c68d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c68d8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2c68d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c68dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c68dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c68e0: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2c68e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c68e4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2c68e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c68e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c68e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c68ec: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2c68ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c68f0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2c68f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c68f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c68f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c68f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c68fc: 0x0  nop
    ctx->pc = 0x2c68fcu;
    // NOP
    // 0x2c6900: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2c6900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2c6904: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c6904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c6908: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c6908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c690c: 0xc040c24  jal         func_103090
    ctx->pc = 0x2C690Cu;
    SET_GPR_U32(ctx, 31, 0x2C6914u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2C6914u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C6914u) { return; }
    ctx->pc = 0x2C6914u;
label_2c6914:
    // 0x2c6914: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c6914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c6918: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c6918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c691c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2c691cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c6920: 0xc040c86  jal         func_103218
    ctx->pc = 0x2C6920u;
    SET_GPR_U32(ctx, 31, 0x2C6928u);
    ctx->pc = 0x103218u;
    {
        ctx->pc = 0x2C6928u;
        ps2_stubs::sceVu0MulVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C6928u) { return; }
    ctx->pc = 0x2C6928u;
label_2c6928:
    // 0x2c6928: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2c6928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c692c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2c692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6930: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2c6930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6934: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c6934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6938: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2c6938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c693c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2c693cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2c6940: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2c6940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2c6944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6948: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c694c: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2c694cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2c6950: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6954: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6958: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x2c6958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c695c: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2C695Cu;
    {
        const bool branch_taken_0x2c695c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c695c) {
            ctx->pc = 0x2C6A3Cu;
            return;
        }
    }
    ctx->pc = 0x2C6964u;
    // 0x2c6964: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c6964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c696c: 0x0  nop
    ctx->pc = 0x2c696cu;
    // NOP
    // 0x2c6970: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2c6970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2c6974: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c6974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c6978: 0xc067588  jal         func_19D620
    ctx->pc = 0x2C6978u;
    SET_GPR_U32(ctx, 31, 0x2C6980u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x2C6978u, 0x2C6980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6980u;
label_2c6980:
    // 0x2c6980: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2c6980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c6984: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x2c6984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c6988: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2C6988u;
    SET_GPR_U32(ctx, 31, 0x2C6990u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2C6988u, 0x2C6990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6990u;
label_2c6990:
    // 0x2c6990: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6994: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6998: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2c6998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2c699c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2c699cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c69a0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2c69a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c69a4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2c69a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c69a8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2c69a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c69ac: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c69acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c69b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c69b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c69b4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2c69b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c69b8: 0xc045630  jal         func_1158C0
    ctx->pc = 0x2C69B8u;
    SET_GPR_U32(ctx, 31, 0x2C69C0u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x2C69B8u, 0x2C69C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C69C0u;
label_2c69c0:
    // 0x2c69c0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2c69c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2c69c4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2c69c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c69c8: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2c69c8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2c69cc: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x2c69ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c69d0: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2C69D0u;
    SET_GPR_U32(ctx, 31, 0x2C69D8u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2C69D0u, 0x2C69D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C69D8u;
label_2c69d8:
    // 0x2c69d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c69d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c69dc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c69dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c69e0: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2c69e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2c69e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c69e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c69e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c69e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c69ec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c69ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c69f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c69f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c69f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c69f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c69f8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c69f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c69fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c69fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a00: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c6a00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6a04: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x2c6a04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a08: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x2c6a08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6a0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a10: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c6a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c6a14: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c6a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c6a18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a1c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6a20: 0xa0640038  sb          $a0, 0x38($v1)
    ctx->pc = 0x2c6a20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c6a24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a28: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6a2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c6a30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6a38: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2c6a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    ctx->pc = 0x2c6a3cu;
}
