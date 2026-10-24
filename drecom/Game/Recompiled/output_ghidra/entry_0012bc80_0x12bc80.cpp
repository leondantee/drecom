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

// Function: entry_0012bc80
// Address: 0x12bc80 - 0x12bcd0
void entry_0012bc80_0x12bc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bc80_0x12bc80");
#endif

    switch (ctx->pc) {
        case 0x12bca0u: goto label_12bca0;
        case 0x12bcb8u: goto label_12bcb8;
        default: break;
    }

    ctx->pc = 0x12bc80u;

    // 0x12bc80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bc84: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bc88: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12bc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12bc8c: 0x24063c0a  addiu       $a2, $zero, 0x3C0A
    ctx->pc = 0x12bc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15370));
    // 0x12bc90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12bc90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bc94: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12bc94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12bc98: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12BC98u;
    SET_GPR_U32(ctx, 31, 0x12BCA0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12BC98u, 0x12BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCA0u;
label_12bca0:
    // 0x12bca0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bca4: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12bca8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12bcac: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12bcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12bcb0: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x12BCB0u;
    SET_GPR_U32(ctx, 31, 0x12BCB8u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12BCB0u, 0x12BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCB8u;
label_12bcb8:
    // 0x12bcb8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bcbc: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x12bcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x12bcc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bcc4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12bcc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12bcc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bccc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12bcccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12bcd0u;
}
