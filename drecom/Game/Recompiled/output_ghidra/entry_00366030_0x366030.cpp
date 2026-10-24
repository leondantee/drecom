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

// Function: entry_00366030
// Address: 0x366030 - 0x366098
void entry_00366030_0x366030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00366030_0x366030");
#endif

    switch (ctx->pc) {
        case 0x366050u: goto label_366050;
        case 0x366064u: goto label_366064;
        case 0x366070u: goto label_366070;
        default: break;
    }

    ctx->pc = 0x366030u;

    // 0x366030: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366034: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366038: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x366038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36603c: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x36603cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x366040: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x366040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x366044: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x366044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366048: 0xc0965d0  jal         func_259740
    ctx->pc = 0x366048u;
    SET_GPR_U32(ctx, 31, 0x366050u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x366048u, 0x366050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366050u;
label_366050:
    // 0x366050: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366054: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366058: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x366058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x36605c: 0xc096c60  jal         func_25B180
    ctx->pc = 0x36605Cu;
    SET_GPR_U32(ctx, 31, 0x366064u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x36605Cu, 0x366064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366064u;
label_366064:
    // 0x366064: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366068: 0xc05ce54  jal         func_173950
    ctx->pc = 0x366068u;
    SET_GPR_U32(ctx, 31, 0x366070u);
    ctx->pc = 0x173950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173950u, 0x366068u, 0x366070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366070u;
label_366070:
    // 0x366070: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x366070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x366074: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366078: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x366078u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x36607c: 0xae0013fc  sw          $zero, 0x13FC($s0)
    ctx->pc = 0x36607cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5116), GPR_U32(ctx, 0));
    // 0x366080: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366084: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x366084u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x366088: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36608c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36608cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x366090: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x366090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x366094: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x366094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x366098u;
}
