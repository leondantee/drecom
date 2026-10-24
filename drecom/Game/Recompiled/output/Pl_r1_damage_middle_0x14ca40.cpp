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

// Function: Pl_r1_damage_middle
// Address: 0x14ca40 - 0x14cca8
void Pl_r1_damage_middle_0x14ca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_damage_middle_0x14ca40");
#endif

    switch (ctx->pc) {
        case 0x14ca8cu: goto label_14ca8c;
        case 0x14cafcu: goto label_14cafc;
        case 0x14cb34u: goto label_14cb34;
        case 0x14cb58u: goto label_14cb58;
        case 0x14cb70u: goto label_14cb70;
        case 0x14cb84u: goto label_14cb84;
        case 0x14cbc4u: goto label_14cbc4;
        case 0x14cbdcu: goto label_14cbdc;
        case 0x14cbf0u: goto label_14cbf0;
        case 0x14cc04u: goto label_14cc04;
        case 0x14cc10u: goto label_14cc10;
        case 0x14cc30u: goto label_14cc30;
        default: break;
    }

    ctx->pc = 0x14ca40u;

    // 0x14ca40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ca40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ca44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x14ca44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x14ca48: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x14ca48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x14ca4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ca50: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x14ca50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14ca54: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14ca54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14ca58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14ca58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ca5c: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x14CA5Cu;
    {
        const bool branch_taken_0x14ca5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14ca5c) {
            ctx->pc = 0x14CBA0u;
            goto label_14cba0;
        }
    }
    ctx->pc = 0x14CA64u;
    // 0x14ca64: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CA64u;
    {
        const bool branch_taken_0x14ca64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ca64) {
            ctx->pc = 0x14CA74u;
            goto label_14ca74;
        }
    }
    ctx->pc = 0x14CA6Cu;
    // 0x14ca6c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x14CA6Cu;
    {
        const bool branch_taken_0x14ca6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ca6c) {
            ctx->pc = 0x14CC98u;
            goto label_14cc98;
        }
    }
    ctx->pc = 0x14CA74u;
label_14ca74:
    // 0x14ca74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ca78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ca7c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x14ca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14ca80: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x14ca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14ca84: 0xc058f20  jal         func_163C80
    ctx->pc = 0x14CA84u;
    SET_GPR_U32(ctx, 31, 0x14CA8Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x14CA84u, 0x14CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA8Cu;
label_14ca8c:
    // 0x14ca8c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14ca8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x14ca90: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x14ca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ca94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ca94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ca98: 0x0  nop
    ctx->pc = 0x14ca98u;
    // NOP
    // 0x14ca9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14ca9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14caa0: 0x0  nop
    ctx->pc = 0x14caa0u;
    // NOP
    // 0x14caa4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14CAA4u;
    {
        const bool branch_taken_0x14caa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14caa4) {
            ctx->pc = 0x14CAB8u;
            goto label_14cab8;
        }
    }
    ctx->pc = 0x14CAACu;
    // 0x14caac: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x14caacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cab0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14cab0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14cab4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14cab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_14cab8:
    // 0x14cab8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x14cab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14cabc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x14cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x14cac0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14cac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14cac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14cac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cac8: 0x0  nop
    ctx->pc = 0x14cac8u;
    // NOP
    // 0x14cacc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14caccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14cad0: 0x0  nop
    ctx->pc = 0x14cad0u;
    // NOP
    // 0x14cad4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x14CAD4u;
    {
        const bool branch_taken_0x14cad4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14cad4) {
            ctx->pc = 0x14CB14u;
            goto label_14cb14;
        }
    }
    ctx->pc = 0x14CADCu;
    // 0x14cadc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cae0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cae4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14cae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14cae8: 0x24060059  addiu       $a2, $zero, 0x59
    ctx->pc = 0x14cae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x14caec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14caecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14caf0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14caf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14caf4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14CAF4u;
    SET_GPR_U32(ctx, 31, 0x14CAFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14CAF4u, 0x14CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CAFCu;
label_14cafc:
    // 0x14cafc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cb00: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x14cb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cb04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cb08: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x14cb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x14cb0c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14CB0Cu;
    {
        const bool branch_taken_0x14cb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cb0c) {
            ctx->pc = 0x14CB60u;
            goto label_14cb60;
        }
    }
    ctx->pc = 0x14CB14u;
label_14cb14:
    // 0x14cb14: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cb18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cb1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14cb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14cb20: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x14cb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x14cb24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14cb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14cb28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14cb28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14cb2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14CB2Cu;
    SET_GPR_U32(ctx, 31, 0x14CB34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14CB2Cu, 0x14CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB34u;
label_14cb34:
    // 0x14cb34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cb38: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x14cb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14cb3c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x14cb40: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14cb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14cb44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14cb44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cb48: 0x0  nop
    ctx->pc = 0x14cb48u;
    // NOP
    // 0x14cb4c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x14cb4cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14cb50: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x14CB50u;
    SET_GPR_U32(ctx, 31, 0x14CB58u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x14CB50u, 0x14CB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB58u;
label_14cb58:
    // 0x14cb58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cb5c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x14cb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_14cb60:
    // 0x14cb60: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x14cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x14cb64: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x14cb64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x14cb68: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x14CB68u;
    SET_GPR_U32(ctx, 31, 0x14CB70u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14CB68u, 0x14CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB70u;
label_14cb70:
    // 0x14cb70: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x14cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x14cb74: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x14cb74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x14cb78: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x14cb78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x14cb7c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x14CB7Cu;
    SET_GPR_U32(ctx, 31, 0x14CB84u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14CB7Cu, 0x14CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB84u;
label_14cb84:
    // 0x14cb84: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x14cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14cb88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cb8c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14cb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x14cb90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cb94: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14cb94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14cb98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14cb9c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14cb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14cba0:
    // 0x14cba0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cba4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cba8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x14cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x14cbac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14cbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14cbb0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14cbb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14cbb4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x14cbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14cbb8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x14cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14cbbc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x14CBBCu;
    SET_GPR_U32(ctx, 31, 0x14CBC4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x14CBBCu, 0x14CBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBC4u;
label_14cbc4:
    // 0x14cbc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cbc8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14cbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14cbcc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cbd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14cbd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14cbd4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14CBD4u;
    SET_GPR_U32(ctx, 31, 0x14CBDCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14CBD4u, 0x14CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBDCu;
label_14cbdc:
    // 0x14cbdc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cbe0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cbe4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14cbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14cbe8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x14CBE8u;
    SET_GPR_U32(ctx, 31, 0x14CBF0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14CBE8u, 0x14CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBF0u;
label_14cbf0:
    // 0x14cbf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14cbf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14cbf4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cbf8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14cbf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14cbfc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14CBFCu;
    SET_GPR_U32(ctx, 31, 0x14CC04u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14CBFCu, 0x14CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC04u;
label_14cc04:
    // 0x14cc04: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14cc04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14cc08: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14CC08u;
    SET_GPR_U32(ctx, 31, 0x14CC10u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14CC08u, 0x14CC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC10u;
label_14cc10:
    // 0x14cc10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc14: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x14cc14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x14cc18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14cc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14cc1c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x14cc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x14cc20: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14CC20u;
    {
        const bool branch_taken_0x14cc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc20) {
            ctx->pc = 0x14CC48u;
            goto label_14cc48;
        }
    }
    ctx->pc = 0x14CC28u;
    // 0x14cc28: 0xc0585dc  jal         func_161770
    ctx->pc = 0x14CC28u;
    SET_GPR_U32(ctx, 31, 0x14CC30u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x14CC28u, 0x14CC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC30u;
label_14cc30:
    // 0x14cc30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14CC30u;
    {
        const bool branch_taken_0x14cc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc30) {
            ctx->pc = 0x14CC48u;
            goto label_14cc48;
        }
    }
    ctx->pc = 0x14CC38u;
    // 0x14cc38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc3c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14cc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cc40: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14CC40u;
    {
        const bool branch_taken_0x14cc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc40) {
            ctx->pc = 0x14CC98u;
            goto label_14cc98;
        }
    }
    ctx->pc = 0x14CC48u;
label_14cc48:
    // 0x14cc48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc4c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14cc4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14cc50: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14CC50u;
    {
        const bool branch_taken_0x14cc50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc50) {
            ctx->pc = 0x14CC98u;
            goto label_14cc98;
        }
    }
    ctx->pc = 0x14CC58u;
    // 0x14cc58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14cc5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc60: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14cc60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14cc64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc68: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14cc68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cc6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc70: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14cc70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cc74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc78: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14cc78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cc7c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14cc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14cc80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc84: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14cc84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14cc88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc8c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14cc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cc90: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14CC90u;
    {
        const bool branch_taken_0x14cc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc90) {
            ctx->pc = 0x14CC98u;
            goto label_14cc98;
        }
    }
    ctx->pc = 0x14CC98u;
label_14cc98:
    // 0x14cc98: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14cc98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cc9c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14cc9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14cca0: 0x3e00008  jr          $ra
    ctx->pc = 0x14CCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CCA8u;
}
