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

// Function: entry_001c2f0c
// Address: 0x1c2f0c - 0x1c2f64
void entry_001c2f0c_0x1c2f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2f0c_0x1c2f0c");
#endif

    switch (ctx->pc) {
        case 0x1c2f2cu: goto label_1c2f2c;
        case 0x1c2f44u: goto label_1c2f44;
        case 0x1c2f54u: goto label_1c2f54;
        default: break;
    }

    ctx->pc = 0x1c2f0cu;

    // 0x1c2f0c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c2f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c2f10: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c2f10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c2f14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2f18: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c2f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2f1c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1c2f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c2f20: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1c2f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1c2f24: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C2F24u;
    SET_GPR_U32(ctx, 31, 0x1C2F2Cu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C2F24u, 0x1C2F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F2Cu;
label_1c2f2c:
    // 0x1c2f2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2f30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2f34: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c2f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2f38: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c2f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c2f3c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C2F3Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F44u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C2F3Cu, 0x1C2F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F44u;
label_1c2f44:
    // 0x1c2f44: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c2f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c2f48: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c2f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2f4c: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C2F4Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F54u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C2F4Cu, 0x1C2F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F54u;
label_1c2f54:
    // 0x1c2f54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2f58: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c2f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c2f5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c2f60: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c2f60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c2f64u;
}
