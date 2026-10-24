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

// Function: Om8b_R1_wait
// Address: 0x340430 - 0x34052c
void Om8b_R1_wait_0x340430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8b_R1_wait_0x340430");
#endif

    switch (ctx->pc) {
        case 0x340470u: goto label_340470;
        case 0x34049cu: goto label_34049c;
        case 0x3404b8u: goto label_3404b8;
        case 0x3404f4u: goto label_3404f4;
        case 0x34050cu: goto label_34050c;
        case 0x340518u: goto label_340518;
        default: break;
    }

    ctx->pc = 0x340430u;

    // 0x340430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x340430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x340434: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x340434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x340438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x340438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34043c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x34043cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x340440: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340444: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x340444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x340448: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x340448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x34044c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34044cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340450: 0xc46012cc  lwc1        $f0, 0x12CC($v1)
    ctx->pc = 0x340450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340454: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x340454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x340458: 0xe46012cc  swc1        $f0, 0x12CC($v1)
    ctx->pc = 0x340458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4812), bits); }
    // 0x34045c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340460: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x340460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340464: 0xc44c12cc  lwc1        $f12, 0x12CC($v0)
    ctx->pc = 0x340464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x340468: 0xc0d0358  jal         func_340D60
    ctx->pc = 0x340468u;
    SET_GPR_U32(ctx, 31, 0x340470u);
    ctx->pc = 0x340D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340D60u, 0x340468u, 0x340470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340470u;
label_340470:
    // 0x340470: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x340470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340474: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x340474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x340478: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x340478u;
    {
        const bool branch_taken_0x340478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340478) {
            ctx->pc = 0x340490u;
            goto label_340490;
        }
    }
    ctx->pc = 0x340480u;
    // 0x340480: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340484: 0x8c621298  lw          $v0, 0x1298($v1)
    ctx->pc = 0x340484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4760)));
    // 0x340488: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x340488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34048c: 0xac621298  sw          $v0, 0x1298($v1)
    ctx->pc = 0x34048cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4760), GPR_U32(ctx, 2));
label_340490:
    // 0x340490: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x340490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340494: 0xc0d02a8  jal         func_340AA0
    ctx->pc = 0x340494u;
    SET_GPR_U32(ctx, 31, 0x34049Cu);
    ctx->pc = 0x340AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340AA0u, 0x340494u, 0x34049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34049Cu;
label_34049c:
    // 0x34049c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x34049cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3404a0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3404A0u;
    {
        const bool branch_taken_0x3404a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3404a0) {
            ctx->pc = 0x34050Cu;
            goto label_34050c;
        }
    }
    ctx->pc = 0x3404A8u;
    // 0x3404a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3404a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3404ac: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3404acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3404b0: 0xc0d0074  jal         func_3401D0
    ctx->pc = 0x3404B0u;
    SET_GPR_U32(ctx, 31, 0x3404B8u);
    ctx->pc = 0x3401D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3401D0u, 0x3404B0u, 0x3404B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3404B8u;
label_3404b8:
    // 0x3404b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3404b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3404bc: 0x8c431298  lw          $v1, 0x1298($v0)
    ctx->pc = 0x3404bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x3404c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3404c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3404c4: 0x8c421294  lw          $v0, 0x1294($v0)
    ctx->pc = 0x3404c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4756)));
    // 0x3404c8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3404c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3404cc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x3404CCu;
    {
        const bool branch_taken_0x3404cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3404cc) {
            ctx->pc = 0x3404FCu;
            goto label_3404fc;
        }
    }
    ctx->pc = 0x3404D4u;
    // 0x3404d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3404d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3404d8: 0xac401298  sw          $zero, 0x1298($v0)
    ctx->pc = 0x3404d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4760), GPR_U32(ctx, 0));
    // 0x3404dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3404dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3404e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3404e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3404e4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3404e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3404e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3404e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3404ec: 0xc0d00d4  jal         func_340350
    ctx->pc = 0x3404ECu;
    SET_GPR_U32(ctx, 31, 0x3404F4u);
    ctx->pc = 0x340350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340350u, 0x3404ECu, 0x3404F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3404F4u;
label_3404f4:
    // 0x3404f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3404F4u;
    {
        const bool branch_taken_0x3404f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3404f4) {
            ctx->pc = 0x34050Cu;
            goto label_34050c;
        }
    }
    ctx->pc = 0x3404FCu;
label_3404fc:
    // 0x3404fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3404fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340500: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x340500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x340504: 0xc0cfdfc  jal         func_33F7F0
    ctx->pc = 0x340504u;
    SET_GPR_U32(ctx, 31, 0x34050Cu);
    ctx->pc = 0x33F7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F7F0u, 0x340504u, 0x34050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34050Cu;
label_34050c:
    // 0x34050c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34050cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340510: 0xc0cffc8  jal         func_33FF20
    ctx->pc = 0x340510u;
    SET_GPR_U32(ctx, 31, 0x340518u);
    ctx->pc = 0x33FF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FF20u, 0x340510u, 0x340518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340518u;
label_340518:
    // 0x340518: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x340518u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34051c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34051cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340520: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x340520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x340524: 0x3e00008  jr          $ra
    ctx->pc = 0x340524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34052Cu;
}
