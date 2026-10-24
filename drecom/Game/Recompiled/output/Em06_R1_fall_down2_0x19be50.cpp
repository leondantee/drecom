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

// Function: Em06_R1_fall_down2
// Address: 0x19be50 - 0x19c0a4
void Em06_R1_fall_down2_0x19be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_fall_down2_0x19be50");
#endif

    switch (ctx->pc) {
        case 0x19bec8u: goto label_19bec8;
        case 0x19bee4u: goto label_19bee4;
        case 0x19bf74u: goto label_19bf74;
        case 0x19bfa4u: goto label_19bfa4;
        case 0x19c004u: goto label_19c004;
        case 0x19c01cu: goto label_19c01c;
        case 0x19c028u: goto label_19c028;
        case 0x19c070u: goto label_19c070;
        case 0x19c094u: goto label_19c094;
        default: break;
    }

    ctx->pc = 0x19be50u;

    // 0x19be50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19be54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19be54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x19be58: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x19be58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x19be5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19be60: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x19be60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19be64: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x19be64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19be68: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19be68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19be6c: 0x10830086  beq         $a0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x19BE6Cu;
    {
        const bool branch_taken_0x19be6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19be6c) {
            ctx->pc = 0x19C088u;
            goto label_19c088;
        }
    }
    ctx->pc = 0x19BE74u;
    // 0x19be74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19be74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19be78: 0x10830075  beq         $a0, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x19BE78u;
    {
        const bool branch_taken_0x19be78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19be78) {
            ctx->pc = 0x19C050u;
            goto label_19c050;
        }
    }
    ctx->pc = 0x19BE80u;
    // 0x19be80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19be80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19be84: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x19BE84u;
    {
        const bool branch_taken_0x19be84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19be84) {
            ctx->pc = 0x19BEFCu;
            goto label_19befc;
        }
    }
    ctx->pc = 0x19BE8Cu;
    // 0x19be8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19be90: 0x10830080  beq         $a0, $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x19BE90u;
    {
        const bool branch_taken_0x19be90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19be90) {
            ctx->pc = 0x19C094u;
            goto label_19c094;
        }
    }
    ctx->pc = 0x19BE98u;
    // 0x19be98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BE98u;
    {
        const bool branch_taken_0x19be98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19be98) {
            ctx->pc = 0x19BEA8u;
            goto label_19bea8;
        }
    }
    ctx->pc = 0x19BEA0u;
    // 0x19bea0: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x19BEA0u;
    {
        const bool branch_taken_0x19bea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bea0) {
            ctx->pc = 0x19C094u;
            goto label_19c094;
        }
    }
    ctx->pc = 0x19BEA8u;
label_19bea8:
    // 0x19bea8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19beac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19beacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19beb0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19beb4: 0x2406640b  addiu       $a2, $zero, 0x640B
    ctx->pc = 0x19beb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25611));
    // 0x19beb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19beb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bebc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19bebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19bec0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19BEC0u;
    SET_GPR_U32(ctx, 31, 0x19BEC8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19BEC0u, 0x19BEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BEC8u;
label_19bec8:
    // 0x19bec8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19becc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19beccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bed0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bed4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x19bed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x19bed8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bedc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19BEDCu;
    SET_GPR_U32(ctx, 31, 0x19BEE4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19BEDCu, 0x19BEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BEE4u;
label_19bee4:
    // 0x19bee4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bee8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19bee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19beec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19beecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19bef0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19bef0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19bef4: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x19BEF4u;
    {
        const bool branch_taken_0x19bef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bef4) {
            ctx->pc = 0x19C094u;
            goto label_19c094;
        }
    }
    ctx->pc = 0x19BEFCu;
label_19befc:
    // 0x19befc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19befcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf00: 0xc4410180  lwc1        $f1, 0x180($v0)
    ctx->pc = 0x19bf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bf04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf08: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x19bf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bf0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19bf0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19bf10: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x19bf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x19bf14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf18: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x19bf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bf1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf20: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x19bf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bf24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19bf24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19bf28: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x19bf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x19bf2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf30: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x19bf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bf34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf38: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x19bf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bf3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19bf3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19bf40: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19bf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x19bf44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf48: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x19bf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bf4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf50: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x19bf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bf54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19bf54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19bf58: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x19bf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x19bf5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf60: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19bf64: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x19bf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19bf68: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19bf68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19bf6c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x19BF6Cu;
    SET_GPR_U32(ctx, 31, 0x19BF74u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19BF6Cu, 0x19BF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF74u;
label_19bf74:
    // 0x19bf74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf78: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19bf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bf7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19bf7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19bf80: 0x0  nop
    ctx->pc = 0x19bf80u;
    // NOP
    // 0x19bf84: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x19BF84u;
    {
        const bool branch_taken_0x19bf84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19bf84) {
            ctx->pc = 0x19BFACu;
            goto label_19bfac;
        }
    }
    ctx->pc = 0x19BF8Cu;
    // 0x19bf8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bf90: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19bf94: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x19bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19bf98: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19bf98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19bf9c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x19BF9Cu;
    SET_GPR_U32(ctx, 31, 0x19BFA4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19BF9Cu, 0x19BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BFA4u;
label_19bfa4:
    // 0x19bfa4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bfa8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19bfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_19bfac:
    // 0x19bfac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bfb0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19bfb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19bfb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19bfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19bfb8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19bfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x19bfbc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19BFBCu;
    {
        const bool branch_taken_0x19bfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bfbc) {
            ctx->pc = 0x19C01Cu;
            goto label_19c01c;
        }
    }
    ctx->pc = 0x19BFC4u;
    // 0x19bfc4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bfc8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19bfc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19bfcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19bfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19bfd0: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x19bfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x19bfd4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19BFD4u;
    {
        const bool branch_taken_0x19bfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bfd4) {
            ctx->pc = 0x19C01Cu;
            goto label_19c01c;
        }
    }
    ctx->pc = 0x19BFDCu;
    // 0x19bfdc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bfe0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19bfe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19bfe4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19bfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19bfe8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19bfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19bfec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BFECu;
    {
        const bool branch_taken_0x19bfec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bfec) {
            ctx->pc = 0x19C00Cu;
            goto label_19c00c;
        }
    }
    ctx->pc = 0x19BFF4u;
    // 0x19bff4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bff8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x19bff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x19bffc: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x19BFFCu;
    SET_GPR_U32(ctx, 31, 0x19C004u);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x19BFFCu, 0x19C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C004u;
label_19c004:
    // 0x19c004: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19C004u;
    {
        const bool branch_taken_0x19c004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c004) {
            ctx->pc = 0x19C01Cu;
            goto label_19c01c;
        }
    }
    ctx->pc = 0x19C00Cu;
label_19c00c:
    // 0x19c00c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19c010: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x19c010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x19c014: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x19C014u;
    SET_GPR_U32(ctx, 31, 0x19C01Cu);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x19C014u, 0x19C01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C01Cu;
label_19c01c:
    // 0x19c01c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19c01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19c020: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19C020u;
    SET_GPR_U32(ctx, 31, 0x19C028u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19C020u, 0x19C028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C028u;
label_19c028:
    // 0x19c028: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19c028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19c02c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19c02cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19c030: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x19C030u;
    {
        const bool branch_taken_0x19c030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c030) {
            ctx->pc = 0x19C094u;
            goto label_19c094;
        }
    }
    ctx->pc = 0x19C038u;
    // 0x19c038: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19c038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19c03c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19c03cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19c040: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c044: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19c044u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19c048: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19C048u;
    {
        const bool branch_taken_0x19c048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c048) {
            ctx->pc = 0x19C094u;
            goto label_19c094;
        }
    }
    ctx->pc = 0x19C050u;
label_19c050:
    // 0x19c050: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19c050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19c054: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19c054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19c058: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19c058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19c05c: 0x2406641d  addiu       $a2, $zero, 0x641D
    ctx->pc = 0x19c05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25629));
    // 0x19c060: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19c060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c064: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19c064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19c068: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19C068u;
    SET_GPR_U32(ctx, 31, 0x19C070u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19C068u, 0x19C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C070u;
label_19c070:
    // 0x19c070: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19c070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19c074: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19c074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19c078: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c07c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19c07cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19c080: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19C080u;
    {
        const bool branch_taken_0x19c080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c080) {
            ctx->pc = 0x19C094u;
            goto label_19c094;
        }
    }
    ctx->pc = 0x19C088u;
label_19c088:
    // 0x19c088: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19c088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19c08c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19C08Cu;
    SET_GPR_U32(ctx, 31, 0x19C094u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19C08Cu, 0x19C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C094u;
label_19c094:
    // 0x19c094: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19c094u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c098: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19c098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19c09c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C0A4u;
}
