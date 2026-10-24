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

// Function: entry_0012d350
// Address: 0x12d350 - 0x12d394
void entry_0012d350_0x12d350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d350_0x12d350");
#endif

    switch (ctx->pc) {
        case 0x12d364u: goto label_12d364;
        case 0x12d384u: goto label_12d384;
        default: break;
    }

    ctx->pc = 0x12d350u;

    // 0x12d350: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12d350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d354: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d354u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d358: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12d358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d35c: 0xc0507ac  jal         func_141EB0
    ctx->pc = 0x12D35Cu;
    SET_GPR_U32(ctx, 31, 0x12D364u);
    ctx->pc = 0x141EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141EB0u, 0x12D35Cu, 0x12D364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D364u;
label_12d364:
    // 0x12d364: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12d364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d368: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d36c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12d36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12d370: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x12d370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x12d374: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12d374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d378: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12d378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12d37c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12D37Cu;
    SET_GPR_U32(ctx, 31, 0x12D384u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12D37Cu, 0x12D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D384u;
label_12d384:
    // 0x12d384: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12d384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d388: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12d388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12d38c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d390: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12d390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12d394u;
}
