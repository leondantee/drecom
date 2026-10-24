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

// Function: Em10_R1_sword_reflect
// Address: 0x130a30 - 0x130c68
void Em10_R1_sword_reflect_0x130a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_sword_reflect_0x130a30");
#endif

    switch (ctx->pc) {
        case 0x130aa8u: goto label_130aa8;
        case 0x130ad0u: goto label_130ad0;
        case 0x130af4u: goto label_130af4;
        case 0x130b80u: goto label_130b80;
        case 0x130bbcu: goto label_130bbc;
        case 0x130bd4u: goto label_130bd4;
        case 0x130be8u: goto label_130be8;
        case 0x130bf8u: goto label_130bf8;
        case 0x130c04u: goto label_130c04;
        default: break;
    }

    ctx->pc = 0x130a30u;

    // 0x130a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x130a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x130a34: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x130a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x130a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130a3c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x130a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x130a40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130a44: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x130a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x130a48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130a4c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x130a4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x130a50: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x130a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x130a54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130a58: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x130A58u;
    {
        const bool branch_taken_0x130a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x130a58) {
            ctx->pc = 0x130B98u;
            goto label_130b98;
        }
    }
    ctx->pc = 0x130A60u;
    // 0x130a60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130A60u;
    {
        const bool branch_taken_0x130a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x130a60) {
            ctx->pc = 0x130A70u;
            goto label_130a70;
        }
    }
    ctx->pc = 0x130A68u;
    // 0x130a68: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x130A68u;
    {
        const bool branch_taken_0x130a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130a68) {
            ctx->pc = 0x130C54u;
            goto label_130c54;
        }
    }
    ctx->pc = 0x130A70u;
label_130a70:
    // 0x130a70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130a74: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x130a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x130a78: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x130a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x130a7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x130a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x130a80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x130A80u;
    {
        const bool branch_taken_0x130a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130a80) {
            ctx->pc = 0x130AB0u;
            goto label_130ab0;
        }
    }
    ctx->pc = 0x130A88u;
    // 0x130a88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130a8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130a90: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x130a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x130a94: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x130a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x130a98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x130a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130a9c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x130a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x130aa0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x130AA0u;
    SET_GPR_U32(ctx, 31, 0x130AA8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x130AA0u, 0x130AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AA8u;
label_130aa8:
    // 0x130aa8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x130AA8u;
    {
        const bool branch_taken_0x130aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130aa8) {
            ctx->pc = 0x130AD0u;
            goto label_130ad0;
        }
    }
    ctx->pc = 0x130AB0u;
label_130ab0:
    // 0x130ab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ab4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ab8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x130ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x130abc: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x130abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x130ac0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x130ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130ac4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x130ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x130ac8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x130AC8u;
    SET_GPR_U32(ctx, 31, 0x130AD0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x130AC8u, 0x130AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AD0u;
label_130ad0:
    // 0x130ad0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x130ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130ad4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ad8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x130ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x130adc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ae0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ae4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x130ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130ae8: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x130ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x130aec: 0xc058f20  jal         func_163C80
    ctx->pc = 0x130AECu;
    SET_GPR_U32(ctx, 31, 0x130AF4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x130AECu, 0x130AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AF4u;
label_130af4:
    // 0x130af4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x130af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x130af8: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x130af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130afc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x130afcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130b00: 0x0  nop
    ctx->pc = 0x130b00u;
    // NOP
    // 0x130b04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x130b04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130b08: 0x0  nop
    ctx->pc = 0x130b08u;
    // NOP
    // 0x130b0c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x130B0Cu;
    {
        const bool branch_taken_0x130b0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130b0c) {
            ctx->pc = 0x130B20u;
            goto label_130b20;
        }
    }
    ctx->pc = 0x130B14u;
    // 0x130b14: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x130b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130b18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x130b18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x130b1c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x130b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_130b20:
    // 0x130b20: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x130b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130b24: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x130b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x130b28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130b30: 0x0  nop
    ctx->pc = 0x130b30u;
    // NOP
    // 0x130b34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x130b34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130b38: 0x0  nop
    ctx->pc = 0x130b38u;
    // NOP
    // 0x130b3c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x130B3Cu;
    {
        const bool branch_taken_0x130b3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130b3c) {
            ctx->pc = 0x130B5Cu;
            goto label_130b5c;
        }
    }
    ctx->pc = 0x130B44u;
    // 0x130b44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130b48: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x130b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130b4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130b50: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x130b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x130b54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x130B54u;
    {
        const bool branch_taken_0x130b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130b54) {
            ctx->pc = 0x130B88u;
            goto label_130b88;
        }
    }
    ctx->pc = 0x130B5Cu;
label_130b5c:
    // 0x130b5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130b60: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x130b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130b64: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x130b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x130b68: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130b70: 0x0  nop
    ctx->pc = 0x130b70u;
    // NOP
    // 0x130b74: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x130b74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x130b78: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x130B78u;
    SET_GPR_U32(ctx, 31, 0x130B80u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x130B78u, 0x130B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B80u;
label_130b80:
    // 0x130b80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130b84: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x130b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_130b88:
    // 0x130b88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130b8c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x130b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x130b90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x130b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x130b94: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x130b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_130b98:
    // 0x130b98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130b9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ba0: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x130ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x130ba4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130ba8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x130ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x130bac: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x130bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130bb0: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x130bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x130bb4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x130BB4u;
    SET_GPR_U32(ctx, 31, 0x130BBCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x130BB4u, 0x130BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BBCu;
label_130bbc:
    // 0x130bbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130bc0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x130bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x130bc4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130bc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130bc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130bcc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x130BCCu;
    SET_GPR_U32(ctx, 31, 0x130BD4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x130BCCu, 0x130BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BD4u;
label_130bd4:
    // 0x130bd4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130bd8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130bdc: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x130bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130be0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x130BE0u;
    SET_GPR_U32(ctx, 31, 0x130BE8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x130BE0u, 0x130BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BE8u;
label_130be8:
    // 0x130be8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130bec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130becu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130bf0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x130BF0u;
    SET_GPR_U32(ctx, 31, 0x130BF8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x130BF0u, 0x130BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BF8u;
label_130bf8:
    // 0x130bf8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130bfc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x130BFCu;
    SET_GPR_U32(ctx, 31, 0x130C04u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x130BFCu, 0x130C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C04u;
label_130c04:
    // 0x130c04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130c08: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x130c08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x130c0c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x130C0Cu;
    {
        const bool branch_taken_0x130c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x130c0c) {
            ctx->pc = 0x130C54u;
            goto label_130c54;
        }
    }
    ctx->pc = 0x130C14u;
    // 0x130c14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x130c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130c18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130c1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x130c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x130c20: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x130c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x130c24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130c28: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x130c28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x130c2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130c30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x130c30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x130c34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130c38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x130c38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x130c3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x130c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130c40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130c44: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x130c44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x130c48: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x130c48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x130c4c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x130C4Cu;
    {
        const bool branch_taken_0x130c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130c4c) {
            ctx->pc = 0x130C54u;
            goto label_130c54;
        }
    }
    ctx->pc = 0x130C54u;
label_130c54:
    // 0x130c54: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x130c54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130c58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130c5c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x130c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x130c60: 0x3e00008  jr          $ra
    ctx->pc = 0x130C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130C68u;
}
