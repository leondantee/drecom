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

// Function: entry_0020717c
// Address: 0x20717c - 0x2071d4
void entry_0020717c_0x20717c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020717c_0x20717c");
#endif

    switch (ctx->pc) {
        case 0x207188u: goto label_207188;
        case 0x207198u: goto label_207198;
        case 0x2071a8u: goto label_2071a8;
        default: break;
    }

    ctx->pc = 0x20717cu;

    // 0x20717c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x20717cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207180: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x207180u;
    SET_GPR_U32(ctx, 31, 0x207188u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x207180u, 0x207188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207188u;
label_207188:
    // 0x207188: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20718c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20718cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207190: 0xc080f60  jal         func_203D80
    ctx->pc = 0x207190u;
    SET_GPR_U32(ctx, 31, 0x207198u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x207190u, 0x207198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207198u;
label_207198:
    // 0x207198: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x207198u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20719c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x20719cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2071a0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2071A0u;
    SET_GPR_U32(ctx, 31, 0x2071A8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2071A0u, 0x2071A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071A8u;
label_2071a8:
    // 0x2071a8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2071a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2071ac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2071acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2071b0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2071b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2071b4: 0x10600216  beqz        $v1, . + 4 + (0x216 << 2)
    ctx->pc = 0x2071B4u;
    {
        const bool branch_taken_0x2071b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2071b4) {
            ctx->pc = 0x207A10u;
            return;
        }
    }
    ctx->pc = 0x2071BCu;
    // 0x2071bc: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2071bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2071c0: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x2071c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2071c4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2071c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2071c8: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x2071c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2071cc: 0x10000210  b           . + 4 + (0x210 << 2)
    ctx->pc = 0x2071CCu;
    {
        const bool branch_taken_0x2071cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2071cc) {
            ctx->pc = 0x207A10u;
            return;
        }
    }
    ctx->pc = 0x2071D4u;
}
