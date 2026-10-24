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

// Function: entry_002835f0
// Address: 0x2835f0 - 0x283620
void entry_002835f0_0x2835f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002835f0_0x2835f0");
#endif

    switch (ctx->pc) {
        case 0x28361cu: goto label_28361c;
        default: break;
    }

    ctx->pc = 0x2835f0u;

    // 0x2835f0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2835f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2835f4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2835f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2835f8: 0x24425360  addiu       $v0, $v0, 0x5360
    ctx->pc = 0x2835f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21344));
    // 0x2835fc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2835fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283600: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x283600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x283604: 0x24425440  addiu       $v0, $v0, 0x5440
    ctx->pc = 0x283604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21568));
    // 0x283608: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x283608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28360c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28360cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283610: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x283610u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283614: 0xc0c7a48  jal         func_31E920
    ctx->pc = 0x283614u;
    SET_GPR_U32(ctx, 31, 0x28361Cu);
    ctx->pc = 0x31E920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E920u, 0x283614u, 0x28361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28361Cu;
label_28361c:
    // 0x28361c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28361cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x283620u;
}
