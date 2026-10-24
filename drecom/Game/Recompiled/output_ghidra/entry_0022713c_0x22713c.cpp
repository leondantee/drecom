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

// Function: entry_0022713c
// Address: 0x22713c - 0x227224
void entry_0022713c_0x22713c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022713c_0x22713c");
#endif

    switch (ctx->pc) {
        case 0x227178u: goto label_227178;
        case 0x2271e0u: goto label_2271e0;
        case 0x227218u: goto label_227218;
        default: break;
    }

    ctx->pc = 0x22713cu;

    // 0x22713c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x22713cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227140: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x227140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x227144: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x227144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x227148: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x227148u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22714c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22714cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227150: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227154: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x227154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x227158: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22715c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x22715cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227160: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x227160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x227164: 0x2406781a  addiu       $a2, $zero, 0x781A
    ctx->pc = 0x227164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30746));
    // 0x227168: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x227168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22716c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22716cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x227170: 0xc0965d0  jal         func_259740
    ctx->pc = 0x227170u;
    SET_GPR_U32(ctx, 31, 0x227178u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x227170u, 0x227178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227178u;
label_227178:
    // 0x227178: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227178u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22717c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22717cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227180: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227184: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227188: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x227188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x22718c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22718cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227190: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x227190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227194: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x227194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x227198: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x227198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x22719c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x22719cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2271a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2271a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2271a4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2271a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2271a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2271a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2271ac: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2271acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2271b0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2271b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2271b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2271b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2271b8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2271b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2271bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2271bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2271c0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2271c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2271c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2271c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2271c8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2271c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2271cc: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x2271ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2271d0: 0x34830018  ori         $v1, $a0, 0x18
    ctx->pc = 0x2271d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24);
    // 0x2271d4: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x2271d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x2271d8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2271D8u;
    SET_GPR_U32(ctx, 31, 0x2271E0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2271D8u, 0x2271E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2271E0u;
label_2271e0:
    // 0x2271e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2271e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2271e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2271e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2271e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2271e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2271ec: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2271ECu;
    {
        const bool branch_taken_0x2271ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2271ec) {
            ctx->pc = 0x227224u;
            return;
        }
    }
    ctx->pc = 0x2271F4u;
    // 0x2271f4: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2271f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2271f8: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x2271f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x2271fc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2271fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x227200: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x227200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227204: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x227204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x227208: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x227208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x22720c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22720cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x227210: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x227210u;
    SET_GPR_U32(ctx, 31, 0x227218u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x227210u, 0x227218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227218u;
label_227218:
    // 0x227218: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227218u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22721c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22721Cu;
    {
        const bool branch_taken_0x22721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22721c) {
            ctx->pc = 0x22724Cu;
            return;
        }
    }
    ctx->pc = 0x227224u;
}
