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

// Function: entry_0014d6cc
// Address: 0x14d6cc - 0x14d6fc
void entry_0014d6cc_0x14d6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d6cc_0x14d6cc");
#endif

    ctx->pc = 0x14d6ccu;

    // 0x14d6cc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d6d0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x14d6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d6d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d6d8: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x14d6d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x14d6dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14d6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14d6e0: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x14d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x14d6e4: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x14d6e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14d6e8: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x14d6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x14d6ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14d6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d6f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14d6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14d6f4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14D6F4u;
    SET_GPR_U32(ctx, 31, 0x14D6FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14D6F4u, 0x14D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6FCu;
}
