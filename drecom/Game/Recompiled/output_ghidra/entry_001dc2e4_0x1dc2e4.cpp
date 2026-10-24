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

// Function: entry_001dc2e4
// Address: 0x1dc2e4 - 0x1dc364
void entry_001dc2e4_0x1dc2e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc2e4_0x1dc2e4");
#endif

    ctx->pc = 0x1dc2e4u;

    // 0x1dc2e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc2e8: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x1dc2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc2ec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1dc2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1dc2f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc2f4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1dc2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dc2f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc2fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc300: 0x8c630204  lw          $v1, 0x204($v1)
    ctx->pc = 0x1dc300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x1dc304: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DC304u;
    {
        const bool branch_taken_0x1dc304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc304) {
            ctx->pc = 0x1DC364u;
            return;
        }
    }
    ctx->pc = 0x1DC30Cu;
    // 0x1dc30c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc310: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc310u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc314: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc31c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc320: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc324: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dc324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc328: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc32c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc32cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc330: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc338: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc33c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc340: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dc340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc344: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc348: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc348u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc34c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc34cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc350: 0x8c84020c  lw          $a0, 0x20C($a0)
    ctx->pc = 0x1dc350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1dc354: 0x8c650204  lw          $a1, 0x204($v1)
    ctx->pc = 0x1dc354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x1dc358: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc358u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc35c: 0xc06afa0  jal         func_1ABE80
    ctx->pc = 0x1DC35Cu;
    SET_GPR_U32(ctx, 31, 0x1DC364u);
    ctx->pc = 0x1ABE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE80u, 0x1DC35Cu, 0x1DC364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC364u;
}
