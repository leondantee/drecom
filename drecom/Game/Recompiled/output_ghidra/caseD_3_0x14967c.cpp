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

// Function: caseD_3
// Address: 0x14967c - 0x149720
void caseD_3_0x14967c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x14967c");
#endif

    switch (ctx->pc) {
        case 0x14968cu: goto label_14968c;
        case 0x1496b0u: goto label_1496b0;
        case 0x1496c4u: goto label_1496c4;
        case 0x1496d0u: goto label_1496d0;
        default: break;
    }

    ctx->pc = 0x14967cu;

    // 0x14967c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x14967cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149680: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149680u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x149684: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x149684u;
    SET_GPR_U32(ctx, 31, 0x14968Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149684u, 0x14968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14968Cu;
label_14968c:
    // 0x14968c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x14968cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149690: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x149690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149694: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149698: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x149698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14969c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14969cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1496a0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1496a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1496a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1496a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1496a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1496A8u;
    SET_GPR_U32(ctx, 31, 0x1496B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1496A8u, 0x1496B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1496B0u;
label_1496b0:
    // 0x1496b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1496b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1496b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1496b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1496b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1496b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1496bc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1496BCu;
    SET_GPR_U32(ctx, 31, 0x1496C4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1496BCu, 0x1496C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1496C4u;
label_1496c4:
    // 0x1496c4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1496c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1496c8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1496C8u;
    SET_GPR_U32(ctx, 31, 0x1496D0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1496C8u, 0x1496D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1496D0u;
label_1496d0:
    // 0x1496d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1496d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1496d4: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1496d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1496d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1496d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1496dc: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1496dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1496e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1496e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1496e4: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1496e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1496e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1496e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1496ec: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1496ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1496f0: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x1496F0u;
    {
        const bool branch_taken_0x1496f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1496f0) {
            ctx->pc = 0x149930u;
            return;
        }
    }
    ctx->pc = 0x1496F8u;
    // 0x1496f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1496f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1496fc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1496fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x149700: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x149700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x149704: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x149704u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x149708: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14970c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x14970cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149710: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149714: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x149714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x149718: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x149718u;
    {
        const bool branch_taken_0x149718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149718) {
            ctx->pc = 0x149930u;
            return;
        }
    }
    ctx->pc = 0x149720u;
}
