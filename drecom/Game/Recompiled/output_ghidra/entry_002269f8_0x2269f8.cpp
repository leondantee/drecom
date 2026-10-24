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

// Function: entry_002269f8
// Address: 0x2269f8 - 0x226a64
void entry_002269f8_0x2269f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002269f8_0x2269f8");
#endif

    switch (ctx->pc) {
        case 0x226a24u: goto label_226a24;
        case 0x226a40u: goto label_226a40;
        case 0x226a58u: goto label_226a58;
        default: break;
    }

    ctx->pc = 0x2269f8u;

    // 0x2269f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2269f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2269fc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2269fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226a00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226a04: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x226a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226a08: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x226a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x226a0c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x226a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226a10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x226a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x226a14: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x226a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x226a18: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x226a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x226a1c: 0xc05c848  jal         func_172120
    ctx->pc = 0x226A1Cu;
    SET_GPR_U32(ctx, 31, 0x226A24u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x226A1Cu, 0x226A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A24u;
label_226a24:
    // 0x226a24: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x226a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x226a28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226a2c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x226a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226a30: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x226a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226a34: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x226a34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x226a38: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x226A38u;
    SET_GPR_U32(ctx, 31, 0x226A40u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x226A38u, 0x226A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A40u;
label_226a40:
    // 0x226a40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226a44: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x226a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x226a48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x226a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226a4c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x226a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x226a50: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x226A50u;
    SET_GPR_U32(ctx, 31, 0x226A58u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x226A50u, 0x226A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A58u;
label_226a58:
    // 0x226a58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x226a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226a5c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x226A5Cu;
    SET_GPR_U32(ctx, 31, 0x226A64u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x226A5Cu, 0x226A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A64u;
}
