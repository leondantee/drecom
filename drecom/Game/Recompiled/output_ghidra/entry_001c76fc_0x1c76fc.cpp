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

// Function: entry_001c76fc
// Address: 0x1c76fc - 0x1c775c
void entry_001c76fc_0x1c76fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c76fc_0x1c76fc");
#endif

    switch (ctx->pc) {
        case 0x1c770cu: goto label_1c770c;
        case 0x1c771cu: goto label_1c771c;
        case 0x1c7730u: goto label_1c7730;
        case 0x1c7740u: goto label_1c7740;
        default: break;
    }

    ctx->pc = 0x1c76fcu;

    // 0x1c76fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c76fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7700: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c7700u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c7704: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C7704u;
    SET_GPR_U32(ctx, 31, 0x1C770Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C7704u, 0x1C770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C770Cu;
label_1c770c:
    // 0x1c770c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1c770cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7710: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7714: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C7714u;
    SET_GPR_U32(ctx, 31, 0x1C771Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C7714u, 0x1C771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C771Cu;
label_1c771c:
    // 0x1c771c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c771cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c7720: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7724: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c7724u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c7728: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C7728u;
    SET_GPR_U32(ctx, 31, 0x1C7730u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C7728u, 0x1C7730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7730u;
label_1c7730:
    // 0x1c7730: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c7730u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7734: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c7734u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c7738: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C7738u;
    SET_GPR_U32(ctx, 31, 0x1C7740u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C7738u, 0x1C7740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7740u;
label_1c7740:
    // 0x1c7740: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7744: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1c7744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1c7748: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7748u;
    {
        const bool branch_taken_0x1c7748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7748) {
            ctx->pc = 0x1C775Cu;
            return;
        }
    }
    ctx->pc = 0x1C7750u;
    // 0x1c7750: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c7750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c7754: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7758: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c7758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c775cu;
}
