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

// Function: Pl_r1_wait
// Address: 0x145230 - 0x145640
void Pl_r1_wait_0x145230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_wait_0x145230");
#endif

    switch (ctx->pc) {
        case 0x145308u: goto label_145308;
        case 0x145338u: goto label_145338;
        case 0x145364u: goto label_145364;
        case 0x145390u: goto label_145390;
        case 0x1453b4u: goto label_1453b4;
        case 0x1453d0u: goto label_1453d0;
        case 0x145408u: goto label_145408;
        case 0x145484u: goto label_145484;
        case 0x14549cu: goto label_14549c;
        case 0x1454b4u: goto label_1454b4;
        case 0x1454c0u: goto label_1454c0;
        case 0x1454d0u: goto label_1454d0;
        case 0x1454e8u: goto label_1454e8;
        case 0x1454f8u: goto label_1454f8;
        case 0x145508u: goto label_145508;
        case 0x14551cu: goto label_14551c;
        case 0x14552cu: goto label_14552c;
        case 0x14553cu: goto label_14553c;
        case 0x14554cu: goto label_14554c;
        default: break;
    }

    ctx->pc = 0x145230u;

    // 0x145230: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x145230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x145234: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x145234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x145238: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14523c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14523cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145244: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x145244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x145248: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x145248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x14524c: 0x24720080  addiu       $s2, $v1, 0x80
    ctx->pc = 0x14524cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x145250: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x145250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x145254: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x145254u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x145258: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x145258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x14525c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14525cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x145260: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x145260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x145264: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x145264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x145268: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x145268u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x14526c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x14526cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145270: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x145270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x145274: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x145274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x145278: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x145278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14527c: 0x1083005e  beq         $a0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x14527Cu;
    {
        const bool branch_taken_0x14527c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14527c) {
            ctx->pc = 0x1453F8u;
            goto label_1453f8;
        }
    }
    ctx->pc = 0x145284u;
    // 0x145284: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145284u;
    {
        const bool branch_taken_0x145284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x145284) {
            ctx->pc = 0x145294u;
            goto label_145294;
        }
    }
    ctx->pc = 0x14528Cu;
    // 0x14528c: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x14528Cu;
    {
        const bool branch_taken_0x14528c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14528c) {
            ctx->pc = 0x145624u;
            goto label_145624;
        }
    }
    ctx->pc = 0x145294u;
label_145294:
    // 0x145294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145298: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x145298u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14529c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14529cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1452a0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1452a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1452a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1452a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1452a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1452a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1452ac: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1452acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1452b0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1452b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1452b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1452b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1452b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1452b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1452bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1452bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1452c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1452C0u;
    {
        const bool branch_taken_0x1452c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1452c0) {
            ctx->pc = 0x1452E0u;
            goto label_1452e0;
        }
    }
    ctx->pc = 0x1452C8u;
    // 0x1452c8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1452c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1452cc: 0xc4401b30  lwc1        $f0, 0x1B30($v0)
    ctx->pc = 0x1452ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1452d0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1452d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1452d4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1452d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1452d8: 0x36020010  ori         $v0, $s0, 0x10
    ctx->pc = 0x1452d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x1452dc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1452dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1452e0:
    // 0x1452e0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1452e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1452e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1452e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1452e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1452e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1452ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1452ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1452f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1452F0u;
    {
        const bool branch_taken_0x1452f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1452f0) {
            ctx->pc = 0x145300u;
            goto label_145300;
        }
    }
    ctx->pc = 0x1452F8u;
    // 0x1452f8: 0x36020020  ori         $v0, $s0, 0x20
    ctx->pc = 0x1452f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
    // 0x1452fc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1452fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_145300:
    // 0x145300: 0xc05d030  jal         func_1740C0
    ctx->pc = 0x145300u;
    SET_GPR_U32(ctx, 31, 0x145308u);
    ctx->pc = 0x1740C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1740C0u, 0x145300u, 0x145308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145308u;
label_145308:
    // 0x145308: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x145308u;
    {
        const bool branch_taken_0x145308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145308) {
            ctx->pc = 0x145340u;
            goto label_145340;
        }
    }
    ctx->pc = 0x145310u;
    // 0x145310: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145314: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145318: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x145318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x14531c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x14531cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x145320: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x145320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x145324: 0x34460001  ori         $a2, $v0, 0x1
    ctx->pc = 0x145324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x145328: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x145328u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14532c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14532cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x145330: 0xc0965d0  jal         func_259740
    ctx->pc = 0x145330u;
    SET_GPR_U32(ctx, 31, 0x145338u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x145330u, 0x145338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145338u;
label_145338:
    // 0x145338: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x145338u;
    {
        const bool branch_taken_0x145338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145338) {
            ctx->pc = 0x145364u;
            goto label_145364;
        }
    }
    ctx->pc = 0x145340u;
label_145340:
    // 0x145340: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145344: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145348: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x145348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x14534c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x14534cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x145350: 0x23200  sll         $a2, $v0, 8
    ctx->pc = 0x145350u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x145354: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x145354u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x145358: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x145358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14535c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14535Cu;
    SET_GPR_U32(ctx, 31, 0x145364u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14535Cu, 0x145364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145364u;
label_145364:
    // 0x145364: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145368: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x145368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14536c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14536cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x145370: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x145370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x145374: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x145374u;
    {
        const bool branch_taken_0x145374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145374) {
            ctx->pc = 0x1453D8u;
            goto label_1453d8;
        }
    }
    ctx->pc = 0x14537Cu;
    // 0x14537c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145380: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x145380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145384: 0xc44c1b34  lwc1        $f12, 0x1B34($v0)
    ctx->pc = 0x145384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145388: 0xc067844  jal         func_19E110
    ctx->pc = 0x145388u;
    SET_GPR_U32(ctx, 31, 0x145390u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x145388u, 0x145390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145390u;
label_145390:
    // 0x145390: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145394: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x145394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x145398: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14539c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x14539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x1453a0: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x1453a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1453a4: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x1453a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1453a8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1453a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1453ac: 0xc040c00  jal         func_103000
    ctx->pc = 0x1453ACu;
    SET_GPR_U32(ctx, 31, 0x1453B4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1453B4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1453B4u) { return; }
    ctx->pc = 0x1453B4u;
label_1453b4:
    // 0x1453b4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1453b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1453b8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1453b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1453bc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1453bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1453c0: 0xc4401b34  lwc1        $f0, 0x1B34($v0)
    ctx->pc = 0x1453c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1453c4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1453c4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1453c8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1453C8u;
    SET_GPR_U32(ctx, 31, 0x1453D0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1453C8u, 0x1453D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1453D0u;
label_1453d0:
    // 0x1453d0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1453d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1453d4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1453d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1453d8:
    // 0x1453d8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1453d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1453dc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1453dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1453e0: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1453e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1453e4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1453e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1453e8: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x1453e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1453ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1453ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1453f0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1453f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1453f4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1453f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1453f8:
    // 0x1453f8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1453f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1453fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1453fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x145400: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x145400u;
    SET_GPR_U32(ctx, 31, 0x145408u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x145400u, 0x145408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145408u;
label_145408:
    // 0x145408: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x145408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14540c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145410: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x145410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x145414: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x145414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145418: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14541c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x14541cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x145420: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x145420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145424: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145428: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x145428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x14542c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145430: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x145430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145434: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x145434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x145438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x145438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14543c: 0x0  nop
    ctx->pc = 0x14543cu;
    // NOP
    // 0x145440: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145444: 0x0  nop
    ctx->pc = 0x145444u;
    // NOP
    // 0x145448: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x145448u;
    {
        const bool branch_taken_0x145448 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145448) {
            ctx->pc = 0x145468u;
            goto label_145468;
        }
    }
    ctx->pc = 0x145450u;
    // 0x145450: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145454: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x145454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145458: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14545c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x14545cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x145460: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x145460u;
    {
        const bool branch_taken_0x145460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145460) {
            ctx->pc = 0x145478u;
            goto label_145478;
        }
    }
    ctx->pc = 0x145468u;
label_145468:
    // 0x145468: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14546c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x14546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145470: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145474: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x145474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_145478:
    // 0x145478: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14547c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14547Cu;
    SET_GPR_U32(ctx, 31, 0x145484u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14547Cu, 0x145484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145484u;
label_145484:
    // 0x145484: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145488: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14548c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x14548cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145490: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x145490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145494: 0xc058f20  jal         func_163C80
    ctx->pc = 0x145494u;
    SET_GPR_U32(ctx, 31, 0x14549Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x145494u, 0x14549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14549Cu;
label_14549c:
    // 0x14549c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x14549cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1454a0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1454a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1454a4: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x1454a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1454a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1454a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1454ac: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1454ACu;
    SET_GPR_U32(ctx, 31, 0x1454B4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1454ACu, 0x1454B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454B4u;
label_1454b4:
    // 0x1454b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1454b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1454b8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1454B8u;
    SET_GPR_U32(ctx, 31, 0x1454C0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1454B8u, 0x1454C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454C0u;
label_1454c0:
    // 0x1454c0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1454c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1454c4: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x1454c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1454c8: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x1454C8u;
    SET_GPR_U32(ctx, 31, 0x1454D0u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1454C8u, 0x1454D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454D0u;
label_1454d0:
    // 0x1454d0: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1454D0u;
    {
        const bool branch_taken_0x1454d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1454d0) {
            ctx->pc = 0x145624u;
            goto label_145624;
        }
    }
    ctx->pc = 0x1454D8u;
    // 0x1454d8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1454d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1454dc: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x1454dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1454e0: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x1454E0u;
    SET_GPR_U32(ctx, 31, 0x1454E8u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x1454E0u, 0x1454E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454E8u;
label_1454e8:
    // 0x1454e8: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1454E8u;
    {
        const bool branch_taken_0x1454e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1454e8) {
            ctx->pc = 0x145624u;
            goto label_145624;
        }
    }
    ctx->pc = 0x1454F0u;
    // 0x1454f0: 0xc058410  jal         func_161040
    ctx->pc = 0x1454F0u;
    SET_GPR_U32(ctx, 31, 0x1454F8u);
    ctx->pc = 0x161040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161040u, 0x1454F0u, 0x1454F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454F8u;
label_1454f8:
    // 0x1454f8: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1454F8u;
    {
        const bool branch_taken_0x1454f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1454f8) {
            ctx->pc = 0x145624u;
            goto label_145624;
        }
    }
    ctx->pc = 0x145500u;
    // 0x145500: 0xc057b78  jal         func_15EDE0
    ctx->pc = 0x145500u;
    SET_GPR_U32(ctx, 31, 0x145508u);
    ctx->pc = 0x15EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EDE0u, 0x145500u, 0x145508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145508u;
label_145508:
    // 0x145508: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x145508u;
    {
        const bool branch_taken_0x145508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145508) {
            ctx->pc = 0x145624u;
            goto label_145624;
        }
    }
    ctx->pc = 0x145510u;
    // 0x145510: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x145510u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x145514: 0xc057cd8  jal         func_15F360
    ctx->pc = 0x145514u;
    SET_GPR_U32(ctx, 31, 0x14551Cu);
    ctx->pc = 0x15F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F360u, 0x145514u, 0x14551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14551Cu;
label_14551c:
    // 0x14551c: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x14551Cu;
    {
        const bool branch_taken_0x14551c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14551c) {
            ctx->pc = 0x145624u;
            goto label_145624;
        }
    }
    ctx->pc = 0x145524u;
    // 0x145524: 0xc0581a8  jal         func_1606A0
    ctx->pc = 0x145524u;
    SET_GPR_U32(ctx, 31, 0x14552Cu);
    ctx->pc = 0x1606A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1606A0u, 0x145524u, 0x14552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14552Cu;
label_14552c:
    // 0x14552c: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x14552Cu;
    {
        const bool branch_taken_0x14552c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14552c) {
            ctx->pc = 0x145624u;
            goto label_145624;
        }
    }
    ctx->pc = 0x145534u;
    // 0x145534: 0xc057efc  jal         func_15FBF0
    ctx->pc = 0x145534u;
    SET_GPR_U32(ctx, 31, 0x14553Cu);
    ctx->pc = 0x15FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FBF0u, 0x145534u, 0x14553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14553Cu;
label_14553c:
    // 0x14553c: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x14553Cu;
    {
        const bool branch_taken_0x14553c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14553c) {
            ctx->pc = 0x145624u;
            goto label_145624;
        }
    }
    ctx->pc = 0x145544u;
    // 0x145544: 0xc058478  jal         func_1611E0
    ctx->pc = 0x145544u;
    SET_GPR_U32(ctx, 31, 0x14554Cu);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x145544u, 0x14554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14554Cu;
label_14554c:
    // 0x14554c: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x14554Cu;
    {
        const bool branch_taken_0x14554c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14554c) {
            ctx->pc = 0x145624u;
            goto label_145624;
        }
    }
    ctx->pc = 0x145554u;
    // 0x145554: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145558: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x145558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14555c: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x14555cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x145560: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145564: 0x0  nop
    ctx->pc = 0x145564u;
    // NOP
    // 0x145568: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14556c: 0x0  nop
    ctx->pc = 0x14556cu;
    // NOP
    // 0x145570: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x145570u;
    {
        const bool branch_taken_0x145570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145570) {
            ctx->pc = 0x145624u;
            goto label_145624;
        }
    }
    ctx->pc = 0x145578u;
    // 0x145578: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14557c: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x14557cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145580: 0x3c0342d0  lui         $v1, 0x42D0
    ctx->pc = 0x145580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17104 << 16));
    // 0x145584: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145588: 0x0  nop
    ctx->pc = 0x145588u;
    // NOP
    // 0x14558c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14558cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145590: 0x0  nop
    ctx->pc = 0x145590u;
    // NOP
    // 0x145594: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x145594u;
    {
        const bool branch_taken_0x145594 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145594) {
            ctx->pc = 0x1455E8u;
            goto label_1455e8;
        }
    }
    ctx->pc = 0x14559Cu;
    // 0x14559c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x14559cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1455a0: 0x8c2395b4  lw          $v1, -0x6A4C($at)
    ctx->pc = 0x1455a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6195B4u));
    // 0x1455a4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1455a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1455a8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1455A8u;
    {
        const bool branch_taken_0x1455a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1455a8) {
            ctx->pc = 0x1455E8u;
            goto label_1455e8;
        }
    }
    ctx->pc = 0x1455B0u;
    // 0x1455b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1455b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1455b4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1455b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1455b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1455b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1455bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1455bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1455c0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1455c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1455c4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1455c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1455c8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1455c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1455cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1455ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1455d0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1455d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1455d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1455d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1455d8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1455d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1455dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1455dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1455e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1455E0u;
    {
        const bool branch_taken_0x1455e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1455e0) {
            ctx->pc = 0x145618u;
            goto label_145618;
        }
    }
    ctx->pc = 0x1455E8u;
label_1455e8:
    // 0x1455e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1455e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1455ec: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1455ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1455f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1455f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1455f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1455f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1455f8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1455f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1455fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1455fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x145600: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145604: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x145604u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x145608: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14560c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14560cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x145610: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145614: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x145614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_145618:
    // 0x145618: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x145618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14561c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x14561cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145620: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x145620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_145624:
    // 0x145624: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x145624u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145628: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14562c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14562cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145634: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x145634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x145638: 0x3e00008  jr          $ra
    ctx->pc = 0x145638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145640u;
}
