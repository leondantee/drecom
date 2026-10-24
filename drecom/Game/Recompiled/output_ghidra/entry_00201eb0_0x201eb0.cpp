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

// Function: entry_00201eb0
// Address: 0x201eb0 - 0x201ef8
void entry_00201eb0_0x201eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201eb0_0x201eb0");
#endif

    ctx->pc = 0x201eb0u;

    // 0x201eb0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201eb4: 0x8c220ab0  lw          $v0, 0xAB0($at)
    ctx->pc = 0x201eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB0u));
    // 0x201eb8: 0x24420013  addiu       $v0, $v0, 0x13
    ctx->pc = 0x201eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
    // 0x201ebc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x201ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x201ec0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x201ec0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x201ec4: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x201ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x201ec8: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x201ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x201ecc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x201ed0: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x201ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x201ed4: 0x34422800  ori         $v0, $v0, 0x2800
    ctx->pc = 0x201ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
    // 0x201ed8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x201ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201edc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x201edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x201ee0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x201ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x201ee4: 0x24450d70  addiu       $a1, $v0, 0xD70
    ctx->pc = 0x201ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3440));
    // 0x201ee8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201eec: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x201eecu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201ef0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x201EF0u;
    SET_GPR_U32(ctx, 31, 0x201EF8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x201EF0u, 0x201EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201EF8u;
}
