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

// Function: entry_00154c44
// Address: 0x154c44 - 0x154d14
void entry_00154c44_0x154c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154c44_0x154c44");
#endif

    switch (ctx->pc) {
        case 0x154c58u: goto label_154c58;
        case 0x154c6cu: goto label_154c6c;
        case 0x154c90u: goto label_154c90;
        case 0x154ca8u: goto label_154ca8;
        case 0x154cbcu: goto label_154cbc;
        case 0x154ce0u: goto label_154ce0;
        default: break;
    }

    ctx->pc = 0x154c44u;

    // 0x154c44: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154c48: 0x8e0515c0  lw          $a1, 0x15C0($s0)
    ctx->pc = 0x154c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5568)));
    // 0x154c4c: 0x260615d0  addiu       $a2, $s0, 0x15D0
    ctx->pc = 0x154c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
    // 0x154c50: 0xc05db20  jal         func_176C80
    ctx->pc = 0x154C50u;
    SET_GPR_U32(ctx, 31, 0x154C58u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x154C50u, 0x154C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C58u;
label_154c58:
    // 0x154c58: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x154c58u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x154c5c: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154c60: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x154c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x154c64: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x154C64u;
    SET_GPR_U32(ctx, 31, 0x154C6Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x154C64u, 0x154C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C6Cu;
label_154c6c:
    // 0x154c6c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x154c6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x154c70: 0xc60115b8  lwc1        $f1, 0x15B8($s0)
    ctx->pc = 0x154c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154c74: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x154c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x154c78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154c7c: 0x0  nop
    ctx->pc = 0x154c7cu;
    // NOP
    // 0x154c80: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x154c80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x154c84: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154c88: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x154C88u;
    SET_GPR_U32(ctx, 31, 0x154C90u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x154C88u, 0x154C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C90u;
label_154c90:
    // 0x154c90: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x154c90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x154c94: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x154c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x154c98: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154c9c: 0x246500f0  addiu       $a1, $v1, 0xF0
    ctx->pc = 0x154c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x154ca0: 0xc05dafc  jal         func_176BF0
    ctx->pc = 0x154CA0u;
    SET_GPR_U32(ctx, 31, 0x154CA8u);
    ctx->pc = 0x176BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176BF0u, 0x154CA0u, 0x154CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154CA8u;
label_154ca8:
    // 0x154ca8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x154ca8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x154cac: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154cb0: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x154cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x154cb4: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x154CB4u;
    SET_GPR_U32(ctx, 31, 0x154CBCu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x154CB4u, 0x154CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154CBCu;
label_154cbc:
    // 0x154cbc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x154cbcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x154cc0: 0xc60115b8  lwc1        $f1, 0x15B8($s0)
    ctx->pc = 0x154cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154cc4: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x154cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x154cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154ccc: 0x0  nop
    ctx->pc = 0x154cccu;
    // NOP
    // 0x154cd0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x154cd0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x154cd4: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154cd8: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x154CD8u;
    SET_GPR_U32(ctx, 31, 0x154CE0u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x154CD8u, 0x154CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154CE0u;
label_154ce0:
    // 0x154ce0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x154ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x154ce4: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x154ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x154ce8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x154ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x154cec: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x154cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x154cf0: 0x14a000d6  bnez        $a1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x154CF0u;
    {
        const bool branch_taken_0x154cf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x154cf0) {
            ctx->pc = 0x15504Cu;
            return;
        }
    }
    ctx->pc = 0x154CF8u;
    // 0x154cf8: 0x9204157c  lbu         $a0, 0x157C($s0)
    ctx->pc = 0x154cf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5500)));
    // 0x154cfc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x154cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x154d00: 0xa203157c  sb          $v1, 0x157C($s0)
    ctx->pc = 0x154d00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5500), (uint8_t)GPR_U32(ctx, 3));
    // 0x154d04: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x154d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x154d08: 0xa60315bc  sh          $v1, 0x15BC($s0)
    ctx->pc = 0x154d08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5564), (uint16_t)GPR_U32(ctx, 3));
    // 0x154d0c: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x154D0Cu;
    {
        const bool branch_taken_0x154d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154d0c) {
            ctx->pc = 0x15504Cu;
            return;
        }
    }
    ctx->pc = 0x154D14u;
}
