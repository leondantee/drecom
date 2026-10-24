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

// Function: entry_0036edd8
// Address: 0x36edd8 - 0x36ee1c
void entry_0036edd8_0x36edd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036edd8_0x36edd8");
#endif

    switch (ctx->pc) {
        case 0x36edfcu: goto label_36edfc;
        default: break;
    }

    ctx->pc = 0x36edd8u;

    // 0x36edd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36edd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36eddc: 0x0  nop
    ctx->pc = 0x36eddcu;
    // NOP
    // 0x36ede0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x36ede0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36ede4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ede8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x36ede8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36edec: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36edecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36edf0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x36edf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x36edf4: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x36EDF4u;
    SET_GPR_U32(ctx, 31, 0x36EDFCu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x36EDF4u, 0x36EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EDFCu;
label_36edfc:
    // 0x36edfc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x36edfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x36ee00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36ee00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ee04: 0x0  nop
    ctx->pc = 0x36ee04u;
    // NOP
    // 0x36ee08: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x36ee08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x36ee0c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x36ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x36ee10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36ee10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ee14: 0x0  nop
    ctx->pc = 0x36ee14u;
    // NOP
    // 0x36ee18: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x36ee18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x36ee1cu;
}
