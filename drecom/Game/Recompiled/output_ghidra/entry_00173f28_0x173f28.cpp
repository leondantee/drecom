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

// Function: entry_00173f28
// Address: 0x173f28 - 0x173f58
void entry_00173f28_0x173f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173f28_0x173f28");
#endif

    switch (ctx->pc) {
        case 0x173f4cu: goto label_173f4c;
        default: break;
    }

    ctx->pc = 0x173f28u;

    // 0x173f28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173f2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173f30: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x173f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x173f34: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173f38: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x173f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x173f3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x173f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173f40: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x173f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x173f44: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x173F44u;
    SET_GPR_U32(ctx, 31, 0x173F4Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x173F44u, 0x173F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F4Cu;
label_173f4c:
    // 0x173f4c: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x173f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x173f50: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x173f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x173f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x173f58u;
}
