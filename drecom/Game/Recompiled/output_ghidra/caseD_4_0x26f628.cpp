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

// Function: caseD_4
// Address: 0x26f628 - 0x26f6a8
void caseD_4_0x26f628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x26f628");
#endif

    switch (ctx->pc) {
        case 0x26f648u: goto label_26f648;
        case 0x26f68cu: goto label_26f68c;
        default: break;
    }

    ctx->pc = 0x26f628u;

    // 0x26f628: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f62c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f630: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26f630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26f634: 0x2406005f  addiu       $a2, $zero, 0x5F
    ctx->pc = 0x26f634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x26f638: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26f638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f63c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26f63cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26f640: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26F640u;
    SET_GPR_U32(ctx, 31, 0x26F648u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26F640u, 0x26F648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F648u;
label_26f648:
    // 0x26f648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26f648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f64c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f650: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x26f650u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x26f654: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f658: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x26f658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f65c: 0x3c02c332  lui         $v0, 0xC332
    ctx->pc = 0x26f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49970 << 16));
    // 0x26f660: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x26f660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x26f664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26f664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f668: 0x0  nop
    ctx->pc = 0x26f668u;
    // NOP
    // 0x26f66c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26f66cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f670: 0x0  nop
    ctx->pc = 0x26f670u;
    // NOP
    // 0x26f674: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x26F674u;
    {
        const bool branch_taken_0x26f674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f674) {
            ctx->pc = 0x26F6A8u;
            return;
        }
    }
    ctx->pc = 0x26F67Cu;
    // 0x26f67c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f680: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f680u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f684: 0xc0bc448  jal         func_2F1120
    ctx->pc = 0x26F684u;
    SET_GPR_U32(ctx, 31, 0x26F68Cu);
    ctx->pc = 0x2F1120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1120u, 0x26F684u, 0x26F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F68Cu;
label_26f68c:
    // 0x26f68c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x26f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x26f690: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26f690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26f694: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26f694u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f698: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f698u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f69c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x26f69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26f6a0: 0xc0561d4  jal         func_158750
    ctx->pc = 0x26F6A0u;
    SET_GPR_U32(ctx, 31, 0x26F6A8u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x26F6A0u, 0x26F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6A8u;
}
