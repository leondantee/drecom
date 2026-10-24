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

// Function: entry_002cba00
// Address: 0x2cba00 - 0x2cba98
void entry_002cba00_0x2cba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cba00_0x2cba00");
#endif

    switch (ctx->pc) {
        case 0x2cba18u: goto label_2cba18;
        case 0x2cba38u: goto label_2cba38;
        case 0x2cba48u: goto label_2cba48;
        case 0x2cba54u: goto label_2cba54;
        case 0x2cba90u: goto label_2cba90;
        default: break;
    }

    ctx->pc = 0x2cba00u;

    // 0x2cba00: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cba00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba04: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2cba04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cba08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cba08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cba10: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CBA10u;
    SET_GPR_U32(ctx, 31, 0x2CBA18u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CBA10u, 0x2CBA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA18u;
label_2cba18:
    // 0x2cba18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cba18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba24: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cba24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cba28: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cba28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cba2c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cba2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cba30: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CBA30u;
    SET_GPR_U32(ctx, 31, 0x2CBA38u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CBA30u, 0x2CBA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA38u;
label_2cba38:
    // 0x2cba38: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cba38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cba3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cba40: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CBA40u;
    SET_GPR_U32(ctx, 31, 0x2CBA48u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CBA40u, 0x2CBA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA48u;
label_2cba48:
    // 0x2cba48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cba48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba4c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CBA4Cu;
    SET_GPR_U32(ctx, 31, 0x2CBA54u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CBA4Cu, 0x2CBA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA54u;
label_2cba54:
    // 0x2cba54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cba54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba58: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2cba58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2cba5c: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2CBA5Cu;
    {
        const bool branch_taken_0x2cba5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cba5c) {
            ctx->pc = 0x2CBC24u;
            return;
        }
    }
    ctx->pc = 0x2CBA64u;
    // 0x2cba64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cba64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cba68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba6c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cba6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cba70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cba74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cba78: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cba78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cba7c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2cba7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2cba80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cba80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cba84: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cba84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cba88: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CBA88u;
    SET_GPR_U32(ctx, 31, 0x2CBA90u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CBA88u, 0x2CBA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA90u;
label_2cba90:
    // 0x2cba90: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2CBA90u;
    {
        const bool branch_taken_0x2cba90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cba90) {
            ctx->pc = 0x2CBC24u;
            return;
        }
    }
    ctx->pc = 0x2CBA98u;
}
