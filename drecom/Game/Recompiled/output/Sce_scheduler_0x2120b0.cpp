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

// Function: Sce_scheduler
// Address: 0x2120b0 - 0x212210
void Sce_scheduler_0x2120b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_scheduler_0x2120b0");
#endif

    switch (ctx->pc) {
        case 0x2120b0u: goto label_2120b0;
        case 0x2120b4u: goto label_2120b4;
        case 0x2120b8u: goto label_2120b8;
        case 0x2120bcu: goto label_2120bc;
        case 0x2120c0u: goto label_2120c0;
        case 0x2120c4u: goto label_2120c4;
        case 0x2120c8u: goto label_2120c8;
        case 0x2120ccu: goto label_2120cc;
        case 0x2120d0u: goto label_2120d0;
        case 0x2120d4u: goto label_2120d4;
        case 0x2120d8u: goto label_2120d8;
        case 0x2120dcu: goto label_2120dc;
        case 0x2120e0u: goto label_2120e0;
        case 0x2120e4u: goto label_2120e4;
        case 0x2120e8u: goto label_2120e8;
        case 0x2120ecu: goto label_2120ec;
        case 0x2120f0u: goto label_2120f0;
        case 0x2120f4u: goto label_2120f4;
        case 0x2120f8u: goto label_2120f8;
        case 0x2120fcu: goto label_2120fc;
        case 0x212100u: goto label_212100;
        case 0x212104u: goto label_212104;
        case 0x212108u: goto label_212108;
        case 0x21210cu: goto label_21210c;
        case 0x212110u: goto label_212110;
        case 0x212114u: goto label_212114;
        case 0x212118u: goto label_212118;
        case 0x21211cu: goto label_21211c;
        case 0x212120u: goto label_212120;
        case 0x212124u: goto label_212124;
        case 0x212128u: goto label_212128;
        case 0x21212cu: goto label_21212c;
        case 0x212130u: goto label_212130;
        case 0x212134u: goto label_212134;
        case 0x212138u: goto label_212138;
        case 0x21213cu: goto label_21213c;
        case 0x212140u: goto label_212140;
        case 0x212144u: goto label_212144;
        case 0x212148u: goto label_212148;
        case 0x21214cu: goto label_21214c;
        case 0x212150u: goto label_212150;
        case 0x212154u: goto label_212154;
        case 0x212158u: goto label_212158;
        case 0x21215cu: goto label_21215c;
        case 0x212160u: goto label_212160;
        case 0x212164u: goto label_212164;
        case 0x212168u: goto label_212168;
        case 0x21216cu: goto label_21216c;
        case 0x212170u: goto label_212170;
        case 0x212174u: goto label_212174;
        case 0x212178u: goto label_212178;
        case 0x21217cu: goto label_21217c;
        case 0x212180u: goto label_212180;
        case 0x212184u: goto label_212184;
        case 0x212188u: goto label_212188;
        case 0x21218cu: goto label_21218c;
        case 0x212190u: goto label_212190;
        case 0x212194u: goto label_212194;
        case 0x212198u: goto label_212198;
        case 0x21219cu: goto label_21219c;
        case 0x2121a0u: goto label_2121a0;
        case 0x2121a4u: goto label_2121a4;
        case 0x2121a8u: goto label_2121a8;
        case 0x2121acu: goto label_2121ac;
        case 0x2121b0u: goto label_2121b0;
        case 0x2121b4u: goto label_2121b4;
        case 0x2121b8u: goto label_2121b8;
        case 0x2121bcu: goto label_2121bc;
        case 0x2121c0u: goto label_2121c0;
        case 0x2121c4u: goto label_2121c4;
        case 0x2121c8u: goto label_2121c8;
        case 0x2121ccu: goto label_2121cc;
        case 0x2121d0u: goto label_2121d0;
        case 0x2121d4u: goto label_2121d4;
        case 0x2121d8u: goto label_2121d8;
        case 0x2121dcu: goto label_2121dc;
        case 0x2121e0u: goto label_2121e0;
        case 0x2121e4u: goto label_2121e4;
        case 0x2121e8u: goto label_2121e8;
        case 0x2121ecu: goto label_2121ec;
        case 0x2121f0u: goto label_2121f0;
        case 0x2121f4u: goto label_2121f4;
        case 0x2121f8u: goto label_2121f8;
        case 0x2121fcu: goto label_2121fc;
        case 0x212200u: goto label_212200;
        case 0x212204u: goto label_212204;
        case 0x212208u: goto label_212208;
        case 0x21220cu: goto label_21220c;
        default: break;
    }

    ctx->pc = 0x2120b0u;

label_2120b0:
    // 0x2120b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2120b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2120b4:
    // 0x2120b4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2120b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_2120b8:
    // 0x2120b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2120b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2120bc:
    // 0x2120bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2120bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2120c0:
    // 0x2120c0: 0xc084818  jal         func_212060
label_2120c4:
    if (ctx->pc == 0x2120C4u) {
        ctx->pc = 0x2120C8u;
        goto label_2120c8;
    }
    ctx->pc = 0x2120C0u;
    SET_GPR_U32(ctx, 31, 0x2120C8u);
    ctx->pc = 0x212060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212060u, 0x2120C0u, 0x2120C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2120C8u;
label_2120c8:
    // 0x2120c8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2120c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_2120cc:
    // 0x2120cc: 0x247095d0  addiu       $s0, $v1, -0x6A30
    ctx->pc = 0x2120ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940112));
label_2120d0:
    // 0x2120d0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2120d0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2120d4:
    // 0x2120d4: 0x10000012  b           . + 4 + (0x12 << 2)
label_2120d8:
    if (ctx->pc == 0x2120D8u) {
        ctx->pc = 0x2120DCu;
        goto label_2120dc;
    }
    ctx->pc = 0x2120D4u;
    {
        const bool branch_taken_0x2120d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2120d4) {
            ctx->pc = 0x212120u;
            goto label_212120;
        }
    }
    ctx->pc = 0x2120DCu;
label_2120dc:
    // 0x2120dc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2120dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2120e0:
    // 0x2120e0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_2120e4:
    if (ctx->pc == 0x2120E4u) {
        ctx->pc = 0x2120E8u;
        goto label_2120e8;
    }
    ctx->pc = 0x2120E0u;
    {
        const bool branch_taken_0x2120e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2120e0) {
            ctx->pc = 0x212118u;
            goto label_212118;
        }
    }
    ctx->pc = 0x2120E8u;
label_2120e8:
    // 0x2120e8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2120e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2120ec:
    // 0x2120ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2120ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2120f0:
    // 0x2120f0: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2120f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_2120f4:
    // 0x2120f4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2120f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2120f8:
    // 0x2120f8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2120f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2120fc:
    // 0x2120fc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_212100:
    if (ctx->pc == 0x212100u) {
        ctx->pc = 0x212104u;
        goto label_212104;
    }
    ctx->pc = 0x2120FCu;
    {
        const bool branch_taken_0x2120fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2120fc) {
            ctx->pc = 0x212118u;
            goto label_212118;
        }
    }
    ctx->pc = 0x212104u;
label_212104:
    // 0x212104: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x212104u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_212108:
    // 0x212108: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x212108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_21210c:
    // 0x21210c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21210cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_212110:
    // 0x212110: 0xc0848cc  jal         func_212330
label_212114:
    if (ctx->pc == 0x212114u) {
        ctx->pc = 0x212118u;
        goto label_212118;
    }
    ctx->pc = 0x212110u;
    SET_GPR_U32(ctx, 31, 0x212118u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x212110u, 0x212118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212118u;
label_212118:
    // 0x212118: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x212118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_21211c:
    // 0x21211c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21211cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_212120:
    // 0x212120: 0x2e230020  sltiu       $v1, $s1, 0x20
    ctx->pc = 0x212120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_212124:
    // 0x212124: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_212128:
    if (ctx->pc == 0x212128u) {
        ctx->pc = 0x21212Cu;
        goto label_21212c;
    }
    ctx->pc = 0x212124u;
    {
        const bool branch_taken_0x212124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x212124) {
            ctx->pc = 0x2120DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2120dc;
        }
    }
    ctx->pc = 0x21212Cu;
label_21212c:
    // 0x21212c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x21212cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_212130:
    // 0x212130: 0x8c241a40  lw          $a0, 0x1A40($at)
    ctx->pc = 0x212130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6720)));
label_212134:
    // 0x212134: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x212134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_212138:
    // 0x212138: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x212138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_21213c:
    // 0x21213c: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
label_212140:
    if (ctx->pc == 0x212140u) {
        ctx->pc = 0x212144u;
        goto label_212144;
    }
    ctx->pc = 0x21213Cu;
    {
        const bool branch_taken_0x21213c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21213c) {
            ctx->pc = 0x2121F8u;
            goto label_2121f8;
        }
    }
    ctx->pc = 0x212144u;
label_212144:
    // 0x212144: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x212144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_212148:
    // 0x212148: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x212148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 104)));
label_21214c:
    // 0x21214c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x21214cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_212150:
    // 0x212150: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x212150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_212154:
    // 0x212154: 0x2442aa90  addiu       $v0, $v0, -0x5570
    ctx->pc = 0x212154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945424));
label_212158:
    // 0x212158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21215c:
    // 0x21215c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_212160:
    // 0x212160: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_212164:
    if (ctx->pc == 0x212164u) {
        ctx->pc = 0x212168u;
        goto label_212168;
    }
    ctx->pc = 0x212160u;
    {
        const bool branch_taken_0x212160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212160) {
            ctx->pc = 0x2121E8u;
            goto label_2121e8;
        }
    }
    ctx->pc = 0x212168u;
label_212168:
    // 0x212168: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x212168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_21216c:
    // 0x21216c: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x21216cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 104)));
label_212170:
    // 0x212170: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x212170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_212174:
    // 0x212174: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x212174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_212178:
    // 0x212178: 0x2442aa90  addiu       $v0, $v0, -0x5570
    ctx->pc = 0x212178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945424));
label_21217c:
    // 0x21217c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x21217cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_212180:
    // 0x212180: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x212180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_212184:
    // 0x212184: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x212184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 108)));
label_212188:
    // 0x212188: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x212188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_21218c:
    // 0x21218c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_212190:
    // 0x212190: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x212190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_212194:
    // 0x212194: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x212194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_212198:
    // 0x212198: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21219c:
    // 0x21219c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2121a0:
    // 0x2121a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2121a4:
    if (ctx->pc == 0x2121A4u) {
        ctx->pc = 0x2121A8u;
        goto label_2121a8;
    }
    ctx->pc = 0x2121A0u;
    {
        const bool branch_taken_0x2121a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2121a0) {
            ctx->pc = 0x2121E8u;
            goto label_2121e8;
        }
    }
    ctx->pc = 0x2121A8u;
label_2121a8:
    // 0x2121a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2121a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2121ac:
    // 0x2121ac: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x2121acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 104)));
label_2121b0:
    // 0x2121b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2121b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2121b4:
    // 0x2121b4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2121b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2121b8:
    // 0x2121b8: 0x2442aa90  addiu       $v0, $v0, -0x5570
    ctx->pc = 0x2121b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945424));
label_2121bc:
    // 0x2121bc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2121bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2121c0:
    // 0x2121c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2121c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2121c4:
    // 0x2121c4: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x2121c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 108)));
label_2121c8:
    // 0x2121c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2121c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2121cc:
    // 0x2121cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2121ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2121d0:
    // 0x2121d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2121d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2121d4:
    // 0x2121d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2121d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2121d8:
    // 0x2121d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2121d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2121dc:
    // 0x2121dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2121dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2121e0:
    // 0x2121e0: 0x40f809  jalr        $v0
label_2121e4:
    if (ctx->pc == 0x2121E4u) {
        ctx->pc = 0x2121E8u;
        goto label_2121e8;
    }
    ctx->pc = 0x2121E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2121E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2121E0u, 0x2121E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2121E8u;
label_2121e8:
    // 0x2121e8: 0xc084884  jal         func_212210
label_2121ec:
    if (ctx->pc == 0x2121ECu) {
        ctx->pc = 0x2121F0u;
        goto label_2121f0;
    }
    ctx->pc = 0x2121E8u;
    SET_GPR_U32(ctx, 31, 0x2121F0u);
    ctx->pc = 0x212210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212210u, 0x2121E8u, 0x2121F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2121F0u;
label_2121f0:
    // 0x2121f0: 0xc08481c  jal         func_212070
label_2121f4:
    if (ctx->pc == 0x2121F4u) {
        ctx->pc = 0x2121F8u;
        goto label_2121f8;
    }
    ctx->pc = 0x2121F0u;
    SET_GPR_U32(ctx, 31, 0x2121F8u);
    ctx->pc = 0x212070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212070u, 0x2121F0u, 0x2121F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2121F8u;
label_2121f8:
    // 0x2121f8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2121f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2121fc:
    // 0x2121fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2121fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_212200:
    // 0x212200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x212200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_212204:
    // 0x212204: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x212204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_212208:
    // 0x212208: 0x3e00008  jr          $ra
label_21220c:
    if (ctx->pc == 0x21220Cu) {
        ctx->pc = 0x212210u;
        goto label_fallthrough_0x212208;
    }
    ctx->pc = 0x212208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x212208:
    ctx->pc = 0x212210u;
}
