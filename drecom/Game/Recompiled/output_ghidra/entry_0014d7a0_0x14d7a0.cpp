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

// Function: entry_0014d7a0
// Address: 0x14d7a0 - 0x14d7f8
void entry_0014d7a0_0x14d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d7a0_0x14d7a0");
#endif

    switch (ctx->pc) {
        case 0x14d7c0u: goto label_14d7c0;
        case 0x14d7d4u: goto label_14d7d4;
        default: break;
    }

    ctx->pc = 0x14d7a0u;

    // 0x14d7a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d7a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d7a8: 0x8c450364  lw          $a1, 0x364($v0)
    ctx->pc = 0x14d7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 868)));
    // 0x14d7ac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14d7acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d7b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14d7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d7b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14d7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14d7b8: 0xc09696c  jal         func_25A5B0
    ctx->pc = 0x14D7B8u;
    SET_GPR_U32(ctx, 31, 0x14D7C0u);
    ctx->pc = 0x25A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5B0u, 0x14D7B8u, 0x14D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7C0u;
label_14d7c0:
    // 0x14d7c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d7c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d7c8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x14d7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x14d7cc: 0xc096c60  jal         func_25B180
    ctx->pc = 0x14D7CCu;
    SET_GPR_U32(ctx, 31, 0x14D7D4u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x14D7CCu, 0x14D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7D4u;
label_14d7d4:
    // 0x14d7d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14d7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d7d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d7dc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14d7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14d7e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d7e4: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x14d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x14d7e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d7ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14d7ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14d7f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14d7f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14d7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14d7f8u;
}
