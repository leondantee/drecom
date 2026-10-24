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

// Function: Em03_R1_dm04
// Address: 0x2cb3a0 - 0x2cbc38
void Em03_R1_dm04_0x2cb3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_dm04_0x2cb3a0");
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
        case 0x2cb6e8u: goto label_2cb6e8;
        case 0x2cb720u: goto label_2cb720;
        case 0x2cb758u: goto label_2cb758;
        case 0x2cb7d4u: goto label_2cb7d4;
        case 0x2cb7f0u: goto label_2cb7f0;
        case 0x2cb808u: goto label_2cb808;
        case 0x2cb828u: goto label_2cb828;
        case 0x2cb838u: goto label_2cb838;
        case 0x2cb844u: goto label_2cb844;
        case 0x2cb8f4u: goto label_2cb8f4;
        case 0x2cb90cu: goto label_2cb90c;
        case 0x2cb92cu: goto label_2cb92c;
        case 0x2cb93cu: goto label_2cb93c;
        case 0x2cb948u: goto label_2cb948;
        case 0x2cb9d4u: goto label_2cb9d4;
        case 0x2cba18u: goto label_2cba18;
        case 0x2cba38u: goto label_2cba38;
        case 0x2cba48u: goto label_2cba48;
        case 0x2cba54u: goto label_2cba54;
        case 0x2cba90u: goto label_2cba90;
        case 0x2cbab0u: goto label_2cbab0;
        case 0x2cbad0u: goto label_2cbad0;
        case 0x2cbae0u: goto label_2cbae0;
        case 0x2cbaf0u: goto label_2cbaf0;
        case 0x2cbb28u: goto label_2cbb28;
        case 0x2cbc04u: goto label_2cbc04;
        default: break;
    }

    ctx->pc = 0x2cb3a0u;

    // 0x2cb3a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cb3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cb3a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2cb3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2cb3a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cb3ac: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2cb3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2cb3b0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2cb3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2cb3b4: 0x24838198  addiu       $v1, $a0, -0x7E68
    ctx->pc = 0x2cb3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934936));
    // 0x2cb3b8: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2cb3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2cb3bc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2cb3bcu;
    { uint32_t bits = FAST_READ32(0x398198u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb3c0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2cb3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2cb3c4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cb3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cb3c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb3cc: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2cb3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cb3d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb3d4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2cb3d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2cb3d8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2cb3d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cb3dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cb3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cb3e0: 0x108301ad  beq         $a0, $v1, . + 4 + (0x1AD << 2)
    ctx->pc = 0x2CB3E0u;
    {
        const bool branch_taken_0x2cb3e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cb3e0) {
            ctx->pc = 0x2CBA98u;
            goto label_2cba98;
        }
    }
    ctx->pc = 0x2CB3E8u;
    // 0x2cb3e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cb3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cb3ec: 0x10830184  beq         $a0, $v1, . + 4 + (0x184 << 2)
    ctx->pc = 0x2CB3ECu;
    {
        const bool branch_taken_0x2cb3ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cb3ec) {
            ctx->pc = 0x2CBA00u;
            goto label_2cba00;
        }
    }
    ctx->pc = 0x2CB3F4u;
    // 0x2cb3f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cb3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cb3f8: 0x10830140  beq         $a0, $v1, . + 4 + (0x140 << 2)
    ctx->pc = 0x2CB3F8u;
    {
        const bool branch_taken_0x2cb3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cb3f8) {
            ctx->pc = 0x2CB8FCu;
            goto label_2cb8fc;
        }
    }
    ctx->pc = 0x2CB400u;
    // 0x2cb400: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cb400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb404: 0x108300e8  beq         $a0, $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2CB404u;
    {
        const bool branch_taken_0x2cb404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cb404) {
            ctx->pc = 0x2CB7A8u;
            goto label_2cb7a8;
        }
    }
    ctx->pc = 0x2CB40Cu;
    // 0x2cb40c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB40Cu;
    {
        const bool branch_taken_0x2cb40c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb40c) {
            ctx->pc = 0x2CB41Cu;
            goto label_2cb41c;
        }
    }
    ctx->pc = 0x2CB414u;
    // 0x2cb414: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x2CB414u;
    {
        const bool branch_taken_0x2cb414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb414) {
            ctx->pc = 0x2CBC24u;
            goto label_2cbc24;
        }
    }
    ctx->pc = 0x2CB41Cu;
label_2cb41c:
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
            goto label_2cb788;
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
            goto label_2cb788;
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
            goto label_2cb6e0;
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
            goto label_2cb788;
        }
    }
    ctx->pc = 0x2CB6E0u;
label_2cb6e0:
    // 0x2cb6e0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CB6E0u;
    SET_GPR_U32(ctx, 31, 0x2CB6E8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CB6E0u, 0x2CB6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB6E8u;
label_2cb6e8:
    // 0x2cb6e8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cb6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cb6ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb6f0: 0x0  nop
    ctx->pc = 0x2cb6f0u;
    // NOP
    // 0x2cb6f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cb6f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cb6f8: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cb6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cb6fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb700: 0x0  nop
    ctx->pc = 0x2cb700u;
    // NOP
    // 0x2cb704: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cb704u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cb708: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2cb708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb70c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cb70cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cb710: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cb710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cb714: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cb714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cb718: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CB718u;
    SET_GPR_U32(ctx, 31, 0x2CB720u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CB718u, 0x2CB720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB720u;
label_2cb720:
    // 0x2cb720: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cb720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cb724: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb728: 0x0  nop
    ctx->pc = 0x2cb728u;
    // NOP
    // 0x2cb72c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cb72cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cb730: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2cb730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2cb734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb738: 0x0  nop
    ctx->pc = 0x2cb738u;
    // NOP
    // 0x2cb73c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cb73cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cb740: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2cb740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb744: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cb744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cb748: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cb748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cb74c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2cb74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2cb750: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CB750u;
    SET_GPR_U32(ctx, 31, 0x2CB758u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CB750u, 0x2CB758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB758u;
label_2cb758:
    // 0x2cb758: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cb758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cb75c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cb75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb760: 0x0  nop
    ctx->pc = 0x2cb760u;
    // NOP
    // 0x2cb764: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cb764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cb768: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2cb768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2cb76c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb76cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb770: 0x0  nop
    ctx->pc = 0x2cb770u;
    // NOP
    // 0x2cb774: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cb774u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cb778: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2cb778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb77c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cb77cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cb780: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cb780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cb784: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2cb784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2cb788:
    // 0x2cb788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb78c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb790: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cb790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cb794: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2cb794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2cb798: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2cb798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2cb79c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb7a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb7a4: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2cb7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
label_2cb7a8:
    // 0x2cb7a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb7ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb7b0: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2cb7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2cb7b4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2cb7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2cb7b8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2cb7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2cb7bc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cb7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cb7c0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2cb7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cb7c4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2cb7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2cb7c8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2cb7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2cb7cc: 0xc05c848  jal         func_172120
    ctx->pc = 0x2CB7CCu;
    SET_GPR_U32(ctx, 31, 0x2CB7D4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2CB7CCu, 0x2CB7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7D4u;
label_2cb7d4:
    // 0x2cb7d4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2cb7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2cb7d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb7dc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2cb7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb7e0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cb7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb7e4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2cb7e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cb7e8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CB7E8u;
    SET_GPR_U32(ctx, 31, 0x2CB7F0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CB7E8u, 0x2CB7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7F0u;
label_2cb7f0:
    // 0x2cb7f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb7f4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2cb7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2cb7f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb7fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cb7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cb800: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CB800u;
    SET_GPR_U32(ctx, 31, 0x2CB808u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CB800u, 0x2CB808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB808u;
label_2cb808:
    // 0x2cb808: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb80c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb810: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb814: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cb814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cb818: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cb818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cb81c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cb81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cb820: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CB820u;
    SET_GPR_U32(ctx, 31, 0x2CB828u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CB820u, 0x2CB828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB828u;
label_2cb828:
    // 0x2cb828: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb82c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cb82cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cb830: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CB830u;
    SET_GPR_U32(ctx, 31, 0x2CB838u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CB830u, 0x2CB838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB838u;
label_2cb838:
    // 0x2cb838: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb83c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CB83Cu;
    SET_GPR_U32(ctx, 31, 0x2CB844u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CB83Cu, 0x2CB844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB844u;
label_2cb844:
    // 0x2cb844: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb848: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2cb848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2cb84c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2cb84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cb850: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cb850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb854: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2cb854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb858: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cb858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cb85c: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2cb85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2cb860: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb864: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2cb864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2cb868: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2cb868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cb86c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cb86cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb870: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2cb870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb874: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cb874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cb878: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2cb878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2cb87c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb880: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cb880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb884: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cb884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb888: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb88c: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x2cb88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb890: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cb890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cb894: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2cb894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2cb898: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb89c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2cb89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb8a0: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2cb8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb8a4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2cb8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2cb8a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cb8a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb8ac: 0x0  nop
    ctx->pc = 0x2cb8acu;
    // NOP
    // 0x2cb8b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cb8b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cb8b4: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2cb8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2cb8b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb8bc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2cb8bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2cb8c0: 0x106000d8  beqz        $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x2CB8C0u;
    {
        const bool branch_taken_0x2cb8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb8c0) {
            ctx->pc = 0x2CBC24u;
            goto label_2cbc24;
        }
    }
    ctx->pc = 0x2CB8C8u;
    // 0x2cb8c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cb8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cb8cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb8d0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cb8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb8d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb8d8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb8dc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cb8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cb8e0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2cb8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2cb8e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cb8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb8e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cb8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cb8ec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CB8ECu;
    SET_GPR_U32(ctx, 31, 0x2CB8F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CB8ECu, 0x2CB8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB8F4u;
label_2cb8f4:
    // 0x2cb8f4: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x2CB8F4u;
    {
        const bool branch_taken_0x2cb8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb8f4) {
            ctx->pc = 0x2CBC24u;
            goto label_2cbc24;
        }
    }
    ctx->pc = 0x2CB8FCu;
label_2cb8fc:
    // 0x2cb8fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb900: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cb900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cb904: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CB904u;
    SET_GPR_U32(ctx, 31, 0x2CB90Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CB904u, 0x2CB90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB90Cu;
label_2cb90c:
    // 0x2cb90c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb910: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb914: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb918: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cb918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cb91c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cb91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cb920: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cb920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cb924: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CB924u;
    SET_GPR_U32(ctx, 31, 0x2CB92Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CB924u, 0x2CB92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB92Cu;
label_2cb92c:
    // 0x2cb92c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb930: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cb930u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cb934: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CB934u;
    SET_GPR_U32(ctx, 31, 0x2CB93Cu);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CB934u, 0x2CB93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB93Cu;
label_2cb93c:
    // 0x2cb93c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb940: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CB940u;
    SET_GPR_U32(ctx, 31, 0x2CB948u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CB940u, 0x2CB948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB948u;
label_2cb948:
    // 0x2cb948: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb94c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cb94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb950: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cb950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb954: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb958: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x2cb958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb95c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cb95cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cb960: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2cb960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2cb964: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb968: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2cb968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb96c: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2cb96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb970: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2cb970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2cb974: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cb974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb978: 0x0  nop
    ctx->pc = 0x2cb978u;
    // NOP
    // 0x2cb97c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cb97cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cb980: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2cb980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2cb984: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb988: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cb988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb98c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2cb98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb990: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb994: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2cb994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb998: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2cb998u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cb99c: 0x0  nop
    ctx->pc = 0x2cb99cu;
    // NOP
    // 0x2cb9a0: 0x450000a0  bc1f        . + 4 + (0xA0 << 2)
    ctx->pc = 0x2CB9A0u;
    {
        const bool branch_taken_0x2cb9a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb9a0) {
            ctx->pc = 0x2CBC24u;
            goto label_2cbc24;
        }
    }
    ctx->pc = 0x2CB9A8u;
    // 0x2cb9a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cb9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cb9ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb9b0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cb9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb9b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb9b8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb9bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cb9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cb9c0: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x2cb9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2cb9c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cb9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb9c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cb9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cb9cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CB9CCu;
    SET_GPR_U32(ctx, 31, 0x2CB9D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CB9CCu, 0x2CB9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9D4u;
label_2cb9d4:
    // 0x2cb9d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb9d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb9dc: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2cb9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2cb9e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb9e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb9e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb9e8: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2cb9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2cb9ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb9ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb9f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb9f4: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2cb9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2cb9f8: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x2CB9F8u;
    {
        const bool branch_taken_0x2cb9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb9f8) {
            ctx->pc = 0x2CBC24u;
            goto label_2cbc24;
        }
    }
    ctx->pc = 0x2CBA00u;
label_2cba00:
    // 0x2cba00: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cba00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba04: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2cba04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cba08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cba08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cba10: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CBA10u;
    SET_GPR_U32(ctx, 31, 0x2CBA18u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CBA10u, 0x2CBA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA18u;
label_2cba18:
    // 0x2cba18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cba18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba24: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cba24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cba28: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cba28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cba2c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cba2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cba30: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CBA30u;
    SET_GPR_U32(ctx, 31, 0x2CBA38u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CBA30u, 0x2CBA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA38u;
label_2cba38:
    // 0x2cba38: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cba38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cba3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cba40: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CBA40u;
    SET_GPR_U32(ctx, 31, 0x2CBA48u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CBA40u, 0x2CBA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA48u;
label_2cba48:
    // 0x2cba48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cba48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba4c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CBA4Cu;
    SET_GPR_U32(ctx, 31, 0x2CBA54u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CBA4Cu, 0x2CBA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA54u;
label_2cba54:
    // 0x2cba54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cba54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba58: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2cba58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2cba5c: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2CBA5Cu;
    {
        const bool branch_taken_0x2cba5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cba5c) {
            ctx->pc = 0x2CBC24u;
            goto label_2cbc24;
        }
    }
    ctx->pc = 0x2CBA64u;
    // 0x2cba64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cba64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cba68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba6c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cba6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cba70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cba74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba78: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cba78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cba7c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2cba7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2cba80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cba80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cba84: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cba84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cba88: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CBA88u;
    SET_GPR_U32(ctx, 31, 0x2CBA90u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CBA88u, 0x2CBA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA90u;
label_2cba90:
    // 0x2cba90: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2CBA90u;
    {
        const bool branch_taken_0x2cba90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cba90) {
            ctx->pc = 0x2CBC24u;
            goto label_2cbc24;
        }
    }
    ctx->pc = 0x2CBA98u;
label_2cba98:
    // 0x2cba98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba9c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2cba9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbaa0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cbaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbaa4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cbaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cbaa8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CBAA8u;
    SET_GPR_U32(ctx, 31, 0x2CBAB0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CBAA8u, 0x2CBAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBAB0u;
label_2cbab0:
    // 0x2cbab0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cbab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbab4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cbab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbab8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbabc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cbabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cbac0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cbac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cbac4: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cbac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cbac8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CBAC8u;
    SET_GPR_U32(ctx, 31, 0x2CBAD0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CBAC8u, 0x2CBAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBAD0u;
label_2cbad0:
    // 0x2cbad0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cbad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbad4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cbad4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cbad8: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CBAD8u;
    SET_GPR_U32(ctx, 31, 0x2CBAE0u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CBAD8u, 0x2CBAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBAE0u;
label_2cbae0:
    // 0x2cbae0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cbae0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cbae4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cbae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbae8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CBAE8u;
    SET_GPR_U32(ctx, 31, 0x2CBAF0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CBAE8u, 0x2CBAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBAF0u;
label_2cbaf0:
    // 0x2cbaf0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2cbaf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cbaf4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cbaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbaf8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2cbaf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2cbafc: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x2CBAFCu;
    {
        const bool branch_taken_0x2cbafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbafc) {
            ctx->pc = 0x2CBC24u;
            goto label_2cbc24;
        }
    }
    ctx->pc = 0x2CBB04u;
    // 0x2cbb04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbb04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbb08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cbb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb0c: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x2cbb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x2cbb10: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x2cbb10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x2cbb14: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2cbb14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbb18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cbb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb1c: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2cbb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2cbb20: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CBB20u;
    SET_GPR_U32(ctx, 31, 0x2CBB28u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CBB20u, 0x2CBB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB28u;
label_2cbb28:
    // 0x2cbb28: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cbb28u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cbb2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cbb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cbb30: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2cbb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2cbb34: 0x2462003c  addiu       $v0, $v1, 0x3C
    ctx->pc = 0x2cbb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2cbb38: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2cbb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cbb3c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2cbb3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2cbb40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb44: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2cbb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cbb48: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x2cbb48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cbb4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbb4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbb50: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2cbb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb54: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x2cbb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2cbb58: 0xe4c00040  swc1        $f0, 0x40($a2)
    ctx->pc = 0x2cbb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x2cbb5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbb5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbb60: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2cbb60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb64: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x2cbb64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x2cbb68: 0xe5000044  swc1        $f0, 0x44($t0)
    ctx->pc = 0x2cbb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 68), bits); }
    // 0x2cbb6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbb6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbb70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb74: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cbb78: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2cbb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2cbb7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbb7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbb80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb84: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2cbb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2cbb88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbb88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbb8c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb90: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2cbb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2cbb94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbb94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbb98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbb9c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2cbb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2cbba0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cbba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cbba4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbba8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2cbba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2cbbac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cbbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbbb0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbbb4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2cbbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cbbb8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbbbc: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2cbbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbbc0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbbc4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2cbbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbbc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbbcc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2cbbccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbbd0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbbd4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2cbbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2cbbd8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbbdc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2cbbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cbbe0: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2cbbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2cbbe4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2cbbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2cbbe8: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2cbbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2cbbec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cbbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbbf0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cbbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbbf4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cbbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cbbf8: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2cbbf8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cbbfc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CBBFCu;
    SET_GPR_U32(ctx, 31, 0x2CBC04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CBBFCu, 0x2CBC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC04u;
label_2cbc04:
    // 0x2cbc04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2cbc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cbc08: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2cbc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2cbc0c: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x2cbc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x2cbc10: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x2cbc10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2cbc14: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2cbc14u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2cbc18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cbc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cbc1c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2cbc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cbc20: 0xa4850058  sh          $a1, 0x58($a0)
    ctx->pc = 0x2cbc20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 5));
label_2cbc24:
    // 0x2cbc24: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2cbc24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbc28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cbc28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbc2c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2cbc2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cbc30: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBC38u;
}
