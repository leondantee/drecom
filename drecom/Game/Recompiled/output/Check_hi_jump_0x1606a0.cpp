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

// Function: Check_hi_jump
// Address: 0x1606a0 - 0x1608cc
void Check_hi_jump_0x1606a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_hi_jump_0x1606a0");
#endif

    switch (ctx->pc) {
        case 0x1606d4u: goto label_1606d4;
        case 0x160718u: goto label_160718;
        case 0x160728u: goto label_160728;
        case 0x16074cu: goto label_16074c;
        case 0x160760u: goto label_160760;
        case 0x160770u: goto label_160770;
        case 0x160794u: goto label_160794;
        default: break;
    }

    ctx->pc = 0x1606a0u;

    // 0x1606a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1606a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1606a4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1606a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1606a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1606a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1606ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1606acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1606b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1606b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1606b4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1606b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1606b8: 0x24520080  addiu       $s2, $v0, 0x80
    ctx->pc = 0x1606b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1606bc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1606bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1606c0: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x1606c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1606c4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1606c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1606c8: 0x2451eea0  addiu       $s1, $v0, -0x1160
    ctx->pc = 0x1606c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962848));
    // 0x1606cc: 0xc058128  jal         func_1604A0
    ctx->pc = 0x1606CCu;
    SET_GPR_U32(ctx, 31, 0x1606D4u);
    ctx->pc = 0x1604A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1604A0u, 0x1606CCu, 0x1606D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1606D4u;
label_1606d4:
    // 0x1606d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1606D4u;
    {
        const bool branch_taken_0x1606d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1606d4) {
            ctx->pc = 0x1606E8u;
            goto label_1606e8;
        }
    }
    ctx->pc = 0x1606DCu;
    // 0x1606dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1606dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1606e0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1606E0u;
    {
        const bool branch_taken_0x1606e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1606e0) {
            ctx->pc = 0x1608B0u;
            goto label_1608b0;
        }
    }
    ctx->pc = 0x1606E8u;
label_1606e8:
    // 0x1606e8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1606e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1606ec: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1606ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1606f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1606F0u;
    {
        const bool branch_taken_0x1606f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1606f0) {
            ctx->pc = 0x160704u;
            goto label_160704;
        }
    }
    ctx->pc = 0x1606F8u;
    // 0x1606f8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1606f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1606fc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1606FCu;
    {
        const bool branch_taken_0x1606fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1606fc) {
            ctx->pc = 0x1608B0u;
            goto label_1608b0;
        }
    }
    ctx->pc = 0x160704u;
label_160704:
    // 0x160704: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x160704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160708: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x160708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x16070c: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x16070cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x160710: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x160710u;
    SET_GPR_U32(ctx, 31, 0x160718u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x160710u, 0x160718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160718u;
label_160718:
    // 0x160718: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x160718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16071c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16071cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160720: 0xc040c24  jal         func_103090
    ctx->pc = 0x160720u;
    SET_GPR_U32(ctx, 31, 0x160728u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x160728u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x160728u) { return; }
    ctx->pc = 0x160728u;
label_160728:
    // 0x160728: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16072c: 0x0  nop
    ctx->pc = 0x16072cu;
    // NOP
    // 0x160730: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x160730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x160734: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x160734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x160738: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x160738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16073c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16073cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160740: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x160740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160744: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x160744u;
    SET_GPR_U32(ctx, 31, 0x16074Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x16074Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16074Cu) { return; }
    ctx->pc = 0x16074Cu;
label_16074c:
    // 0x16074c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16074cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160750: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x160750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160754: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x160754u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x160758: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x160758u;
    SET_GPR_U32(ctx, 31, 0x160760u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x160758u, 0x160760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160760u;
label_160760:
    // 0x160760: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x160760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x160764: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x160764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x160768: 0xc067844  jal         func_19E110
    ctx->pc = 0x160768u;
    SET_GPR_U32(ctx, 31, 0x160770u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x160768u, 0x160770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160770u;
label_160770:
    // 0x160770: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x160770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160774: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x160774u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160778: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x160778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16077c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16077cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x160780: 0x3c024375  lui         $v0, 0x4375
    ctx->pc = 0x160780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17269 << 16));
    // 0x160784: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x160784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160788: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x160788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16078c: 0xc057f10  jal         func_15FC40
    ctx->pc = 0x16078Cu;
    SET_GPR_U32(ctx, 31, 0x160794u);
    ctx->pc = 0x15FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC40u, 0x16078Cu, 0x160794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160794u;
label_160794:
    // 0x160794: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x160794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x160798: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x16079c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x16079cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1607a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1607a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1607a4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1607a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1607a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1607a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1607ac: 0x0  nop
    ctx->pc = 0x1607acu;
    // NOP
    // 0x1607b0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1607B0u;
    {
        const bool branch_taken_0x1607b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1607b0) {
            ctx->pc = 0x1607C4u;
            goto label_1607c4;
        }
    }
    ctx->pc = 0x1607B8u;
    // 0x1607b8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1607b8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1607bc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1607BCu;
    {
        const bool branch_taken_0x1607bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1607bc) {
            ctx->pc = 0x1608B0u;
            goto label_1608b0;
        }
    }
    ctx->pc = 0x1607C4u;
label_1607c4:
    // 0x1607c4: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x1607c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1607c8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1607c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1607cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1607ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1607d0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1607d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1607d4: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x1607d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1607d8: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x1607d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x1607dc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1607dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1607e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1607e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1607e4: 0x0  nop
    ctx->pc = 0x1607e4u;
    // NOP
    // 0x1607e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1607e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1607ec: 0x0  nop
    ctx->pc = 0x1607ecu;
    // NOP
    // 0x1607f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1607F0u;
    {
        const bool branch_taken_0x1607f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1607f0) {
            ctx->pc = 0x160804u;
            goto label_160804;
        }
    }
    ctx->pc = 0x1607F8u;
    // 0x1607f8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1607f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1607fc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1607FCu;
    {
        const bool branch_taken_0x1607fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1607fc) {
            ctx->pc = 0x1608B0u;
            goto label_1608b0;
        }
    }
    ctx->pc = 0x160804u;
label_160804:
    // 0x160804: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x160804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160808: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x160808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x16080c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x16080cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x160810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160814: 0x0  nop
    ctx->pc = 0x160814u;
    // NOP
    // 0x160818: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x160818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16081c: 0x0  nop
    ctx->pc = 0x16081cu;
    // NOP
    // 0x160820: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x160820u;
    {
        const bool branch_taken_0x160820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160820) {
            ctx->pc = 0x160834u;
            goto label_160834;
        }
    }
    ctx->pc = 0x160828u;
    // 0x160828: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x160828u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16082c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x16082Cu;
    {
        const bool branch_taken_0x16082c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16082c) {
            ctx->pc = 0x1608B0u;
            goto label_1608b0;
        }
    }
    ctx->pc = 0x160834u;
label_160834:
    // 0x160834: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x160834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x160838: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x160838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x16083c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16083Cu;
    {
        const bool branch_taken_0x16083c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16083c) {
            ctx->pc = 0x160850u;
            goto label_160850;
        }
    }
    ctx->pc = 0x160844u;
    // 0x160844: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x160844u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x160848: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x160848u;
    {
        const bool branch_taken_0x160848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160848) {
            ctx->pc = 0x1608B0u;
            goto label_1608b0;
        }
    }
    ctx->pc = 0x160850u;
label_160850:
    // 0x160850: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x160850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160854: 0x3c0244a8  lui         $v0, 0x44A8
    ctx->pc = 0x160854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17576 << 16));
    // 0x160858: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x160858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x16085c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16085cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160860: 0x0  nop
    ctx->pc = 0x160860u;
    // NOP
    // 0x160864: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160868: 0x0  nop
    ctx->pc = 0x160868u;
    // NOP
    // 0x16086c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16086Cu;
    {
        const bool branch_taken_0x16086c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16086c) {
            ctx->pc = 0x160880u;
            goto label_160880;
        }
    }
    ctx->pc = 0x160874u;
    // 0x160874: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x160874u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x160878: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x160878u;
    {
        const bool branch_taken_0x160878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160878) {
            ctx->pc = 0x1608B0u;
            goto label_1608b0;
        }
    }
    ctx->pc = 0x160880u;
label_160880:
    // 0x160880: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x160880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160884: 0xe6001b30  swc1        $f0, 0x1B30($s0)
    ctx->pc = 0x160884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6960), bits); }
    // 0x160888: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x160888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16088c: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x16088cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x160890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160894: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160898: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x160898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16089c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x16089cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1608a0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1608a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1608a4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1608a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1608a8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1608a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1608ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1608acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1608b0:
    // 0x1608b0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1608b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1608b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1608b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1608b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1608b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1608bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1608bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1608c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1608c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1608c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1608C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1608C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1608CCu;
}
