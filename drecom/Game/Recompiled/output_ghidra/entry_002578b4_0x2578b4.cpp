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

// Function: entry_002578b4
// Address: 0x2578b4 - 0x257924
void entry_002578b4_0x2578b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002578b4_0x2578b4");
#endif

    switch (ctx->pc) {
        case 0x257900u: goto label_257900;
        default: break;
    }

    ctx->pc = 0x2578b4u;

    // 0x2578b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2578b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2578b8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2578b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2578bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2578bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2578c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2578c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2578c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2578c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2578c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2578c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2578cc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2578ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2578d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2578d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2578d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2578d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2578d8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2578d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2578dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2578dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2578e0: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x2578e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x2578e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2578e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2578e8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2578e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2578ec: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x2578ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2578f0: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x2578f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x2578f4: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x2578f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2578f8: 0xc06ae00  jal         func_1AB800
    ctx->pc = 0x2578F8u;
    SET_GPR_U32(ctx, 31, 0x257900u);
    ctx->pc = 0x1AB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB800u, 0x2578F8u, 0x257900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257900u;
label_257900:
    // 0x257900: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x257900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257904: 0x90631218  lbu         $v1, 0x1218($v1)
    ctx->pc = 0x257904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4632)));
    // 0x257908: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x257908u;
    {
        const bool branch_taken_0x257908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257908) {
            ctx->pc = 0x2579A0u;
            return;
        }
    }
    ctx->pc = 0x257910u;
    // 0x257910: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x257910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257914: 0x8c701214  lw          $s0, 0x1214($v1)
    ctx->pc = 0x257914u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4628)));
    // 0x257918: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x257918u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25791c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x25791Cu;
    {
        const bool branch_taken_0x25791c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25791c) {
            ctx->pc = 0x257988u;
            return;
        }
    }
    ctx->pc = 0x257924u;
}
