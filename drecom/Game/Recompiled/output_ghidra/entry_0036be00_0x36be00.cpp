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

// Function: entry_0036be00
// Address: 0x36be00 - 0x36be18
void entry_0036be00_0x36be00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036be00_0x36be00");
#endif

    switch (ctx->pc) {
        case 0x36be14u: goto label_36be14;
        default: break;
    }

    ctx->pc = 0x36be00u;

    // 0x36be00: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x36be00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36be04: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36be04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36be08: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x36be08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x36be0c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x36BE0Cu;
    SET_GPR_U32(ctx, 31, 0x36BE14u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x36BE0Cu, 0x36BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE14u;
label_36be14:
    // 0x36be14: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36be14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->pc = 0x36be18u;
}
