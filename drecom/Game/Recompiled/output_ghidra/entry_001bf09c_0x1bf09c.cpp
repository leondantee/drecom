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

// Function: entry_001bf09c
// Address: 0x1bf09c - 0x1bf0dc
void entry_001bf09c_0x1bf09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf09c_0x1bf09c");
#endif

    switch (ctx->pc) {
        case 0x1bf0bcu: goto label_1bf0bc;
        case 0x1bf0ccu: goto label_1bf0cc;
        default: break;
    }

    ctx->pc = 0x1bf09cu;

    // 0x1bf09c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bf09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bf0a0: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1bf0a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1bf0a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf0a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf0ac: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1bf0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf0b0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bf0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bf0b4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BF0B4u;
    SET_GPR_U32(ctx, 31, 0x1BF0BCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BF0B4u, 0x1BF0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF0BCu;
label_1bf0bc:
    // 0x1bf0bc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1bf0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1bf0c0: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1bf0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf0c4: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1BF0C4u;
    SET_GPR_U32(ctx, 31, 0x1BF0CCu);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1BF0C4u, 0x1BF0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF0CCu;
label_1bf0cc:
    // 0x1bf0cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf0d0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bf0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bf0d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf0d8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bf0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1bf0dcu;
}
