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

// Function: entry_0026b778
// Address: 0x26b778 - 0x26b7ac
void entry_0026b778_0x26b778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026b778_0x26b778");
#endif

    switch (ctx->pc) {
        case 0x26b784u: goto label_26b784;
        default: break;
    }

    ctx->pc = 0x26b778u;

    // 0x26b778: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26b778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26b77c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26B77Cu;
    SET_GPR_U32(ctx, 31, 0x26B784u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26B77Cu, 0x26B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B784u;
label_26b784:
    // 0x26b784: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b788: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26b788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26b78c: 0x106001d3  beqz        $v1, . + 4 + (0x1D3 << 2)
    ctx->pc = 0x26B78Cu;
    {
        const bool branch_taken_0x26b78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b78c) {
            ctx->pc = 0x26BEDCu;
            return;
        }
    }
    ctx->pc = 0x26B794u;
    // 0x26b794: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x26b794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b798: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x26b798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x26b79c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x26b79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26b7a0: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x26b7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x26b7a4: 0x100001cd  b           . + 4 + (0x1CD << 2)
    ctx->pc = 0x26B7A4u;
    {
        const bool branch_taken_0x26b7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b7a4) {
            ctx->pc = 0x26BEDCu;
            return;
        }
    }
    ctx->pc = 0x26B7ACu;
}
