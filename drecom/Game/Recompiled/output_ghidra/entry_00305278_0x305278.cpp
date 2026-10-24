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

// Function: entry_00305278
// Address: 0x305278 - 0x3052f0
void entry_00305278_0x305278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00305278_0x305278");
#endif

    switch (ctx->pc) {
        case 0x305288u: goto label_305288;
        case 0x305294u: goto label_305294;
        case 0x3052a4u: goto label_3052a4;
        case 0x3052b0u: goto label_3052b0;
        default: break;
    }

    ctx->pc = 0x305278u;

    // 0x305278: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30527c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30527cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305280: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x305280u;
    SET_GPR_U32(ctx, 31, 0x305288u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x305280u, 0x305288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305288u;
label_305288:
    // 0x305288: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30528c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30528Cu;
    SET_GPR_U32(ctx, 31, 0x305294u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30528Cu, 0x305294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305294u;
label_305294:
    // 0x305294: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305298: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305298u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30529c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30529Cu;
    SET_GPR_U32(ctx, 31, 0x3052A4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30529Cu, 0x3052A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3052A4u;
label_3052a4:
    // 0x3052a4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x3052a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3052a8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3052A8u;
    SET_GPR_U32(ctx, 31, 0x3052B0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3052A8u, 0x3052B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3052B0u;
label_3052b0:
    // 0x3052b0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3052b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3052b4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3052b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3052b8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3052B8u;
    {
        const bool branch_taken_0x3052b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3052b8) {
            ctx->pc = 0x3052F0u;
            return;
        }
    }
    ctx->pc = 0x3052C0u;
    // 0x3052c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3052c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3052c4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3052c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3052c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3052c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3052cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3052ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3052d0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3052d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3052d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3052d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3052d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3052d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3052dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3052dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3052e0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3052e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3052e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3052e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3052e8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3052e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3052ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3052ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3052f0u;
}
