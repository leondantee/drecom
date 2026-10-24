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

// Function: entry_00133b88
// Address: 0x133b88 - 0x133bf0
void entry_00133b88_0x133b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133b88_0x133b88");
#endif

    switch (ctx->pc) {
        case 0x133b94u: goto label_133b94;
        case 0x133bc8u: goto label_133bc8;
        case 0x133be0u: goto label_133be0;
        default: break;
    }

    ctx->pc = 0x133b88u;

    // 0x133b88: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b8c: 0xc04d07c  jal         func_1341F0
    ctx->pc = 0x133B8Cu;
    SET_GPR_U32(ctx, 31, 0x133B94u);
    ctx->pc = 0x1341F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1341F0u, 0x133B8Cu, 0x133B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B94u;
label_133b94:
    // 0x133b94: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b98: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133b9c: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x133b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x133ba0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x133ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x133ba4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x133ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x133ba8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133bac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133bb0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x133bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x133bb4: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x133bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x133bb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x133bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133bbc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x133bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x133bc0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x133BC0u;
    SET_GPR_U32(ctx, 31, 0x133BC8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x133BC0u, 0x133BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BC8u;
label_133bc8:
    // 0x133bc8: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x133bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x133bcc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133bd0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x133bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x133bd4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133bd8: 0xc04d994  jal         func_136650
    ctx->pc = 0x133BD8u;
    SET_GPR_U32(ctx, 31, 0x133BE0u);
    ctx->pc = 0x136650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136650u, 0x133BD8u, 0x133BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BE0u;
label_133be0:
    // 0x133be0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133be4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x133be8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x133bec: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x133becu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x133bf0u;
}
