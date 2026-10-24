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

// Function: entry_001b2da0
// Address: 0x1b2da0 - 0x1b2dfc
void entry_001b2da0_0x1b2da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2da0_0x1b2da0");
#endif

    switch (ctx->pc) {
        case 0x1b2de0u: goto label_1b2de0;
        default: break;
    }

    ctx->pc = 0x1b2da0u;

    // 0x1b2da0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b2da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b2da4: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x1b2da4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1b2da8: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x1b2da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1b2dac: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1b2dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1b2db0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b2db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b2db4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b2db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b2db8: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x1b2db8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1b2dbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b2dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b2dc0: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x1b2dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1b2dc4: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1b2dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1b2dc8: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x1b2dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b2dcc: 0x93a20128  lbu         $v0, 0x128($sp)
    ctx->pc = 0x1b2dccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1b2dd0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1b2dd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2dd4: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1b2dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b2dd8: 0xc06c678  jal         func_1B19E0
    ctx->pc = 0x1B2DD8u;
    SET_GPR_U32(ctx, 31, 0x1B2DE0u);
    ctx->pc = 0x1B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B19E0u, 0x1B2DD8u, 0x1B2DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2DE0u;
label_1b2de0:
    // 0x1b2de0: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x1b2de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x1b2de4: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1b2de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1b2de8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2DE8u;
    {
        const bool branch_taken_0x1b2de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2de8) {
            ctx->pc = 0x1B2DFCu;
            return;
        }
    }
    ctx->pc = 0x1B2DF0u;
    // 0x1b2df0: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x1b2df0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1b2df4: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x1B2DF4u;
    {
        const bool branch_taken_0x1b2df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2df4) {
            ctx->pc = 0x1B34C0u;
            return;
        }
    }
    ctx->pc = 0x1B2DFCu;
}
