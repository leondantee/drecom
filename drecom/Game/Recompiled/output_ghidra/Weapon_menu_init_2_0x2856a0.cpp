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

// Function: Weapon_menu_init_2
// Address: 0x2856a0 - 0x2858bc
void Weapon_menu_init_2_0x2856a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Weapon_menu_init_2_0x2856a0");
#endif

    switch (ctx->pc) {
        case 0x28572cu: goto label_28572c;
        case 0x28577cu: goto label_28577c;
        case 0x2857acu: goto label_2857ac;
        case 0x285808u: goto label_285808;
        default: break;
    }

    ctx->pc = 0x2856a0u;

    // 0x2856a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2856a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2856a4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x2856a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x2856a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2856a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2856ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2856acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2856b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2856b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2856b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2856b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2856b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2856b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2856bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2856bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2856c0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2856c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2856c4: 0x24716150  addiu       $s1, $v1, 0x6150
    ctx->pc = 0x2856c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x2856c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2856c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2856cc: 0x8c241ba0  lw          $a0, 0x1BA0($at)
    ctx->pc = 0x2856ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x621BA0u));
    // 0x2856d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2856d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2856d4: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2856D4u;
    {
        const bool branch_taken_0x2856d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2856d4) {
            ctx->pc = 0x285764u;
            goto label_285764;
        }
    }
    ctx->pc = 0x2856DCu;
    // 0x2856dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2856DCu;
    {
        const bool branch_taken_0x2856dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2856dc) {
            ctx->pc = 0x2856ECu;
            goto label_2856ec;
        }
    }
    ctx->pc = 0x2856E4u;
    // 0x2856e4: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2856E4u;
    {
        const bool branch_taken_0x2856e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2856e4) {
            ctx->pc = 0x285894u;
            goto label_285894;
        }
    }
    ctx->pc = 0x2856ECu;
label_2856ec:
    // 0x2856ec: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x2856ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x2856f0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2856f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2856f4: 0x14600067  bnez        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x2856F4u;
    {
        const bool branch_taken_0x2856f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2856f4) {
            ctx->pc = 0x285894u;
            goto label_285894;
        }
    }
    ctx->pc = 0x2856FCu;
    // 0x2856fc: 0x82225de9  lb          $v0, 0x5DE9($s1)
    ctx->pc = 0x2856fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24041)));
    // 0x285700: 0x29e3c  dsll32      $s3, $v0, 24
    ctx->pc = 0x285700u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
    // 0x285704: 0x139e3f  dsra32      $s3, $s3, 24
    ctx->pc = 0x285704u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
    // 0x285708: 0x131400  sll         $v0, $s3, 16
    ctx->pc = 0x285708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x28570c: 0x34520087  ori         $s2, $v0, 0x87
    ctx->pc = 0x28570cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)135);
    // 0x285710: 0x8e2665a0  lw          $a2, 0x65A0($s1)
    ctx->pc = 0x285710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x285714: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x285714u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x285718: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x285718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x28571c: 0x34454000  ori         $a1, $v0, 0x4000
    ctx->pc = 0x28571cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x285720: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x285720u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285724: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x285724u;
    SET_GPR_U32(ctx, 31, 0x28572Cu);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x285724u, 0x28572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28572Cu;
label_28572c:
    // 0x28572c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28572cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x285730: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x285730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x285734: 0x12a30057  beq         $s5, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x285734u;
    {
        const bool branch_taken_0x285734 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x285734) {
            ctx->pc = 0x285894u;
            goto label_285894;
        }
    }
    ctx->pc = 0x28573Cu;
    // 0x28573c: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x28573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285740: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x285740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x285744: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x285744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    // 0x285748: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28574c: 0x8c231ba0  lw          $v1, 0x1BA0($at)
    ctx->pc = 0x28574cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621BA0u));
    // 0x285750: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x285750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x285754: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x285758: 0xac231ba0  sw          $v1, 0x1BA0($at)
    ctx->pc = 0x285758u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621BA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621BA0u, _value); } while (0);
    // 0x28575c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x28575Cu;
    {
        const bool branch_taken_0x28575c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28575c) {
            ctx->pc = 0x285894u;
            goto label_285894;
        }
    }
    ctx->pc = 0x285764u;
label_285764:
    // 0x285764: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x285764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285768: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x285768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28576c: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x28576Cu;
    {
        const bool branch_taken_0x28576c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28576c) {
            ctx->pc = 0x285894u;
            goto label_285894;
        }
    }
    ctx->pc = 0x285774u;
    // 0x285774: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x285774u;
    SET_GPR_U32(ctx, 31, 0x28577Cu);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x285774u, 0x28577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28577Cu;
label_28577c:
    // 0x28577c: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x28577Cu;
    {
        const bool branch_taken_0x28577c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28577c) {
            ctx->pc = 0x285894u;
            goto label_285894;
        }
    }
    ctx->pc = 0x285784u;
    // 0x285784: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x285784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285788: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x285788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28578c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28578cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x285790: 0xae22685c  sw          $v0, 0x685C($s1)
    ctx->pc = 0x285790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 2));
    // 0x285794: 0x26300520  addiu       $s0, $s1, 0x520
    ctx->pc = 0x285794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
    // 0x285798: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x285798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28579c: 0x8e2265a0  lw          $v0, 0x65A0($s1)
    ctx->pc = 0x28579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x2857a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2857a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2857a4: 0xc076530  jal         func_1D94C0
    ctx->pc = 0x2857A4u;
    SET_GPR_U32(ctx, 31, 0x2857ACu);
    ctx->pc = 0x1D94C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D94C0u, 0x2857A4u, 0x2857ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2857ACu;
label_2857ac:
    // 0x2857ac: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x2857acu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2857b0: 0x8e2265a0  lw          $v0, 0x65A0($s1)
    ctx->pc = 0x2857b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x2857b4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2857b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2857b8: 0xae2265a0  sw          $v0, 0x65A0($s1)
    ctx->pc = 0x2857b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26016), GPR_U32(ctx, 2));
    // 0x2857bc: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2857bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2857c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2857c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2857c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2857c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2857c8: 0x9602fffc  lhu         $v0, -0x4($s0)
    ctx->pc = 0x2857c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x2857cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2857ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2857d0: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2857d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2857d4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2857d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2857d8: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2857d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2857dc: 0x9602fffe  lhu         $v0, -0x2($s0)
    ctx->pc = 0x2857dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294967294)));
    // 0x2857e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2857e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2857e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2857e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2857e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2857e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2857ec: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x2857ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2857f0: 0x26300120  addiu       $s0, $s1, 0x120
    ctx->pc = 0x2857f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x2857f4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2857f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2857f8: 0x26250720  addiu       $a1, $s1, 0x720
    ctx->pc = 0x2857f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1824));
    // 0x2857fc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2857fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x285800: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x285800u;
    SET_GPR_U32(ctx, 31, 0x285808u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x285808u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x285808u) { return; }
    ctx->pc = 0x285808u;
label_285808:
    // 0x285808: 0x8e2365a0  lw          $v1, 0x65A0($s1)
    ctx->pc = 0x285808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x28580c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28580cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x285810: 0x8e2465a0  lw          $a0, 0x65A0($s1)
    ctx->pc = 0x285810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x285814: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x285814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x285818: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x285818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x28581c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x28581cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x285820: 0xae2365a0  sw          $v1, 0x65A0($s1)
    ctx->pc = 0x285820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26016), GPR_U32(ctx, 3));
    // 0x285824: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x285824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x285828: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x285828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28582c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28582cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x285830: 0x9603fffc  lhu         $v1, -0x4($s0)
    ctx->pc = 0x285830u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x285834: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x285834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x285838: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x285838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x28583c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28583cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x285840: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x285840u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x285844: 0x9603fffe  lhu         $v1, -0x2($s0)
    ctx->pc = 0x285844u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294967294)));
    // 0x285848: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x285848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28584c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x285850: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x285850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x285854: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x285854u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x285858: 0x8e236870  lw          $v1, 0x6870($s1)
    ctx->pc = 0x285858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26736)));
    // 0x28585c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x28585cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x285860: 0xae236870  sw          $v1, 0x6870($s1)
    ctx->pc = 0x285860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26736), GPR_U32(ctx, 3));
    // 0x285864: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x285868: 0xac201ba0  sw          $zero, 0x1BA0($at)
    ctx->pc = 0x285868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621BA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621BA0u, _value); } while (0);
    // 0x28586c: 0x8e24685c  lw          $a0, 0x685C($s1)
    ctx->pc = 0x28586cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285870: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x285870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x285874: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x285874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x285878: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x285878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    // 0x28587c: 0x8e245dc4  lw          $a0, 0x5DC4($s1)
    ctx->pc = 0x28587cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24004)));
    // 0x285880: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x285880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x285884: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x285884u;
    {
        const bool branch_taken_0x285884 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x285884) {
            ctx->pc = 0x285894u;
            goto label_285894;
        }
    }
    ctx->pc = 0x28588Cu;
    // 0x28588c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28588cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x285890: 0xae235dd4  sw          $v1, 0x5DD4($s1)
    ctx->pc = 0x285890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24020), GPR_U32(ctx, 3));
label_285894:
    // 0x285894: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x285894u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x285898: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x285898u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28589c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28589cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2858a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2858a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2858a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2858a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2858a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2858a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2858ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2858acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2858b0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2858b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2858b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2858B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2858B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2858BCu;
}
