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

// Function: entry_0014c630
// Address: 0x14c630 - 0x14c688
void entry_0014c630_0x14c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c630_0x14c630");
#endif

    switch (ctx->pc) {
        case 0x14c650u: goto label_14c650;
        case 0x14c664u: goto label_14c664;
        default: break;
    }

    ctx->pc = 0x14c630u;

    // 0x14c630: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c634: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c638: 0x8c450364  lw          $a1, 0x364($v0)
    ctx->pc = 0x14c638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 868)));
    // 0x14c63c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14c63cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c640: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14c640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c644: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14c644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14c648: 0xc09696c  jal         func_25A5B0
    ctx->pc = 0x14C648u;
    SET_GPR_U32(ctx, 31, 0x14C650u);
    ctx->pc = 0x25A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5B0u, 0x14C648u, 0x14C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C650u;
label_14c650:
    // 0x14c650: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c654: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c658: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x14c658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x14c65c: 0xc096c60  jal         func_25B180
    ctx->pc = 0x14C65Cu;
    SET_GPR_U32(ctx, 31, 0x14C664u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x14C65Cu, 0x14C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C664u;
label_14c664:
    // 0x14c664: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c668: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c66c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14c66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14c670: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14c670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x14c674: 0xac209230  sw          $zero, -0x6DD0($at)
    ctx->pc = 0x14c674u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3E9230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9230u, _value); } while (0);
    // 0x14c678: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14c678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c67c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14c67cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14c680: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c684: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14c684u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14c688u;
}
