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

// Function: Om8b_hit
// Address: 0x3401d0 - 0x34034c
void Om8b_hit_0x3401d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8b_hit_0x3401d0");
#endif

    switch (ctx->pc) {
        case 0x3402fcu: goto label_3402fc;
        case 0x340320u: goto label_340320;
        case 0x340338u: goto label_340338;
        default: break;
    }

    ctx->pc = 0x3401d0u;

    // 0x3401d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3401d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3401d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3401d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3401d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3401d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3401dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x3401dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x3401e0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x3401e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x3401e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3401e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3401e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3401e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3401ec: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x3401ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x3401f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3401f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3401f4: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x3401f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x3401f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3401f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3401fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3401fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x340200: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x340200u;
    {
        const bool branch_taken_0x340200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x340200) {
            ctx->pc = 0x34021Cu;
            goto label_34021c;
        }
    }
    ctx->pc = 0x340208u;
    // 0x340208: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x340208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x34020c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x34020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340210: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x340210u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x340214: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x340214u;
    {
        const bool branch_taken_0x340214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340214) {
            ctx->pc = 0x340228u;
            goto label_340228;
        }
    }
    ctx->pc = 0x34021Cu;
label_34021c:
    // 0x34021c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x34021cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x340220: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x340220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340224: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x340224u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_340228:
    // 0x340228: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34022c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34022cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340230: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x340230u;
    {
        const bool branch_taken_0x340230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x340230) {
            ctx->pc = 0x340244u;
            goto label_340244;
        }
    }
    ctx->pc = 0x340238u;
    // 0x340238: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x340238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34023c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x34023Cu;
    {
        const bool branch_taken_0x34023c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34023c) {
            ctx->pc = 0x3402ACu;
            goto label_3402ac;
        }
    }
    ctx->pc = 0x340244u;
label_340244:
    // 0x340244: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340248: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x340248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34024c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34024Cu;
    {
        const bool branch_taken_0x34024c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34024c) {
            ctx->pc = 0x340260u;
            goto label_340260;
        }
    }
    ctx->pc = 0x340254u;
    // 0x340254: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x340254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340258: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x340258u;
    {
        const bool branch_taken_0x340258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340258) {
            ctx->pc = 0x3402ACu;
            goto label_3402ac;
        }
    }
    ctx->pc = 0x340260u;
label_340260:
    // 0x340260: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340264: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x340264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x340268: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x340268u;
    {
        const bool branch_taken_0x340268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x340268) {
            ctx->pc = 0x34027Cu;
            goto label_34027c;
        }
    }
    ctx->pc = 0x340270u;
    // 0x340270: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x340270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x340274: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x340274u;
    {
        const bool branch_taken_0x340274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340274) {
            ctx->pc = 0x3402ACu;
            goto label_3402ac;
        }
    }
    ctx->pc = 0x34027Cu;
label_34027c:
    // 0x34027c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34027cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340280: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x340280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340284: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x340284u;
    {
        const bool branch_taken_0x340284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x340284) {
            ctx->pc = 0x340298u;
            goto label_340298;
        }
    }
    ctx->pc = 0x34028Cu;
    // 0x34028c: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x34028cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340290: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x340290u;
    {
        const bool branch_taken_0x340290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340290) {
            ctx->pc = 0x3402ACu;
            goto label_3402ac;
        }
    }
    ctx->pc = 0x340298u;
label_340298:
    // 0x340298: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34029c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x34029cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3402a0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3402A0u;
    {
        const bool branch_taken_0x3402a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3402a0) {
            ctx->pc = 0x3402ACu;
            goto label_3402ac;
        }
    }
    ctx->pc = 0x3402A8u;
    // 0x3402a8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3402a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3402ac:
    // 0x3402ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3402acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3402b0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3402b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3402b4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3402b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3402b8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3402b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3402bc: 0x8c821298  lw          $v0, 0x1298($a0)
    ctx->pc = 0x3402bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4760)));
    // 0x3402c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3402c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3402c4: 0xac821298  sw          $v0, 0x1298($a0)
    ctx->pc = 0x3402c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4760), GPR_U32(ctx, 2));
    // 0x3402c8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x3402c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x3402cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3402ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3402d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3402d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3402d4: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x3402d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x3402d8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3402d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3402dc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3402dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3402e0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3402e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3402e4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3402e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3402e8: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3402e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3402ec: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x3402ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3402f0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x3402f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3402f4: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x3402F4u;
    SET_GPR_U32(ctx, 31, 0x3402FCu);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x3402F4u, 0x3402FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3402FCu;
label_3402fc:
    // 0x3402fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3402fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340300: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x340300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x340304: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x340304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x340308: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x340308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34030c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x34030cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x340310: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x340310u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x340314: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x340314u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x340318: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340318u;
    SET_GPR_U32(ctx, 31, 0x340320u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340318u, 0x340320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340320u;
label_340320:
    // 0x340320: 0x24040420  addiu       $a0, $zero, 0x420
    ctx->pc = 0x340320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x340324: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x340324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x340328: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x340328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34032c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x34032cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x340330: 0xc067c24  jal         func_19F090
    ctx->pc = 0x340330u;
    SET_GPR_U32(ctx, 31, 0x340338u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x340330u, 0x340338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340338u;
label_340338:
    // 0x340338: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x340338u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34033c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34033cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340340: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x340340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x340344: 0x3e00008  jr          $ra
    ctx->pc = 0x340344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34034Cu;
}
