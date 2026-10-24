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

// Function: entry_002c964c
// Address: 0x2c964c - 0x2c9910
void entry_002c964c_0x2c964c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c964c_0x2c964c");
#endif

    switch (ctx->pc) {
        case 0x2c9678u: goto label_2c9678;
        case 0x2c9680u: goto label_2c9680;
        case 0x2c9770u: goto label_2c9770;
        case 0x2c97c0u: goto label_2c97c0;
        case 0x2c97dcu: goto label_2c97dc;
        case 0x2c9850u: goto label_2c9850;
        case 0x2c9868u: goto label_2c9868;
        case 0x2c98a0u: goto label_2c98a0;
        case 0x2c98d8u: goto label_2c98d8;
        default: break;
    }

    ctx->pc = 0x2c964cu;

    // 0x2c964c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c964cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9650: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9654: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c9654u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9658: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c965c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c965cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9660: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c9660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c9664: 0x24060401  addiu       $a2, $zero, 0x401
    ctx->pc = 0x2c9664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x2c9668: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c9668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c966c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c966cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c9670: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C9670u;
    SET_GPR_U32(ctx, 31, 0x2C9678u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C9670u, 0x2C9678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9678u;
label_2c9678:
    // 0x2c9678: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9678u;
    SET_GPR_U32(ctx, 31, 0x2C9680u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9678u, 0x2C9680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9680u;
label_2c9680:
    // 0x2c9680: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9684: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2c9684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2c9688: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2c9688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2c968c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c968cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c9690: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c9690u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c9694: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9698: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x2c9698u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c969c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c969cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c96a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c96a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c96a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c96a8: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c96a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c96ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c96acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c96b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c96b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c96b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c96b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c96b8: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c96b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c96bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c96bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c96c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c96c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c96c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c96c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c96c8: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c96c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c96cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c96d0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c96d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c96d4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c96d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c96d8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c96dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c96dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c96e0: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c96e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c96e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c96e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c96e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c96e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c96ec: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2c96ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c96f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c96f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c96f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c96f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c96f8: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2c96f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2c96fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c96fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9700: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2c9700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9704: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c9704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9708: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2c9708u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c970c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c970cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c9710: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c9710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c9714: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2c9714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2c9718: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c971c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c971cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9720: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2c9720u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9724: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c9724u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c9728: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c972c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9730: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c9730u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c9734: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2c9734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c9738: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c973c: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x2c973cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9740: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c9740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9744: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2c9744u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9748: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c9748u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c974c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2c974cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c9750: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c9750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c9754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9758: 0x0  nop
    ctx->pc = 0x2c9758u;
    // NOP
    // 0x2c975c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c975cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c9760: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c9760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c9764: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c9764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c9768: 0xc040c24  jal         func_103090
    ctx->pc = 0x2C9768u;
    SET_GPR_U32(ctx, 31, 0x2C9770u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2C9770u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C9770u) { return; }
    ctx->pc = 0x2C9770u;
label_2c9770:
    // 0x2c9770: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2c9770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2c9774: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9778: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2c9778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c977c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c977cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9780: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9784: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2c9784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2c9788: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2c9788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2c978c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c978cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9790: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2c9790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9794: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c9794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9798: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c979c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2c979cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2c97a0: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2c97a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2c97a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c97a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c97a8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c97a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c97ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c97acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c97b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c97b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c97b4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c97b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c97b8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C97B8u;
    SET_GPR_U32(ctx, 31, 0x2C97C0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C97B8u, 0x2C97C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C97C0u;
label_2c97c0:
    // 0x2c97c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c97c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c97c4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2c97c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c97c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c97c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c97cc: 0x1462007a  bne         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2C97CCu;
    {
        const bool branch_taken_0x2c97cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c97cc) {
            ctx->pc = 0x2C99B8u;
            return;
        }
    }
    ctx->pc = 0x2C97D4u;
    // 0x2c97d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C97D4u;
    SET_GPR_U32(ctx, 31, 0x2C97DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C97D4u, 0x2C97DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C97DCu;
label_2c97dc:
    // 0x2c97dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c97dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c97e0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2c97e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c97e4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c97e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c97e8: 0x9042003c  lbu         $v0, 0x3C($v0)
    ctx->pc = 0x2c97e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2c97ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c97ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c97f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c97f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c97f4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2c97f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c97f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c97fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c97fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c9800: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2c9800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c9804: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9808: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2c9808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2c980c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2c980cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9810: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c9810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c9814: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2c9814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2c9818: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c9818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c981c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c981cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c9820: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9824: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2C9824u;
    {
        const bool branch_taken_0x2c9824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9824) {
            ctx->pc = 0x2C99B8u;
            return;
        }
    }
    ctx->pc = 0x2C982Cu;
    // 0x2c982c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2c982cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c9830: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2c9830u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2c9834: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2c9834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2c9838: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2c9838u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c983c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2c983cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2c9840: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2c9840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2c9844: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2c9844u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c9848: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9848u;
    SET_GPR_U32(ctx, 31, 0x2C9850u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9848u, 0x2C9850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9850u;
label_2c9850:
    // 0x2c9850: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9854: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9858: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C9858u;
    {
        const bool branch_taken_0x2c9858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9858) {
            ctx->pc = 0x2C9910u;
            return;
        }
    }
    ctx->pc = 0x2C9860u;
    // 0x2c9860: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C9860u;
    SET_GPR_U32(ctx, 31, 0x2C9868u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C9860u, 0x2C9868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9868u;
label_2c9868:
    // 0x2c9868: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c9868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c986c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c986cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9870: 0x0  nop
    ctx->pc = 0x2c9870u;
    // NOP
    // 0x2c9874: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c9874u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9878: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2c9878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2c987c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c987cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9880: 0x0  nop
    ctx->pc = 0x2c9880u;
    // NOP
    // 0x2c9884: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c9884u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9888: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2c9888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c988c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c988cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9890: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c9890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c9894: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2c9894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2c9898: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C9898u;
    SET_GPR_U32(ctx, 31, 0x2C98A0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C9898u, 0x2C98A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C98A0u;
label_2c98a0:
    // 0x2c98a0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c98a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c98a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c98a8: 0x0  nop
    ctx->pc = 0x2c98a8u;
    // NOP
    // 0x2c98ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c98acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c98b0: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2c98b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2c98b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c98b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c98b8: 0x0  nop
    ctx->pc = 0x2c98b8u;
    // NOP
    // 0x2c98bc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c98bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c98c0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2c98c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c98c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c98c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c98c8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c98c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c98cc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2c98ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2c98d0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C98D0u;
    SET_GPR_U32(ctx, 31, 0x2C98D8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C98D0u, 0x2C98D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C98D8u;
label_2c98d8:
    // 0x2c98d8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c98d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c98dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c98dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c98e0: 0x0  nop
    ctx->pc = 0x2c98e0u;
    // NOP
    // 0x2c98e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c98e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c98e8: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2c98e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2c98ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c98ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c98f0: 0x0  nop
    ctx->pc = 0x2c98f0u;
    // NOP
    // 0x2c98f4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c98f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c98f8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c98f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c98fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c98fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9900: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c9900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c9904: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2c9904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2c9908: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2C9908u;
    {
        const bool branch_taken_0x2c9908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9908) {
            ctx->pc = 0x2C99B8u;
            return;
        }
    }
    ctx->pc = 0x2C9910u;
}
