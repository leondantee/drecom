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

// Function: entry_002d5664
// Address: 0x2d5664 - 0x2d5704
void entry_002d5664_0x2d5664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d5664_0x2d5664");
#endif

    switch (ctx->pc) {
        case 0x2d56ccu: goto label_2d56cc;
        case 0x2d56e0u: goto label_2d56e0;
        default: break;
    }

    ctx->pc = 0x2d5664u;

    // 0x2d5664: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5668: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2d5668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d566c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d566cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d5670: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2d5670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2d5674: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d5674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5678: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2d5678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2d567c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d567cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d5680: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d5680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d5684: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d5684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d5688: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d5688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d568c: 0x8c420368  lw          $v0, 0x368($v0)
    ctx->pc = 0x2d568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d5690: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2d5690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d5694: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d5694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5698: 0x8c430368  lw          $v1, 0x368($v0)
    ctx->pc = 0x2d5698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d569c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2d569cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d56a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d56a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d56a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d56a8: 0xac430364  sw          $v1, 0x364($v0)
    ctx->pc = 0x2d56a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 868), GPR_U32(ctx, 3));
    // 0x2d56ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d56acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d56b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d56b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d56b4: 0x8c450364  lw          $a1, 0x364($v0)
    ctx->pc = 0x2d56b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 868)));
    // 0x2d56b8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2d56b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d56bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d56bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d56c0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d56c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d56c4: 0xc09696c  jal         func_25A5B0
    ctx->pc = 0x2D56C4u;
    SET_GPR_U32(ctx, 31, 0x2D56CCu);
    ctx->pc = 0x25A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5B0u, 0x2D56C4u, 0x2D56CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D56CCu;
label_2d56cc:
    // 0x2d56cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d56ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d56d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d56d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d56d4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2d56d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2d56d8: 0xc096c60  jal         func_25B180
    ctx->pc = 0x2D56D8u;
    SET_GPR_U32(ctx, 31, 0x2D56E0u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x2D56D8u, 0x2D56E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D56E0u;
label_2d56e0:
    // 0x2d56e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d56e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d56e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d56e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d56e8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d56e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d56ec: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x2d56ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x2d56f0: 0xac20add0  sw          $zero, -0x5230($at)
    ctx->pc = 0x2d56f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x85ADD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85ADD0u, _value); } while (0);
    // 0x2d56f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d56f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d56f8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x2d56f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2d56fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d5700: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x2d5700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d5704u;
}
