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

// Function: Em1a_R1_dm_small
// Address: 0x360290 - 0x360480
void Em1a_R1_dm_small_0x360290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1a_R1_dm_small_0x360290");
#endif

    switch (ctx->pc) {
        case 0x3602dcu: goto label_3602dc;
        case 0x36034cu: goto label_36034c;
        case 0x360384u: goto label_360384;
        case 0x3603a8u: goto label_3603a8;
        case 0x3603e4u: goto label_3603e4;
        case 0x3603fcu: goto label_3603fc;
        case 0x360410u: goto label_360410;
        case 0x360420u: goto label_360420;
        case 0x36042cu: goto label_36042c;
        default: break;
    }

    ctx->pc = 0x360290u;

    // 0x360290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x360290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x360294: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x360294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x360298: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x360298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x36029c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36029cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3602a0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3602a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3602a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3602a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3602a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3602a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3602ac: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3602ACu;
    {
        const bool branch_taken_0x3602ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3602ac) {
            ctx->pc = 0x3603C0u;
            goto label_3603c0;
        }
    }
    ctx->pc = 0x3602B4u;
    // 0x3602b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3602B4u;
    {
        const bool branch_taken_0x3602b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3602b4) {
            ctx->pc = 0x3602C4u;
            goto label_3602c4;
        }
    }
    ctx->pc = 0x3602BCu;
    // 0x3602bc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x3602BCu;
    {
        const bool branch_taken_0x3602bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3602bc) {
            ctx->pc = 0x360470u;
            goto label_360470;
        }
    }
    ctx->pc = 0x3602C4u;
label_3602c4:
    // 0x3602c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3602c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3602c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3602c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3602cc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3602ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3602d0: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x3602d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3602d4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x3602D4u;
    SET_GPR_U32(ctx, 31, 0x3602DCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x3602D4u, 0x3602DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3602DCu;
label_3602dc:
    // 0x3602dc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3602dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3602e0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x3602e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3602e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3602e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3602e8: 0x0  nop
    ctx->pc = 0x3602e8u;
    // NOP
    // 0x3602ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3602ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3602f0: 0x0  nop
    ctx->pc = 0x3602f0u;
    // NOP
    // 0x3602f4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3602F4u;
    {
        const bool branch_taken_0x3602f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3602f4) {
            ctx->pc = 0x360308u;
            goto label_360308;
        }
    }
    ctx->pc = 0x3602FCu;
    // 0x3602fc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x3602fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360300: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x360300u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x360304: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x360304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_360308:
    // 0x360308: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x360308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36030c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x36030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x360310: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x360310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x360314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360318: 0x0  nop
    ctx->pc = 0x360318u;
    // NOP
    // 0x36031c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x36031cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360320: 0x0  nop
    ctx->pc = 0x360320u;
    // NOP
    // 0x360324: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x360324u;
    {
        const bool branch_taken_0x360324 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x360324) {
            ctx->pc = 0x360364u;
            goto label_360364;
        }
    }
    ctx->pc = 0x36032Cu;
    // 0x36032c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36032cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360330: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x360330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360334: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x360334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x360338: 0x24060501  addiu       $a2, $zero, 0x501
    ctx->pc = 0x360338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    // 0x36033c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36033cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360340: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x360340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x360344: 0xc0965d0  jal         func_259740
    ctx->pc = 0x360344u;
    SET_GPR_U32(ctx, 31, 0x36034Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x360344u, 0x36034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36034Cu;
label_36034c:
    // 0x36034c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36034cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360350: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x360350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360354: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x360354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360358: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x360358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x36035c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x36035Cu;
    {
        const bool branch_taken_0x36035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36035c) {
            ctx->pc = 0x3603B0u;
            goto label_3603b0;
        }
    }
    ctx->pc = 0x360364u;
label_360364:
    // 0x360364: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x360364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360368: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x360368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36036c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36036cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x360370: 0x24060502  addiu       $a2, $zero, 0x502
    ctx->pc = 0x360370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    // 0x360374: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x360374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360378: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x360378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36037c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36037Cu;
    SET_GPR_U32(ctx, 31, 0x360384u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36037Cu, 0x360384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360384u;
label_360384:
    // 0x360384: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x360384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360388: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x360388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36038c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x36038cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x360390: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x360390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x360394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360398: 0x0  nop
    ctx->pc = 0x360398u;
    // NOP
    // 0x36039c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x36039cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3603a0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3603A0u;
    SET_GPR_U32(ctx, 31, 0x3603A8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3603A0u, 0x3603A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3603A8u;
label_3603a8:
    // 0x3603a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3603a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3603ac: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x3603acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_3603b0:
    // 0x3603b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3603b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3603b4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3603b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3603b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3603b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3603bc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3603bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3603c0:
    // 0x3603c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3603c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3603c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3603c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3603c8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x3603c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x3603cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3603ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3603d0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3603d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3603d4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x3603d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3603d8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x3603d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3603dc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x3603DCu;
    SET_GPR_U32(ctx, 31, 0x3603E4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x3603DCu, 0x3603E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3603E4u;
label_3603e4:
    // 0x3603e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3603e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3603e8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3603e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3603ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3603ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3603f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3603f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3603f4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3603F4u;
    SET_GPR_U32(ctx, 31, 0x3603FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3603F4u, 0x3603FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3603FCu;
label_3603fc:
    // 0x3603fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3603fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360400: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x360400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360404: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x360404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x360408: 0xc05cd58  jal         func_173560
    ctx->pc = 0x360408u;
    SET_GPR_U32(ctx, 31, 0x360410u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x360408u, 0x360410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360410u;
label_360410:
    // 0x360410: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x360410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360414: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x360414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360418: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x360418u;
    SET_GPR_U32(ctx, 31, 0x360420u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x360418u, 0x360420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360420u;
label_360420:
    // 0x360420: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x360420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360424: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x360424u;
    SET_GPR_U32(ctx, 31, 0x36042Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x360424u, 0x36042Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36042Cu;
label_36042c:
    // 0x36042c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36042cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360430: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x360430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x360434: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x360434u;
    {
        const bool branch_taken_0x360434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x360434) {
            ctx->pc = 0x360470u;
            goto label_360470;
        }
    }
    ctx->pc = 0x36043Cu;
    // 0x36043c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36043cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360440: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x360440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360444: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x360444u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x360448: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x360448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36044c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36044cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x360450: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x360450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360454: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x360454u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x360458: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x360458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36045c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36045cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x360460: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x360460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360464: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x360464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x360468: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x360468u;
    {
        const bool branch_taken_0x360468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360468) {
            ctx->pc = 0x360470u;
            goto label_360470;
        }
    }
    ctx->pc = 0x360470u;
label_360470:
    // 0x360470: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x360470u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360474: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x360474u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x360478: 0x3e00008  jr          $ra
    ctx->pc = 0x360478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360480u;
}
