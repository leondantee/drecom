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

// Function: Om8b_R1_timer_wait
// Address: 0x340530 - 0x34060c
void Om8b_R1_timer_wait_0x340530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8b_R1_timer_wait_0x340530");
#endif

    switch (ctx->pc) {
        case 0x340570u: goto label_340570;
        case 0x34057cu: goto label_34057c;
        case 0x340598u: goto label_340598;
        case 0x3405d4u: goto label_3405d4;
        case 0x3405ecu: goto label_3405ec;
        case 0x3405f8u: goto label_3405f8;
        default: break;
    }

    ctx->pc = 0x340530u;

    // 0x340530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x340530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x340534: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x340534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x340538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x340538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34053c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x34053cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x340540: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340544: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x340544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x340548: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x340548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x34054c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34054cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340550: 0xc46012cc  lwc1        $f0, 0x12CC($v1)
    ctx->pc = 0x340550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340554: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x340554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x340558: 0xe46012cc  swc1        $f0, 0x12CC($v1)
    ctx->pc = 0x340558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4812), bits); }
    // 0x34055c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34055cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340560: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x340560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340564: 0xc44c12cc  lwc1        $f12, 0x12CC($v0)
    ctx->pc = 0x340564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x340568: 0xc0d0358  jal         func_340D60
    ctx->pc = 0x340568u;
    SET_GPR_U32(ctx, 31, 0x340570u);
    ctx->pc = 0x340D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340D60u, 0x340568u, 0x340570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340570u;
label_340570:
    // 0x340570: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x340570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340574: 0xc0d02a8  jal         func_340AA0
    ctx->pc = 0x340574u;
    SET_GPR_U32(ctx, 31, 0x34057Cu);
    ctx->pc = 0x340AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340AA0u, 0x340574u, 0x34057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34057Cu;
label_34057c:
    // 0x34057c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x34057cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x340580: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x340580u;
    {
        const bool branch_taken_0x340580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340580) {
            ctx->pc = 0x3405ECu;
            goto label_3405ec;
        }
    }
    ctx->pc = 0x340588u;
    // 0x340588: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x340588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34058c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x34058cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340590: 0xc0d0074  jal         func_3401D0
    ctx->pc = 0x340590u;
    SET_GPR_U32(ctx, 31, 0x340598u);
    ctx->pc = 0x3401D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3401D0u, 0x340590u, 0x340598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340598u;
label_340598:
    // 0x340598: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x340598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34059c: 0x8c431298  lw          $v1, 0x1298($v0)
    ctx->pc = 0x34059cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x3405a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3405a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3405a4: 0x8c421294  lw          $v0, 0x1294($v0)
    ctx->pc = 0x3405a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4756)));
    // 0x3405a8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3405a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3405ac: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x3405ACu;
    {
        const bool branch_taken_0x3405ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3405ac) {
            ctx->pc = 0x3405DCu;
            goto label_3405dc;
        }
    }
    ctx->pc = 0x3405B4u;
    // 0x3405b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3405b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3405b8: 0xac401298  sw          $zero, 0x1298($v0)
    ctx->pc = 0x3405b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4760), GPR_U32(ctx, 0));
    // 0x3405bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3405bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3405c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3405c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3405c4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3405c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3405c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3405c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3405cc: 0xc0d00d4  jal         func_340350
    ctx->pc = 0x3405CCu;
    SET_GPR_U32(ctx, 31, 0x3405D4u);
    ctx->pc = 0x340350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340350u, 0x3405CCu, 0x3405D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3405D4u;
label_3405d4:
    // 0x3405d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3405D4u;
    {
        const bool branch_taken_0x3405d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3405d4) {
            ctx->pc = 0x3405ECu;
            goto label_3405ec;
        }
    }
    ctx->pc = 0x3405DCu;
label_3405dc:
    // 0x3405dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3405dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3405e0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3405e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3405e4: 0xc0cfdfc  jal         func_33F7F0
    ctx->pc = 0x3405E4u;
    SET_GPR_U32(ctx, 31, 0x3405ECu);
    ctx->pc = 0x33F7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F7F0u, 0x3405E4u, 0x3405ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3405ECu;
label_3405ec:
    // 0x3405ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3405ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3405f0: 0xc0cffc8  jal         func_33FF20
    ctx->pc = 0x3405F0u;
    SET_GPR_U32(ctx, 31, 0x3405F8u);
    ctx->pc = 0x33FF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FF20u, 0x3405F0u, 0x3405F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3405F8u;
label_3405f8:
    // 0x3405f8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3405f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3405fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3405fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340600: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x340600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x340604: 0x3e00008  jr          $ra
    ctx->pc = 0x340604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34060Cu;
}
