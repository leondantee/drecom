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

// Function: caseD_6
// Address: 0x23381c - 0x2338ac
void caseD_6_0x23381c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x23381c");
#endif

    switch (ctx->pc) {
        case 0x23383cu: goto label_23383c;
        case 0x233868u: goto label_233868;
        case 0x233880u: goto label_233880;
        default: break;
    }

    ctx->pc = 0x23381cu;

    // 0x23381c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x23381cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233820: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x233820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x233824: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x233824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x233828: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x233828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23382c: 0x0  nop
    ctx->pc = 0x23382cu;
    // NOP
    // 0x233830: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x233830u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x233834: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x233834u;
    SET_GPR_U32(ctx, 31, 0x23383Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x233834u, 0x23383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23383Cu;
label_23383c:
    // 0x23383c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x23383cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233840: 0xe4801290  swc1        $f0, 0x1290($a0)
    ctx->pc = 0x233840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4752), bits); }
    // 0x233844: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x233844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233848: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x233848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23384c: 0x3c083e49  lui         $t0, 0x3E49
    ctx->pc = 0x23384cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15945 << 16));
    // 0x233850: 0x35070fdb  ori         $a3, $t0, 0xFDB
    ctx->pc = 0x233850u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4059);
    // 0x233854: 0x44877000  mtc1        $a3, $f14
    ctx->pc = 0x233854u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x233858: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x233858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23385c: 0xc4cd00d4  lwc1        $f13, 0xD4($a2)
    ctx->pc = 0x23385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x233860: 0xc058f50  jal         func_163D40
    ctx->pc = 0x233860u;
    SET_GPR_U32(ctx, 31, 0x233868u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x233860u, 0x233868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233868u;
label_233868:
    // 0x233868: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x233868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23386c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23386cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x233870: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233874: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x233874u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x233878: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x233878u;
    SET_GPR_U32(ctx, 31, 0x233880u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x233878u, 0x233880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233880u;
label_233880:
    // 0x233880: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x233880u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x233884: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x233884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233888: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x233888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x23388c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x23388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x233890: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x233890u;
    {
        const bool branch_taken_0x233890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233890) {
            ctx->pc = 0x2338ACu;
            return;
        }
    }
    ctx->pc = 0x233898u;
    // 0x233898: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23389c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x23389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2338a0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x2338a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2338a4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x2338A4u;
    SET_GPR_U32(ctx, 31, 0x2338ACu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2338A4u, 0x2338ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338ACu;
}
