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

// Function: entry_002a230c
// Address: 0x2a230c - 0x2a2354
void entry_002a230c_0x2a230c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a230c_0x2a230c");
#endif

    switch (ctx->pc) {
        case 0x2a233cu: goto label_2a233c;
        default: break;
    }

    ctx->pc = 0x2a230cu;

    // 0x2a230c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a230cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2310: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2314: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x2a2314u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a2318: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a231c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a231cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2320: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a2320u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a2324: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a2324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a2328: 0x24060f22  addiu       $a2, $zero, 0xF22
    ctx->pc = 0x2a2328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3874));
    // 0x2a232c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a232cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2330: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a2330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a2334: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A2334u;
    SET_GPR_U32(ctx, 31, 0x2A233Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A2334u, 0x2A233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A233Cu;
label_2a233c:
    // 0x2a233c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a233cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a2340: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2a2340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2a2344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a2344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2348: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a234c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2a234cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a2350: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2a2350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x2a2354u;
}
