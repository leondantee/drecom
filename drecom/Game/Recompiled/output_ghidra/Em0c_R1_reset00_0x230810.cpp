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

// Function: Em0c_R1_reset00
// Address: 0x230810 - 0x230cb4
void Em0c_R1_reset00_0x230810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_reset00_0x230810");
#endif

    switch (ctx->pc) {
        case 0x23087cu: goto label_23087c;
        case 0x23092cu: goto label_23092c;
        case 0x2309f8u: goto label_2309f8;
        case 0x230a08u: goto label_230a08;
        case 0x230a14u: goto label_230a14;
        case 0x230bd4u: goto label_230bd4;
        case 0x230be0u: goto label_230be0;
        case 0x230c3cu: goto label_230c3c;
        case 0x230c60u: goto label_230c60;
        default: break;
    }

    ctx->pc = 0x230810u;

    // 0x230810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230814: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x230814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x230818: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x230818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x23081c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230820: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x230820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x230824: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x230824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x230828: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x230828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23082c: 0x108300f5  beq         $a0, $v1, . + 4 + (0xF5 << 2)
    ctx->pc = 0x23082Cu;
    {
        const bool branch_taken_0x23082c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23082c) {
            ctx->pc = 0x230C04u;
            goto label_230c04;
        }
    }
    ctx->pc = 0x230834u;
    // 0x230834: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x230834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230838: 0x10830078  beq         $a0, $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x230838u;
    {
        const bool branch_taken_0x230838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x230838) {
            ctx->pc = 0x230A1Cu;
            goto label_230a1c;
        }
    }
    ctx->pc = 0x230840u;
    // 0x230840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230844: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x230844u;
    {
        const bool branch_taken_0x230844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x230844) {
            ctx->pc = 0x23090Cu;
            goto label_23090c;
        }
    }
    ctx->pc = 0x23084Cu;
    // 0x23084c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23084Cu;
    {
        const bool branch_taken_0x23084c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23084c) {
            ctx->pc = 0x23085Cu;
            goto label_23085c;
        }
    }
    ctx->pc = 0x230854u;
    // 0x230854: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x230854u;
    {
        const bool branch_taken_0x230854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230854) {
            ctx->pc = 0x230CA4u;
            goto label_230ca4;
        }
    }
    ctx->pc = 0x23085Cu;
label_23085c:
    // 0x23085c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230860: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230864: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x230864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x230868: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x230868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x23086c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23086cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230870: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x230870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x230874: 0xc0965d0  jal         func_259740
    ctx->pc = 0x230874u;
    SET_GPR_U32(ctx, 31, 0x23087Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x230874u, 0x23087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23087Cu;
label_23087c:
    // 0x23087c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23087cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230880: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x230880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230884: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x230884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x230888: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x230888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x23088c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x23088cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x230890: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230894: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x230894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x230898: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x230898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x23089c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x23089cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2308a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2308a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2308a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2308a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2308a8: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x2308a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x2308ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2308acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2308b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2308b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2308b4: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x2308b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x2308b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2308b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2308bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2308bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2308c0: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x2308c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x2308c4: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2308c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2308c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2308c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2308cc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2308ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2308d0: 0x3c023eb2  lui         $v0, 0x3EB2
    ctx->pc = 0x2308d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16050 << 16));
    // 0x2308d4: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x2308d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x2308d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2308d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2308dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2308dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2308e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2308e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2308e4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2308e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2308e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2308e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2308ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2308ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2308f0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2308f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2308f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2308f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2308f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2308f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2308fc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2308fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x230900: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x230900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x230904: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230908: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x230908u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_23090c:
    // 0x23090c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230910: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230914: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x230914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230918: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23091c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x23091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230920: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x230920u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x230924: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x230924u;
    SET_GPR_U32(ctx, 31, 0x23092Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x230924u, 0x23092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23092Cu;
label_23092c:
    // 0x23092c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230930: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x230930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x230934: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230938: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x230938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23093c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x23093cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x230940: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x230940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x230944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230948: 0x0  nop
    ctx->pc = 0x230948u;
    // NOP
    // 0x23094c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23094cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230950: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x230950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x230954: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230958: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x230958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23095c: 0x3c023b75  lui         $v0, 0x3B75
    ctx->pc = 0x23095cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15221 << 16));
    // 0x230960: 0x3442c290  ori         $v0, $v0, 0xC290
    ctx->pc = 0x230960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49808);
    // 0x230964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230968: 0x0  nop
    ctx->pc = 0x230968u;
    // NOP
    // 0x23096c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23096cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230970: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x230970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x230974: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230978: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x230978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23097c: 0x3c023b75  lui         $v0, 0x3B75
    ctx->pc = 0x23097cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15221 << 16));
    // 0x230980: 0x3442c290  ori         $v0, $v0, 0xC290
    ctx->pc = 0x230980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49808);
    // 0x230984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230988: 0x0  nop
    ctx->pc = 0x230988u;
    // NOP
    // 0x23098c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23098cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230990: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x230990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x230994: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230998: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x230998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x23099c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x23099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2309a0: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x2309a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2309a4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2309A4u;
    {
        const bool branch_taken_0x2309a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2309a4) {
            ctx->pc = 0x2309D8u;
            goto label_2309d8;
        }
    }
    ctx->pc = 0x2309ACu;
    // 0x2309ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2309acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2309b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2309b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2309b4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2309b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2309b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2309b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2309bc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2309bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2309c0: 0x3c023d81  lui         $v0, 0x3D81
    ctx->pc = 0x2309c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15745 << 16));
    // 0x2309c4: 0x3442fabc  ori         $v0, $v0, 0xFABC
    ctx->pc = 0x2309c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64188);
    // 0x2309c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2309c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2309cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2309ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2309d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2309d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2309d4: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2309d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_2309d8:
    // 0x2309d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2309d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2309dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2309dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2309e0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2309e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2309e4: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x2309e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2309e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2309e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2309ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2309ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2309f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2309F0u;
    SET_GPR_U32(ctx, 31, 0x2309F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2309F0u, 0x2309F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2309F8u;
label_2309f8:
    // 0x2309f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2309f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2309fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2309fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x230a00: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x230A00u;
    SET_GPR_U32(ctx, 31, 0x230A08u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x230A00u, 0x230A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A08u;
label_230a08:
    // 0x230a08: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230a0c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x230A0Cu;
    SET_GPR_U32(ctx, 31, 0x230A14u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x230A0Cu, 0x230A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A14u;
label_230a14:
    // 0x230a14: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x230A14u;
    {
        const bool branch_taken_0x230a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230a14) {
            ctx->pc = 0x230CA4u;
            goto label_230ca4;
        }
    }
    ctx->pc = 0x230A1Cu;
label_230a1c:
    // 0x230a1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230a20: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x230a20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x230a24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x230a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x230a28: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x230a28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x230a2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230a30: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x230a30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x230a34: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x230a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x230a38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x230a38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x230a3c: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x230a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x230a40: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x230A40u;
    {
        const bool branch_taken_0x230a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230a40) {
            ctx->pc = 0x230B10u;
            goto label_230b10;
        }
    }
    ctx->pc = 0x230A48u;
    // 0x230a48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230a4c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230a50: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x230a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230a54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230a58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230a5c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x230a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230a60: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x230a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x230a64: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x230a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x230a68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230a6c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230a70: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x230a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230a74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230a74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230a78: 0x0  nop
    ctx->pc = 0x230a78u;
    // NOP
    // 0x230a7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x230a7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230a80: 0x0  nop
    ctx->pc = 0x230a80u;
    // NOP
    // 0x230a84: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x230A84u;
    {
        const bool branch_taken_0x230a84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x230a84) {
            ctx->pc = 0x230A9Cu;
            goto label_230a9c;
        }
    }
    ctx->pc = 0x230A8Cu;
    // 0x230a8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230a90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230a94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230a98: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x230a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_230a9c:
    // 0x230a9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230aa0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230aa4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x230aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230aa8: 0x3c023cb2  lui         $v0, 0x3CB2
    ctx->pc = 0x230aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15538 << 16));
    // 0x230aac: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x230aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x230ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230ab4: 0x0  nop
    ctx->pc = 0x230ab4u;
    // NOP
    // 0x230ab8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x230ab8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230abc: 0x0  nop
    ctx->pc = 0x230abcu;
    // NOP
    // 0x230ac0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x230AC0u;
    {
        const bool branch_taken_0x230ac0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230ac0) {
            ctx->pc = 0x230AF0u;
            goto label_230af0;
        }
    }
    ctx->pc = 0x230AC8u;
    // 0x230ac8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230acc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x230accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230ad0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x230ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x230ad4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x230ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x230ad8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x230ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230adc: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x230adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230ae0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x230ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x230ae4: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x230ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x230ae8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x230AE8u;
    {
        const bool branch_taken_0x230ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230ae8) {
            ctx->pc = 0x230B10u;
            goto label_230b10;
        }
    }
    ctx->pc = 0x230AF0u;
label_230af0:
    // 0x230af0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230af4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x230af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230af8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x230af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x230afc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x230afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x230b00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x230b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230b04: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x230b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230b08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x230b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x230b0c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x230b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_230b10:
    // 0x230b10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230b14: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x230b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230b18: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x230b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x230b1c: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x230b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x230b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230b24: 0x0  nop
    ctx->pc = 0x230b24u;
    // NOP
    // 0x230b28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230b2c: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x230b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x230b30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230b34: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x230b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230b38: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x230b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x230b3c: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x230b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x230b40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230b44: 0x0  nop
    ctx->pc = 0x230b44u;
    // NOP
    // 0x230b48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230b48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230b4c: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x230b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x230b50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230b54: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x230b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230b58: 0x3c023bda  lui         $v0, 0x3BDA
    ctx->pc = 0x230b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15322 << 16));
    // 0x230b5c: 0x3442740e  ori         $v0, $v0, 0x740E
    ctx->pc = 0x230b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
    // 0x230b60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230b64: 0x0  nop
    ctx->pc = 0x230b64u;
    // NOP
    // 0x230b68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230b68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230b6c: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x230b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x230b70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230b74: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x230b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230b78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x230b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x230b7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230b80: 0x0  nop
    ctx->pc = 0x230b80u;
    // NOP
    // 0x230b84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x230b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230b88: 0x0  nop
    ctx->pc = 0x230b88u;
    // NOP
    // 0x230b8c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x230B8Cu;
    {
        const bool branch_taken_0x230b8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230b8c) {
            ctx->pc = 0x230BC4u;
            goto label_230bc4;
        }
    }
    ctx->pc = 0x230B94u;
    // 0x230b94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x230b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x230b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230b9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230ba0: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x230ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x230ba4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x230ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x230ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230bac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230bb0: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x230bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x230bb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x230bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x230bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230bbc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230bc0: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x230bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
label_230bc4:
    // 0x230bc4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230bc8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x230bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x230bcc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x230BCCu;
    SET_GPR_U32(ctx, 31, 0x230BD4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x230BCCu, 0x230BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230BD4u;
label_230bd4:
    // 0x230bd4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230bd8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x230BD8u;
    SET_GPR_U32(ctx, 31, 0x230BE0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x230BD8u, 0x230BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230BE0u;
label_230be0:
    // 0x230be0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230be4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x230be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x230be8: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x230BE8u;
    {
        const bool branch_taken_0x230be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x230be8) {
            ctx->pc = 0x230CA4u;
            goto label_230ca4;
        }
    }
    ctx->pc = 0x230BF0u;
    // 0x230bf0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x230bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230bf4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230bf8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x230bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x230bfc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x230BFCu;
    {
        const bool branch_taken_0x230bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230bfc) {
            ctx->pc = 0x230CA4u;
            goto label_230ca4;
        }
    }
    ctx->pc = 0x230C04u;
label_230c04:
    // 0x230c04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230c08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c0c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x230c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x230c10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x230c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230c14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c18: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x230c18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x230c1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c20: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x230c20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x230c24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c28: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x230c28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x230c2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c30: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x230c30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x230c34: 0xc067694  jal         func_19DA50
    ctx->pc = 0x230C34u;
    SET_GPR_U32(ctx, 31, 0x230C3Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x230C34u, 0x230C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C3Cu;
label_230c3c:
    // 0x230c3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x230c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x230c40: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x230c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x230c44: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x230c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x230c48: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x230c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x230c4c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x230c4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x230c50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c54: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x230c54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x230c58: 0xc067694  jal         func_19DA50
    ctx->pc = 0x230C58u;
    SET_GPR_U32(ctx, 31, 0x230C60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x230C58u, 0x230C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C60u;
label_230c60:
    // 0x230c60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x230c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x230c64: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x230c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x230c68: 0x24630104  addiu       $v1, $v1, 0x104
    ctx->pc = 0x230c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x230c6c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x230c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x230c70: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x230c70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x230c74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c78: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x230c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x230c7c: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x230c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x230c80: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c84: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x230c84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x230c88: 0x3063f8ff  andi        $v1, $v1, 0xF8FF
    ctx->pc = 0x230c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63743);
    // 0x230c8c: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x230c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x230c90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c94: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x230c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x230c98: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x230c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x230c9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230ca0: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x230ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_230ca4:
    // 0x230ca4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x230ca4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230ca8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x230ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x230cac: 0x3e00008  jr          $ra
    ctx->pc = 0x230CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230CB4u;
}
