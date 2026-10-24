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

// Function: Em18_R1_dm_middle
// Address: 0x2e04e0 - 0x2e0738
void Em18_R1_dm_middle_0x2e04e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_dm_middle_0x2e04e0");
#endif

    switch (ctx->pc) {
        case 0x2e052cu: goto label_2e052c;
        case 0x2e059cu: goto label_2e059c;
        case 0x2e05d4u: goto label_2e05d4;
        case 0x2e05f8u: goto label_2e05f8;
        case 0x2e0680u: goto label_2e0680;
        case 0x2e0698u: goto label_2e0698;
        case 0x2e06acu: goto label_2e06ac;
        case 0x2e06bcu: goto label_2e06bc;
        case 0x2e06c8u: goto label_2e06c8;
        default: break;
    }

    ctx->pc = 0x2e04e0u;

    // 0x2e04e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e04e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e04e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2e04e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2e04e8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2e04e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2e04ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e04ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e04f0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2e04f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e04f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e04f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e04f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e04f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e04fc: 0x10830047  beq         $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2E04FCu;
    {
        const bool branch_taken_0x2e04fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e04fc) {
            ctx->pc = 0x2E061Cu;
            goto label_2e061c;
        }
    }
    ctx->pc = 0x2E0504u;
    // 0x2e0504: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0504u;
    {
        const bool branch_taken_0x2e0504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0504) {
            ctx->pc = 0x2E0514u;
            goto label_2e0514;
        }
    }
    ctx->pc = 0x2E050Cu;
    // 0x2e050c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2E050Cu;
    {
        const bool branch_taken_0x2e050c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e050c) {
            ctx->pc = 0x2E0728u;
            goto label_2e0728;
        }
    }
    ctx->pc = 0x2E0514u;
label_2e0514:
    // 0x2e0514: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e0514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0518: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e0518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e051c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2e051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e0520: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x2e0520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e0524: 0xc058f20  jal         func_163C80
    ctx->pc = 0x2E0524u;
    SET_GPR_U32(ctx, 31, 0x2E052Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x2E0524u, 0x2E052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E052Cu;
label_2e052c:
    // 0x2e052c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e052cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e0530: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2e0530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0534: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e0534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0538: 0x0  nop
    ctx->pc = 0x2e0538u;
    // NOP
    // 0x2e053c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e053cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0540: 0x0  nop
    ctx->pc = 0x2e0540u;
    // NOP
    // 0x2e0544: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0544u;
    {
        const bool branch_taken_0x2e0544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0544) {
            ctx->pc = 0x2E0558u;
            goto label_2e0558;
        }
    }
    ctx->pc = 0x2E054Cu;
    // 0x2e054c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0550: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e0550u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e0554: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e0554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2e0558:
    // 0x2e0558: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2e0558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e055c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2e055cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2e0560: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e0560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e0564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0568: 0x0  nop
    ctx->pc = 0x2e0568u;
    // NOP
    // 0x2e056c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e056cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0570: 0x0  nop
    ctx->pc = 0x2e0570u;
    // NOP
    // 0x2e0574: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2E0574u;
    {
        const bool branch_taken_0x2e0574 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0574) {
            ctx->pc = 0x2E05B4u;
            goto label_2e05b4;
        }
    }
    ctx->pc = 0x2E057Cu;
    // 0x2e057c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0580: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e0580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0584: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e0584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e0588: 0x24060506  addiu       $a2, $zero, 0x506
    ctx->pc = 0x2e0588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
    // 0x2e058c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e058cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0590: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e0590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e0594: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E0594u;
    SET_GPR_U32(ctx, 31, 0x2E059Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E0594u, 0x2E059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E059Cu;
label_2e059c:
    // 0x2e059c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e05a0: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x2e05a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e05a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e05a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e05a8: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e05a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2e05ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E05ACu;
    {
        const bool branch_taken_0x2e05ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e05ac) {
            ctx->pc = 0x2E0600u;
            goto label_2e0600;
        }
    }
    ctx->pc = 0x2E05B4u;
label_2e05b4:
    // 0x2e05b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e05b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e05b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e05bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e05bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e05c0: 0x24060507  addiu       $a2, $zero, 0x507
    ctx->pc = 0x2e05c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x2e05c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e05c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e05c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e05c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e05cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E05CCu;
    SET_GPR_U32(ctx, 31, 0x2E05D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E05CCu, 0x2E05D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E05D4u;
label_2e05d4:
    // 0x2e05d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e05d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e05d8: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x2e05d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e05dc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2e05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2e05e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e05e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e05e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e05e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e05e8: 0x0  nop
    ctx->pc = 0x2e05e8u;
    // NOP
    // 0x2e05ec: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e05ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e05f0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E05F0u;
    SET_GPR_U32(ctx, 31, 0x2E05F8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E05F0u, 0x2E05F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E05F8u;
label_2e05f8:
    // 0x2e05f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e05f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e05fc: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e05fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_2e0600:
    // 0x2e0600: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2e0600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e0604: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e0604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0608: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2e0608u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e060c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e060cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0610: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e0610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e0614: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e0614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e0618: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e0618u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e061c:
    // 0x2e061c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0620: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2e0620u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2e0624: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0624u;
    {
        const bool branch_taken_0x2e0624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0624) {
            ctx->pc = 0x2E0644u;
            goto label_2e0644;
        }
    }
    ctx->pc = 0x2E062Cu;
    // 0x2e062c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e062cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0630: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2e0630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e0634: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e0634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e0638: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2e0638u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e063c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E063Cu;
    {
        const bool branch_taken_0x2e063c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e063c) {
            ctx->pc = 0x2E065Cu;
            goto label_2e065c;
        }
    }
    ctx->pc = 0x2E0644u;
label_2e0644:
    // 0x2e0644: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e0644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0648: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x2e0648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x2e064c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2e064cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2e0650: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e0650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e0654: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e0654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e0658: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x2e0658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
label_2e065c:
    // 0x2e065c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e065cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0660: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e0660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0664: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2e0664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2e0668: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e0668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e066c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e066cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e0670: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x2e0670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e0674: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x2e0674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e0678: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2E0678u;
    SET_GPR_U32(ctx, 31, 0x2E0680u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2E0678u, 0x2E0680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0680u;
label_2e0680:
    // 0x2e0680: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e0680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0684: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e0684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e0688: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e0688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e068c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e068cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0690: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E0690u;
    SET_GPR_U32(ctx, 31, 0x2E0698u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E0690u, 0x2E0698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0698u;
label_2e0698:
    // 0x2e0698: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e0698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e069c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e069cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e06a0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x2e06a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e06a4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x2E06A4u;
    SET_GPR_U32(ctx, 31, 0x2E06ACu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2E06A4u, 0x2E06ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E06ACu;
label_2e06ac:
    // 0x2e06ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e06acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e06b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e06b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e06b4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E06B4u;
    SET_GPR_U32(ctx, 31, 0x2E06BCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E06B4u, 0x2E06BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E06BCu;
label_2e06bc:
    // 0x2e06bc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e06bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e06c0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E06C0u;
    SET_GPR_U32(ctx, 31, 0x2E06C8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E06C0u, 0x2E06C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E06C8u;
label_2e06c8:
    // 0x2e06c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e06c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e06cc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e06ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e06d0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E06D0u;
    {
        const bool branch_taken_0x2e06d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e06d0) {
            ctx->pc = 0x2E0728u;
            goto label_2e0728;
        }
    }
    ctx->pc = 0x2E06D8u;
    // 0x2e06d8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2e06d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e06dc: 0x8ca411a0  lw          $a0, 0x11A0($a1)
    ctx->pc = 0x2e06dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4512)));
    // 0x2e06e0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x2e06e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x2e06e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e06e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e06e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e06e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e06ec: 0xaca311a0  sw          $v1, 0x11A0($a1)
    ctx->pc = 0x2e06ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4512), GPR_U32(ctx, 3));
    // 0x2e06f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e06f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e06f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e06f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e06f8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e06f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e06fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e06fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0700: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e0700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0704: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e0704u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0708: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e0708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e070c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e070cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0710: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e0710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0714: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e0714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0718: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e0718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e071c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e071cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e0720: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E0720u;
    {
        const bool branch_taken_0x2e0720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0720) {
            ctx->pc = 0x2E0728u;
            goto label_2e0728;
        }
    }
    ctx->pc = 0x2E0728u;
label_2e0728:
    // 0x2e0728: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2e0728u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e072c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e072cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e0730: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0738u;
}
