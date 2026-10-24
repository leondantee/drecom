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

// Function: entry_001c366c
// Address: 0x1c366c - 0x1c36c4
void entry_001c366c_0x1c366c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c366c_0x1c366c");
#endif

    switch (ctx->pc) {
        case 0x1c368cu: goto label_1c368c;
        case 0x1c36a4u: goto label_1c36a4;
        case 0x1c36b4u: goto label_1c36b4;
        default: break;
    }

    ctx->pc = 0x1c366cu;

    // 0x1c366c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c366cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c3670: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c3670u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c3674: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3678: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c3678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c367c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c367cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c3680: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x1c3680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1c3684: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C3684u;
    SET_GPR_U32(ctx, 31, 0x1C368Cu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C3684u, 0x1C368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C368Cu;
label_1c368c:
    // 0x1c368c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c368cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3690: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3694: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c3694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3698: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c3698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c369c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C369Cu;
    SET_GPR_U32(ctx, 31, 0x1C36A4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C369Cu, 0x1C36A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36A4u;
label_1c36a4:
    // 0x1c36a4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c36a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c36a8: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c36a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c36ac: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C36ACu;
    SET_GPR_U32(ctx, 31, 0x1C36B4u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C36ACu, 0x1C36B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36B4u;
label_1c36b4:
    // 0x1c36b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c36b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c36b8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c36b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c36bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c36bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c36c0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c36c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c36c4u;
}
