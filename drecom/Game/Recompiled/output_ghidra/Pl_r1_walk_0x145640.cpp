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

// Function: Pl_r1_walk
// Address: 0x145640 - 0x145b10
void Pl_r1_walk_0x145640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_walk_0x145640");
#endif

    switch (ctx->pc) {
        case 0x145734u: goto label_145734;
        case 0x145760u: goto label_145760;
        case 0x145784u: goto label_145784;
        case 0x1457a0u: goto label_1457a0;
        case 0x1457dcu: goto label_1457dc;
        case 0x145828u: goto label_145828;
        case 0x1458a4u: goto label_1458a4;
        case 0x1458d8u: goto label_1458d8;
        case 0x1458f4u: goto label_1458f4;
        case 0x14590cu: goto label_14590c;
        case 0x145924u: goto label_145924;
        case 0x145930u: goto label_145930;
        case 0x145940u: goto label_145940;
        case 0x145958u: goto label_145958;
        case 0x145968u: goto label_145968;
        case 0x145978u: goto label_145978;
        case 0x14598cu: goto label_14598c;
        case 0x14599cu: goto label_14599c;
        case 0x1459acu: goto label_1459ac;
        case 0x1459bcu: goto label_1459bc;
        default: break;
    }

    ctx->pc = 0x145640u;

    // 0x145640: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x145640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x145644: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x145644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x145648: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14564c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14564cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145650: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145654: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x145654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x145658: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x145658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x14565c: 0x24720080  addiu       $s2, $v1, 0x80
    ctx->pc = 0x14565cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x145660: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x145660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x145664: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x145664u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x145668: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x145668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x14566c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14566cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x145670: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x145670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x145674: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x145674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x145678: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x145678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x14567c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x14567cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145680: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x145680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x145684: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x145684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x145688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x145688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14568c: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x14568Cu;
    {
        const bool branch_taken_0x14568c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14568c) {
            ctx->pc = 0x1457CCu;
            goto label_1457cc;
        }
    }
    ctx->pc = 0x145694u;
    // 0x145694: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145694u;
    {
        const bool branch_taken_0x145694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x145694) {
            ctx->pc = 0x1456A4u;
            goto label_1456a4;
        }
    }
    ctx->pc = 0x14569Cu;
    // 0x14569c: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x14569Cu;
    {
        const bool branch_taken_0x14569c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14569c) {
            ctx->pc = 0x145AF4u;
            goto label_145af4;
        }
    }
    ctx->pc = 0x1456A4u;
label_1456a4:
    // 0x1456a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1456a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1456a8: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1456a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1456ac: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1456acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1456b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1456b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1456b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1456b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1456b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1456b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1456bc: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1456bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1456c0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1456c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1456c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1456c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1456c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1456c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1456cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1456ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1456d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1456D0u;
    {
        const bool branch_taken_0x1456d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1456d0) {
            ctx->pc = 0x1456F0u;
            goto label_1456f0;
        }
    }
    ctx->pc = 0x1456D8u;
    // 0x1456d8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1456d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1456dc: 0xc4401b30  lwc1        $f0, 0x1B30($v0)
    ctx->pc = 0x1456dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1456e0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1456e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1456e4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1456e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1456e8: 0x36020010  ori         $v0, $s0, 0x10
    ctx->pc = 0x1456e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x1456ec: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1456ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1456f0:
    // 0x1456f0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1456f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1456f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1456f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1456f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1456f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1456fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1456fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x145700: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145700u;
    {
        const bool branch_taken_0x145700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145700) {
            ctx->pc = 0x145710u;
            goto label_145710;
        }
    }
    ctx->pc = 0x145708u;
    // 0x145708: 0x36020020  ori         $v0, $s0, 0x20
    ctx->pc = 0x145708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
    // 0x14570c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x14570cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_145710:
    // 0x145710: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145714: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145718: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x145718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x14571c: 0x23200  sll         $a2, $v0, 8
    ctx->pc = 0x14571cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x145720: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x145720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x145724: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x145724u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x145728: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x145728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14572c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14572Cu;
    SET_GPR_U32(ctx, 31, 0x145734u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14572Cu, 0x145734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145734u;
label_145734:
    // 0x145734: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145738: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x145738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14573c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14573cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x145740: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x145740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x145744: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x145744u;
    {
        const bool branch_taken_0x145744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145744) {
            ctx->pc = 0x1457A8u;
            goto label_1457a8;
        }
    }
    ctx->pc = 0x14574Cu;
    // 0x14574c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145750: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x145750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145754: 0xc44c1b34  lwc1        $f12, 0x1B34($v0)
    ctx->pc = 0x145754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145758: 0xc067844  jal         func_19E110
    ctx->pc = 0x145758u;
    SET_GPR_U32(ctx, 31, 0x145760u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x145758u, 0x145760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145760u;
label_145760:
    // 0x145760: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145764: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x145764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x145768: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14576c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x14576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x145770: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x145770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x145774: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x145774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x145778: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14577c: 0xc040c00  jal         func_103000
    ctx->pc = 0x14577Cu;
    SET_GPR_U32(ctx, 31, 0x145784u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x145784u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x145784u) { return; }
    ctx->pc = 0x145784u;
label_145784:
    // 0x145784: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145788: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x145788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14578c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145790: 0xc4401b34  lwc1        $f0, 0x1B34($v0)
    ctx->pc = 0x145790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145794: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x145794u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x145798: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x145798u;
    SET_GPR_U32(ctx, 31, 0x1457A0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x145798u, 0x1457A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1457A0u;
label_1457a0:
    // 0x1457a0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1457a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1457a4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1457a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1457a8:
    // 0x1457a8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1457a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1457ac: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1457acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x1457b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1457b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1457b4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1457b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1457b8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1457b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1457bc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1457bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1457c0: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1457c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1457c4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1457c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1457c8: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1457c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_1457cc:
    // 0x1457cc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1457ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1457d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1457d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1457d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1457D4u;
    SET_GPR_U32(ctx, 31, 0x1457DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1457D4u, 0x1457DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1457DCu;
label_1457dc:
    // 0x1457dc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1457dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1457e0: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1457e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1457e4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1457e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1457e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1457e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1457ec: 0x0  nop
    ctx->pc = 0x1457ecu;
    // NOP
    // 0x1457f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1457f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1457f4: 0x0  nop
    ctx->pc = 0x1457f4u;
    // NOP
    // 0x1457f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1457F8u;
    {
        const bool branch_taken_0x1457f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1457f8) {
            ctx->pc = 0x145810u;
            goto label_145810;
        }
    }
    ctx->pc = 0x145800u;
    // 0x145800: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145804: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x145804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145808: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14580c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x14580cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_145810:
    // 0x145810: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145814: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145818: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x145818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14581c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145820: 0xc058f20  jal         func_163C80
    ctx->pc = 0x145820u;
    SET_GPR_U32(ctx, 31, 0x145828u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x145820u, 0x145828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145828u;
label_145828:
    // 0x145828: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x145828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x14582c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x14582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145830: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x145830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145834: 0x0  nop
    ctx->pc = 0x145834u;
    // NOP
    // 0x145838: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14583c: 0x0  nop
    ctx->pc = 0x14583cu;
    // NOP
    // 0x145840: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x145840u;
    {
        const bool branch_taken_0x145840 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x145840) {
            ctx->pc = 0x14585Cu;
            goto label_14585c;
        }
    }
    ctx->pc = 0x145848u;
    // 0x145848: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x145848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x14584c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14584cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145850: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x145850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145854: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x145854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x145858: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x145858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_14585c:
    // 0x14585c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x14585cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145860: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x145860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x145864: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x145864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x145868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x145868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14586c: 0x0  nop
    ctx->pc = 0x14586cu;
    // NOP
    // 0x145870: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145874: 0x0  nop
    ctx->pc = 0x145874u;
    // NOP
    // 0x145878: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x145878u;
    {
        const bool branch_taken_0x145878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145878) {
            ctx->pc = 0x1458B4u;
            goto label_1458b4;
        }
    }
    ctx->pc = 0x145880u;
    // 0x145880: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x145880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x145884: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x145884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x145888: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x145888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14588c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x14588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145890: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145894: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x145894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145898: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x145898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14589c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x14589Cu;
    SET_GPR_U32(ctx, 31, 0x1458A4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x14589Cu, 0x1458A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1458A4u;
label_1458a4:
    // 0x1458a4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1458a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1458a8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1458a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1458ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1458ACu;
    {
        const bool branch_taken_0x1458ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1458ac) {
            ctx->pc = 0x1458E0u;
            goto label_1458e0;
        }
    }
    ctx->pc = 0x1458B4u;
label_1458b4:
    // 0x1458b4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1458b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1458b8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1458b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1458bc: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1458bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1458c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1458c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1458c4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1458c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1458c8: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1458c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1458cc: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1458ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1458d0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1458D0u;
    SET_GPR_U32(ctx, 31, 0x1458D8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1458D0u, 0x1458D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1458D8u;
label_1458d8:
    // 0x1458d8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1458d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1458dc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1458dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1458e0:
    // 0x1458e0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1458e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1458e4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1458e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1458e8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1458e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1458ec: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1458ECu;
    SET_GPR_U32(ctx, 31, 0x1458F4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1458ECu, 0x1458F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1458F4u;
label_1458f4:
    // 0x1458f4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1458f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1458f8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1458f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1458fc: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1458fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145900: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x145900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145904: 0xc058f20  jal         func_163C80
    ctx->pc = 0x145904u;
    SET_GPR_U32(ctx, 31, 0x14590Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x145904u, 0x14590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14590Cu;
label_14590c:
    // 0x14590c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x14590cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x145910: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145914: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x145914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145918: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x145918u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14591c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14591Cu;
    SET_GPR_U32(ctx, 31, 0x145924u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14591Cu, 0x145924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145924u;
label_145924:
    // 0x145924: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x145924u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x145928: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x145928u;
    SET_GPR_U32(ctx, 31, 0x145930u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x145928u, 0x145930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145930u;
label_145930:
    // 0x145930: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145934: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x145934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x145938: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x145938u;
    SET_GPR_U32(ctx, 31, 0x145940u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x145938u, 0x145940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145940u;
label_145940:
    // 0x145940: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x145940u;
    {
        const bool branch_taken_0x145940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145940) {
            ctx->pc = 0x145AF4u;
            goto label_145af4;
        }
    }
    ctx->pc = 0x145948u;
    // 0x145948: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14594c: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14594cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x145950: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x145950u;
    SET_GPR_U32(ctx, 31, 0x145958u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x145950u, 0x145958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145958u;
label_145958:
    // 0x145958: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x145958u;
    {
        const bool branch_taken_0x145958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145958) {
            ctx->pc = 0x145AF4u;
            goto label_145af4;
        }
    }
    ctx->pc = 0x145960u;
    // 0x145960: 0xc058410  jal         func_161040
    ctx->pc = 0x145960u;
    SET_GPR_U32(ctx, 31, 0x145968u);
    ctx->pc = 0x161040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161040u, 0x145960u, 0x145968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145968u;
label_145968:
    // 0x145968: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x145968u;
    {
        const bool branch_taken_0x145968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145968) {
            ctx->pc = 0x145AF4u;
            goto label_145af4;
        }
    }
    ctx->pc = 0x145970u;
    // 0x145970: 0xc057b78  jal         func_15EDE0
    ctx->pc = 0x145970u;
    SET_GPR_U32(ctx, 31, 0x145978u);
    ctx->pc = 0x15EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EDE0u, 0x145970u, 0x145978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145978u;
label_145978:
    // 0x145978: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x145978u;
    {
        const bool branch_taken_0x145978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145978) {
            ctx->pc = 0x145AF4u;
            goto label_145af4;
        }
    }
    ctx->pc = 0x145980u;
    // 0x145980: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x145980u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x145984: 0xc057cd8  jal         func_15F360
    ctx->pc = 0x145984u;
    SET_GPR_U32(ctx, 31, 0x14598Cu);
    ctx->pc = 0x15F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F360u, 0x145984u, 0x14598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14598Cu;
label_14598c:
    // 0x14598c: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x14598Cu;
    {
        const bool branch_taken_0x14598c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14598c) {
            ctx->pc = 0x145AF4u;
            goto label_145af4;
        }
    }
    ctx->pc = 0x145994u;
    // 0x145994: 0xc0581a8  jal         func_1606A0
    ctx->pc = 0x145994u;
    SET_GPR_U32(ctx, 31, 0x14599Cu);
    ctx->pc = 0x1606A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1606A0u, 0x145994u, 0x14599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14599Cu;
label_14599c:
    // 0x14599c: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x14599Cu;
    {
        const bool branch_taken_0x14599c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14599c) {
            ctx->pc = 0x145AF4u;
            goto label_145af4;
        }
    }
    ctx->pc = 0x1459A4u;
    // 0x1459a4: 0xc057efc  jal         func_15FBF0
    ctx->pc = 0x1459A4u;
    SET_GPR_U32(ctx, 31, 0x1459ACu);
    ctx->pc = 0x15FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FBF0u, 0x1459A4u, 0x1459ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1459ACu;
label_1459ac:
    // 0x1459ac: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1459ACu;
    {
        const bool branch_taken_0x1459ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1459ac) {
            ctx->pc = 0x145AF4u;
            goto label_145af4;
        }
    }
    ctx->pc = 0x1459B4u;
    // 0x1459b4: 0xc058478  jal         func_1611E0
    ctx->pc = 0x1459B4u;
    SET_GPR_U32(ctx, 31, 0x1459BCu);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x1459B4u, 0x1459BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1459BCu;
label_1459bc:
    // 0x1459bc: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1459BCu;
    {
        const bool branch_taken_0x1459bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1459bc) {
            ctx->pc = 0x145AF4u;
            goto label_145af4;
        }
    }
    ctx->pc = 0x1459C4u;
    // 0x1459c4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1459c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1459c8: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x1459c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1459cc: 0x3c0342d0  lui         $v1, 0x42D0
    ctx->pc = 0x1459ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17104 << 16));
    // 0x1459d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1459d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1459d4: 0x0  nop
    ctx->pc = 0x1459d4u;
    // NOP
    // 0x1459d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1459d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1459dc: 0x0  nop
    ctx->pc = 0x1459dcu;
    // NOP
    // 0x1459e0: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x1459E0u;
    {
        const bool branch_taken_0x1459e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1459e0) {
            ctx->pc = 0x145A64u;
            goto label_145a64;
        }
    }
    ctx->pc = 0x1459E8u;
    // 0x1459e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1459e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1459ec: 0x8c2395b4  lw          $v1, -0x6A4C($at)
    ctx->pc = 0x1459ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6195B4u));
    // 0x1459f0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1459f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1459f4: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1459F4u;
    {
        const bool branch_taken_0x1459f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1459f4) {
            ctx->pc = 0x145A64u;
            goto label_145a64;
        }
    }
    ctx->pc = 0x1459FCu;
    // 0x1459fc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1459fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a00: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x145a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145a04: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x145a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x145a08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145a08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145a0c: 0x0  nop
    ctx->pc = 0x145a0cu;
    // NOP
    // 0x145a10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145a10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145a14: 0x0  nop
    ctx->pc = 0x145a14u;
    // NOP
    // 0x145a18: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x145A18u;
    {
        const bool branch_taken_0x145a18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145a18) {
            ctx->pc = 0x145A64u;
            goto label_145a64;
        }
    }
    ctx->pc = 0x145A20u;
    // 0x145a20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x145a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145a24: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a28: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x145a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x145a2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x145a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145a30: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a34: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x145a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x145a38: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a3c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x145a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x145a40: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a44: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x145a44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x145a48: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a4c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x145a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x145a50: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x145a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x145a54: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a58: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x145a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x145a5c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x145A5Cu;
    {
        const bool branch_taken_0x145a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145a5c) {
            ctx->pc = 0x145AF4u;
            goto label_145af4;
        }
    }
    ctx->pc = 0x145A64u;
label_145a64:
    // 0x145a64: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a68: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x145a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145a6c: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x145a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x145a70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145a74: 0x0  nop
    ctx->pc = 0x145a74u;
    // NOP
    // 0x145a78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145a78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145a7c: 0x0  nop
    ctx->pc = 0x145a7cu;
    // NOP
    // 0x145a80: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x145A80u;
    {
        const bool branch_taken_0x145a80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x145a80) {
            ctx->pc = 0x145AECu;
            goto label_145aec;
        }
    }
    ctx->pc = 0x145A88u;
    // 0x145a88: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a8c: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x145a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
    // 0x145a90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x145a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x145a94: 0xac831b60  sw          $v1, 0x1B60($a0)
    ctx->pc = 0x145a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 3));
    // 0x145a98: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a9c: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x145a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x145aa0: 0x2c610005  sltiu       $at, $v1, 0x5
    ctx->pc = 0x145aa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x145aa4: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x145AA4u;
    {
        const bool branch_taken_0x145aa4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x145aa4) {
            ctx->pc = 0x145AF4u;
            goto label_145af4;
        }
    }
    ctx->pc = 0x145AACu;
    // 0x145aac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x145aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145ab0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145ab4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x145ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x145ab8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145abc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x145abcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x145ac0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145ac4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x145ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x145ac8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145acc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x145accu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x145ad0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145ad4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x145ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x145ad8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x145ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x145adc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145ae0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x145ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x145ae4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x145AE4u;
    {
        const bool branch_taken_0x145ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145ae4) {
            ctx->pc = 0x145AF4u;
            goto label_145af4;
        }
    }
    ctx->pc = 0x145AECu;
label_145aec:
    // 0x145aec: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145af0: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x145af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_145af4:
    // 0x145af4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x145af4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145af8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145afc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145b00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145b04: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x145b04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x145b08: 0x3e00008  jr          $ra
    ctx->pc = 0x145B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145B10u;
}
