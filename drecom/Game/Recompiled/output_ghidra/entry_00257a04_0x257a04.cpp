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

// Function: entry_00257a04
// Address: 0x257a04 - 0x257a84
void entry_00257a04_0x257a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257a04_0x257a04");
#endif

    ctx->pc = 0x257a04u;

    // 0x257a04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257a08: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x257a08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x257a0c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x257a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x257a10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x257a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x257a14: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x257a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257a18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x257a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257a1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x257a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x257a20: 0x8c630204  lw          $v1, 0x204($v1)
    ctx->pc = 0x257a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x257a24: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x257A24u;
    {
        const bool branch_taken_0x257a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257a24) {
            ctx->pc = 0x257A84u;
            return;
        }
    }
    ctx->pc = 0x257A2Cu;
    // 0x257a2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257a30: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x257a30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x257a34: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x257a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x257a38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257a3c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x257a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257a40: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x257a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257a44: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x257a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257a48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257a4c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x257a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x257a50: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x257a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x257a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257a58: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x257a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257a5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x257a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257a60: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x257a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257a64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257a68: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x257a68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x257a6c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x257a6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x257a70: 0x8c84020c  lw          $a0, 0x20C($a0)
    ctx->pc = 0x257a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x257a74: 0x8c650204  lw          $a1, 0x204($v1)
    ctx->pc = 0x257a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x257a78: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x257a78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x257a7c: 0xc06ae00  jal         func_1AB800
    ctx->pc = 0x257A7Cu;
    SET_GPR_U32(ctx, 31, 0x257A84u);
    ctx->pc = 0x1AB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB800u, 0x257A7Cu, 0x257A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A84u;
}
