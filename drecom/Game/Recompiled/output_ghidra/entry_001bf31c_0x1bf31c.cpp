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

// Function: entry_001bf31c
// Address: 0x1bf31c - 0x1bf374
void entry_001bf31c_0x1bf31c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf31c_0x1bf31c");
#endif

    switch (ctx->pc) {
        case 0x1bf33cu: goto label_1bf33c;
        case 0x1bf354u: goto label_1bf354;
        case 0x1bf364u: goto label_1bf364;
        default: break;
    }

    ctx->pc = 0x1bf31cu;

    // 0x1bf31c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bf31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bf320: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1bf320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1bf324: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf328: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bf328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf32c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1bf32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bf330: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1bf330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bf334: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BF334u;
    SET_GPR_U32(ctx, 31, 0x1BF33Cu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BF334u, 0x1BF33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF33Cu;
label_1bf33c:
    // 0x1bf33c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf340: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf344: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1bf344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf348: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bf348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bf34c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BF34Cu;
    SET_GPR_U32(ctx, 31, 0x1BF354u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BF34Cu, 0x1BF354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF354u;
label_1bf354:
    // 0x1bf354: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1bf354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1bf358: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1bf358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf35c: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1BF35Cu;
    SET_GPR_U32(ctx, 31, 0x1BF364u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1BF35Cu, 0x1BF364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF364u;
label_1bf364:
    // 0x1bf364: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf368: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bf368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bf36c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf370: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bf370u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1bf374u;
}
