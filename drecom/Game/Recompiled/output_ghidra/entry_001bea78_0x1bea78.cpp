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

// Function: entry_001bea78
// Address: 0x1bea78 - 0x1bead0
void entry_001bea78_0x1bea78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bea78_0x1bea78");
#endif

    switch (ctx->pc) {
        case 0x1bea98u: goto label_1bea98;
        case 0x1beab0u: goto label_1beab0;
        case 0x1beac0u: goto label_1beac0;
        default: break;
    }

    ctx->pc = 0x1bea78u;

    // 0x1bea78: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bea78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bea7c: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1bea7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1bea80: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bea84: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bea84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bea88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1bea88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bea8c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1bea8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bea90: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BEA90u;
    SET_GPR_U32(ctx, 31, 0x1BEA98u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BEA90u, 0x1BEA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA98u;
label_1bea98:
    // 0x1bea98: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1bea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bea9c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beaa0: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1beaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1beaa4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1beaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1beaa8: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BEAA8u;
    SET_GPR_U32(ctx, 31, 0x1BEAB0u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BEAA8u, 0x1BEAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEAB0u;
label_1beab0:
    // 0x1beab0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1beab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1beab4: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x1beab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1beab8: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x1BEAB8u;
    SET_GPR_U32(ctx, 31, 0x1BEAC0u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1BEAB8u, 0x1BEAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEAC0u;
label_1beac0:
    // 0x1beac0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1beac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1beac4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1beac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1beac8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1beac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1beacc: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1beaccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1bead0u;
}
