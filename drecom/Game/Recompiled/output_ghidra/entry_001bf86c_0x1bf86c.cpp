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

// Function: entry_001bf86c
// Address: 0x1bf86c - 0x1bf8ac
void entry_001bf86c_0x1bf86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf86c_0x1bf86c");
#endif

    switch (ctx->pc) {
        case 0x1bf88cu: goto label_1bf88c;
        case 0x1bf89cu: goto label_1bf89c;
        default: break;
    }

    ctx->pc = 0x1bf86cu;

    // 0x1bf86c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bf86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bf870: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1bf870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1bf874: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf878: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf87c: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1bf87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf880: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bf880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bf884: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BF884u;
    SET_GPR_U32(ctx, 31, 0x1BF88Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BF884u, 0x1BF88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF88Cu;
label_1bf88c:
    // 0x1bf88c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1bf88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1bf890: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1bf890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf894: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1BF894u;
    SET_GPR_U32(ctx, 31, 0x1BF89Cu);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1BF894u, 0x1BF89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF89Cu;
label_1bf89c:
    // 0x1bf89c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf8a0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bf8a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bf8a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf8a8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bf8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1bf8acu;
}
