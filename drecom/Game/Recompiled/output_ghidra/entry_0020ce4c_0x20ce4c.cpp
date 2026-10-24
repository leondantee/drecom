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

// Function: entry_0020ce4c
// Address: 0x20ce4c - 0x20cea0
void entry_0020ce4c_0x20ce4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ce4c_0x20ce4c");
#endif

    switch (ctx->pc) {
        case 0x20ce74u: goto label_20ce74;
        case 0x20ce88u: goto label_20ce88;
        default: break;
    }

    ctx->pc = 0x20ce4cu;

    // 0x20ce4c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x20ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20ce50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ce54: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x20ce54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ce58: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ce5c: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x20ce5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x20ce60: 0x24060502  addiu       $a2, $zero, 0x502
    ctx->pc = 0x20ce60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    // 0x20ce64: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x20ce64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x20ce68: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20ce68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20ce6c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20CE6Cu;
    SET_GPR_U32(ctx, 31, 0x20CE74u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20CE6Cu, 0x20CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE74u;
label_20ce74:
    // 0x20ce74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ce78: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x20ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20ce7c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x20ce7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x20ce80: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x20CE80u;
    SET_GPR_U32(ctx, 31, 0x20CE88u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x20CE80u, 0x20CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE88u;
label_20ce88:
    // 0x20ce88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ce8c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x20ce8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x20ce90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ce94: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20ce94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20ce98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20ce9c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20ce9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20cea0u;
}
