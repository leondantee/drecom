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

// Function: entry_00184ec0
// Address: 0x184ec0 - 0x184ef4
void entry_00184ec0_0x184ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184ec0_0x184ec0");
#endif

    switch (ctx->pc) {
        case 0x184ed8u: goto label_184ed8;
        default: break;
    }

    ctx->pc = 0x184ec0u;

    // 0x184ec0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x184ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x184ec4: 0x244402f0  addiu       $a0, $v0, 0x2F0
    ctx->pc = 0x184ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x184ec8: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x184ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x184ecc: 0x260601a0  addiu       $a2, $s0, 0x1A0
    ctx->pc = 0x184eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x184ed0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x184ED0u;
    SET_GPR_U32(ctx, 31, 0x184ED8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x184ED0u, 0x184ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184ED8u;
label_184ed8:
    // 0x184ed8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184ed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184edc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184ee0: 0xe42002f4  swc1        $f0, 0x2F4($at)
    ctx->pc = 0x184ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802F4u, _value); } while (0); }
    // 0x184ee4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x184ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x184ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184eec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184ef0: 0xe42002fc  swc1        $f0, 0x2FC($at)
    ctx->pc = 0x184ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802FCu, _value); } while (0); }
    ctx->pc = 0x184ef4u;
}
