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

// Function: entry_001c522c
// Address: 0x1c522c - 0x1c5284
void entry_001c522c_0x1c522c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c522c_0x1c522c");
#endif

    switch (ctx->pc) {
        case 0x1c524cu: goto label_1c524c;
        case 0x1c5264u: goto label_1c5264;
        case 0x1c5274u: goto label_1c5274;
        default: break;
    }

    ctx->pc = 0x1c522cu;

    // 0x1c522c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c522cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5230: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c5230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c5234: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5238: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c5238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c523c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c523cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c5240: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1c5240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c5244: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C5244u;
    SET_GPR_U32(ctx, 31, 0x1C524Cu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C5244u, 0x1C524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C524Cu;
label_1c524c:
    // 0x1c524c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5250: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5254: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c5254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5258: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c5258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c525c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C525Cu;
    SET_GPR_U32(ctx, 31, 0x1C5264u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C525Cu, 0x1C5264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5264u;
label_1c5264:
    // 0x1c5264: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c5264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c5268: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c5268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c526c: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C526Cu;
    SET_GPR_U32(ctx, 31, 0x1C5274u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C526Cu, 0x1C5274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5274u;
label_1c5274:
    // 0x1c5274: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5278: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c5278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c527c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c527cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5280: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c5280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c5284u;
}
