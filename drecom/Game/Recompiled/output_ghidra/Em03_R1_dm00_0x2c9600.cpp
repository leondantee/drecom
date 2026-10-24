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

// Function: Em03_R1_dm00
// Address: 0x2c9600 - 0x2c9cbc
void Em03_R1_dm00_0x2c9600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_dm00_0x2c9600");
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
        case 0x2c9918u: goto label_2c9918;
        case 0x2c9950u: goto label_2c9950;
        case 0x2c9988u: goto label_2c9988;
        case 0x2c99f4u: goto label_2c99f4;
        case 0x2c9a10u: goto label_2c9a10;
        case 0x2c9a28u: goto label_2c9a28;
        case 0x2c9a48u: goto label_2c9a48;
        case 0x2c9a58u: goto label_2c9a58;
        case 0x2c9a64u: goto label_2c9a64;
        case 0x2c9aecu: goto label_2c9aec;
        case 0x2c9ba4u: goto label_2c9ba4;
        case 0x2c9bf0u: goto label_2c9bf0;
        case 0x2c9c18u: goto label_2c9c18;
        case 0x2c9c64u: goto label_2c9c64;
        default: break;
    }

    ctx->pc = 0x2c9600u;

    // 0x2c9600: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c9600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c9604: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2c9604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2c9608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c960c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2c960cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2c9610: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2c9610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2c9614: 0x24648178  addiu       $a0, $v1, -0x7E88
    ctx->pc = 0x2c9614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934904));
    // 0x2c9618: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x2c9618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2c961c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c961cu;
    { uint32_t bits = FAST_READ32(0x398178u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9620: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2c9620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2c9624: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c9624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9628: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2c9628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2c962c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2c962cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c9630: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9634: 0x108300e4  beq         $a0, $v1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x2C9634u;
    {
        const bool branch_taken_0x2c9634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c9634) {
            ctx->pc = 0x2C99C8u;
            goto label_2c99c8;
        }
    }
    ctx->pc = 0x2C963Cu;
    // 0x2c963c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C963Cu;
    {
        const bool branch_taken_0x2c963c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c963c) {
            ctx->pc = 0x2C964Cu;
            goto label_2c964c;
        }
    }
    ctx->pc = 0x2C9644u;
    // 0x2c9644: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x2C9644u;
    {
        const bool branch_taken_0x2c9644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9644) {
            ctx->pc = 0x2C9CA8u;
            goto label_2c9ca8;
        }
    }
    ctx->pc = 0x2C964Cu;
label_2c964c:
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
            goto label_2c99b8;
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
            goto label_2c99b8;
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
            goto label_2c9910;
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
            goto label_2c99b8;
        }
    }
    ctx->pc = 0x2C9910u;
label_2c9910:
    // 0x2c9910: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C9910u;
    SET_GPR_U32(ctx, 31, 0x2C9918u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C9910u, 0x2C9918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9918u;
label_2c9918:
    // 0x2c9918: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c9918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c991c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c991cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9920: 0x0  nop
    ctx->pc = 0x2c9920u;
    // NOP
    // 0x2c9924: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c9924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9928: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2c9928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2c992c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c992cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9930: 0x0  nop
    ctx->pc = 0x2c9930u;
    // NOP
    // 0x2c9934: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c9934u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9938: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2c9938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c993c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c993cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9940: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c9940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c9944: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2c9944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2c9948: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C9948u;
    SET_GPR_U32(ctx, 31, 0x2C9950u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C9948u, 0x2C9950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9950u;
label_2c9950:
    // 0x2c9950: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c9950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c9954: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9958: 0x0  nop
    ctx->pc = 0x2c9958u;
    // NOP
    // 0x2c995c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c995cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9960: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2c9960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2c9964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9968: 0x0  nop
    ctx->pc = 0x2c9968u;
    // NOP
    // 0x2c996c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c996cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9970: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2c9970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9974: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c9974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9978: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c9978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c997c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2c997cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2c9980: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C9980u;
    SET_GPR_U32(ctx, 31, 0x2C9988u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C9980u, 0x2C9988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9988u;
label_2c9988:
    // 0x2c9988: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c9988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c998c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c998cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9990: 0x0  nop
    ctx->pc = 0x2c9990u;
    // NOP
    // 0x2c9994: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c9994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9998: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2c9998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2c999c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c999cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c99a0: 0x0  nop
    ctx->pc = 0x2c99a0u;
    // NOP
    // 0x2c99a4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c99a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c99a8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c99a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c99ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c99acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c99b0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c99b4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2c99b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2c99b8:
    // 0x2c99b8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2c99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2c99bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c99bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c99c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c99c4: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2c99c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
label_2c99c8:
    // 0x2c99c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c99c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c99cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c99ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c99d0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2c99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2c99d4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c99d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c99d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c99d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c99dc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c99dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c99e0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c99e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c99e4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c99e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c99e8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c99e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c99ec: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C99ECu;
    SET_GPR_U32(ctx, 31, 0x2C99F4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C99ECu, 0x2C99F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C99F4u;
label_2c99f4:
    // 0x2c99f4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2c99f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c99f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c99fc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c99fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9a00: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2c9a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9a04: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c9a04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c9a08: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C9A08u;
    SET_GPR_U32(ctx, 31, 0x2C9A10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C9A08u, 0x2C9A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A10u;
label_2c9a10:
    // 0x2c9a10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a14: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c9a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c9a18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c9a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a1c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2c9a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c9a20: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C9A20u;
    SET_GPR_U32(ctx, 31, 0x2C9A28u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C9A20u, 0x2C9A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A28u;
label_2c9a28:
    // 0x2c9a28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c9a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c9a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a34: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c9a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c9a38: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2c9a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2c9a3c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2c9a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2c9a40: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2C9A40u;
    SET_GPR_U32(ctx, 31, 0x2C9A48u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2C9A40u, 0x2C9A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A48u;
label_2c9a48:
    // 0x2c9a48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c9a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c9a4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c9a50: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C9A50u;
    SET_GPR_U32(ctx, 31, 0x2C9A58u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C9A50u, 0x2C9A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A58u;
label_2c9a58:
    // 0x2c9a58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c9a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a5c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2C9A5Cu;
    SET_GPR_U32(ctx, 31, 0x2C9A64u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2C9A5Cu, 0x2C9A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A64u;
label_2c9a64:
    // 0x2c9a64: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c9a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a68: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2c9a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2c9a6c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2c9a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2c9a70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c9a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9a74: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2c9a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9a78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c9a78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9a7c: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2c9a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2c9a80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c9a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9a84: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2c9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2c9a88: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2c9a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2c9a8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c9a8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9a90: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x2c9a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9a94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c9a94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9a98: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2c9a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2c9a9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c9a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9aa0: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2c9aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2c9aa4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2c9aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2c9aa8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c9aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9aac: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2c9aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9ab0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c9ab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9ab4: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2c9ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2c9ab8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c9ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9abc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2c9abcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2c9ac0: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x2C9AC0u;
    {
        const bool branch_taken_0x2c9ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ac0) {
            ctx->pc = 0x2C9CA8u;
            goto label_2c9ca8;
        }
    }
    ctx->pc = 0x2C9AC8u;
    // 0x2c9ac8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9ac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9acc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9ad0: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2c9ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c9ad4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2c9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2c9ad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9adc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9ae0: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2c9ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2c9ae4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9AE4u;
    SET_GPR_U32(ctx, 31, 0x2C9AECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9AE4u, 0x2C9AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9AECu;
label_2c9aec:
    // 0x2c9aec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9af0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2c9af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2c9af4: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x2c9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2c9af8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c9af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c9afc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c9afcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c9b00: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b04: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9b08: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x2c9b08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c9b0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9b0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9b10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b14: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9b18: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c9b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c9b1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9b20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b24: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9b28: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c9b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c9b2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9b30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9b38: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c9b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c9b3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9b40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b44: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c9b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c9b48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9b4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b50: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c9b50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9b54: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2c9b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c9b58: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b5c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c9b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9b60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b64: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c9b64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9b68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b6c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c9b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9b70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b74: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c9b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c9b78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b7c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9b80: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c9b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c9b84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9b88: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c9b88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2c9b8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9b90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9b94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9b98: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2c9b98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c9b9c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9B9Cu;
    SET_GPR_U32(ctx, 31, 0x2C9BA4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9B9Cu, 0x2C9BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9BA4u;
label_2c9ba4:
    // 0x2c9ba4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9ba8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2c9ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c9bac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9bb0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C9BB0u;
    {
        const bool branch_taken_0x2c9bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c9bb0) {
            ctx->pc = 0x2C9BE8u;
            goto label_2c9be8;
        }
    }
    ctx->pc = 0x2C9BB8u;
    // 0x2c9bb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9bbc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9bc0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c9bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9bc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c9bc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9bcc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c9bccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9bd0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9bd4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c9bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9bd8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9bdc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c9bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9be0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9be4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c9be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2c9be8:
    // 0x2c9be8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9BE8u;
    SET_GPR_U32(ctx, 31, 0x2C9BF0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9BE8u, 0x2C9BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9BF0u;
label_2c9bf0:
    // 0x2c9bf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9bf4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2c9bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2c9bf8: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x2c9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x2c9bfc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c9bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c9c00: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c9c00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c9c04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c08: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9c0c: 0xa4430058  sh          $v1, 0x58($v0)
    ctx->pc = 0x2c9c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c9c10: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9C10u;
    SET_GPR_U32(ctx, 31, 0x2C9C18u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9C10u, 0x2C9C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C18u;
label_2c9c18:
    // 0x2c9c18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c9c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9c1c: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x2c9c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2c9c20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9c24: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C9C24u;
    {
        const bool branch_taken_0x2c9c24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c9c24) {
            ctx->pc = 0x2C9CA8u;
            goto label_2c9ca8;
        }
    }
    ctx->pc = 0x2C9C2Cu;
    // 0x2c9c2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9c30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c34: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c9c34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9c38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c9c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c9c3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c40: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c9c40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9c44: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c48: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c9c48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9c4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c50: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c9c50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9c54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c58: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c9c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c9c5c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9C5Cu;
    SET_GPR_U32(ctx, 31, 0x2C9C64u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9C5Cu, 0x2C9C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C64u;
label_2c9c64:
    // 0x2c9c64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c9c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9c68: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x2c9c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2c9c6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c9c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c9c70: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C9C70u;
    {
        const bool branch_taken_0x2c9c70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c9c70) {
            ctx->pc = 0x2C9CA8u;
            goto label_2c9ca8;
        }
    }
    ctx->pc = 0x2C9C78u;
    // 0x2c9c78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c9c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9c7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c9c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c9c80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c9c84: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c9c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c9c88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c9c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c8c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c9c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c9c90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c9c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c9c94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9c98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c9c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c9c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9ca0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c9ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9ca4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c9ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2c9ca8:
    // 0x2c9ca8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2c9ca8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9cac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9cb0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2c9cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c9cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9CBCu;
}
