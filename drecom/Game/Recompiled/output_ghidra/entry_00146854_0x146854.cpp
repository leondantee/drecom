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

// Function: entry_00146854
// Address: 0x146854 - 0x1468fc
void entry_00146854_0x146854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146854_0x146854");
#endif

    switch (ctx->pc) {
        case 0x146878u: goto label_146878;
        case 0x146894u: goto label_146894;
        case 0x1468a8u: goto label_1468a8;
        case 0x1468bcu: goto label_1468bc;
        case 0x1468c8u: goto label_1468c8;
        default: break;
    }

    ctx->pc = 0x146854u;

    // 0x146854: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146858: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14685c: 0x3c063e49  lui         $a2, 0x3E49
    ctx->pc = 0x14685cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15945 << 16));
    // 0x146860: 0x34c50fdb  ori         $a1, $a2, 0xFDB
    ctx->pc = 0x146860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4059);
    // 0x146864: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x146864u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x146868: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x146868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14686c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14686cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x146870: 0xc058f50  jal         func_163D40
    ctx->pc = 0x146870u;
    SET_GPR_U32(ctx, 31, 0x146878u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x146870u, 0x146878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146878u;
label_146878:
    // 0x146878: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x146878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14687c: 0xe4e000d4  swc1        $f0, 0xD4($a3)
    ctx->pc = 0x14687cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 212), bits); }
    // 0x146880: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x146880u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146884: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x146884u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x146888: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146888u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14688c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14688Cu;
    SET_GPR_U32(ctx, 31, 0x146894u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14688Cu, 0x146894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146894u;
label_146894:
    // 0x146894: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146898: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14689c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1468a0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1468A0u;
    SET_GPR_U32(ctx, 31, 0x1468A8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1468A0u, 0x1468A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1468A8u;
label_1468a8:
    // 0x1468a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1468a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1468ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1468acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1468b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1468b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1468b4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1468B4u;
    SET_GPR_U32(ctx, 31, 0x1468BCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1468B4u, 0x1468BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1468BCu;
label_1468bc:
    // 0x1468bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1468bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1468c0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1468C0u;
    SET_GPR_U32(ctx, 31, 0x1468C8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1468C0u, 0x1468C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1468C8u;
label_1468c8:
    // 0x1468c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1468c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1468cc: 0x908509e7  lbu         $a1, 0x9E7($a0)
    ctx->pc = 0x1468ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x1468d0: 0x10a0034d  beqz        $a1, . + 4 + (0x34D << 2)
    ctx->pc = 0x1468D0u;
    {
        const bool branch_taken_0x1468d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1468d0) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x1468D8u;
    // 0x1468d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1468d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1468dc: 0xc4601290  lwc1        $f0, 0x1290($v1)
    ctx->pc = 0x1468dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1468e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1468e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1468e4: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1468e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1468e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1468e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1468ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1468ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1468f0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1468f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1468f4: 0x10000344  b           . + 4 + (0x344 << 2)
    ctx->pc = 0x1468F4u;
    {
        const bool branch_taken_0x1468f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1468f4) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x1468FCu;
}
