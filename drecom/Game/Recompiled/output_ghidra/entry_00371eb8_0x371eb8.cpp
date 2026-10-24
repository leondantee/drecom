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

// Function: entry_00371eb8
// Address: 0x371eb8 - 0x371efc
void entry_00371eb8_0x371eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371eb8_0x371eb8");
#endif

    switch (ctx->pc) {
        case 0x371edcu: goto label_371edc;
        default: break;
    }

    ctx->pc = 0x371eb8u;

    // 0x371eb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x371eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371ebc: 0x0  nop
    ctx->pc = 0x371ebcu;
    // NOP
    // 0x371ec0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x371ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x371ec4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x371ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x371ec8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x371ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x371ecc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x371eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x371ed0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x371ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x371ed4: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x371ED4u;
    SET_GPR_U32(ctx, 31, 0x371EDCu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x371ED4u, 0x371EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371EDCu;
label_371edc:
    // 0x371edc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x371edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x371ee0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x371ee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371ee4: 0x0  nop
    ctx->pc = 0x371ee4u;
    // NOP
    // 0x371ee8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x371ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x371eec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x371eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x371ef0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371ef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371ef4: 0x0  nop
    ctx->pc = 0x371ef4u;
    // NOP
    // 0x371ef8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x371ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x371efcu;
}
