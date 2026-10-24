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

// Function: Pl_r1_run_dash
// Address: 0x146000 - 0x14651c
void Pl_r1_run_dash_0x146000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_run_dash_0x146000");
#endif

    switch (ctx->pc) {
        case 0x1460f8u: goto label_1460f8;
        case 0x146124u: goto label_146124;
        case 0x146148u: goto label_146148;
        case 0x146164u: goto label_146164;
        case 0x1461a0u: goto label_1461a0;
        case 0x1461ecu: goto label_1461ec;
        case 0x146268u: goto label_146268;
        case 0x14629cu: goto label_14629c;
        case 0x1462b8u: goto label_1462b8;
        case 0x1462ccu: goto label_1462cc;
        case 0x1462d8u: goto label_1462d8;
        case 0x1462e8u: goto label_1462e8;
        case 0x146300u: goto label_146300;
        case 0x146310u: goto label_146310;
        case 0x146320u: goto label_146320;
        case 0x146334u: goto label_146334;
        case 0x146344u: goto label_146344;
        case 0x146354u: goto label_146354;
        case 0x146364u: goto label_146364;
        default: break;
    }

    ctx->pc = 0x146000u;

    // 0x146000: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x146000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x146004: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x146004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x146008: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x146008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14600c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14600cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x146010: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x146014: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x146014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x146018: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x146018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x14601c: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x14601cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x146020: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x146020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x146024: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x146024u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x146028: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x146028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x14602c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14602cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x146030: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x146030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x146034: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x146034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x146038: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x146038u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x14603c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x14603cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146040: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x146040u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x146044: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x146044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x146048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x146048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14604c: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x14604Cu;
    {
        const bool branch_taken_0x14604c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14604c) {
            ctx->pc = 0x146190u;
            goto label_146190;
        }
    }
    ctx->pc = 0x146054u;
    // 0x146054: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146054u;
    {
        const bool branch_taken_0x146054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x146054) {
            ctx->pc = 0x146064u;
            goto label_146064;
        }
    }
    ctx->pc = 0x14605Cu;
    // 0x14605c: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x14605Cu;
    {
        const bool branch_taken_0x14605c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14605c) {
            ctx->pc = 0x146500u;
            goto label_146500;
        }
    }
    ctx->pc = 0x146064u;
label_146064:
    // 0x146064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146068: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x146068u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14606c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146070: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x146070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x146074: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x146074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x146078: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x146078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14607c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x14607cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x146080: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146084: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x146084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x146088: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x146088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14608c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14608cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x146090: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x146090u;
    {
        const bool branch_taken_0x146090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146090) {
            ctx->pc = 0x1460B0u;
            goto label_1460b0;
        }
    }
    ctx->pc = 0x146098u;
    // 0x146098: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14609c: 0xc4401b30  lwc1        $f0, 0x1B30($v0)
    ctx->pc = 0x14609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1460a0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1460a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1460a4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1460a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1460a8: 0x36020010  ori         $v0, $s0, 0x10
    ctx->pc = 0x1460a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x1460ac: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1460acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1460b0:
    // 0x1460b0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1460b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1460b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1460b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1460b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1460b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1460bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1460bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1460c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1460C0u;
    {
        const bool branch_taken_0x1460c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1460c0) {
            ctx->pc = 0x1460D0u;
            goto label_1460d0;
        }
    }
    ctx->pc = 0x1460C8u;
    // 0x1460c8: 0x36020020  ori         $v0, $s0, 0x20
    ctx->pc = 0x1460c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
    // 0x1460cc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1460ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1460d0:
    // 0x1460d0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1460d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1460d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1460d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1460d8: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1460d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1460dc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1460dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1460e0: 0x34460002  ori         $a2, $v0, 0x2
    ctx->pc = 0x1460e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1460e4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1460e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1460e8: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1460e8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1460ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1460ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1460f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1460F0u;
    SET_GPR_U32(ctx, 31, 0x1460F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1460F0u, 0x1460F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460F8u;
label_1460f8:
    // 0x1460f8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1460f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1460fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1460fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x146100: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x146100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x146104: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x146104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x146108: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x146108u;
    {
        const bool branch_taken_0x146108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146108) {
            ctx->pc = 0x14616Cu;
            goto label_14616c;
        }
    }
    ctx->pc = 0x146110u;
    // 0x146110: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146114: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x146114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146118: 0xc44c1b34  lwc1        $f12, 0x1B34($v0)
    ctx->pc = 0x146118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14611c: 0xc067844  jal         func_19E110
    ctx->pc = 0x14611Cu;
    SET_GPR_U32(ctx, 31, 0x146124u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x14611Cu, 0x146124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146124u;
label_146124:
    // 0x146124: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146128: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x146128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14612c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146130: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x146130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x146134: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x146134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x146138: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x146138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x14613c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x14613cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146140: 0xc040c00  jal         func_103000
    ctx->pc = 0x146140u;
    SET_GPR_U32(ctx, 31, 0x146148u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x146148u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x146148u) { return; }
    ctx->pc = 0x146148u;
label_146148:
    // 0x146148: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14614c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x14614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146150: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146154: 0xc4401b34  lwc1        $f0, 0x1B34($v0)
    ctx->pc = 0x146154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146158: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x146158u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14615c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x14615Cu;
    SET_GPR_U32(ctx, 31, 0x146164u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x14615Cu, 0x146164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146164u;
label_146164:
    // 0x146164: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146168: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x146168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_14616c:
    // 0x14616c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146170: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x146170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x146174: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x146174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146178: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14617c: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x14617cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x146180: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146184: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x146184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146188: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14618c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x14618cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_146190:
    // 0x146190: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x146190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146194: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146194u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x146198: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x146198u;
    SET_GPR_U32(ctx, 31, 0x1461A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146198u, 0x1461A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461A0u;
label_1461a0:
    // 0x1461a0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1461a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1461a4: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1461a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1461a8: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1461a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1461ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1461acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1461b0: 0x0  nop
    ctx->pc = 0x1461b0u;
    // NOP
    // 0x1461b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1461b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1461b8: 0x0  nop
    ctx->pc = 0x1461b8u;
    // NOP
    // 0x1461bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1461BCu;
    {
        const bool branch_taken_0x1461bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1461bc) {
            ctx->pc = 0x1461D4u;
            goto label_1461d4;
        }
    }
    ctx->pc = 0x1461C4u;
    // 0x1461c4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1461c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1461c8: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x1461c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1461cc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1461ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1461d0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1461d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_1461d4:
    // 0x1461d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1461d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1461d8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1461d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1461dc: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1461dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1461e0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1461e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1461e4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1461E4u;
    SET_GPR_U32(ctx, 31, 0x1461ECu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1461E4u, 0x1461ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461ECu;
label_1461ec:
    // 0x1461ec: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1461ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1461f0: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x1461f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1461f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1461f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1461f8: 0x0  nop
    ctx->pc = 0x1461f8u;
    // NOP
    // 0x1461fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1461fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146200: 0x0  nop
    ctx->pc = 0x146200u;
    // NOP
    // 0x146204: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x146204u;
    {
        const bool branch_taken_0x146204 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146204) {
            ctx->pc = 0x146220u;
            goto label_146220;
        }
    }
    ctx->pc = 0x14620Cu;
    // 0x14620c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x14620cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x146210: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x146210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146214: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x146214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146218: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x146218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14621c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x14621cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_146220:
    // 0x146220: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x146220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146224: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x146224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x146228: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x146228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x14622c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14622cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146230: 0x0  nop
    ctx->pc = 0x146230u;
    // NOP
    // 0x146234: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x146234u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146238: 0x0  nop
    ctx->pc = 0x146238u;
    // NOP
    // 0x14623c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x14623Cu;
    {
        const bool branch_taken_0x14623c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14623c) {
            ctx->pc = 0x146278u;
            goto label_146278;
        }
    }
    ctx->pc = 0x146244u;
    // 0x146244: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x146244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146248: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14624c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x14624cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x146250: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x146250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x146254: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x146254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x146258: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x146258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14625c: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x14625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x146260: 0xc058f50  jal         func_163D40
    ctx->pc = 0x146260u;
    SET_GPR_U32(ctx, 31, 0x146268u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x146260u, 0x146268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146268u;
label_146268:
    // 0x146268: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14626c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14626cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x146270: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x146270u;
    {
        const bool branch_taken_0x146270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146270) {
            ctx->pc = 0x1462A4u;
            goto label_1462a4;
        }
    }
    ctx->pc = 0x146278u;
label_146278:
    // 0x146278: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x146278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14627c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x14627cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146280: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x146280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x146284: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x146284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x146288: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x146288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14628c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x14628cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x146290: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x146290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x146294: 0xc058f50  jal         func_163D40
    ctx->pc = 0x146294u;
    SET_GPR_U32(ctx, 31, 0x14629Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x146294u, 0x14629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14629Cu;
label_14629c:
    // 0x14629c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x14629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1462a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1462a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1462a4:
    // 0x1462a4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1462a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1462a8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1462a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1462ac: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1462acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1462b0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1462B0u;
    SET_GPR_U32(ctx, 31, 0x1462B8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1462B0u, 0x1462B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1462B8u;
label_1462b8:
    // 0x1462b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1462b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1462bc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1462bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1462c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1462c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1462c4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1462C4u;
    SET_GPR_U32(ctx, 31, 0x1462CCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1462C4u, 0x1462CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1462CCu;
label_1462cc:
    // 0x1462cc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1462ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1462d0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1462D0u;
    SET_GPR_U32(ctx, 31, 0x1462D8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1462D0u, 0x1462D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1462D8u;
label_1462d8:
    // 0x1462d8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1462d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1462dc: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x1462dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1462e0: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x1462E0u;
    SET_GPR_U32(ctx, 31, 0x1462E8u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1462E0u, 0x1462E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1462E8u;
label_1462e8:
    // 0x1462e8: 0x14400085  bnez        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x1462E8u;
    {
        const bool branch_taken_0x1462e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1462e8) {
            ctx->pc = 0x146500u;
            goto label_146500;
        }
    }
    ctx->pc = 0x1462F0u;
    // 0x1462f0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1462f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1462f4: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x1462f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1462f8: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x1462F8u;
    SET_GPR_U32(ctx, 31, 0x146300u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x1462F8u, 0x146300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146300u;
label_146300:
    // 0x146300: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x146300u;
    {
        const bool branch_taken_0x146300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146300) {
            ctx->pc = 0x146500u;
            goto label_146500;
        }
    }
    ctx->pc = 0x146308u;
    // 0x146308: 0xc058410  jal         func_161040
    ctx->pc = 0x146308u;
    SET_GPR_U32(ctx, 31, 0x146310u);
    ctx->pc = 0x161040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161040u, 0x146308u, 0x146310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146310u;
label_146310:
    // 0x146310: 0x1440007b  bnez        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x146310u;
    {
        const bool branch_taken_0x146310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146310) {
            ctx->pc = 0x146500u;
            goto label_146500;
        }
    }
    ctx->pc = 0x146318u;
    // 0x146318: 0xc057b78  jal         func_15EDE0
    ctx->pc = 0x146318u;
    SET_GPR_U32(ctx, 31, 0x146320u);
    ctx->pc = 0x15EDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EDE0u, 0x146318u, 0x146320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146320u;
label_146320:
    // 0x146320: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x146320u;
    {
        const bool branch_taken_0x146320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146320) {
            ctx->pc = 0x146500u;
            goto label_146500;
        }
    }
    ctx->pc = 0x146328u;
    // 0x146328: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x146328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14632c: 0xc057cd8  jal         func_15F360
    ctx->pc = 0x14632Cu;
    SET_GPR_U32(ctx, 31, 0x146334u);
    ctx->pc = 0x15F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F360u, 0x14632Cu, 0x146334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146334u;
label_146334:
    // 0x146334: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x146334u;
    {
        const bool branch_taken_0x146334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146334) {
            ctx->pc = 0x146500u;
            goto label_146500;
        }
    }
    ctx->pc = 0x14633Cu;
    // 0x14633c: 0xc0581a8  jal         func_1606A0
    ctx->pc = 0x14633Cu;
    SET_GPR_U32(ctx, 31, 0x146344u);
    ctx->pc = 0x1606A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1606A0u, 0x14633Cu, 0x146344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146344u;
label_146344:
    // 0x146344: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x146344u;
    {
        const bool branch_taken_0x146344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146344) {
            ctx->pc = 0x146500u;
            goto label_146500;
        }
    }
    ctx->pc = 0x14634Cu;
    // 0x14634c: 0xc057efc  jal         func_15FBF0
    ctx->pc = 0x14634Cu;
    SET_GPR_U32(ctx, 31, 0x146354u);
    ctx->pc = 0x15FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FBF0u, 0x14634Cu, 0x146354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146354u;
label_146354:
    // 0x146354: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x146354u;
    {
        const bool branch_taken_0x146354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146354) {
            ctx->pc = 0x146500u;
            goto label_146500;
        }
    }
    ctx->pc = 0x14635Cu;
    // 0x14635c: 0xc058478  jal         func_1611E0
    ctx->pc = 0x14635Cu;
    SET_GPR_U32(ctx, 31, 0x146364u);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x14635Cu, 0x146364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146364u;
label_146364:
    // 0x146364: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x146364u;
    {
        const bool branch_taken_0x146364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146364) {
            ctx->pc = 0x146500u;
            goto label_146500;
        }
    }
    ctx->pc = 0x14636Cu;
    // 0x14636c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x14636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146370: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x146370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146374: 0x3c0342d0  lui         $v1, 0x42D0
    ctx->pc = 0x146374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17104 << 16));
    // 0x146378: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14637c: 0x0  nop
    ctx->pc = 0x14637cu;
    // NOP
    // 0x146380: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x146380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146384: 0x0  nop
    ctx->pc = 0x146384u;
    // NOP
    // 0x146388: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x146388u;
    {
        const bool branch_taken_0x146388 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x146388) {
            ctx->pc = 0x1463B4u;
            goto label_1463b4;
        }
    }
    ctx->pc = 0x146390u;
    // 0x146390: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x146390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x146394: 0x8c2395b4  lw          $v1, -0x6A4C($at)
    ctx->pc = 0x146394u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6195B4u));
    // 0x146398: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x146398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x14639c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14639Cu;
    {
        const bool branch_taken_0x14639c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14639c) {
            ctx->pc = 0x14641Cu;
            goto label_14641c;
        }
    }
    ctx->pc = 0x1463A4u;
    // 0x1463a4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1463a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1463a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1463a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1463ac: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1463ACu;
    {
        const bool branch_taken_0x1463ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1463ac) {
            ctx->pc = 0x14641Cu;
            goto label_14641c;
        }
    }
    ctx->pc = 0x1463B4u;
label_1463b4:
    // 0x1463b4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1463b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1463b8: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x1463b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1463bc: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1463bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1463c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1463c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1463c4: 0x0  nop
    ctx->pc = 0x1463c4u;
    // NOP
    // 0x1463c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1463c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1463cc: 0x0  nop
    ctx->pc = 0x1463ccu;
    // NOP
    // 0x1463d0: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1463D0u;
    {
        const bool branch_taken_0x1463d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1463d0) {
            ctx->pc = 0x14641Cu;
            goto label_14641c;
        }
    }
    ctx->pc = 0x1463D8u;
    // 0x1463d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1463d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1463dc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1463dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1463e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1463e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1463e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1463e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1463e8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1463e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1463ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1463ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1463f0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1463f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1463f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1463f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1463f8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1463f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1463fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1463fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x146400: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146404: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x146404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x146408: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x146408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14640c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x14640cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146410: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x146410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x146414: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x146414u;
    {
        const bool branch_taken_0x146414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146414) {
            ctx->pc = 0x146500u;
            goto label_146500;
        }
    }
    ctx->pc = 0x14641Cu;
label_14641c:
    // 0x14641c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x14641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146420: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x146420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146424: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x146424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x146428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14642c: 0x0  nop
    ctx->pc = 0x14642cu;
    // NOP
    // 0x146430: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x146430u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146434: 0x0  nop
    ctx->pc = 0x146434u;
    // NOP
    // 0x146438: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x146438u;
    {
        const bool branch_taken_0x146438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146438) {
            ctx->pc = 0x1464A4u;
            goto label_1464a4;
        }
    }
    ctx->pc = 0x146440u;
    // 0x146440: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x146440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146444: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x146444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
    // 0x146448: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x146448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14644c: 0xac831b60  sw          $v1, 0x1B60($a0)
    ctx->pc = 0x14644cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 3));
    // 0x146450: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146454: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x146454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x146458: 0x2c610005  sltiu       $at, $v1, 0x5
    ctx->pc = 0x146458u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x14645c: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x14645Cu;
    {
        const bool branch_taken_0x14645c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14645c) {
            ctx->pc = 0x1464ACu;
            goto label_1464ac;
        }
    }
    ctx->pc = 0x146464u;
    // 0x146464: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x146464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146468: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14646c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14646cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x146470: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146474: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x146474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x146478: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14647c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14647cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146480: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146484: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x146484u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x146488: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14648c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x14648cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x146490: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x146490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x146494: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146498: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x146498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14649c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14649Cu;
    {
        const bool branch_taken_0x14649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14649c) {
            ctx->pc = 0x146500u;
            goto label_146500;
        }
    }
    ctx->pc = 0x1464A4u;
label_1464a4:
    // 0x1464a4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1464a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1464a8: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1464a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_1464ac:
    // 0x1464ac: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1464acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1464b0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1464b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1464b4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1464B4u;
    {
        const bool branch_taken_0x1464b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1464b4) {
            ctx->pc = 0x146500u;
            goto label_146500;
        }
    }
    ctx->pc = 0x1464BCu;
    // 0x1464bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1464bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1464c0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1464c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1464c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1464c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1464c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1464c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1464cc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1464ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1464d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1464d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1464d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1464d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1464d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1464d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1464dc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1464dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1464e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1464e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1464e4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1464e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1464e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1464e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1464ec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1464ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1464f0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1464f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1464f4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1464f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1464f8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1464F8u;
    {
        const bool branch_taken_0x1464f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1464f8) {
            ctx->pc = 0x146500u;
            goto label_146500;
        }
    }
    ctx->pc = 0x146500u;
label_146500:
    // 0x146500: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x146500u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146504: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x146504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14650c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14650cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146510: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x146510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x146514: 0x3e00008  jr          $ra
    ctx->pc = 0x146514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14651Cu;
}
