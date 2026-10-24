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

// Function: entry_00133fd8
// Address: 0x133fd8 - 0x134040
void entry_00133fd8_0x133fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133fd8_0x133fd8");
#endif

    switch (ctx->pc) {
        case 0x133fe4u: goto label_133fe4;
        case 0x134018u: goto label_134018;
        case 0x134030u: goto label_134030;
        default: break;
    }

    ctx->pc = 0x133fd8u;

    // 0x133fd8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133fdc: 0xc04d07c  jal         func_1341F0
    ctx->pc = 0x133FDCu;
    SET_GPR_U32(ctx, 31, 0x133FE4u);
    ctx->pc = 0x1341F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1341F0u, 0x133FDCu, 0x133FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FE4u;
label_133fe4:
    // 0x133fe4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133fe8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133fec: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x133fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x133ff0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x133ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x133ff4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x133ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x133ff8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ffc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134000: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x134000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x134004: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x134004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x134008: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x134008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13400c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13400cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x134010: 0xc0965d0  jal         func_259740
    ctx->pc = 0x134010u;
    SET_GPR_U32(ctx, 31, 0x134018u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x134010u, 0x134018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134018u;
label_134018:
    // 0x134018: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x134018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x13401c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134020: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x134020u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x134024: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x134024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134028: 0xc04d994  jal         func_136650
    ctx->pc = 0x134028u;
    SET_GPR_U32(ctx, 31, 0x134030u);
    ctx->pc = 0x136650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136650u, 0x134028u, 0x134030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134030u;
label_134030:
    // 0x134030: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x134030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134034: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x134034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x134038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x134038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13403c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13403cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x134040u;
}
