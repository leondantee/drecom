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

// Function: entry_001c27ac
// Address: 0x1c27ac - 0x1c2804
void entry_001c27ac_0x1c27ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c27ac_0x1c27ac");
#endif

    switch (ctx->pc) {
        case 0x1c27ccu: goto label_1c27cc;
        case 0x1c27e4u: goto label_1c27e4;
        case 0x1c27f4u: goto label_1c27f4;
        default: break;
    }

    ctx->pc = 0x1c27acu;

    // 0x1c27ac: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c27acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c27b0: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c27b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c27b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c27b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c27b8: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c27b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c27bc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c27bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c27c0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1c27c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c27c4: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C27C4u;
    SET_GPR_U32(ctx, 31, 0x1C27CCu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C27C4u, 0x1C27CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27CCu;
label_1c27cc:
    // 0x1c27cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c27ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c27d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c27d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c27d4: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c27d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c27d8: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c27d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c27dc: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C27DCu;
    SET_GPR_U32(ctx, 31, 0x1C27E4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C27DCu, 0x1C27E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27E4u;
label_1c27e4:
    // 0x1c27e4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c27e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c27e8: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c27e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c27ec: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C27ECu;
    SET_GPR_U32(ctx, 31, 0x1C27F4u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C27ECu, 0x1C27F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27F4u;
label_1c27f4:
    // 0x1c27f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c27f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c27f8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c27f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c27fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c27fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c2800: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c2800u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c2804u;
}
