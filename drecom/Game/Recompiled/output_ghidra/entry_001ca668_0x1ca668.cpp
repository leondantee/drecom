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

// Function: entry_001ca668
// Address: 0x1ca668 - 0x1ca6cc
void entry_001ca668_0x1ca668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca668_0x1ca668");
#endif

    switch (ctx->pc) {
        case 0x1ca688u: goto label_1ca688;
        case 0x1ca6bcu: goto label_1ca6bc;
        default: break;
    }

    ctx->pc = 0x1ca668u;

    // 0x1ca668: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca66c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca670: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ca670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ca674: 0x240600a2  addiu       $a2, $zero, 0xA2
    ctx->pc = 0x1ca674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x1ca678: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca67c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ca67cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ca680: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CA680u;
    SET_GPR_U32(ctx, 31, 0x1CA688u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CA680u, 0x1CA688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA688u;
label_1ca688:
    // 0x1ca688: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x1ca688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x1ca68c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ca68cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca690: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca694: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1ca694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1ca698: 0x3c0540f0  lui         $a1, 0x40F0
    ctx->pc = 0x1ca698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16624 << 16));
    // 0x1ca69c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ca69cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca6a0: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1ca6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca6a4: 0xe4c01280  swc1        $f0, 0x1280($a2)
    ctx->pc = 0x1ca6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4736), bits); }
    // 0x1ca6a8: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1ca6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca6ac: 0x24e80180  addiu       $t0, $a3, 0x180
    ctx->pc = 0x1ca6acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 384));
    // 0x1ca6b0: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1ca6b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1ca6b4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CA6B4u;
    SET_GPR_U32(ctx, 31, 0x1CA6BCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CA6B4u, 0x1CA6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA6BCu;
label_1ca6bc:
    // 0x1ca6bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca6c0: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1ca6c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1ca6c4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1ca6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ca6c8: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x1ca6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1ca6ccu;
}
