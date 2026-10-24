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

// Function: entry_001c1f78
// Address: 0x1c1f78 - 0x1c1fd0
void entry_001c1f78_0x1c1f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1f78_0x1c1f78");
#endif

    switch (ctx->pc) {
        case 0x1c1f98u: goto label_1c1f98;
        case 0x1c1fb0u: goto label_1c1fb0;
        case 0x1c1fc0u: goto label_1c1fc0;
        default: break;
    }

    ctx->pc = 0x1c1f78u;

    // 0x1c1f78: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c1f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c1f7c: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c1f7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c1f80: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1f84: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c1f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c1f88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c1f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c1f8c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1c1f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c1f90: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C1F90u;
    SET_GPR_U32(ctx, 31, 0x1C1F98u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C1F90u, 0x1C1F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F98u;
label_1c1f98:
    // 0x1c1f98: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c1f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1f9c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1fa0: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c1fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1fa4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c1fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c1fa8: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C1FA8u;
    SET_GPR_U32(ctx, 31, 0x1C1FB0u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C1FA8u, 0x1C1FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FB0u;
label_1c1fb0:
    // 0x1c1fb0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1c1fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1c1fb4: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x1c1fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1fb8: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x1C1FB8u;
    SET_GPR_U32(ctx, 31, 0x1C1FC0u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1C1FB8u, 0x1C1FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FC0u;
label_1c1fc0:
    // 0x1c1fc0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c1fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1fc4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c1fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c1fc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c1fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c1fcc: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c1fccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c1fd0u;
}
