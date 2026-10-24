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

// Function: entry_0020d058
// Address: 0x20d058 - 0x20d0ac
void entry_0020d058_0x20d058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d058_0x20d058");
#endif

    switch (ctx->pc) {
        case 0x20d080u: goto label_20d080;
        case 0x20d094u: goto label_20d094;
        default: break;
    }

    ctx->pc = 0x20d058u;

    // 0x20d058: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x20d058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20d05c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d060: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x20d060u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d064: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20d064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d068: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x20d068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x20d06c: 0x24060503  addiu       $a2, $zero, 0x503
    ctx->pc = 0x20d06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x20d070: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x20d070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x20d074: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20d074u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20d078: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20D078u;
    SET_GPR_U32(ctx, 31, 0x20D080u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20D078u, 0x20D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D080u;
label_20d080:
    // 0x20d080: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d084: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x20d084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20d088: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x20d088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x20d08c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x20D08Cu;
    SET_GPR_U32(ctx, 31, 0x20D094u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x20D08Cu, 0x20D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D094u;
label_20d094:
    // 0x20d094: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20d094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d098: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x20d098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x20d09c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d0a0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20d0a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20d0a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d0a8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20d0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20d0acu;
}
