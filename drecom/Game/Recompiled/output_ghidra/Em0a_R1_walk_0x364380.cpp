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

// Function: Em0a_R1_walk
// Address: 0x364380 - 0x364584
void Em0a_R1_walk_0x364380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_walk_0x364380");
#endif

    switch (ctx->pc) {
        case 0x3643e0u: goto label_3643e0;
        case 0x364500u: goto label_364500;
        case 0x36451cu: goto label_36451c;
        case 0x364548u: goto label_364548;
        case 0x364554u: goto label_364554;
        case 0x364564u: goto label_364564;
        case 0x364570u: goto label_364570;
        default: break;
    }

    ctx->pc = 0x364380u;

    // 0x364380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x364380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x364384: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x364384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x364388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x364388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36438c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x36438cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x364390: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x364390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364394: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x364394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x364398: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x364398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36439c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36439cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3643a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3643a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3643a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3643a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3643a8: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3643A8u;
    {
        const bool branch_taken_0x3643a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3643a8) {
            ctx->pc = 0x3643FCu;
            goto label_3643fc;
        }
    }
    ctx->pc = 0x3643B0u;
    // 0x3643b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3643B0u;
    {
        const bool branch_taken_0x3643b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3643b0) {
            ctx->pc = 0x3643C0u;
            goto label_3643c0;
        }
    }
    ctx->pc = 0x3643B8u;
    // 0x3643b8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x3643B8u;
    {
        const bool branch_taken_0x3643b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3643b8) {
            ctx->pc = 0x364570u;
            goto label_364570;
        }
    }
    ctx->pc = 0x3643C0u;
label_3643c0:
    // 0x3643c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3643c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3643c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3643c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3643c8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3643c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3643cc: 0x24061e02  addiu       $a2, $zero, 0x1E02
    ctx->pc = 0x3643ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7682));
    // 0x3643d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3643d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3643d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3643d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3643d8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3643D8u;
    SET_GPR_U32(ctx, 31, 0x3643E0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3643D8u, 0x3643E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3643E0u;
label_3643e0:
    // 0x3643e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3643e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3643e4: 0x0  nop
    ctx->pc = 0x3643e4u;
    // NOP
    // 0x3643e8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x3643e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x3643ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3643ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3643f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3643f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3643f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3643f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3643f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3643f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3643fc:
    // 0x3643fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3643fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364400: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x364400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x364404: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x364404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x364408: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x364408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x36440c: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x36440Cu;
    {
        const bool branch_taken_0x36440c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36440c) {
            ctx->pc = 0x36452Cu;
            goto label_36452c;
        }
    }
    ctx->pc = 0x364414u;
    // 0x364414: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364418: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x364418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36441c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36441cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x364420: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x364420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x364424: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x364424u;
    {
        const bool branch_taken_0x364424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364424) {
            ctx->pc = 0x364480u;
            goto label_364480;
        }
    }
    ctx->pc = 0x36442Cu;
    // 0x36442c: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x36442cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364430: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x364430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x364434: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x364434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x364438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x364438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36443c: 0x0  nop
    ctx->pc = 0x36443cu;
    // NOP
    // 0x364440: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x364440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x364444: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x364444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x364448: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x364448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36444c: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x36444cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x364450: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x364450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x364454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x364454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364458: 0x0  nop
    ctx->pc = 0x364458u;
    // NOP
    // 0x36445c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x36445cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364460: 0x0  nop
    ctx->pc = 0x364460u;
    // NOP
    // 0x364464: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x364464u;
    {
        const bool branch_taken_0x364464 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x364464) {
            ctx->pc = 0x364480u;
            goto label_364480;
        }
    }
    ctx->pc = 0x36446Cu;
    // 0x36446c: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x36446cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x364470: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x364470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x364474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x364474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364478: 0x0  nop
    ctx->pc = 0x364478u;
    // NOP
    // 0x36447c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x36447cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_364480:
    // 0x364480: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364484: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x364484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x364488: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x364488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36448c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x36448cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x364490: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x364490u;
    {
        const bool branch_taken_0x364490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364490) {
            ctx->pc = 0x3644DCu;
            goto label_3644dc;
        }
    }
    ctx->pc = 0x364498u;
    // 0x364498: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x364498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36449c: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x36449cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x3644a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3644a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3644a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3644a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3644a8: 0x0  nop
    ctx->pc = 0x3644a8u;
    // NOP
    // 0x3644ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3644acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3644b0: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x3644b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x3644b4: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x3644b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3644b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3644b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3644bc: 0x0  nop
    ctx->pc = 0x3644bcu;
    // NOP
    // 0x3644c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3644c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3644c4: 0x0  nop
    ctx->pc = 0x3644c4u;
    // NOP
    // 0x3644c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3644C8u;
    {
        const bool branch_taken_0x3644c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3644c8) {
            ctx->pc = 0x3644DCu;
            goto label_3644dc;
        }
    }
    ctx->pc = 0x3644D0u;
    // 0x3644d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3644d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3644d4: 0x0  nop
    ctx->pc = 0x3644d4u;
    // NOP
    // 0x3644d8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x3644d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_3644dc:
    // 0x3644dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3644dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3644e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3644e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3644e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3644e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3644e8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x3644e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x3644ec: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3644ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3644f0: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x3644f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x3644f4: 0xc60d0064  lwc1        $f13, 0x64($s0)
    ctx->pc = 0x3644f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3644f8: 0xc05c848  jal         func_172120
    ctx->pc = 0x3644F8u;
    SET_GPR_U32(ctx, 31, 0x364500u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x3644F8u, 0x364500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364500u;
label_364500:
    // 0x364500: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x364500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x364504: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364508: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x364508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36450c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x36450cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x364510: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x364510u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x364514: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x364514u;
    SET_GPR_U32(ctx, 31, 0x36451Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x364514u, 0x36451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36451Cu;
label_36451c:
    // 0x36451c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36451cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364520: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x364520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x364524: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x364524u;
    {
        const bool branch_taken_0x364524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364524) {
            ctx->pc = 0x364538u;
            goto label_364538;
        }
    }
    ctx->pc = 0x36452Cu;
label_36452c:
    // 0x36452c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36452cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364530: 0x0  nop
    ctx->pc = 0x364530u;
    // NOP
    // 0x364534: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x364534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_364538:
    // 0x364538: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36453c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36453cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x364540: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x364540u;
    SET_GPR_U32(ctx, 31, 0x364548u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x364540u, 0x364548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364548u;
label_364548:
    // 0x364548: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36454c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36454Cu;
    SET_GPR_U32(ctx, 31, 0x364554u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36454Cu, 0x364554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364554u;
label_364554:
    // 0x364554: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364558: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x364558u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36455c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36455Cu;
    SET_GPR_U32(ctx, 31, 0x364564u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36455Cu, 0x364564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364564u;
label_364564:
    // 0x364564: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364568: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x364568u;
    SET_GPR_U32(ctx, 31, 0x364570u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x364568u, 0x364570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364570u;
label_364570:
    // 0x364570: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x364570u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x364574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364578: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x364578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36457c: 0x3e00008  jr          $ra
    ctx->pc = 0x36457Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36457Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364584u;
}
