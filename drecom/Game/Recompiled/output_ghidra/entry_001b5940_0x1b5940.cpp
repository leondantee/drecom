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

// Function: entry_001b5940
// Address: 0x1b5940 - 0x1b597c
void entry_001b5940_0x1b5940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5940_0x1b5940");
#endif

    switch (ctx->pc) {
        case 0x1b5958u: goto label_1b5958;
        case 0x1b5968u: goto label_1b5968;
        default: break;
    }

    ctx->pc = 0x1b5940u;

    // 0x1b5940: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5944: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b5944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5948: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1b5948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b594c: 0xc4cd00d4  lwc1        $f13, 0xD4($a2)
    ctx->pc = 0x1b594cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b5950: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1B5950u;
    SET_GPR_U32(ctx, 31, 0x1B5958u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B5950u, 0x1B5958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5958u;
label_1b5958:
    // 0x1b5958: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b5958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b595c: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x1b595cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b5960: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x1B5960u;
    SET_GPR_U32(ctx, 31, 0x1B5968u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1B5960u, 0x1B5968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5968u;
label_1b5968:
    // 0x1b5968: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b5968u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b596c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b596cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5970: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x1b5970u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1b5974: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1b5974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b5978: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1b5978u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1b597cu;
}
