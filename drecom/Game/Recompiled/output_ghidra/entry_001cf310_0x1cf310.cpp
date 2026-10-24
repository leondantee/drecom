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

// Function: entry_001cf310
// Address: 0x1cf310 - 0x1cf378
void entry_001cf310_0x1cf310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf310_0x1cf310");
#endif

    switch (ctx->pc) {
        case 0x1cf320u: goto label_1cf320;
        case 0x1cf330u: goto label_1cf330;
        case 0x1cf34cu: goto label_1cf34c;
        case 0x1cf35cu: goto label_1cf35c;
        default: break;
    }

    ctx->pc = 0x1cf310u;

    // 0x1cf310: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf314: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cf314u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cf318: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CF318u;
    SET_GPR_U32(ctx, 31, 0x1CF320u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CF318u, 0x1CF320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF320u;
label_1cf320:
    // 0x1cf320: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf324: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cf324u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cf328: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CF328u;
    SET_GPR_U32(ctx, 31, 0x1CF330u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CF328u, 0x1CF330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF330u;
label_1cf330:
    // 0x1cf330: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1cf330u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf334: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cf334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cf338: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1cf338u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf33c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1cf33cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1cf340: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cf340u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cf344: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CF344u;
    SET_GPR_U32(ctx, 31, 0x1CF34Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CF344u, 0x1CF34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF34Cu;
label_1cf34c:
    // 0x1cf34c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1cf34cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf350: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cf350u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cf354: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CF354u;
    SET_GPR_U32(ctx, 31, 0x1CF35Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CF354u, 0x1CF35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF35Cu;
label_1cf35c:
    // 0x1cf35c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf360: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x1cf360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x1cf364: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF364u;
    {
        const bool branch_taken_0x1cf364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf364) {
            ctx->pc = 0x1CF378u;
            return;
        }
    }
    ctx->pc = 0x1CF36Cu;
    // 0x1cf36c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1cf36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cf370: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf374: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cf374u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1cf378u;
}
