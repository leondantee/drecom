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

// Function: entry_001dc468
// Address: 0x1dc468 - 0x1dc510
void entry_001dc468_0x1dc468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc468_0x1dc468");
#endif

    switch (ctx->pc) {
        case 0x1dc4b0u: goto label_1dc4b0;
        default: break;
    }

    ctx->pc = 0x1dc468u;

    // 0x1dc468: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc46c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc46cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc470: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc474: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc478: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dc478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc47c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc480: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc480u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc484: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc488: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc48c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dc48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc490: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc494: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc494u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc498: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc498u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc49c: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x1dc49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1dc4a0: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1dc4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1dc4a4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc4a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc4a8: 0xc06af78  jal         func_1ABDE0
    ctx->pc = 0x1DC4A8u;
    SET_GPR_U32(ctx, 31, 0x1DC4B0u);
    ctx->pc = 0x1ABDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABDE0u, 0x1DC4A8u, 0x1DC4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4B0u;
label_1dc4b0:
    // 0x1dc4b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc4b4: 0x90230e04  lbu         $v1, 0xE04($at)
    ctx->pc = 0x1dc4b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E04u));
    // 0x1dc4b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dc4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dc4bc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1dc4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1dc4c0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DC4C0u;
    {
        const bool branch_taken_0x1dc4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc4c0) {
            ctx->pc = 0x1DC510u;
            return;
        }
    }
    ctx->pc = 0x1DC4C8u;
    // 0x1dc4c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc4cc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc4d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc4d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc4d8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dc4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc4dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc4e0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc4e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc4e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc4ec: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dc4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc4f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc4f4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc4f8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc4f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc4fc: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x1dc4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1dc500: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x1dc500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1dc504: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc504u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc508: 0xc06af78  jal         func_1ABDE0
    ctx->pc = 0x1DC508u;
    SET_GPR_U32(ctx, 31, 0x1DC510u);
    ctx->pc = 0x1ABDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABDE0u, 0x1DC508u, 0x1DC510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC510u;
}
