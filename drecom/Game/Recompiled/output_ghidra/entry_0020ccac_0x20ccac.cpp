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

// Function: entry_0020ccac
// Address: 0x20ccac - 0x20cd00
void entry_0020ccac_0x20ccac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ccac_0x20ccac");
#endif

    switch (ctx->pc) {
        case 0x20ccd4u: goto label_20ccd4;
        case 0x20cce8u: goto label_20cce8;
        default: break;
    }

    ctx->pc = 0x20ccacu;

    // 0x20ccac: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x20ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20ccb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ccb4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x20ccb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ccb8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20ccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ccbc: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x20ccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x20ccc0: 0x24060500  addiu       $a2, $zero, 0x500
    ctx->pc = 0x20ccc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x20ccc4: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x20ccc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x20ccc8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20ccc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20cccc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20CCCCu;
    SET_GPR_U32(ctx, 31, 0x20CCD4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20CCCCu, 0x20CCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCD4u;
label_20ccd4:
    // 0x20ccd4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ccd8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x20ccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20ccdc: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x20ccdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x20cce0: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x20CCE0u;
    SET_GPR_U32(ctx, 31, 0x20CCE8u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x20CCE0u, 0x20CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCE8u;
label_20cce8:
    // 0x20cce8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ccec: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x20ccecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x20ccf0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ccf4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20ccf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20ccf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20ccfc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20ccfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20cd00u;
}
