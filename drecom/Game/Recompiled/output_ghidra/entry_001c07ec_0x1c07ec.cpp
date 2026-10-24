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

// Function: entry_001c07ec
// Address: 0x1c07ec - 0x1c082c
void entry_001c07ec_0x1c07ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c07ec_0x1c07ec");
#endif

    switch (ctx->pc) {
        case 0x1c080cu: goto label_1c080c;
        case 0x1c081cu: goto label_1c081c;
        default: break;
    }

    ctx->pc = 0x1c07ecu;

    // 0x1c07ec: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c07ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c07f0: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c07f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c07f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c07f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c07fc: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c07fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0800: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c0800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c0804: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C0804u;
    SET_GPR_U32(ctx, 31, 0x1C080Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C0804u, 0x1C080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C080Cu;
label_1c080c:
    // 0x1c080c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c080cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c0810: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c0810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0814: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C0814u;
    SET_GPR_U32(ctx, 31, 0x1C081Cu);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C0814u, 0x1C081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C081Cu;
label_1c081c:
    // 0x1c081c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0820: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c0820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c0824: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0828: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c0828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c082cu;
}
