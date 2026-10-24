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

// Function: Em06_R1_fall_down
// Address: 0x19bc30 - 0x19be2c
void Em06_R1_fall_down_0x19bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_fall_down_0x19bc30");
#endif

    switch (ctx->pc) {
        case 0x19bc9cu: goto label_19bc9c;
        case 0x19bcb8u: goto label_19bcb8;
        case 0x19bd48u: goto label_19bd48;
        case 0x19bd78u: goto label_19bd78;
        case 0x19bdd8u: goto label_19bdd8;
        case 0x19bdf0u: goto label_19bdf0;
        case 0x19bdfcu: goto label_19bdfc;
        default: break;
    }

    ctx->pc = 0x19bc30u;

    // 0x19bc30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19bc34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19bc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x19bc38: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x19bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x19bc3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bc40: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x19bc40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19bc44: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x19bc44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19bc48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19bc4c: 0x10830073  beq         $a0, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x19BC4Cu;
    {
        const bool branch_taken_0x19bc4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19bc4c) {
            ctx->pc = 0x19BE1Cu;
            goto label_19be1c;
        }
    }
    ctx->pc = 0x19BC54u;
    // 0x19bc54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19bc58: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x19BC58u;
    {
        const bool branch_taken_0x19bc58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19bc58) {
            ctx->pc = 0x19BCD0u;
            goto label_19bcd0;
        }
    }
    ctx->pc = 0x19BC60u;
    // 0x19bc60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bc64: 0x1083006d  beq         $a0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x19BC64u;
    {
        const bool branch_taken_0x19bc64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19bc64) {
            ctx->pc = 0x19BE1Cu;
            goto label_19be1c;
        }
    }
    ctx->pc = 0x19BC6Cu;
    // 0x19bc6c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BC6Cu;
    {
        const bool branch_taken_0x19bc6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bc6c) {
            ctx->pc = 0x19BC7Cu;
            goto label_19bc7c;
        }
    }
    ctx->pc = 0x19BC74u;
    // 0x19bc74: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x19BC74u;
    {
        const bool branch_taken_0x19bc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bc74) {
            ctx->pc = 0x19BE1Cu;
            goto label_19be1c;
        }
    }
    ctx->pc = 0x19BC7Cu;
label_19bc7c:
    // 0x19bc7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bc80: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bc84: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19bc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19bc88: 0x2406640a  addiu       $a2, $zero, 0x640A
    ctx->pc = 0x19bc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25610));
    // 0x19bc8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19bc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bc90: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19bc90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19bc94: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19BC94u;
    SET_GPR_U32(ctx, 31, 0x19BC9Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19BC94u, 0x19BC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC9Cu;
label_19bc9c:
    // 0x19bc9c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x19bca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19bca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bca4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bca8: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x19bca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x19bcac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bcb0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19BCB0u;
    SET_GPR_U32(ctx, 31, 0x19BCB8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19BCB0u, 0x19BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BCB8u;
label_19bcb8:
    // 0x19bcb8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bcbc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19bcbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19bcc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19bcc4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19bcc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19bcc8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x19BCC8u;
    {
        const bool branch_taken_0x19bcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bcc8) {
            ctx->pc = 0x19BE1Cu;
            goto label_19be1c;
        }
    }
    ctx->pc = 0x19BCD0u;
label_19bcd0:
    // 0x19bcd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bcd4: 0xc4410180  lwc1        $f1, 0x180($v0)
    ctx->pc = 0x19bcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bcd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bcdc: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x19bcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bce0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19bce0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19bce4: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x19bce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x19bce8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bcec: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x19bcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bcf0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bcf4: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x19bcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bcf8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19bcf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19bcfc: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x19bcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x19bd00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd04: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x19bd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bd08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd0c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x19bd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bd10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19bd10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19bd14: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19bd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x19bd18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd1c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x19bd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bd20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd24: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x19bd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bd28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19bd28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19bd2c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x19bd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x19bd30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd34: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19bd38: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x19bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19bd3c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19bd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19bd40: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x19BD40u;
    SET_GPR_U32(ctx, 31, 0x19BD48u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19BD40u, 0x19BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD48u;
label_19bd48:
    // 0x19bd48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd4c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19bd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19bd50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19bd50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19bd54: 0x0  nop
    ctx->pc = 0x19bd54u;
    // NOP
    // 0x19bd58: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x19BD58u;
    {
        const bool branch_taken_0x19bd58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19bd58) {
            ctx->pc = 0x19BD80u;
            goto label_19bd80;
        }
    }
    ctx->pc = 0x19BD60u;
    // 0x19bd60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd64: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19bd68: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x19bd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19bd6c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19bd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19bd70: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x19BD70u;
    SET_GPR_U32(ctx, 31, 0x19BD78u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19BD70u, 0x19BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD78u;
label_19bd78:
    // 0x19bd78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd7c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19bd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_19bd80:
    // 0x19bd80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd84: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19bd84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19bd88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19bd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19bd8c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19bd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x19bd90: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19BD90u;
    {
        const bool branch_taken_0x19bd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bd90) {
            ctx->pc = 0x19BDF0u;
            goto label_19bdf0;
        }
    }
    ctx->pc = 0x19BD98u;
    // 0x19bd98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bd9c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19bd9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19bda0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19bda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19bda4: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x19bda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x19bda8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19BDA8u;
    {
        const bool branch_taken_0x19bda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bda8) {
            ctx->pc = 0x19BDF0u;
            goto label_19bdf0;
        }
    }
    ctx->pc = 0x19BDB0u;
    // 0x19bdb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bdb4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19bdb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19bdb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19bdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19bdbc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19bdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19bdc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BDC0u;
    {
        const bool branch_taken_0x19bdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bdc0) {
            ctx->pc = 0x19BDE0u;
            goto label_19bde0;
        }
    }
    ctx->pc = 0x19BDC8u;
    // 0x19bdc8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19bdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bdcc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x19bdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x19bdd0: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x19BDD0u;
    SET_GPR_U32(ctx, 31, 0x19BDD8u);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x19BDD0u, 0x19BDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDD8u;
label_19bdd8:
    // 0x19bdd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19BDD8u;
    {
        const bool branch_taken_0x19bdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bdd8) {
            ctx->pc = 0x19BDF0u;
            goto label_19bdf0;
        }
    }
    ctx->pc = 0x19BDE0u;
label_19bde0:
    // 0x19bde0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bde4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x19bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x19bde8: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x19BDE8u;
    SET_GPR_U32(ctx, 31, 0x19BDF0u);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x19BDE8u, 0x19BDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDF0u;
label_19bdf0:
    // 0x19bdf0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bdf4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19BDF4u;
    SET_GPR_U32(ctx, 31, 0x19BDFCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19BDF4u, 0x19BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDFCu;
label_19bdfc:
    // 0x19bdfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19be00: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19be00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19be04: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BE04u;
    {
        const bool branch_taken_0x19be04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19be04) {
            ctx->pc = 0x19BE1Cu;
            goto label_19be1c;
        }
    }
    ctx->pc = 0x19BE0Cu;
    // 0x19be0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19be10: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19be10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19be14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19be14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19be18: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19be18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_19be1c:
    // 0x19be1c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19be1cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19be20: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19be20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19be24: 0x3e00008  jr          $ra
    ctx->pc = 0x19BE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BE24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BE2Cu;
}
