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

// Function: entry_002cb41c
// Address: 0x2cb41c - 0x2cb6e0
void entry_002cb41c_0x2cb41c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cb41c_0x2cb41c");
#endif

    switch (ctx->pc) {
        case 0x2cb448u: goto label_2cb448;
        case 0x2cb450u: goto label_2cb450;
        case 0x2cb540u: goto label_2cb540;
        case 0x2cb590u: goto label_2cb590;
        case 0x2cb5acu: goto label_2cb5ac;
        case 0x2cb620u: goto label_2cb620;
        case 0x2cb638u: goto label_2cb638;
        case 0x2cb670u: goto label_2cb670;
        case 0x2cb6a8u: goto label_2cb6a8;
        default: break;
    }

    ctx->pc = 0x2cb41cu;

    // 0x2cb41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cb41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb420: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb424: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2cb424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cb428: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb42c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb430: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cb430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cb434: 0x2406040f  addiu       $a2, $zero, 0x40F
    ctx->pc = 0x2cb434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x2cb438: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cb438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb43c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cb43cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cb440: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CB440u;
    SET_GPR_U32(ctx, 31, 0x2CB448u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CB440u, 0x2CB448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB448u;
label_2cb448:
    // 0x2cb448: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CB448u;
    SET_GPR_U32(ctx, 31, 0x2CB450u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CB448u, 0x2CB450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB450u;
label_2cb450:
    // 0x2cb450: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cb450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cb454: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2cb454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2cb458: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2cb458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2cb45c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2cb45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cb460: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cb460u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cb464: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb468: 0xa462127c  sh          $v0, 0x127C($v1)
    ctx->pc = 0x2cb468u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cb46c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb46cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb470: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb474: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cb474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cb478: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2cb478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2cb47c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb47cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb480: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb484: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cb484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cb488: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2cb488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2cb48c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb48cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb490: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb494: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cb494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cb498: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2cb498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2cb49c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb4a0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2cb4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb4a4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2cb4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2cb4a8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2cb4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2cb4ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cb4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cb4b0: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2cb4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2cb4b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb4b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb4b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb4bc: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cb4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2cb4c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb4c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb4c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb4c8: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2cb4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2cb4cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb4d0: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x2cb4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb4d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cb4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cb4d8: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2cb4d8u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb4dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cb4dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cb4e0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2cb4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cb4e4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2cb4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2cb4e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cb4e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb4ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cb4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cb4f0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2cb4f0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb4f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cb4f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cb4f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb4fc: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2cb4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb500: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cb500u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cb504: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2cb504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2cb508: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2cb508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb50c: 0xc4a10128  lwc1        $f1, 0x128($a1)
    ctx->pc = 0x2cb50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb510: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cb510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cb514: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2cb514u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb518: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cb518u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cb51c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2cb51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cb520: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2cb520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2cb524: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cb524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb528: 0x0  nop
    ctx->pc = 0x2cb528u;
    // NOP
    // 0x2cb52c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2cb52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2cb530: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2cb530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cb534: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2cb534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cb538: 0xc040c24  jal         func_103090
    ctx->pc = 0x2CB538u;
    SET_GPR_U32(ctx, 31, 0x2CB540u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2CB540u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CB540u) { return; }
    ctx->pc = 0x2CB540u;
label_2cb540:
    // 0x2cb540: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2cb540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2cb544: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb548: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2cb548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb54c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cb54cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cb550: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb554: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2cb554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2cb558: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2cb558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2cb55c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb55cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb560: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2cb560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb564: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cb564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cb568: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb56c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2cb56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2cb570: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2cb570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2cb574: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb578: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2cb578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb57c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cb57cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cb580: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb584: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2cb584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2cb588: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CB588u;
    SET_GPR_U32(ctx, 31, 0x2CB590u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CB588u, 0x2CB590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB590u;
label_2cb590:
    // 0x2cb590: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cb590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cb594: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2cb594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2cb598: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cb598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb59c: 0x1462007a  bne         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2CB59Cu;
    {
        const bool branch_taken_0x2cb59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cb59c) {
            ctx->pc = 0x2CB788u;
            return;
        }
    }
    ctx->pc = 0x2CB5A4u;
    // 0x2cb5a4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CB5A4u;
    SET_GPR_U32(ctx, 31, 0x2CB5ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CB5A4u, 0x2CB5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB5ACu;
label_2cb5ac:
    // 0x2cb5ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cb5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cb5b0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2cb5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2cb5b4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2cb5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2cb5b8: 0x9042003c  lbu         $v0, 0x3C($v0)
    ctx->pc = 0x2cb5b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2cb5bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2cb5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cb5c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2cb5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cb5c4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2cb5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb5c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2cb5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cb5cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cb5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cb5d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2cb5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cb5d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb5d8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2cb5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cb5dc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2cb5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb5e0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cb5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cb5e4: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2cb5e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cb5e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cb5e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cb5ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cb5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2cb5f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cb5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cb5f4: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2CB5F4u;
    {
        const bool branch_taken_0x2cb5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb5f4) {
            ctx->pc = 0x2CB788u;
            return;
        }
    }
    ctx->pc = 0x2CB5FCu;
    // 0x2cb5fc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cb5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cb600: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2cb600u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2cb604: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2cb604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2cb608: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2cb608u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cb60c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2cb60cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cb610: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2cb610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2cb614: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2cb614u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cb618: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CB618u;
    SET_GPR_U32(ctx, 31, 0x2CB620u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CB618u, 0x2CB620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB620u;
label_2cb620:
    // 0x2cb620: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cb620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cb624: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cb624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cb628: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2CB628u;
    {
        const bool branch_taken_0x2cb628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb628) {
            ctx->pc = 0x2CB6E0u;
            return;
        }
    }
    ctx->pc = 0x2CB630u;
    // 0x2cb630: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CB630u;
    SET_GPR_U32(ctx, 31, 0x2CB638u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CB630u, 0x2CB638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB638u;
label_2cb638:
    // 0x2cb638: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cb638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cb63c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb640: 0x0  nop
    ctx->pc = 0x2cb640u;
    // NOP
    // 0x2cb644: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cb644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cb648: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2cb648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2cb64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb650: 0x0  nop
    ctx->pc = 0x2cb650u;
    // NOP
    // 0x2cb654: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cb654u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cb658: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2cb658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb65c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cb65cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cb660: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cb660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cb664: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cb664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cb668: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CB668u;
    SET_GPR_U32(ctx, 31, 0x2CB670u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CB668u, 0x2CB670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB670u;
label_2cb670:
    // 0x2cb670: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cb670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cb674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb678: 0x0  nop
    ctx->pc = 0x2cb678u;
    // NOP
    // 0x2cb67c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cb67cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cb680: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2cb680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2cb684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb688: 0x0  nop
    ctx->pc = 0x2cb688u;
    // NOP
    // 0x2cb68c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cb68cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cb690: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2cb690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb694: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cb694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cb698: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cb698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cb69c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2cb69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2cb6a0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CB6A0u;
    SET_GPR_U32(ctx, 31, 0x2CB6A8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CB6A0u, 0x2CB6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6A8u;
label_2cb6a8:
    // 0x2cb6a8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cb6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cb6ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb6b0: 0x0  nop
    ctx->pc = 0x2cb6b0u;
    // NOP
    // 0x2cb6b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cb6b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cb6b8: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cb6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cb6bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb6bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb6c0: 0x0  nop
    ctx->pc = 0x2cb6c0u;
    // NOP
    // 0x2cb6c4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cb6c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cb6c8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2cb6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb6cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cb6ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cb6d0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cb6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cb6d4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2cb6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2cb6d8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2CB6D8u;
    {
        const bool branch_taken_0x2cb6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb6d8) {
            ctx->pc = 0x2CB788u;
            return;
        }
    }
    ctx->pc = 0x2CB6E0u;
}
