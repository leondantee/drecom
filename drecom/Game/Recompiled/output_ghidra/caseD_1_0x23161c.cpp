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

// Function: caseD_1
// Address: 0x23161c - 0x2316f4
void caseD_1_0x23161c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x23161c");
#endif

    switch (ctx->pc) {
        case 0x231628u: goto label_231628;
        case 0x231650u: goto label_231650;
        case 0x231670u: goto label_231670;
        case 0x23168cu: goto label_23168c;
        case 0x2316bcu: goto label_2316bc;
        default: break;
    }

    ctx->pc = 0x23161cu;

    // 0x23161c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x23161cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x231620: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x231620u;
    SET_GPR_U32(ctx, 31, 0x231628u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x231628u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231628u) { return; }
    ctx->pc = 0x231628u;
label_231628:
    // 0x231628: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x231628u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23162c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23162cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231630: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x231630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231634: 0x3c023f1c  lui         $v0, 0x3F1C
    ctx->pc = 0x231634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16156 << 16));
    // 0x231638: 0x345661aa  ori         $s6, $v0, 0x61AA
    ctx->pc = 0x231638u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25002);
    // 0x23163c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x23163cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231640: 0x0  nop
    ctx->pc = 0x231640u;
    // NOP
    // 0x231644: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x231644u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x231648: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x231648u;
    SET_GPR_U32(ctx, 31, 0x231650u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x231648u, 0x231650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231650u;
label_231650:
    // 0x231650: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231654: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x231654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x231658: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23165c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x23165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x231660: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x231660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x231664: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x231664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x231668: 0xc040ce4  jal         func_103390
    ctx->pc = 0x231668u;
    SET_GPR_U32(ctx, 31, 0x231670u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x231670u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231670u) { return; }
    ctx->pc = 0x231670u;
label_231670:
    // 0x231670: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231674: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x231674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x231678: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x231678u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x23167c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x23167cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x231680: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x231680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x231684: 0xc040d0e  jal         func_103438
    ctx->pc = 0x231684u;
    SET_GPR_U32(ctx, 31, 0x23168Cu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x23168Cu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23168Cu) { return; }
    ctx->pc = 0x23168Cu;
label_23168c:
    // 0x23168c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23168cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231690: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231694: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x231694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x231698: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x231698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23169c: 0xc44d000c  lwc1        $f13, 0xC($v0)
    ctx->pc = 0x23169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2316a0: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x2316a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2316a4: 0xc7ae01c0  lwc1        $f14, 0x1C0($sp)
    ctx->pc = 0x2316a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2316a8: 0xc7af01c4  lwc1        $f15, 0x1C4($sp)
    ctx->pc = 0x2316a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2316ac: 0x27a601b8  addiu       $a2, $sp, 0x1B8
    ctx->pc = 0x2316acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x2316b0: 0x27a701bc  addiu       $a3, $sp, 0x1BC
    ctx->pc = 0x2316b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x2316b4: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x2316B4u;
    SET_GPR_U32(ctx, 31, 0x2316BCu);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x2316B4u, 0x2316BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2316BCu;
label_2316bc:
    // 0x2316bc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2316bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2316c0: 0x8482002c  lh          $v0, 0x2C($a0)
    ctx->pc = 0x2316c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2316c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2316C4u;
    {
        const bool branch_taken_0x2316c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2316c4) {
            ctx->pc = 0x2316F4u;
            return;
        }
    }
    ctx->pc = 0x2316CCu;
    // 0x2316cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2316ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2316d0: 0x0  nop
    ctx->pc = 0x2316d0u;
    // NOP
    // 0x2316d4: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2316d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2316d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2316d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2316dc: 0x0  nop
    ctx->pc = 0x2316dcu;
    // NOP
    // 0x2316e0: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x2316e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x2316e4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2316e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2316e8: 0x8444002c  lh          $a0, 0x2C($v0)
    ctx->pc = 0x2316e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2316ec: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x2316ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2316f0: 0xa445002c  sh          $a1, 0x2C($v0)
    ctx->pc = 0x2316f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x2316f4u;
}
