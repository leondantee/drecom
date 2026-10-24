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

// Function: entry_001c58fc
// Address: 0x1c58fc - 0x1c5954
void entry_001c58fc_0x1c58fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c58fc_0x1c58fc");
#endif

    switch (ctx->pc) {
        case 0x1c591cu: goto label_1c591c;
        case 0x1c5934u: goto label_1c5934;
        case 0x1c5944u: goto label_1c5944;
        default: break;
    }

    ctx->pc = 0x1c58fcu;

    // 0x1c58fc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c58fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5900: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c5900u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c5904: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5908: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c5908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c590c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1c590cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c5910: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1c5910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1c5914: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C5914u;
    SET_GPR_U32(ctx, 31, 0x1C591Cu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C5914u, 0x1C591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C591Cu;
label_1c591c:
    // 0x1c591c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c591cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5920: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5924: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c5924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5928: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c5928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c592c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C592Cu;
    SET_GPR_U32(ctx, 31, 0x1C5934u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C592Cu, 0x1C5934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5934u;
label_1c5934:
    // 0x1c5934: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c5934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c5938: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c5938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c593c: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C593Cu;
    SET_GPR_U32(ctx, 31, 0x1C5944u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C593Cu, 0x1C5944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5944u;
label_1c5944:
    // 0x1c5944: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5948: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c5948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c594c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c594cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5950: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c5950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c5954u;
}
