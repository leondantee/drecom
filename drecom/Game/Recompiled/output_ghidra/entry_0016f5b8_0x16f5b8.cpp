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

// Function: entry_0016f5b8
// Address: 0x16f5b8 - 0x16f600
void entry_0016f5b8_0x16f5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f5b8_0x16f5b8");
#endif

    switch (ctx->pc) {
        case 0x16f5d8u: goto label_16f5d8;
        default: break;
    }

    ctx->pc = 0x16f5b8u;

    // 0x16f5b8: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x16f5b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16f5bc: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16F5BCu;
    {
        const bool branch_taken_0x16f5bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f5bc) {
            ctx->pc = 0x16F600u;
            return;
        }
    }
    ctx->pc = 0x16F5C4u;
    // 0x16f5c4: 0x8ee20a68  lw          $v0, 0xA68($s7)
    ctx->pc = 0x16f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16f5c8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f5c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f5cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x16f5ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16f5d0: 0xc079534  jal         func_1E54D0
    ctx->pc = 0x16F5D0u;
    SET_GPR_U32(ctx, 31, 0x16F5D8u);
    ctx->pc = 0x1E54D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E54D0u, 0x16F5D0u, 0x16F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F5D8u;
label_16f5d8:
    // 0x16f5d8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x16f5d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16f5dc: 0xaee50a68  sw          $a1, 0xA68($s7)
    ctx->pc = 0x16f5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 5));
    // 0x16f5e0: 0x8ee60a68  lw          $a2, 0xA68($s7)
    ctx->pc = 0x16f5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16f5e4: 0x24c8000f  addiu       $t0, $a2, 0xF
    ctx->pc = 0x16f5e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x16f5e8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x16f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16f5ec: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x16f5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x16f5f0: 0xaee20a68  sw          $v0, 0xA68($s7)
    ctx->pc = 0x16f5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 2));
    // 0x16f5f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x16f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16f5f8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x16f5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x16f5fc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x16f600u;
}
