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

// Function: Em0d_R1_mv05
// Address: 0x23a680 - 0x23ae10
void Em0d_R1_mv05_0x23a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_mv05_0x23a680");
#endif

    switch (ctx->pc) {
        case 0x23a6c8u: goto label_23a6c8;
        case 0x23a6f8u: goto label_23a6f8;
        case 0x23a720u: goto label_23a720;
        case 0x23a824u: goto label_23a824;
        case 0x23a840u: goto label_23a840;
        case 0x23a858u: goto label_23a858;
        case 0x23a864u: goto label_23a864;
        case 0x23a8d0u: goto label_23a8d0;
        case 0x23a9d8u: goto label_23a9d8;
        case 0x23aa5cu: goto label_23aa5c;
        case 0x23aa64u: goto label_23aa64;
        case 0x23aaecu: goto label_23aaec;
        case 0x23aafcu: goto label_23aafc;
        case 0x23ab0cu: goto label_23ab0c;
        case 0x23ab30u: goto label_23ab30;
        case 0x23ab78u: goto label_23ab78;
        case 0x23ab9cu: goto label_23ab9c;
        case 0x23ac10u: goto label_23ac10;
        case 0x23ac50u: goto label_23ac50;
        default: break;
    }

    ctx->pc = 0x23a680u;

    // 0x23a680: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23a680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23a684: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x23a684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x23a688: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x23a688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x23a68c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a690: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x23a690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23a694: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x23a694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23a698: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a69c: 0x10830041  beq         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x23A69Cu;
    {
        const bool branch_taken_0x23a69c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23a69c) {
            ctx->pc = 0x23A7A4u;
            goto label_23a7a4;
        }
    }
    ctx->pc = 0x23A6A4u;
    // 0x23a6a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A6A4u;
    {
        const bool branch_taken_0x23a6a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a6a4) {
            ctx->pc = 0x23A6B4u;
            goto label_23a6b4;
        }
    }
    ctx->pc = 0x23A6ACu;
    // 0x23a6ac: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x23A6ACu;
    {
        const bool branch_taken_0x23a6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a6ac) {
            ctx->pc = 0x23ACB8u;
            goto label_23acb8;
        }
    }
    ctx->pc = 0x23A6B4u;
label_23a6b4:
    // 0x23a6b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a6b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a6bc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23a6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23a6c0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23A6C0u;
    SET_GPR_U32(ctx, 31, 0x23A6C8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23A6C0u, 0x23A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A6C8u;
label_23a6c8:
    // 0x23a6c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23a6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23a6cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23a6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23a6d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23A6D0u;
    {
        const bool branch_taken_0x23a6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a6d0) {
            ctx->pc = 0x23A700u;
            goto label_23a700;
        }
    }
    ctx->pc = 0x23A6D8u;
    // 0x23a6d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a6dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a6e0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23a6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23a6e4: 0x24061e1e  addiu       $a2, $zero, 0x1E1E
    ctx->pc = 0x23a6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7710));
    // 0x23a6e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23a6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a6ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23a6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23a6f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23A6F0u;
    SET_GPR_U32(ctx, 31, 0x23A6F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23A6F0u, 0x23A6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A6F8u;
label_23a6f8:
    // 0x23a6f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23A6F8u;
    {
        const bool branch_taken_0x23a6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a6f8) {
            ctx->pc = 0x23A720u;
            goto label_23a720;
        }
    }
    ctx->pc = 0x23A700u;
label_23a700:
    // 0x23a700: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a704: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23a704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a708: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23a708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23a70c: 0x2406321f  addiu       $a2, $zero, 0x321F
    ctx->pc = 0x23a70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12831));
    // 0x23a710: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23a710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a714: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23a714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23a718: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23A718u;
    SET_GPR_U32(ctx, 31, 0x23A720u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23A718u, 0x23A720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A720u;
label_23a720:
    // 0x23a720: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a724: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a728: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a72c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23a72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23a730: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x23a730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x23a734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a738: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a73c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a740: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23a740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23a744: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23a744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23a748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a74c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a750: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a754: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23a754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23a758: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23a758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23a75c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a760: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a764: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a768: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23a768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23a76c: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x23a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x23a770: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x23a770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x23a774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a778: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a77c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a780: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23a780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23a784: 0x3c023a64  lui         $v0, 0x3A64
    ctx->pc = 0x23a784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14948 << 16));
    // 0x23a788: 0x3442c388  ori         $v0, $v0, 0xC388
    ctx->pc = 0x23a788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50056);
    // 0x23a78c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a790: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a794: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a798: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23a798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23a79c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a7a0: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x23a7a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_23a7a4:
    // 0x23a7a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a7a8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x23a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a7ac: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x23a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x23a7b0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x23a7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x23a7b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a7b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a7b8: 0x0  nop
    ctx->pc = 0x23a7b8u;
    // NOP
    // 0x23a7bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23a7bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a7c0: 0x0  nop
    ctx->pc = 0x23a7c0u;
    // NOP
    // 0x23a7c4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23A7C4u;
    {
        const bool branch_taken_0x23a7c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a7c4) {
            ctx->pc = 0x23A7E8u;
            goto label_23a7e8;
        }
    }
    ctx->pc = 0x23A7CCu;
    // 0x23a7cc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23a7d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a7d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a7d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a7dc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23a7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23a7e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23A7E0u;
    {
        const bool branch_taken_0x23a7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a7e0) {
            ctx->pc = 0x23A7F8u;
            goto label_23a7f8;
        }
    }
    ctx->pc = 0x23A7E8u;
label_23a7e8:
    // 0x23a7e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a7e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a7ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a7f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a7f4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23a7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_23a7f8:
    // 0x23a7f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a7fc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x23a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a800: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a804: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23a804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a808: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23a808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23a80c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23a80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23a810: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23a810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23a814: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23a814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23a818: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x23a818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23a81c: 0xc05c848  jal         func_172120
    ctx->pc = 0x23A81Cu;
    SET_GPR_U32(ctx, 31, 0x23A824u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23A81Cu, 0x23A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A824u;
label_23a824:
    // 0x23a824: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x23a824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x23a828: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a82c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23a82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a830: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x23a830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a834: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23a834u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23a838: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23A838u;
    SET_GPR_U32(ctx, 31, 0x23A840u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23A838u, 0x23A840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A840u;
label_23a840:
    // 0x23a840: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a844: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23a844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23a848: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23a848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a84c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23a84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23a850: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23A850u;
    SET_GPR_U32(ctx, 31, 0x23A858u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23A850u, 0x23A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A858u;
label_23a858:
    // 0x23a858: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23a858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a85c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23A85Cu;
    SET_GPR_U32(ctx, 31, 0x23A864u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23A85Cu, 0x23A864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A864u;
label_23a864:
    // 0x23a864: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a868: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x23a868u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x23a86c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x23a86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x23a870: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x23a870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x23a874: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x23A874u;
    {
        const bool branch_taken_0x23a874 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a874) {
            ctx->pc = 0x23A918u;
            goto label_23a918;
        }
    }
    ctx->pc = 0x23A87Cu;
    // 0x23a87c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a880: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x23a880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a884: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x23a884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x23a888: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x23a888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x23a88c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23a88cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a890: 0x0  nop
    ctx->pc = 0x23a890u;
    // NOP
    // 0x23a894: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23a894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a898: 0x0  nop
    ctx->pc = 0x23a898u;
    // NOP
    // 0x23a89c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x23A89Cu;
    {
        const bool branch_taken_0x23a89c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a89c) {
            ctx->pc = 0x23A918u;
            goto label_23a918;
        }
    }
    ctx->pc = 0x23A8A4u;
    // 0x23a8a4: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x23a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x23a8a8: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x23a8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x23a8ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23a8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23a8b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a8b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a8b8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23a8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23a8bc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23a8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23a8c0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23a8c4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23a8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23a8c8: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23A8C8u;
    SET_GPR_U32(ctx, 31, 0x23A8D0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23A8C8u, 0x23A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A8D0u;
label_23a8d0:
    // 0x23a8d0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23A8D0u;
    {
        const bool branch_taken_0x23a8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a8d0) {
            ctx->pc = 0x23A918u;
            goto label_23a918;
        }
    }
    ctx->pc = 0x23A8D8u;
    // 0x23a8d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a8dc: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x23a8dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x23a8e0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x23A8E0u;
    {
        const bool branch_taken_0x23a8e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a8e0) {
            ctx->pc = 0x23A918u;
            goto label_23a918;
        }
    }
    ctx->pc = 0x23A8E8u;
    // 0x23a8e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a8ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a8f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x23a8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23a8f4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x23a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23a8f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a8fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x23a8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x23a900: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a904: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x23a904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a908: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a90c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x23a90cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a910: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a914: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23a914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_23a918:
    // 0x23a918: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a91c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x23a91cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x23a920: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x23a920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23a924: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x23a924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x23a928: 0x10600081  beqz        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x23A928u;
    {
        const bool branch_taken_0x23a928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a928) {
            ctx->pc = 0x23AB30u;
            goto label_23ab30;
        }
    }
    ctx->pc = 0x23A930u;
    // 0x23a930: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x23a930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x23a934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a938: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a93c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a940: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23a940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23a944: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23a944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23a948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a94c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a950: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a954: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23a954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23a958: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a95c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a960: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x23a960u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x23a964: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a968: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23a968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23a96c: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x23a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23a970: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x23a970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x23a974: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a978: 0x0  nop
    ctx->pc = 0x23a978u;
    // NOP
    // 0x23a97c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x23a97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23a980: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x23a980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x23a984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a988: 0x0  nop
    ctx->pc = 0x23a988u;
    // NOP
    // 0x23a98c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x23a98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x23a990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a994: 0x0  nop
    ctx->pc = 0x23a994u;
    // NOP
    // 0x23a998: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x23a998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x23a99c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23a9a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a9a4: 0x0  nop
    ctx->pc = 0x23a9a4u;
    // NOP
    // 0x23a9a8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x23a9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x23a9ac: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x23a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x23a9b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a9b4: 0x0  nop
    ctx->pc = 0x23a9b4u;
    // NOP
    // 0x23a9b8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x23a9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x23a9bc: 0xa7a00034  sh          $zero, 0x34($sp)
    ctx->pc = 0x23a9bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x23a9c0: 0xa3a00036  sb          $zero, 0x36($sp)
    ctx->pc = 0x23a9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a9c4: 0xa3a00037  sb          $zero, 0x37($sp)
    ctx->pc = 0x23a9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a9c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a9cc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23a9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23a9d0: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x23A9D0u;
    SET_GPR_U32(ctx, 31, 0x23A9D8u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x23A9D0u, 0x23A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A9D8u;
label_23a9d8:
    // 0x23a9d8: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x23A9D8u;
    {
        const bool branch_taken_0x23a9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a9d8) {
            ctx->pc = 0x23AB30u;
            goto label_23ab30;
        }
    }
    ctx->pc = 0x23A9E0u;
    // 0x23a9e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a9e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a9e4: 0x0  nop
    ctx->pc = 0x23a9e4u;
    // NOP
    // 0x23a9e8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x23a9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23a9ec: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23a9f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a9f4: 0x0  nop
    ctx->pc = 0x23a9f4u;
    // NOP
    // 0x23a9f8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x23a9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x23a9fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a9fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23aa00: 0x0  nop
    ctx->pc = 0x23aa00u;
    // NOP
    // 0x23aa04: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x23aa04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x23aa08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23aa0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23aa0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23aa10: 0x0  nop
    ctx->pc = 0x23aa10u;
    // NOP
    // 0x23aa14: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x23aa14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x23aa18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23aa1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23aa1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23aa20: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23aa20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23aa24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23aa24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23aa28: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23aa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23aa2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23aa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23aa30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23aa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23aa34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23aa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23aa38: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23aa38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23aa3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23aa40: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23aa44: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x23aa44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23aa48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23aa48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23aa4c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23aa4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23aa50: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23aa50u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23aa54: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23AA54u;
    SET_GPR_U32(ctx, 31, 0x23AA5Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23AA54u, 0x23AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AA5Cu;
label_23aa5c:
    // 0x23aa5c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23AA5Cu;
    SET_GPR_U32(ctx, 31, 0x23AA64u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23AA5Cu, 0x23AA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AA64u;
label_23aa64:
    // 0x23aa64: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23AA64u;
    {
        const bool branch_taken_0x23aa64 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23aa64) {
            ctx->pc = 0x23AA80u;
            goto label_23aa80;
        }
    }
    ctx->pc = 0x23AA6Cu;
    // 0x23aa6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23aa6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23aa70: 0x0  nop
    ctx->pc = 0x23aa70u;
    // NOP
    // 0x23aa74: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23aa74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23aa78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23AA78u;
    {
        const bool branch_taken_0x23aa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aa78) {
            ctx->pc = 0x23AA9Cu;
            goto label_23aa9c;
        }
    }
    ctx->pc = 0x23AA80u;
label_23aa80:
    // 0x23aa80: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x23aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x23aa84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23aa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23aa88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23aa88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23aa8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23aa8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23aa90: 0x0  nop
    ctx->pc = 0x23aa90u;
    // NOP
    // 0x23aa94: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23aa94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23aa98: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x23aa98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_23aa9c:
    // 0x23aa9c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x23aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23aaa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23aaa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23aaa4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x23aaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x23aaa8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23aaac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23aaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23aab0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23aab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23aab4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23aab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23aab8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23aab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23aabc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23aabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23aac0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23aac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23aac4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23aac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23aac8: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23aac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23aacc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23aad0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23aad4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x23aad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23aad8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23aad8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23aadc: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23aadcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23aae0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23aae0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23aae4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23AAE4u;
    SET_GPR_U32(ctx, 31, 0x23AAECu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23AAE4u, 0x23AAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AAECu;
label_23aaec:
    // 0x23aaec: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x23aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x23aaf0: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x23aaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x23aaf4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23AAF4u;
    SET_GPR_U32(ctx, 31, 0x23AAFCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23AAF4u, 0x23AAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AAFCu;
label_23aafc:
    // 0x23aafc: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x23aafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x23ab00: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x23ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x23ab04: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23AB04u;
    SET_GPR_U32(ctx, 31, 0x23AB0Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23AB04u, 0x23AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB0Cu;
label_23ab0c:
    // 0x23ab0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ab10: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23ab14: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23ab14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23ab18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23ab18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23ab1c: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x23ab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x23ab20: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23ab20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23ab24: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23ab24u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23ab28: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23AB28u;
    SET_GPR_U32(ctx, 31, 0x23AB30u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23AB28u, 0x23AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB30u;
label_23ab30:
    // 0x23ab30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ab34: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23ab34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23ab38: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x23AB38u;
    {
        const bool branch_taken_0x23ab38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ab38) {
            ctx->pc = 0x23ACB8u;
            goto label_23acb8;
        }
    }
    ctx->pc = 0x23AB40u;
    // 0x23ab40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ab44: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ab48: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23ab48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ab4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ab50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ab54: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23ab54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ab58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ab5c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23ab5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ab60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ab64: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23ab64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ab68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ab6c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23ab70: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23AB70u;
    SET_GPR_U32(ctx, 31, 0x23AB78u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23AB70u, 0x23AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB78u;
label_23ab78:
    // 0x23ab78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23ab78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23ab7c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23ab7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23ab80: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x23ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x23ab84: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23ab84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23ab88: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23ab88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23ab8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ab90: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23ab90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23ab94: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23AB94u;
    SET_GPR_U32(ctx, 31, 0x23AB9Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23AB94u, 0x23AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB9Cu;
label_23ab9c:
    // 0x23ab9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23ab9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23aba0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23aba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23aba4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x23aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x23aba8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23aba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23abac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23abacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23abb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23abb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23abb8: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x23abb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x23abbc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23abc0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x23abc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23abc4: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x23abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x23abc8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x23abc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x23abcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23abccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23abd0: 0x0  nop
    ctx->pc = 0x23abd0u;
    // NOP
    // 0x23abd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23abd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23abd8: 0x0  nop
    ctx->pc = 0x23abd8u;
    // NOP
    // 0x23abdc: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x23ABDCu;
    {
        const bool branch_taken_0x23abdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23abdc) {
            ctx->pc = 0x23AC48u;
            goto label_23ac48;
        }
    }
    ctx->pc = 0x23ABE4u;
    // 0x23abe4: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x23abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x23abe8: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x23abe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x23abec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23abecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23abf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23abf4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23abf8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23abfc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23abfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23ac00: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23ac04: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23ac04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23ac08: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23AC08u;
    SET_GPR_U32(ctx, 31, 0x23AC10u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23AC08u, 0x23AC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AC10u;
label_23ac10:
    // 0x23ac10: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23AC10u;
    {
        const bool branch_taken_0x23ac10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ac10) {
            ctx->pc = 0x23AC48u;
            goto label_23ac48;
        }
    }
    ctx->pc = 0x23AC18u;
    // 0x23ac18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ac1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ac20: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23ac20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ac24: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x23ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23ac28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ac2c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23ac2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ac30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ac34: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23ac34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ac38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ac3c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23ac3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ac40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ac44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_23ac48:
    // 0x23ac48: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23AC48u;
    SET_GPR_U32(ctx, 31, 0x23AC50u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23AC48u, 0x23AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AC50u;
label_23ac50:
    // 0x23ac50: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23ac50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23ac54: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x23ac54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x23ac58: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x23AC58u;
    {
        const bool branch_taken_0x23ac58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ac58) {
            ctx->pc = 0x23AC88u;
            goto label_23ac88;
        }
    }
    ctx->pc = 0x23AC60u;
    // 0x23ac60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ac64: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x23ac64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ac68: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x23ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x23ac6c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x23ac6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x23ac70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23ac70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ac74: 0x0  nop
    ctx->pc = 0x23ac74u;
    // NOP
    // 0x23ac78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23ac78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ac7c: 0x0  nop
    ctx->pc = 0x23ac7cu;
    // NOP
    // 0x23ac80: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x23AC80u;
    {
        const bool branch_taken_0x23ac80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ac80) {
            ctx->pc = 0x23ACB8u;
            goto label_23acb8;
        }
    }
    ctx->pc = 0x23AC88u;
label_23ac88:
    // 0x23ac88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23ac88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ac8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ac90: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x23ac90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23ac94: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x23ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23ac98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ac98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ac9c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x23ac9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x23aca0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23aca4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x23aca4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23aca8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23acac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x23acacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23acb0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23acb4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_23acb8:
    // 0x23acb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23acbc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23acc0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23acc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23acc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23acc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23acc8: 0x0  nop
    ctx->pc = 0x23acc8u;
    // NOP
    // 0x23accc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23acccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23acd0: 0x0  nop
    ctx->pc = 0x23acd0u;
    // NOP
    // 0x23acd4: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23ACD4u;
    {
        const bool branch_taken_0x23acd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23acd4) {
            ctx->pc = 0x23ADB8u;
            goto label_23adb8;
        }
    }
    ctx->pc = 0x23ACDCu;
    // 0x23acdc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ace0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ace4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23ace4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ace8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ace8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23acec: 0x0  nop
    ctx->pc = 0x23acecu;
    // NOP
    // 0x23acf0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23acf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23acf4: 0x0  nop
    ctx->pc = 0x23acf4u;
    // NOP
    // 0x23acf8: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23ACF8u;
    {
        const bool branch_taken_0x23acf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23acf8) {
            ctx->pc = 0x23AD60u;
            goto label_23ad60;
        }
    }
    ctx->pc = 0x23AD00u;
    // 0x23ad00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ad04: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ad08: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ad0c: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23ad10: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23ad10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23ad14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23ad14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ad18: 0x0  nop
    ctx->pc = 0x23ad18u;
    // NOP
    // 0x23ad1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23ad1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23ad20: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23ad20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23ad24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ad28: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ad2c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23ad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ad30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ad30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ad34: 0x0  nop
    ctx->pc = 0x23ad34u;
    // NOP
    // 0x23ad38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23ad38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ad3c: 0x0  nop
    ctx->pc = 0x23ad3cu;
    // NOP
    // 0x23ad40: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23AD40u;
    {
        const bool branch_taken_0x23ad40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ad40) {
            ctx->pc = 0x23ADB8u;
            goto label_23adb8;
        }
    }
    ctx->pc = 0x23AD48u;
    // 0x23ad48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ad48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ad4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ad50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ad54: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23ad54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23ad58: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23AD58u;
    {
        const bool branch_taken_0x23ad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ad58) {
            ctx->pc = 0x23ADB8u;
            goto label_23adb8;
        }
    }
    ctx->pc = 0x23AD60u;
label_23ad60:
    // 0x23ad60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ad64: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ad68: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23ad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ad6c: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23ad70: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23ad70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23ad74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23ad74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ad78: 0x0  nop
    ctx->pc = 0x23ad78u;
    // NOP
    // 0x23ad7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23ad7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23ad80: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23ad80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23ad84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ad88: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ad8c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ad90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ad90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ad94: 0x0  nop
    ctx->pc = 0x23ad94u;
    // NOP
    // 0x23ad98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23ad98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ad9c: 0x0  nop
    ctx->pc = 0x23ad9cu;
    // NOP
    // 0x23ada0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23ADA0u;
    {
        const bool branch_taken_0x23ada0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ada0) {
            ctx->pc = 0x23ADB8u;
            goto label_23adb8;
        }
    }
    ctx->pc = 0x23ADA8u;
    // 0x23ada8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ada8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23adac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23adacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23adb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23adb4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23adb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_23adb8:
    // 0x23adb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23adbc: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x23adbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23adc0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x23adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x23adc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x23adc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23adc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23adc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23adcc: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x23adccu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23add0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23add0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23add4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x23add4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23add8: 0x0  nop
    ctx->pc = 0x23add8u;
    // NOP
    // 0x23addc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23ADDCu;
    {
        const bool branch_taken_0x23addc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23addc) {
            ctx->pc = 0x23AE00u;
            goto label_23ae00;
        }
    }
    ctx->pc = 0x23ADE4u;
    // 0x23ade4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ade8: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x23ade8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23adec: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x23adecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x23adf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23adf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23adf4: 0x0  nop
    ctx->pc = 0x23adf4u;
    // NOP
    // 0x23adf8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23adf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23adfc: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x23adfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_23ae00:
    // 0x23ae00: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x23ae00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ae04: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x23ae04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23ae08: 0x3e00008  jr          $ra
    ctx->pc = 0x23AE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AE10u;
}
