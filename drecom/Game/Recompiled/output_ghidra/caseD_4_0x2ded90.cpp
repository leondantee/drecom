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

// Function: caseD_4
// Address: 0x2ded90 - 0x2deddc
void caseD_4_0x2ded90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x2ded90");
#endif

    switch (ctx->pc) {
        case 0x2dedb0u: goto label_2dedb0;
        default: break;
    }

    ctx->pc = 0x2ded90u;

    // 0x2ded90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2ded90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ded94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2ded94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ded98: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2ded98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2ded9c: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x2ded9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2deda0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2deda0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2deda4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2deda4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2deda8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DEDA8u;
    SET_GPR_U32(ctx, 31, 0x2DEDB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DEDA8u, 0x2DEDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEDB0u;
label_2dedb0:
    // 0x2dedb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dedb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dedb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dedb8: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dedb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x2dedbc: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x2dedbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x2dedc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dedc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dedc4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dedc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dedc8: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2dedc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x2dedcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dedccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dedd0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2dedd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dedd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dedd8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dedd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2deddcu;
}
