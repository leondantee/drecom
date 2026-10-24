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

// Function: entry_0014669c
// Address: 0x14669c - 0x14674c
void entry_0014669c_0x14669c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014669c_0x14669c");
#endif

    switch (ctx->pc) {
        case 0x1466c0u: goto label_1466c0;
        case 0x1466d8u: goto label_1466d8;
        case 0x1466f0u: goto label_1466f0;
        case 0x146704u: goto label_146704;
        case 0x146714u: goto label_146714;
        default: break;
    }

    ctx->pc = 0x14669cu;

    // 0x14669c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14669cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1466a0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1466a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1466a4: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1466a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1466a8: 0x34460fdb  ori         $a2, $v0, 0xFDB
    ctx->pc = 0x1466a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1466ac: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x1466acu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1466b0: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1466b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1466b4: 0xc4ad00d4  lwc1        $f13, 0xD4($a1)
    ctx->pc = 0x1466b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1466b8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1466B8u;
    SET_GPR_U32(ctx, 31, 0x1466C0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1466B8u, 0x1466C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466C0u;
label_1466c0:
    // 0x1466c0: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1466c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1466c4: 0xe50000d4  swc1        $f0, 0xD4($t0)
    ctx->pc = 0x1466c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 212), bits); }
    // 0x1466c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1466c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1466cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1466ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1466d0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1466D0u;
    SET_GPR_U32(ctx, 31, 0x1466D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1466D0u, 0x1466D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466D8u;
label_1466d8:
    // 0x1466d8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1466d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1466dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1466dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1466e0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1466e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1466e4: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1466e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1466e8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1466E8u;
    SET_GPR_U32(ctx, 31, 0x1466F0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1466E8u, 0x1466F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466F0u;
label_1466f0:
    // 0x1466f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1466f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1466f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1466f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1466f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1466f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1466fc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1466FCu;
    SET_GPR_U32(ctx, 31, 0x146704u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1466FCu, 0x146704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146704u;
label_146704:
    // 0x146704: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146704u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146708: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x146708u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14670c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14670Cu;
    SET_GPR_U32(ctx, 31, 0x146714u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14670Cu, 0x146714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146714u;
label_146714:
    // 0x146714: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146714u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146718: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14671c: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x14671cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x146720: 0x106003b9  beqz        $v1, . + 4 + (0x3B9 << 2)
    ctx->pc = 0x146720u;
    {
        const bool branch_taken_0x146720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146720) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146728u;
    // 0x146728: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14672c: 0xc4a01290  lwc1        $f0, 0x1290($a1)
    ctx->pc = 0x14672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146730: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x146730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146734: 0xe4c000d4  swc1        $f0, 0xD4($a2)
    ctx->pc = 0x146734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 212), bits); }
    // 0x146738: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x146738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14673c: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x14673cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146740: 0xa1070002  sb          $a3, 0x2($t0)
    ctx->pc = 0x146740u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x146744: 0x100003b0  b           . + 4 + (0x3B0 << 2)
    ctx->pc = 0x146744u;
    {
        const bool branch_taken_0x146744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146744) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x14674Cu;
}
