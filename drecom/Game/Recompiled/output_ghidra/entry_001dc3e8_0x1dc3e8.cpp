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

// Function: entry_001dc3e8
// Address: 0x1dc3e8 - 0x1dc468
void entry_001dc3e8_0x1dc3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc3e8_0x1dc3e8");
#endif

    ctx->pc = 0x1dc3e8u;

    // 0x1dc3e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc3ec: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc3f0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc3f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc3f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc3fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc404: 0x8c42021c  lw          $v0, 0x21C($v0)
    ctx->pc = 0x1dc404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x1dc408: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DC408u;
    {
        const bool branch_taken_0x1dc408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc408) {
            ctx->pc = 0x1DC468u;
            return;
        }
    }
    ctx->pc = 0x1DC410u;
    // 0x1dc410: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc414: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc414u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc418: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc41c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc420: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc424: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc428: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dc428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc42c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc430: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc430u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc434: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc43c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc440: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc444: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dc444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc448: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc44c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc44cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc450: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc450u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc454: 0x8c840224  lw          $a0, 0x224($a0)
    ctx->pc = 0x1dc454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1dc458: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x1dc458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
    // 0x1dc45c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc45cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc460: 0xc06af78  jal         func_1ABDE0
    ctx->pc = 0x1DC460u;
    SET_GPR_U32(ctx, 31, 0x1DC468u);
    ctx->pc = 0x1ABDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABDE0u, 0x1DC460u, 0x1DC468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC468u;
}
