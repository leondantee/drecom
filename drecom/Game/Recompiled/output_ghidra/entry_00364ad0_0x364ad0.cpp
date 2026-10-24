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

// Function: entry_00364ad0
// Address: 0x364ad0 - 0x364b18
void entry_00364ad0_0x364ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364ad0_0x364ad0");
#endif

    switch (ctx->pc) {
        case 0x364af0u: goto label_364af0;
        default: break;
    }

    ctx->pc = 0x364ad0u;

    // 0x364ad0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364ad4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364ad8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x364ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x364adc: 0x24061e04  addiu       $a2, $zero, 0x1E04
    ctx->pc = 0x364adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7684));
    // 0x364ae0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x364ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364ae4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x364ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364ae8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x364AE8u;
    SET_GPR_U32(ctx, 31, 0x364AF0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x364AE8u, 0x364AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364AF0u;
label_364af0:
    // 0x364af0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x364af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364af4: 0x0  nop
    ctx->pc = 0x364af4u;
    // NOP
    // 0x364af8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x364af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x364afc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x364afcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364b00: 0x0  nop
    ctx->pc = 0x364b00u;
    // NOP
    // 0x364b04: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x364b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x364b08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x364b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364b0c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x364b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x364b10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x364b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x364b14: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x364b14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x364b18u;
}
