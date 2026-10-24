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

// Function: Em10_R1_dm_small
// Address: 0x1310b0 - 0x131364
void Em10_R1_dm_small_0x1310b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_dm_small_0x1310b0");
#endif

    switch (ctx->pc) {
        case 0x1310f8u: goto label_1310f8;
        case 0x131150u: goto label_131150;
        case 0x131180u: goto label_131180;
        case 0x1311b0u: goto label_1311b0;
        case 0x1311d0u: goto label_1311d0;
        case 0x1311e8u: goto label_1311e8;
        case 0x131274u: goto label_131274;
        case 0x1312b0u: goto label_1312b0;
        case 0x1312c8u: goto label_1312c8;
        case 0x1312dcu: goto label_1312dc;
        case 0x1312ecu: goto label_1312ec;
        case 0x1312f8u: goto label_1312f8;
        default: break;
    }

    ctx->pc = 0x1310b0u;

    // 0x1310b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1310b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1310b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1310b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1310b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1310b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1310bc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1310bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1310c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1310c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1310c4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x1310c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1310c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1310c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1310cc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1310ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1310d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1310d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1310d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1310d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1310d8: 0x1083006c  beq         $a0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x1310D8u;
    {
        const bool branch_taken_0x1310d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1310d8) {
            ctx->pc = 0x13128Cu;
            goto label_13128c;
        }
    }
    ctx->pc = 0x1310E0u;
    // 0x1310e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1310E0u;
    {
        const bool branch_taken_0x1310e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1310e0) {
            ctx->pc = 0x1310F0u;
            goto label_1310f0;
        }
    }
    ctx->pc = 0x1310E8u;
    // 0x1310e8: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1310E8u;
    {
        const bool branch_taken_0x1310e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1310e8) {
            ctx->pc = 0x131350u;
            goto label_131350;
        }
    }
    ctx->pc = 0x1310F0u;
label_1310f0:
    // 0x1310f0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1310F0u;
    SET_GPR_U32(ctx, 31, 0x1310F8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1310F0u, 0x1310F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310F8u;
label_1310f8:
    // 0x1310f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1310f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1310fc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1310fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x131100: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x131100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x131104: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x131104u;
    {
        const bool branch_taken_0x131104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131104) {
            ctx->pc = 0x131188u;
            goto label_131188;
        }
    }
    ctx->pc = 0x13110Cu;
    // 0x13110c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13110cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131110: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x131110u;
    {
        const bool branch_taken_0x131110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131110) {
            ctx->pc = 0x131158u;
            goto label_131158;
        }
    }
    ctx->pc = 0x131118u;
    // 0x131118: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131118u;
    {
        const bool branch_taken_0x131118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131118) {
            ctx->pc = 0x131128u;
            goto label_131128;
        }
    }
    ctx->pc = 0x131120u;
    // 0x131120: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x131120u;
    {
        const bool branch_taken_0x131120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131120) {
            ctx->pc = 0x131128u;
            goto label_131128;
        }
    }
    ctx->pc = 0x131128u;
label_131128:
    // 0x131128: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x13112c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13112cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131130: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131134: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131138: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x131138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x13113c: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x13113cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x131140: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x131140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x131144: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x131144u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131148: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131148u;
    SET_GPR_U32(ctx, 31, 0x131150u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131148u, 0x131150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131150u;
label_131150:
    // 0x131150: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x131150u;
    {
        const bool branch_taken_0x131150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131150) {
            ctx->pc = 0x1311B0u;
            goto label_1311b0;
        }
    }
    ctx->pc = 0x131158u;
label_131158:
    // 0x131158: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13115c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x13115cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131160: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x131164: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x131164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131168: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13116c: 0x24040508  addiu       $a0, $zero, 0x508
    ctx->pc = 0x13116cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
    // 0x131170: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x131170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x131174: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x131174u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131178: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131178u;
    SET_GPR_U32(ctx, 31, 0x131180u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131178u, 0x131180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131180u;
label_131180:
    // 0x131180: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x131180u;
    {
        const bool branch_taken_0x131180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131180) {
            ctx->pc = 0x1311B0u;
            goto label_1311b0;
        }
    }
    ctx->pc = 0x131188u;
label_131188:
    // 0x131188: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13118c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x13118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131190: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x131194: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x131194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131198: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13119c: 0x24040509  addiu       $a0, $zero, 0x509
    ctx->pc = 0x13119cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x1311a0: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1311a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1311a4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1311a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1311a8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1311A8u;
    SET_GPR_U32(ctx, 31, 0x1311B0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1311A8u, 0x1311B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311B0u;
label_1311b0:
    // 0x1311b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1311b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1311b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1311b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1311b8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1311b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1311bc: 0x2406051a  addiu       $a2, $zero, 0x51A
    ctx->pc = 0x1311bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1306));
    // 0x1311c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1311c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1311c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1311c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1311c8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1311C8u;
    SET_GPR_U32(ctx, 31, 0x1311D0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1311C8u, 0x1311D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311D0u;
label_1311d0:
    // 0x1311d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1311d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1311d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1311d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1311d8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1311d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1311dc: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x1311dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1311e0: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1311E0u;
    SET_GPR_U32(ctx, 31, 0x1311E8u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1311E0u, 0x1311E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311E8u;
label_1311e8:
    // 0x1311e8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1311e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1311ec: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1311ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1311f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1311f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1311f4: 0x0  nop
    ctx->pc = 0x1311f4u;
    // NOP
    // 0x1311f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1311f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1311fc: 0x0  nop
    ctx->pc = 0x1311fcu;
    // NOP
    // 0x131200: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x131200u;
    {
        const bool branch_taken_0x131200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131200) {
            ctx->pc = 0x131214u;
            goto label_131214;
        }
    }
    ctx->pc = 0x131208u;
    // 0x131208: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x131208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13120c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x13120cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x131210: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x131210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_131214:
    // 0x131214: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x131214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131218: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x131218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x13121c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13121cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x131220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131224: 0x0  nop
    ctx->pc = 0x131224u;
    // NOP
    // 0x131228: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x131228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13122c: 0x0  nop
    ctx->pc = 0x13122cu;
    // NOP
    // 0x131230: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x131230u;
    {
        const bool branch_taken_0x131230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131230) {
            ctx->pc = 0x131250u;
            goto label_131250;
        }
    }
    ctx->pc = 0x131238u;
    // 0x131238: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13123c: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x13123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131240: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131244: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x131244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x131248: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x131248u;
    {
        const bool branch_taken_0x131248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131248) {
            ctx->pc = 0x13127Cu;
            goto label_13127c;
        }
    }
    ctx->pc = 0x131250u;
label_131250:
    // 0x131250: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131254: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x131254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131258: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x131258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x13125c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13125cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x131260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131264: 0x0  nop
    ctx->pc = 0x131264u;
    // NOP
    // 0x131268: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x131268u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13126c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x13126Cu;
    SET_GPR_U32(ctx, 31, 0x131274u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x13126Cu, 0x131274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131274u;
label_131274:
    // 0x131274: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131278: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x131278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_13127c:
    // 0x13127c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13127cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131280: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x131280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x131284: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x131284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x131288: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x131288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_13128c:
    // 0x13128c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13128cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131290: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131294: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x131294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x131298: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x131298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x13129c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x13129cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1312a0: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1312a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1312a4: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1312a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1312a8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1312A8u;
    SET_GPR_U32(ctx, 31, 0x1312B0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1312A8u, 0x1312B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312B0u;
label_1312b0:
    // 0x1312b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1312b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1312b4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1312b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1312b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1312b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1312bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1312bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1312c0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1312C0u;
    SET_GPR_U32(ctx, 31, 0x1312C8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1312C0u, 0x1312C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312C8u;
label_1312c8:
    // 0x1312c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1312c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1312cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1312ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1312d0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1312d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1312d4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1312D4u;
    SET_GPR_U32(ctx, 31, 0x1312DCu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1312D4u, 0x1312DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312DCu;
label_1312dc:
    // 0x1312dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1312dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1312e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1312e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1312e4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1312E4u;
    SET_GPR_U32(ctx, 31, 0x1312ECu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1312E4u, 0x1312ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312ECu;
label_1312ec:
    // 0x1312ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1312ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1312f0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1312F0u;
    SET_GPR_U32(ctx, 31, 0x1312F8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1312F0u, 0x1312F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312F8u;
label_1312f8:
    // 0x1312f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1312f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1312fc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1312fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x131300: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x131300u;
    {
        const bool branch_taken_0x131300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131300) {
            ctx->pc = 0x131350u;
            goto label_131350;
        }
    }
    ctx->pc = 0x131308u;
    // 0x131308: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x131308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13130c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13130cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131310: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x131310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x131314: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x131314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x131318: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13131c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x13131cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x131320: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131324: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x131324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x131328: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13132c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x13132cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x131330: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131334: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x131334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x131338: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x131338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13133c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x13133cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x131340: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x131340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x131344: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x131344u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x131348: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x131348u;
    {
        const bool branch_taken_0x131348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131348) {
            ctx->pc = 0x131350u;
            goto label_131350;
        }
    }
    ctx->pc = 0x131350u;
label_131350:
    // 0x131350: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x131350u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131358: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x131358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13135c: 0x3e00008  jr          $ra
    ctx->pc = 0x13135Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13135Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131364u;
}
