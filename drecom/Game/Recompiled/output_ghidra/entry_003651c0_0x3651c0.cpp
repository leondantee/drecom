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

// Function: entry_003651c0
// Address: 0x3651c0 - 0x3651fc
void entry_003651c0_0x3651c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003651c0_0x3651c0");
#endif

    switch (ctx->pc) {
        case 0x3651e0u: goto label_3651e0;
        default: break;
    }

    ctx->pc = 0x3651c0u;

    // 0x3651c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3651c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3651c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3651c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3651c8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3651c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3651cc: 0x24061e21  addiu       $a2, $zero, 0x1E21
    ctx->pc = 0x3651ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7713));
    // 0x3651d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3651d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3651d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3651d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3651d8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3651D8u;
    SET_GPR_U32(ctx, 31, 0x3651E0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3651D8u, 0x3651E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3651E0u;
label_3651e0:
    // 0x3651e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3651e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3651e4: 0x0  nop
    ctx->pc = 0x3651e4u;
    // NOP
    // 0x3651e8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x3651e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x3651ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3651ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3651f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3651f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3651f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3651f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3651f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3651f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3651fcu;
}
