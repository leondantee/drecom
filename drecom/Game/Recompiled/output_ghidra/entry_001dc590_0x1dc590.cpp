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

// Function: entry_001dc590
// Address: 0x1dc590 - 0x1dc60c
void entry_001dc590_0x1dc590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc590_0x1dc590");
#endif

    ctx->pc = 0x1dc590u;

    // 0x1dc590: 0x8e23133c  lw          $v1, 0x133C($s1)
    ctx->pc = 0x1dc590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4924)));
    // 0x1dc594: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1dc594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1dc598: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DC598u;
    {
        const bool branch_taken_0x1dc598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc598) {
            ctx->pc = 0x1DC60Cu;
            return;
        }
    }
    ctx->pc = 0x1DC5A0u;
    // 0x1dc5a0: 0x8e241248  lw          $a0, 0x1248($s1)
    ctx->pc = 0x1dc5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4680)));
    // 0x1dc5a4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1dc5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1dc5a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc5ac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1dc5acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1dc5b0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1dc5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1dc5b4: 0x2463c100  addiu       $v1, $v1, -0x3F00
    ctx->pc = 0x1dc5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951168));
    // 0x1dc5b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc5bc: 0x24730074  addiu       $s3, $v1, 0x74
    ctx->pc = 0x1dc5bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
    // 0x1dc5c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1dc5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dc5c4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DC5C4u;
    {
        const bool branch_taken_0x1dc5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc5c4) {
            ctx->pc = 0x1DC60Cu;
            return;
        }
    }
    ctx->pc = 0x1DC5CCu;
    // 0x1dc5cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc5d0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc5d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc5d8: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x1dc5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dc5dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc5e0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc5e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc5e8: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1dc5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dc5ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc5f0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc5f4: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc5f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc5f8: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x1dc5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dc5fc: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x1dc5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1dc600: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc600u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc604: 0xc06afa0  jal         func_1ABE80
    ctx->pc = 0x1DC604u;
    SET_GPR_U32(ctx, 31, 0x1DC60Cu);
    ctx->pc = 0x1ABE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE80u, 0x1DC604u, 0x1DC60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC60Cu;
}
