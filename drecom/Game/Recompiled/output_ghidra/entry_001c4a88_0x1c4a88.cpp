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

// Function: entry_001c4a88
// Address: 0x1c4a88 - 0x1c4ae0
void entry_001c4a88_0x1c4a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4a88_0x1c4a88");
#endif

    switch (ctx->pc) {
        case 0x1c4aa8u: goto label_1c4aa8;
        case 0x1c4ac0u: goto label_1c4ac0;
        case 0x1c4ad0u: goto label_1c4ad0;
        default: break;
    }

    ctx->pc = 0x1c4a88u;

    // 0x1c4a88: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c4a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c4a8c: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c4a8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c4a90: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4a94: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c4a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c4a98: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c4a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c4a9c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1c4a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c4aa0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C4AA0u;
    SET_GPR_U32(ctx, 31, 0x1C4AA8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C4AA0u, 0x1C4AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4AA8u;
label_1c4aa8:
    // 0x1c4aa8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4aac: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4ab0: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c4ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4ab4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c4ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c4ab8: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C4AB8u;
    SET_GPR_U32(ctx, 31, 0x1C4AC0u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C4AB8u, 0x1C4AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4AC0u;
label_1c4ac0:
    // 0x1c4ac0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1c4ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1c4ac4: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x1c4ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4ac8: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x1C4AC8u;
    SET_GPR_U32(ctx, 31, 0x1C4AD0u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1C4AC8u, 0x1C4AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4AD0u;
label_1c4ad0:
    // 0x1c4ad0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4ad4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c4ad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c4ad8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c4ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c4adc: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c4adcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c4ae0u;
}
