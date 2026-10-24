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

// Function: entry_002cab7c
// Address: 0x2cab7c - 0x2cae40
void entry_002cab7c_0x2cab7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cab7c_0x2cab7c");
#endif

    switch (ctx->pc) {
        case 0x2caba8u: goto label_2caba8;
        case 0x2cabb0u: goto label_2cabb0;
        case 0x2caca0u: goto label_2caca0;
        case 0x2cacf0u: goto label_2cacf0;
        case 0x2cad0cu: goto label_2cad0c;
        case 0x2cad80u: goto label_2cad80;
        case 0x2cad98u: goto label_2cad98;
        case 0x2cadd0u: goto label_2cadd0;
        case 0x2cae08u: goto label_2cae08;
        default: break;
    }

    ctx->pc = 0x2cab7cu;

    // 0x2cab7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cab80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cab84: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2cab84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cab88: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cab8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cab90: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cab90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cab94: 0x2406040b  addiu       $a2, $zero, 0x40B
    ctx->pc = 0x2cab94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x2cab98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cab98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cab9c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cab9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2caba0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CABA0u;
    SET_GPR_U32(ctx, 31, 0x2CABA8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CABA0u, 0x2CABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CABA8u;
label_2caba8:
    // 0x2caba8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CABA8u;
    SET_GPR_U32(ctx, 31, 0x2CABB0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CABA8u, 0x2CABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CABB0u;
label_2cabb0:
    // 0x2cabb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cabb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cabb4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2cabb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2cabb8: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2cabb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2cabbc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2cabbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cabc0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cabc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cabc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cabc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cabc8: 0xa462127c  sh          $v0, 0x127C($v1)
    ctx->pc = 0x2cabc8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cabcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cabccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cabd0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cabd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cabd4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cabd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cabd8: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2cabd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2cabdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cabdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cabe0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cabe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cabe4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cabe8: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2cabe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2cabec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cabecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cabf0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cabf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cabf4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cabf8: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2cabf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2cabfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cabfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cac00: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2cac00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cac04: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2cac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2cac08: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2cac08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2cac0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cac0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cac10: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2cac10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2cac14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cac14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cac18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cac1c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cac1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2cac20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cac20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cac24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cac28: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2cac28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2cac2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cac30: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x2cac30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cac34: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cac34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cac38: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2cac38u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cac3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cac3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cac40: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2cac40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cac44: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2cac44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2cac48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cac48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cac4c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cac4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cac50: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2cac50u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cac54: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cac54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cac58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cac58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cac5c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2cac5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cac60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cac60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cac64: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2cac64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2cac68: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2cac68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cac6c: 0xc4a10128  lwc1        $f1, 0x128($a1)
    ctx->pc = 0x2cac6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cac70: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cac70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cac74: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2cac74u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cac78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cac78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cac7c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2cac7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cac80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2cac80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2cac84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cac84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cac88: 0x0  nop
    ctx->pc = 0x2cac88u;
    // NOP
    // 0x2cac8c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2cac8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2cac90: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2cac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cac94: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2cac94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cac98: 0xc040c24  jal         func_103090
    ctx->pc = 0x2CAC98u;
    SET_GPR_U32(ctx, 31, 0x2CACA0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2CACA0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CACA0u) { return; }
    ctx->pc = 0x2CACA0u;
label_2caca0:
    // 0x2caca0: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2caca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x2caca4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2caca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2caca8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2caca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cacac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cacacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cacb0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cacb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cacb4: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2cacb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2cacb8: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2cacb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x2cacbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cacbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cacc0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2cacc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cacc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cacc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cacc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cacc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caccc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2cacccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2cacd0: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2cacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x2cacd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cacd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cacd8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2cacd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cacdc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cacdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cace0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cace4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2cace4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2cace8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CACE8u;
    SET_GPR_U32(ctx, 31, 0x2CACF0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CACE8u, 0x2CACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CACF0u;
label_2cacf0:
    // 0x2cacf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cacf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cacf4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2cacf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2cacf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cacf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cacfc: 0x1462007a  bne         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2CACFCu;
    {
        const bool branch_taken_0x2cacfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cacfc) {
            ctx->pc = 0x2CAEE8u;
            return;
        }
    }
    ctx->pc = 0x2CAD04u;
    // 0x2cad04: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CAD04u;
    SET_GPR_U32(ctx, 31, 0x2CAD0Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CAD04u, 0x2CAD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD0Cu;
label_2cad0c:
    // 0x2cad0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cad0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cad10: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2cad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2cad14: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2cad14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2cad18: 0x9042003c  lbu         $v0, 0x3C($v0)
    ctx->pc = 0x2cad18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2cad1c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2cad1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cad20: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2cad20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cad24: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2cad24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cad28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2cad28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cad2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cad30: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2cad30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cad34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cad38: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2cad38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cad3c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2cad3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cad40: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cad40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cad44: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2cad44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cad48: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cad48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cad4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cad4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2cad50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cad50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cad54: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2CAD54u;
    {
        const bool branch_taken_0x2cad54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cad54) {
            ctx->pc = 0x2CAEE8u;
            return;
        }
    }
    ctx->pc = 0x2CAD5Cu;
    // 0x2cad5c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cad60: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2cad60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2cad64: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2cad64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2cad68: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2cad68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cad6c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2cad6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cad70: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2cad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2cad74: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2cad74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cad78: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CAD78u;
    SET_GPR_U32(ctx, 31, 0x2CAD80u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CAD78u, 0x2CAD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD80u;
label_2cad80:
    // 0x2cad80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cad80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cad84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cad84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cad88: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2CAD88u;
    {
        const bool branch_taken_0x2cad88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cad88) {
            ctx->pc = 0x2CAE40u;
            return;
        }
    }
    ctx->pc = 0x2CAD90u;
    // 0x2cad90: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CAD90u;
    SET_GPR_U32(ctx, 31, 0x2CAD98u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CAD90u, 0x2CAD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD98u;
label_2cad98:
    // 0x2cad98: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cad98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cad9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cad9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cada0: 0x0  nop
    ctx->pc = 0x2cada0u;
    // NOP
    // 0x2cada4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cada4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cada8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2cada8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2cadac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cadacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cadb0: 0x0  nop
    ctx->pc = 0x2cadb0u;
    // NOP
    // 0x2cadb4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cadb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cadb8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2cadb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cadbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cadbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cadc0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cadc4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cadc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cadc8: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CADC8u;
    SET_GPR_U32(ctx, 31, 0x2CADD0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CADC8u, 0x2CADD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CADD0u;
label_2cadd0:
    // 0x2cadd0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cadd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cadd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cadd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cadd8: 0x0  nop
    ctx->pc = 0x2cadd8u;
    // NOP
    // 0x2caddc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2caddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cade0: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2cade0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2cade4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cade4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cade8: 0x0  nop
    ctx->pc = 0x2cade8u;
    // NOP
    // 0x2cadec: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cadecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cadf0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2cadf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cadf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cadf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cadf8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cadf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cadfc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2cadfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2cae00: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CAE00u;
    SET_GPR_U32(ctx, 31, 0x2CAE08u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CAE00u, 0x2CAE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE08u;
label_2cae08:
    // 0x2cae08: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cae08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cae0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cae0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cae10: 0x0  nop
    ctx->pc = 0x2cae10u;
    // NOP
    // 0x2cae14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cae14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cae18: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cae18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cae1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cae1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cae20: 0x0  nop
    ctx->pc = 0x2cae20u;
    // NOP
    // 0x2cae24: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cae24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cae28: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2cae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cae2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cae2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cae30: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cae34: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2cae34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2cae38: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2CAE38u;
    {
        const bool branch_taken_0x2cae38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cae38) {
            ctx->pc = 0x2CAEE8u;
            return;
        }
    }
    ctx->pc = 0x2CAE40u;
}
