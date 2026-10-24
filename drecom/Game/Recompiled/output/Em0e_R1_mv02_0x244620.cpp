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

// Function: Em0e_R1_mv02
// Address: 0x244620 - 0x244d98
void Em0e_R1_mv02_0x244620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R1_mv02_0x244620");
#endif

    switch (ctx->pc) {
        case 0x244788u: goto label_244788;
        case 0x244790u: goto label_244790;
        case 0x2447e0u: goto label_2447e0;
        case 0x244860u: goto label_244860;
        case 0x24487cu: goto label_24487c;
        case 0x244894u: goto label_244894;
        case 0x2448a0u: goto label_2448a0;
        case 0x2448f8u: goto label_2448f8;
        case 0x244920u: goto label_244920;
        case 0x244934u: goto label_244934;
        case 0x244a24u: goto label_244a24;
        case 0x244a40u: goto label_244a40;
        case 0x244a58u: goto label_244a58;
        case 0x244a64u: goto label_244a64;
        case 0x244abcu: goto label_244abc;
        case 0x244aecu: goto label_244aec;
        case 0x244b98u: goto label_244b98;
        case 0x244bacu: goto label_244bac;
        case 0x244c5cu: goto label_244c5c;
        case 0x244c78u: goto label_244c78;
        case 0x244c90u: goto label_244c90;
        case 0x244c9cu: goto label_244c9c;
        default: break;
    }

    ctx->pc = 0x244620u;

    // 0x244620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244624: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x244624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x244628: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x244628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x24462c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x24462cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244630: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x244630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x244634: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x244634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x244638: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x244638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24463c: 0x10830167  beq         $a0, $v1, . + 4 + (0x167 << 2)
    ctx->pc = 0x24463Cu;
    {
        const bool branch_taken_0x24463c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24463c) {
            ctx->pc = 0x244BDCu;
            goto label_244bdc;
        }
    }
    ctx->pc = 0x244644u;
    // 0x244644: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x244644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x244648: 0x10830121  beq         $a0, $v1, . + 4 + (0x121 << 2)
    ctx->pc = 0x244648u;
    {
        const bool branch_taken_0x244648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x244648) {
            ctx->pc = 0x244AD0u;
            goto label_244ad0;
        }
    }
    ctx->pc = 0x244650u;
    // 0x244650: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x244650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244654: 0x108500d3  beq         $a0, $a1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x244654u;
    {
        const bool branch_taken_0x244654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x244654) {
            ctx->pc = 0x2449A4u;
            goto label_2449a4;
        }
    }
    ctx->pc = 0x24465Cu;
    // 0x24465c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24465cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244660: 0x1083005f  beq         $a0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x244660u;
    {
        const bool branch_taken_0x244660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x244660) {
            ctx->pc = 0x2447E0u;
            goto label_2447e0;
        }
    }
    ctx->pc = 0x244668u;
    // 0x244668: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244668u;
    {
        const bool branch_taken_0x244668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x244668) {
            ctx->pc = 0x244678u;
            goto label_244678;
        }
    }
    ctx->pc = 0x244670u;
    // 0x244670: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x244670u;
    {
        const bool branch_taken_0x244670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244670) {
            ctx->pc = 0x244CA0u;
            goto label_244ca0;
        }
    }
    ctx->pc = 0x244678u;
label_244678:
    // 0x244678: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x244678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24467c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244680: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x244680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x244684: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244688: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x244688u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x24468c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24468cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244690: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x244690u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x244694: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x244694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x244698: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24469c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24469cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2446a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2446a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2446a4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2446a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2446a8: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2446a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2446ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2446acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2446b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2446b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2446b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2446b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2446b8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2446b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2446bc: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2446bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x2446c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2446c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2446c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2446c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2446c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2446c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2446cc: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2446ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2446d0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2446d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2446d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2446d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2446d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2446d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2446dc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2446dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2446e0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2446e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2446e4: 0x3c033dc9  lui         $v1, 0x3DC9
    ctx->pc = 0x2446e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15817 << 16));
    // 0x2446e8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2446e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2446ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2446ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2446f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2446f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2446f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2446f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2446f8: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x2446f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x2446fc: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2446fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x244700: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x244700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244704: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244708: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24470c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24470cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244710: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x244710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x244714: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244718: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x244718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24471c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x24471cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x244720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244724: 0x0  nop
    ctx->pc = 0x244724u;
    // NOP
    // 0x244728: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x244728u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24472c: 0x0  nop
    ctx->pc = 0x24472cu;
    // NOP
    // 0x244730: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x244730u;
    {
        const bool branch_taken_0x244730 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244730) {
            ctx->pc = 0x244768u;
            goto label_244768;
        }
    }
    ctx->pc = 0x244738u;
    // 0x244738: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x244738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x24473c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24473cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244744: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244748: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24474c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x24474cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x244750: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x244750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x244754: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x244754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24475c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244760: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244764: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x244764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
label_244768:
    // 0x244768: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24476c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x24476cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244770: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x244770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x244774: 0x3406f008  ori         $a2, $zero, 0xF008
    ctx->pc = 0x244774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61448);
    // 0x244778: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x244778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24477c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x24477cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x244780: 0xc0965d0  jal         func_259740
    ctx->pc = 0x244780u;
    SET_GPR_U32(ctx, 31, 0x244788u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x244780u, 0x244788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244788u;
label_244788:
    // 0x244788: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244788u;
    SET_GPR_U32(ctx, 31, 0x244790u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244788u, 0x244790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244790u;
label_244790:
    // 0x244790: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x244790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244794: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x244794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x244798: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x244798u;
    {
        const bool branch_taken_0x244798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244798) {
            ctx->pc = 0x2447E0u;
            goto label_2447e0;
        }
    }
    ctx->pc = 0x2447A0u;
    // 0x2447a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2447a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2447a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2447a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2447a8: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2447a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2447ac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2447acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2447b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2447b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2447b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2447b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2447b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2447b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2447bc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2447bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2447c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2447c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2447c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2447c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2447c8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2447c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2447cc: 0x3406f00a  ori         $a2, $zero, 0xF00A
    ctx->pc = 0x2447ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61450);
    // 0x2447d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2447d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2447d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2447d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2447d8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2447D8u;
    SET_GPR_U32(ctx, 31, 0x2447E0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2447D8u, 0x2447E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2447E0u;
label_2447e0:
    // 0x2447e0: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2447e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2447e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2447e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2447e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2447e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2447ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2447ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2447f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2447f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2447f4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2447f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2447f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2447f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2447fc: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2447fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244800: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x244800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x244804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244808: 0x0  nop
    ctx->pc = 0x244808u;
    // NOP
    // 0x24480c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24480cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244810: 0x0  nop
    ctx->pc = 0x244810u;
    // NOP
    // 0x244814: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x244814u;
    {
        const bool branch_taken_0x244814 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244814) {
            ctx->pc = 0x244834u;
            goto label_244834;
        }
    }
    ctx->pc = 0x24481Cu;
    // 0x24481c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x24481cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x244820: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x244820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244828: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24482c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244830: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x244830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_244834:
    // 0x244834: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244838: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x244838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24483c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244840: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x244840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244844: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x244844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x244848: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x244848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24484c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x24484cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x244850: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x244850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x244854: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x244854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x244858: 0xc05c848  jal         func_172120
    ctx->pc = 0x244858u;
    SET_GPR_U32(ctx, 31, 0x244860u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x244858u, 0x244860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244860u;
label_244860:
    // 0x244860: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x244860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x244864: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244868: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x244868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24486c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x24486cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244870: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x244870u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244874: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x244874u;
    SET_GPR_U32(ctx, 31, 0x24487Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x244874u, 0x24487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24487Cu;
label_24487c:
    // 0x24487c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244880: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x244880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x244884: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244888: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x244888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24488c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x24488Cu;
    SET_GPR_U32(ctx, 31, 0x244894u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x24488Cu, 0x244894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244894u;
label_244894:
    // 0x244894: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244898: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x244898u;
    SET_GPR_U32(ctx, 31, 0x2448A0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x244898u, 0x2448A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2448A0u;
label_2448a0:
    // 0x2448a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2448a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2448a4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2448a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2448a8: 0x106000fd  beqz        $v1, . + 4 + (0xFD << 2)
    ctx->pc = 0x2448A8u;
    {
        const bool branch_taken_0x2448a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2448a8) {
            ctx->pc = 0x244CA0u;
            goto label_244ca0;
        }
    }
    ctx->pc = 0x2448B0u;
    // 0x2448b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2448b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2448b4: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x2448b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x2448b8: 0x146000f9  bnez        $v1, . + 4 + (0xF9 << 2)
    ctx->pc = 0x2448B8u;
    {
        const bool branch_taken_0x2448b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2448b8) {
            ctx->pc = 0x244CA0u;
            goto label_244ca0;
        }
    }
    ctx->pc = 0x2448C0u;
    // 0x2448c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2448c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2448c4: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2448c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2448c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2448c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2448cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2448ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2448d0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2448D0u;
    {
        const bool branch_taken_0x2448d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2448d0) {
            ctx->pc = 0x244900u;
            goto label_244900;
        }
    }
    ctx->pc = 0x2448D8u;
    // 0x2448d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2448d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2448dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2448dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2448e0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2448e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2448e4: 0x3406f009  ori         $a2, $zero, 0xF009
    ctx->pc = 0x2448e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61449);
    // 0x2448e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2448e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2448ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2448ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2448f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2448F0u;
    SET_GPR_U32(ctx, 31, 0x2448F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2448F0u, 0x2448F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2448F8u;
label_2448f8:
    // 0x2448f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2448F8u;
    {
        const bool branch_taken_0x2448f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2448f8) {
            ctx->pc = 0x244920u;
            goto label_244920;
        }
    }
    ctx->pc = 0x244900u;
label_244900:
    // 0x244900: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244904: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244908: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x244908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x24490c: 0x3406f00b  ori         $a2, $zero, 0xF00B
    ctx->pc = 0x24490cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61451);
    // 0x244910: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x244910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244914: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x244914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x244918: 0xc0965d0  jal         func_259740
    ctx->pc = 0x244918u;
    SET_GPR_U32(ctx, 31, 0x244920u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x244918u, 0x244920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244920u;
label_244920:
    // 0x244920: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244924: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244928: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x244928u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x24492c: 0xc067654  jal         func_19D950
    ctx->pc = 0x24492Cu;
    SET_GPR_U32(ctx, 31, 0x244934u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x24492Cu, 0x244934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244934u;
label_244934:
    // 0x244934: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x244934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x244938: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x244938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24493c: 0x0  nop
    ctx->pc = 0x24493cu;
    // NOP
    // 0x244940: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x244940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x244944: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x244944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x244948: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24494c: 0x0  nop
    ctx->pc = 0x24494cu;
    // NOP
    // 0x244950: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x244950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x244954: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244958: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24495c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x24495cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x244960: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x244960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x244964: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x244964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x244968: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24496c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24496cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244970: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244974: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x244974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x244978: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x244978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x24497c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x24497cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x244980: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244984: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244988: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24498c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x24498cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x244990: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x244990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244994: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244998: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x244998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x24499c: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x24499Cu;
    {
        const bool branch_taken_0x24499c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24499c) {
            ctx->pc = 0x244CA0u;
            goto label_244ca0;
        }
    }
    ctx->pc = 0x2449A4u;
label_2449a4:
    // 0x2449a4: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x2449a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x2449a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2449a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2449ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2449acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2449b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2449b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2449b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2449b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2449b8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2449b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2449bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2449bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2449c0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2449c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2449c4: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2449c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2449c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2449c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2449cc: 0x0  nop
    ctx->pc = 0x2449ccu;
    // NOP
    // 0x2449d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2449d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2449d4: 0x0  nop
    ctx->pc = 0x2449d4u;
    // NOP
    // 0x2449d8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2449D8u;
    {
        const bool branch_taken_0x2449d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2449d8) {
            ctx->pc = 0x2449F8u;
            goto label_2449f8;
        }
    }
    ctx->pc = 0x2449E0u;
    // 0x2449e0: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2449e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2449e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2449e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2449e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2449e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2449ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2449ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2449f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2449f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2449f4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2449f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_2449f8:
    // 0x2449f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2449f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2449fc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2449fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a04: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x244a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244a08: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x244a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x244a0c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x244a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x244a10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x244a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x244a14: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x244a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x244a18: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x244a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x244a1c: 0xc05c848  jal         func_172120
    ctx->pc = 0x244A1Cu;
    SET_GPR_U32(ctx, 31, 0x244A24u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x244A1Cu, 0x244A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A24u;
label_244a24:
    // 0x244a24: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x244a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x244a28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a2c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x244a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244a30: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x244a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244a34: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x244a34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244a38: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x244A38u;
    SET_GPR_U32(ctx, 31, 0x244A40u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x244A38u, 0x244A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A40u;
label_244a40:
    // 0x244a40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a44: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x244a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x244a48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a4c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x244a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x244a50: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x244A50u;
    SET_GPR_U32(ctx, 31, 0x244A58u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x244A50u, 0x244A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A58u;
label_244a58:
    // 0x244a58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a5c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x244A5Cu;
    SET_GPR_U32(ctx, 31, 0x244A64u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x244A5Cu, 0x244A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A64u;
label_244a64:
    // 0x244a64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a68: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x244a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x244a6c: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x244A6Cu;
    {
        const bool branch_taken_0x244a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x244a6c) {
            ctx->pc = 0x244CA0u;
            goto label_244ca0;
        }
    }
    ctx->pc = 0x244A74u;
    // 0x244a74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a78: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x244a78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x244a7c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x244a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x244a80: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x244a80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x244a84: 0x14600086  bnez        $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x244A84u;
    {
        const bool branch_taken_0x244a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x244a84) {
            ctx->pc = 0x244CA0u;
            goto label_244ca0;
        }
    }
    ctx->pc = 0x244A8Cu;
    // 0x244a8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244a90: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x244a90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x244a94: 0x14600082  bnez        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x244A94u;
    {
        const bool branch_taken_0x244a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x244a94) {
            ctx->pc = 0x244CA0u;
            goto label_244ca0;
        }
    }
    ctx->pc = 0x244A9Cu;
    // 0x244a9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244aa0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244aa4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x244aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x244aa8: 0x3406f009  ori         $a2, $zero, 0xF009
    ctx->pc = 0x244aa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61449);
    // 0x244aac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x244aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244ab0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x244ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x244ab4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x244AB4u;
    SET_GPR_U32(ctx, 31, 0x244ABCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x244AB4u, 0x244ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244ABCu;
label_244abc:
    // 0x244abc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x244abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244ac0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244ac4: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x244ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x244ac8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x244AC8u;
    {
        const bool branch_taken_0x244ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ac8) {
            ctx->pc = 0x244CA0u;
            goto label_244ca0;
        }
    }
    ctx->pc = 0x244AD0u;
label_244ad0:
    // 0x244ad0: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x244ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x244ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244ad8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244adc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244ae0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x244ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x244ae4: 0xc067654  jal         func_19D950
    ctx->pc = 0x244AE4u;
    SET_GPR_U32(ctx, 31, 0x244AECu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x244AE4u, 0x244AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244AECu;
label_244aec:
    // 0x244aec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x244aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x244af0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x244af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x244af4: 0x0  nop
    ctx->pc = 0x244af4u;
    // NOP
    // 0x244af8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x244af8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x244afc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x244afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x244b00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244b04: 0x0  nop
    ctx->pc = 0x244b04u;
    // NOP
    // 0x244b08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x244b08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x244b0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244b10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244b14: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x244b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x244b18: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x244b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x244b1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x244b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x244b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244b24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244b28: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244b2c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x244b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x244b30: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x244b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x244b34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x244b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x244b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244b3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244b40: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244b44: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x244b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x244b48: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x244b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x244b4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x244b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244b54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244b58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244b5c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x244b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x244b60: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x244b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x244b64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x244b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244b6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244b70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244b74: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x244b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x244b78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244b7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244b80: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x244b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x244b84: 0x3406be02  ori         $a2, $zero, 0xBE02
    ctx->pc = 0x244b84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48642);
    // 0x244b88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x244b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244b8c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x244b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x244b90: 0xc0965d0  jal         func_259740
    ctx->pc = 0x244B90u;
    SET_GPR_U32(ctx, 31, 0x244B98u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x244B90u, 0x244B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B98u;
label_244b98:
    // 0x244b98: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x244b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x244b9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244ba0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x244ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x244ba4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244BA4u;
    SET_GPR_U32(ctx, 31, 0x244BACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244BA4u, 0x244BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BACu;
label_244bac:
    // 0x244bac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x244bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244bb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x244bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x244bb4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x244BB4u;
    {
        const bool branch_taken_0x244bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244bb4) {
            ctx->pc = 0x244BDCu;
            goto label_244bdc;
        }
    }
    ctx->pc = 0x244BBCu;
    // 0x244bbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244bc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244bc4: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x244bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x244bc8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x244bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x244bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244bd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244bd4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244bd8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x244bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_244bdc:
    // 0x244bdc: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x244bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x244be0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x244be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244be4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244be8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244bec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244bf0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x244bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x244bf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244bf8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x244bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244bfc: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x244bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x244c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244c04: 0x0  nop
    ctx->pc = 0x244c04u;
    // NOP
    // 0x244c08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244c0c: 0x0  nop
    ctx->pc = 0x244c0cu;
    // NOP
    // 0x244c10: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x244C10u;
    {
        const bool branch_taken_0x244c10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244c10) {
            ctx->pc = 0x244C30u;
            goto label_244c30;
        }
    }
    ctx->pc = 0x244C18u;
    // 0x244c18: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x244c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x244c1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x244c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244c20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244c24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244c28: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244c2c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x244c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_244c30:
    // 0x244c30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244c34: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x244c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244c38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244c3c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x244c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244c40: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x244c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x244c44: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x244c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x244c48: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x244c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x244c4c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x244c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x244c50: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x244c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x244c54: 0xc05c848  jal         func_172120
    ctx->pc = 0x244C54u;
    SET_GPR_U32(ctx, 31, 0x244C5Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x244C54u, 0x244C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C5Cu;
label_244c5c:
    // 0x244c5c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x244c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x244c60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244c64: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x244c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244c68: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x244c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244c6c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x244c6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244c70: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x244C70u;
    SET_GPR_U32(ctx, 31, 0x244C78u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x244C70u, 0x244C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C78u;
label_244c78:
    // 0x244c78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244c7c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x244c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x244c80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244c84: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x244c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x244c88: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x244C88u;
    SET_GPR_U32(ctx, 31, 0x244C90u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x244C88u, 0x244C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C90u;
label_244c90:
    // 0x244c90: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244c94: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x244C94u;
    SET_GPR_U32(ctx, 31, 0x244C9Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x244C94u, 0x244C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C9Cu;
label_244c9c:
    // 0x244c9c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x244c9cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_244ca0:
    // 0x244ca0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244ca4: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x244ca4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x244ca8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x244CA8u;
    {
        const bool branch_taken_0x244ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ca8) {
            ctx->pc = 0x244D20u;
            goto label_244d20;
        }
    }
    ctx->pc = 0x244CB0u;
    // 0x244cb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244cb4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x244cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244cb8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x244cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244cbc: 0x3c043c49  lui         $a0, 0x3C49
    ctx->pc = 0x244cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15433 << 16));
    // 0x244cc0: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x244cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x244cc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244cc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244cc8: 0x0  nop
    ctx->pc = 0x244cc8u;
    // NOP
    // 0x244ccc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x244cccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244cd0: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x244cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x244cd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244cd8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244cdc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x244cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244ce0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x244ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x244ce4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x244ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x244ce8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244ce8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244cec: 0x0  nop
    ctx->pc = 0x244cecu;
    // NOP
    // 0x244cf0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x244cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244cf4: 0x0  nop
    ctx->pc = 0x244cf4u;
    // NOP
    // 0x244cf8: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x244CF8u;
    {
        const bool branch_taken_0x244cf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244cf8) {
            ctx->pc = 0x244D88u;
            goto label_244d88;
        }
    }
    ctx->pc = 0x244D00u;
    // 0x244d00: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x244d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x244d04: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x244d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x244d08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244d08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244d0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244d10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244d14: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x244d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x244d18: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x244D18u;
    {
        const bool branch_taken_0x244d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244d18) {
            ctx->pc = 0x244D88u;
            goto label_244d88;
        }
    }
    ctx->pc = 0x244D20u;
label_244d20:
    // 0x244d20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244d24: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x244d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244d28: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x244d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244d2c: 0x3c033c49  lui         $v1, 0x3C49
    ctx->pc = 0x244d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15433 << 16));
    // 0x244d30: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x244d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x244d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244d38: 0x0  nop
    ctx->pc = 0x244d38u;
    // NOP
    // 0x244d3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x244d3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x244d40: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x244d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x244d44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244d48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244d4c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x244d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244d50: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x244d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x244d54: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x244d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x244d58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244d5c: 0x0  nop
    ctx->pc = 0x244d5cu;
    // NOP
    // 0x244d60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x244d60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244d64: 0x0  nop
    ctx->pc = 0x244d64u;
    // NOP
    // 0x244d68: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x244D68u;
    {
        const bool branch_taken_0x244d68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244d68) {
            ctx->pc = 0x244D88u;
            goto label_244d88;
        }
    }
    ctx->pc = 0x244D70u;
    // 0x244d70: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x244d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x244d74: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x244d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x244d78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244d7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244d80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244d84: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x244d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_244d88:
    // 0x244d88: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x244d88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244d8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x244d8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x244d90: 0x3e00008  jr          $ra
    ctx->pc = 0x244D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244D98u;
}
