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

// Function: entry_001c5fcc
// Address: 0x1c5fcc - 0x1c6024
void entry_001c5fcc_0x1c5fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5fcc_0x1c5fcc");
#endif

    switch (ctx->pc) {
        case 0x1c5fecu: goto label_1c5fec;
        case 0x1c6004u: goto label_1c6004;
        case 0x1c6014u: goto label_1c6014;
        default: break;
    }

    ctx->pc = 0x1c5fccu;

    // 0x1c5fcc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c5fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5fd0: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c5fd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c5fd4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5fd8: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c5fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5fdc: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c5fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c5fe0: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x1c5fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1c5fe4: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C5FE4u;
    SET_GPR_U32(ctx, 31, 0x1C5FECu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C5FE4u, 0x1C5FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FECu;
label_1c5fec:
    // 0x1c5fec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5ff0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5ff4: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c5ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5ff8: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c5ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c5ffc: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C5FFCu;
    SET_GPR_U32(ctx, 31, 0x1C6004u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C5FFCu, 0x1C6004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6004u;
label_1c6004:
    // 0x1c6004: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c6004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c6008: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c6008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c600c: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C600Cu;
    SET_GPR_U32(ctx, 31, 0x1C6014u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C600Cu, 0x1C6014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6014u;
label_1c6014:
    // 0x1c6014: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c6014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6018: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c6018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c601c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c6020: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c6020u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c6024u;
}
