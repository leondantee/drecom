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

// Function: entry_00308ac4
// Address: 0x308ac4 - 0x308b08
void entry_00308ac4_0x308ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00308ac4_0x308ac4");
#endif

    switch (ctx->pc) {
        case 0x308ae4u: goto label_308ae4;
        default: break;
    }

    ctx->pc = 0x308ac4u;

    // 0x308ac4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ac8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308acc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x308accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x308ad0: 0x24062835  addiu       $a2, $zero, 0x2835
    ctx->pc = 0x308ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10293));
    // 0x308ad4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x308ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308ad8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x308ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x308adc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x308ADCu;
    SET_GPR_U32(ctx, 31, 0x308AE4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x308ADCu, 0x308AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308AE4u;
label_308ae4:
    // 0x308ae4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ae8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x308ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x308aec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x308aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308af0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308af4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x308af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x308af8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308afc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x308afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x308b00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x308b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x308b04: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x308b04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x308b08u;
}
