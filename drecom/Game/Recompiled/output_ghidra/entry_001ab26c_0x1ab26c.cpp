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

// Function: entry_001ab26c
// Address: 0x1ab26c - 0x1ab2a8
void entry_001ab26c_0x1ab26c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab26c_0x1ab26c");
#endif

    ctx->pc = 0x1ab26cu;

    // 0x1ab26c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1ab26cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ab270: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1ab270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1ab274: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x1ab274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x1ab278: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ab278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab27c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1ab27cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ab280: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ab280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ab284: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ab284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ab288: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB288u;
    {
        const bool branch_taken_0x1ab288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab288) {
            ctx->pc = 0x1AB2A8u;
            return;
        }
    }
    ctx->pc = 0x1AB290u;
    // 0x1ab290: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ab290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ab294: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ab294u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ab298: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1ab298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ab29c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ab29cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ab2a0: 0xc06ace8  jal         func_1AB3A0
    ctx->pc = 0x1AB2A0u;
    SET_GPR_U32(ctx, 31, 0x1AB2A8u);
    ctx->pc = 0x1AB3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3A0u, 0x1AB2A0u, 0x1AB2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB2A8u;
}
