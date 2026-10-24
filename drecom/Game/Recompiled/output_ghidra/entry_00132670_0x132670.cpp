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

// Function: entry_00132670
// Address: 0x132670 - 0x13269c
void entry_00132670_0x132670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132670_0x132670");
#endif

    switch (ctx->pc) {
        case 0x132694u: goto label_132694;
        default: break;
    }

    ctx->pc = 0x132670u;

    // 0x132670: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132674: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x132674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132678: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x132678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x13267c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13267cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x132680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x132680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132684: 0x0  nop
    ctx->pc = 0x132684u;
    // NOP
    // 0x132688: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x132688u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13268c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x13268Cu;
    SET_GPR_U32(ctx, 31, 0x132694u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x13268Cu, 0x132694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132694u;
label_132694:
    // 0x132694: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132698: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x132698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x13269cu;
}
