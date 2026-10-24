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

// Function: entry_00366ba4
// Address: 0x366ba4 - 0x366c08
void entry_00366ba4_0x366ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00366ba4_0x366ba4");
#endif

    switch (ctx->pc) {
        case 0x366bc4u: goto label_366bc4;
        default: break;
    }

    ctx->pc = 0x366ba4u;

    // 0x366ba4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366ba8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366bac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x366bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x366bb0: 0x2406051d  addiu       $a2, $zero, 0x51D
    ctx->pc = 0x366bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1309));
    // 0x366bb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x366bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366bb8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x366bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366bbc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x366BBCu;
    SET_GPR_U32(ctx, 31, 0x366BC4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x366BBCu, 0x366BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366BC4u;
label_366bc4:
    // 0x366bc4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x366bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x366bc8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366bcc: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x366bccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x366bd0: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x366bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x366bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x366bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366bd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366bdc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x366bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x366be0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366be0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366be4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366be8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x366be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x366bec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366bf0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366bf4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x366bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x366bf8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366bfc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x366bfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x366c00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x366c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x366c04: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x366c04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x366c08u;
}
