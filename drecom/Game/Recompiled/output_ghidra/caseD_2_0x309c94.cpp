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

// Function: caseD_2
// Address: 0x309c94 - 0x309ce0
void caseD_2_0x309c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x309c94");
#endif

    switch (ctx->pc) {
        case 0x309cb4u: goto label_309cb4;
        default: break;
    }

    ctx->pc = 0x309c94u;

    // 0x309c94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309c98: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309c9c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x309c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x309ca0: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x309ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x309ca4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x309ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309ca8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x309ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x309cac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x309CACu;
    SET_GPR_U32(ctx, 31, 0x309CB4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x309CACu, 0x309CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309CB4u;
label_309cb4:
    // 0x309cb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309cb8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x309cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x309cbc: 0x3c023e97  lui         $v0, 0x3E97
    ctx->pc = 0x309cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16023 << 16));
    // 0x309cc0: 0x3442e9d8  ori         $v0, $v0, 0xE9D8
    ctx->pc = 0x309cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59864);
    // 0x309cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309cc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309ccc: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x309cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x309cd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309cd4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x309cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x309cd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x309cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x309cdc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x309cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x309ce0u;
}
