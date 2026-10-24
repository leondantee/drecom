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

// Function: Em03_R1_dm02
// Address: 0x2ca3e0 - 0x2caafc
void Em03_R1_dm02_0x2ca3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_dm02_0x2ca3e0");
#endif

    switch (ctx->pc) {
        case 0x2ca464u: goto label_2ca464;
        case 0x2ca46cu: goto label_2ca46c;
        case 0x2ca55cu: goto label_2ca55c;
        case 0x2ca5acu: goto label_2ca5ac;
        case 0x2ca5c8u: goto label_2ca5c8;
        case 0x2ca63cu: goto label_2ca63c;
        case 0x2ca654u: goto label_2ca654;
        case 0x2ca68cu: goto label_2ca68c;
        case 0x2ca6c4u: goto label_2ca6c4;
        case 0x2ca704u: goto label_2ca704;
        case 0x2ca73cu: goto label_2ca73c;
        case 0x2ca774u: goto label_2ca774;
        case 0x2ca7f0u: goto label_2ca7f0;
        case 0x2ca80cu: goto label_2ca80c;
        case 0x2ca824u: goto label_2ca824;
        case 0x2ca844u: goto label_2ca844;
        case 0x2ca854u: goto label_2ca854;
        case 0x2ca860u: goto label_2ca860;
        case 0x2ca908u: goto label_2ca908;
        case 0x2ca9e4u: goto label_2ca9e4;
        case 0x2caa30u: goto label_2caa30;
        case 0x2caa7cu: goto label_2caa7c;
        case 0x2caac8u: goto label_2caac8;
        default: break;
    }

    ctx->pc = 0x2ca3e0u;

    // 0x2ca3e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ca3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ca3e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2ca3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2ca3e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ca3ec: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2ca3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2ca3f0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ca3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ca3f4: 0x24648188  addiu       $a0, $v1, -0x7E78
    ctx->pc = 0x2ca3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934920));
    // 0x2ca3f8: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x2ca3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2ca3fc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2ca3fcu;
    { uint32_t bits = FAST_READ32(0x398188u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca400: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2ca400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2ca404: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ca404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ca408: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca40c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2ca40cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ca410: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca414: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2ca414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2ca418: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ca418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ca41c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca420: 0x108300e8  beq         $a0, $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2CA420u;
    {
        const bool branch_taken_0x2ca420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ca420) {
            ctx->pc = 0x2CA7C4u;
            goto label_2ca7c4;
        }
    }
    ctx->pc = 0x2CA428u;
    // 0x2ca428: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA428u;
    {
        const bool branch_taken_0x2ca428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca428) {
            ctx->pc = 0x2CA438u;
            goto label_2ca438;
        }
    }
    ctx->pc = 0x2CA430u;
    // 0x2ca430: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x2CA430u;
    {
        const bool branch_taken_0x2ca430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca430) {
            ctx->pc = 0x2CAAE8u;
            goto label_2caae8;
        }
    }
    ctx->pc = 0x2CA438u;
label_2ca438:
    // 0x2ca438: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca43c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca440: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2ca440u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca444: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca448: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca44c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2ca44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2ca450: 0x2406040f  addiu       $a2, $zero, 0x40F
    ctx->pc = 0x2ca450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x2ca454: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ca454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca458: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2ca458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2ca45c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CA45Cu;
    SET_GPR_U32(ctx, 31, 0x2CA464u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CA45Cu, 0x2CA464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA464u;
label_2ca464:
    // 0x2ca464: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA464u;
    SET_GPR_U32(ctx, 31, 0x2CA46Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA464u, 0x2CA46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA46Cu;
label_2ca46c:
    // 0x2ca46c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca470: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2ca470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2ca474: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2ca474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2ca478: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2ca478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ca47c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ca47cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ca480: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca484: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x2ca484u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca48c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca490: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca494: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2ca494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2ca498: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca49c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca4a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca4a4: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2ca4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2ca4a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca4a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca4ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca4b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca4b4: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2ca4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2ca4b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca4bc: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2ca4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca4c0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2ca4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2ca4c4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2ca4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2ca4c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ca4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ca4cc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2ca4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2ca4d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca4d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca4d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca4d8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2ca4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2ca4dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca4dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca4e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca4e4: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2ca4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2ca4e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca4ec: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2ca4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca4f0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2ca4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2ca4f4: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2ca4f4u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca4f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ca4f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ca4fc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2ca4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ca500: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2ca500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2ca504: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca508: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2ca508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2ca50c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2ca50cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca510: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ca510u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ca514: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca518: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2ca518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca51c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ca51cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ca520: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2ca520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ca524: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca528: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x2ca528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca52c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2ca52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2ca530: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2ca530u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca534: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ca534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ca538: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2ca538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2ca53c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ca53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ca540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca544: 0x0  nop
    ctx->pc = 0x2ca544u;
    // NOP
    // 0x2ca548: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2ca548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2ca54c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2ca54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ca550: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ca550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ca554: 0xc040c24  jal         func_103090
    ctx->pc = 0x2CA554u;
    SET_GPR_U32(ctx, 31, 0x2CA55Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2CA55Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CA55Cu) { return; }
    ctx->pc = 0x2CA55Cu;
label_2ca55c:
    // 0x2ca55c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2ca55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2ca560: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca564: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2ca564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca568: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ca568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca56c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca570: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2ca570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2ca574: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2ca574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2ca578: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca57c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2ca57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca580: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ca580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca584: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca588: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2ca588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2ca58c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2ca58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2ca590: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca594: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2ca594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca598: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ca598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca59c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca5a0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2ca5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2ca5a4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA5A4u;
    SET_GPR_U32(ctx, 31, 0x2CA5ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA5A4u, 0x2CA5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA5ACu;
label_2ca5ac:
    // 0x2ca5ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca5b0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2ca5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2ca5b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca5b8: 0x1462007a  bne         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2CA5B8u;
    {
        const bool branch_taken_0x2ca5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ca5b8) {
            ctx->pc = 0x2CA7A4u;
            goto label_2ca7a4;
        }
    }
    ctx->pc = 0x2CA5C0u;
    // 0x2ca5c0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA5C0u;
    SET_GPR_U32(ctx, 31, 0x2CA5C8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA5C0u, 0x2CA5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA5C8u;
label_2ca5c8:
    // 0x2ca5c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca5cc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2ca5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2ca5d0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2ca5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2ca5d4: 0x9042003c  lbu         $v0, 0x3C($v0)
    ctx->pc = 0x2ca5d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2ca5d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ca5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca5dc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ca5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ca5e0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2ca5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca5e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ca5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ca5e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ca5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca5ec: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2ca5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ca5f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca5f4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2ca5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2ca5f8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2ca5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca5fc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca600: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2ca600u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2ca604: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ca604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ca608: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ca608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ca60c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca610: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2CA610u;
    {
        const bool branch_taken_0x2ca610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca610) {
            ctx->pc = 0x2CA7A4u;
            goto label_2ca7a4;
        }
    }
    ctx->pc = 0x2CA618u;
    // 0x2ca618: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ca618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca61c: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2ca61cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2ca620: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2ca620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2ca624: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2ca624u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ca628: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2ca628u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2ca62c: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2ca62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2ca630: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2ca630u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ca634: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA634u;
    SET_GPR_U32(ctx, 31, 0x2CA63Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA634u, 0x2CA63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA63Cu;
label_2ca63c:
    // 0x2ca63c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca640: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca644: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2CA644u;
    {
        const bool branch_taken_0x2ca644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca644) {
            ctx->pc = 0x2CA6FCu;
            goto label_2ca6fc;
        }
    }
    ctx->pc = 0x2CA64Cu;
    // 0x2ca64c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CA64Cu;
    SET_GPR_U32(ctx, 31, 0x2CA654u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CA64Cu, 0x2CA654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA654u;
label_2ca654:
    // 0x2ca654: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ca654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ca658: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca65c: 0x0  nop
    ctx->pc = 0x2ca65cu;
    // NOP
    // 0x2ca660: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca664: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2ca664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2ca668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca66c: 0x0  nop
    ctx->pc = 0x2ca66cu;
    // NOP
    // 0x2ca670: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca670u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca674: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2ca674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca678: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca67c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca680: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2ca680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ca684: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CA684u;
    SET_GPR_U32(ctx, 31, 0x2CA68Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CA684u, 0x2CA68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA68Cu;
label_2ca68c:
    // 0x2ca68c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ca68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ca690: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca694: 0x0  nop
    ctx->pc = 0x2ca694u;
    // NOP
    // 0x2ca698: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca69c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2ca69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2ca6a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca6a4: 0x0  nop
    ctx->pc = 0x2ca6a4u;
    // NOP
    // 0x2ca6a8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca6a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca6ac: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2ca6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca6b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca6b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca6b4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca6b8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2ca6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ca6bc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CA6BCu;
    SET_GPR_U32(ctx, 31, 0x2CA6C4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CA6BCu, 0x2CA6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA6C4u;
label_2ca6c4:
    // 0x2ca6c4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ca6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ca6c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca6cc: 0x0  nop
    ctx->pc = 0x2ca6ccu;
    // NOP
    // 0x2ca6d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca6d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca6d4: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2ca6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2ca6d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca6dc: 0x0  nop
    ctx->pc = 0x2ca6dcu;
    // NOP
    // 0x2ca6e0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca6e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca6e4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2ca6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca6e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca6ec: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca6f0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2ca6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2ca6f4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2CA6F4u;
    {
        const bool branch_taken_0x2ca6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca6f4) {
            ctx->pc = 0x2CA7A4u;
            goto label_2ca7a4;
        }
    }
    ctx->pc = 0x2CA6FCu;
label_2ca6fc:
    // 0x2ca6fc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CA6FCu;
    SET_GPR_U32(ctx, 31, 0x2CA704u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CA6FCu, 0x2CA704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA704u;
label_2ca704:
    // 0x2ca704: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ca704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ca708: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca70c: 0x0  nop
    ctx->pc = 0x2ca70cu;
    // NOP
    // 0x2ca710: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca710u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca714: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2ca714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2ca718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca71c: 0x0  nop
    ctx->pc = 0x2ca71cu;
    // NOP
    // 0x2ca720: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca720u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca724: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2ca724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca728: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca72c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca730: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2ca730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ca734: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CA734u;
    SET_GPR_U32(ctx, 31, 0x2CA73Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CA734u, 0x2CA73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA73Cu;
label_2ca73c:
    // 0x2ca73c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ca73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ca740: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca744: 0x0  nop
    ctx->pc = 0x2ca744u;
    // NOP
    // 0x2ca748: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca74c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2ca74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2ca750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca754: 0x0  nop
    ctx->pc = 0x2ca754u;
    // NOP
    // 0x2ca758: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca758u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca75c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2ca75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca760: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca764: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca768: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2ca768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ca76c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CA76Cu;
    SET_GPR_U32(ctx, 31, 0x2CA774u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CA76Cu, 0x2CA774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA774u;
label_2ca774:
    // 0x2ca774: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ca774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ca778: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca77c: 0x0  nop
    ctx->pc = 0x2ca77cu;
    // NOP
    // 0x2ca780: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca780u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca784: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2ca784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2ca788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca78c: 0x0  nop
    ctx->pc = 0x2ca78cu;
    // NOP
    // 0x2ca790: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca794: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2ca794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca798: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca79c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca7a0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2ca7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2ca7a4:
    // 0x2ca7a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca7a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca7a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca7ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca7b0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2ca7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2ca7b4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2ca7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2ca7b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca7bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca7c0: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2ca7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
label_2ca7c4:
    // 0x2ca7c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca7c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca7cc: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2ca7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2ca7d0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2ca7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2ca7d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ca7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ca7d8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2ca7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2ca7dc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2ca7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ca7e0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2ca7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2ca7e4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2ca7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2ca7e8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2CA7E8u;
    SET_GPR_U32(ctx, 31, 0x2CA7F0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2CA7E8u, 0x2CA7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7F0u;
label_2ca7f0:
    // 0x2ca7f0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2ca7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ca7f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca7f8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2ca7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca7fc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2ca7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca800: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2ca800u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ca804: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CA804u;
    SET_GPR_U32(ctx, 31, 0x2CA80Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CA804u, 0x2CA80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA80Cu;
label_2ca80c:
    // 0x2ca80c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca810: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2ca810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2ca814: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca818: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2ca818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ca81c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CA81Cu;
    SET_GPR_U32(ctx, 31, 0x2CA824u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CA81Cu, 0x2CA824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA824u;
label_2ca824:
    // 0x2ca824: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca828: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca82c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca830: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2ca830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2ca834: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2ca834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2ca838: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2ca838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2ca83c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CA83Cu;
    SET_GPR_U32(ctx, 31, 0x2CA844u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CA83Cu, 0x2CA844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA844u;
label_2ca844:
    // 0x2ca844: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca848: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ca848u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ca84c: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CA84Cu;
    SET_GPR_U32(ctx, 31, 0x2CA854u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CA84Cu, 0x2CA854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA854u;
label_2ca854:
    // 0x2ca854: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca858: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CA858u;
    SET_GPR_U32(ctx, 31, 0x2CA860u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CA858u, 0x2CA860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA860u;
label_2ca860:
    // 0x2ca860: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca864: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2ca864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2ca868: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2ca868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2ca86c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ca86cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca870: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2ca870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca874: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca878: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2ca878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2ca87c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca880: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2ca880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2ca884: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2ca884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2ca888: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ca888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca88c: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2ca88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca890: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca894: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2ca894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2ca898: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca89c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ca89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ca8a0: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2ca8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca8a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca8a8: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x2ca8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca8ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ca8acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ca8b0: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2ca8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2ca8b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca8b8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ca8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ca8bc: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2ca8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca8c0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2ca8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2ca8c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ca8c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca8c8: 0x0  nop
    ctx->pc = 0x2ca8c8u;
    // NOP
    // 0x2ca8cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ca8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ca8d0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2ca8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2ca8d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca8d8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2ca8d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2ca8dc: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x2CA8DCu;
    {
        const bool branch_taken_0x2ca8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca8dc) {
            ctx->pc = 0x2CAAE8u;
            goto label_2caae8;
        }
    }
    ctx->pc = 0x2CA8E4u;
    // 0x2ca8e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca8e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca8e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca8ec: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2ca8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2ca8f0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2ca8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2ca8f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca8f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca8fc: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2ca8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2ca900: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA900u;
    SET_GPR_U32(ctx, 31, 0x2CA908u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA900u, 0x2CA908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA908u;
label_2ca908:
    // 0x2ca908: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca90c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2ca90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2ca910: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x2ca910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2ca914: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2ca914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ca918: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ca918u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ca91c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca920: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca924: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x2ca924u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca928: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca92c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca930: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca934: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2ca934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2ca938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca93c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca940: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca944: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2ca944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2ca948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca94c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca950: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca954: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2ca954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2ca958: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca95c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca960: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2ca960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2ca964: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca968: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca96c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2ca96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2ca970: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca974: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca978: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2ca978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2ca97c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca97cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca980: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca984: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2ca984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2ca988: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca98c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca990: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2ca990u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca994: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ca994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ca998: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca99c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2ca99cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca9a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca9a4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2ca9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca9a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca9ac: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2ca9acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca9b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca9b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ca9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2ca9b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca9bc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2ca9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca9c0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2ca9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2ca9c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca9c8: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2ca9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2ca9cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca9d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca9d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca9d8: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2ca9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca9dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA9DCu;
    SET_GPR_U32(ctx, 31, 0x2CA9E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA9DCu, 0x2CA9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA9E4u;
label_2ca9e4:
    // 0x2ca9e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca9e8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2ca9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2ca9ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca9f0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CA9F0u;
    {
        const bool branch_taken_0x2ca9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ca9f0) {
            ctx->pc = 0x2CAA28u;
            goto label_2caa28;
        }
    }
    ctx->pc = 0x2CA9F8u;
    // 0x2ca9f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca9fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa00: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2caa00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2caa04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2caa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2caa08: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa0c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2caa0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2caa10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa14: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2caa14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2caa18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa1c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2caa1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2caa20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa24: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2caa24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2caa28:
    // 0x2caa28: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CAA28u;
    SET_GPR_U32(ctx, 31, 0x2CAA30u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CAA28u, 0x2CAA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA30u;
label_2caa30:
    // 0x2caa30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2caa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2caa34: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2caa34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2caa38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2caa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2caa3c: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2CAA3Cu;
    {
        const bool branch_taken_0x2caa3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2caa3c) {
            ctx->pc = 0x2CAAC0u;
            goto label_2caac0;
        }
    }
    ctx->pc = 0x2CAA44u;
    // 0x2caa44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2caa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2caa48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa4c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2caa4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2caa50: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2caa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2caa54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa58: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2caa58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2caa5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa60: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2caa60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2caa64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa68: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2caa68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2caa6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa70: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2caa70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2caa74: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CAA74u;
    SET_GPR_U32(ctx, 31, 0x2CAA7Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CAA74u, 0x2CAA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA7Cu;
label_2caa7c:
    // 0x2caa7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2caa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2caa80: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2caa80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2caa84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2caa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2caa88: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CAA88u;
    {
        const bool branch_taken_0x2caa88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2caa88) {
            ctx->pc = 0x2CAAC0u;
            goto label_2caac0;
        }
    }
    ctx->pc = 0x2CAA90u;
    // 0x2caa90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2caa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2caa94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa98: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2caa98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2caa9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2caa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2caaa0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caaa4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2caaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2caaa8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caaac: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2caaacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2caab0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caab4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2caab4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2caab8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caabc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2caabcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2caac0:
    // 0x2caac0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CAAC0u;
    SET_GPR_U32(ctx, 31, 0x2CAAC8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CAAC0u, 0x2CAAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAAC8u;
label_2caac8:
    // 0x2caac8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2caac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2caacc: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2caaccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2caad0: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x2caad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x2caad4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2caad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2caad8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2caad8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2caadc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2caadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caae0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2caae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2caae4: 0xa4640058  sh          $a0, 0x58($v1)
    ctx->pc = 0x2caae4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 88), (uint16_t)GPR_U32(ctx, 4));
label_2caae8:
    // 0x2caae8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2caae8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caaec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2caaecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caaf0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2caaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2caaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAAFCu;
}
