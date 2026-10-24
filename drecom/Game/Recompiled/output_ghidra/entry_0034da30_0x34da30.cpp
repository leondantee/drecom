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

// Function: entry_0034da30
// Address: 0x34da30 - 0x34daf8
void entry_0034da30_0x34da30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034da30_0x34da30");
#endif

    switch (ctx->pc) {
        case 0x34da40u: goto label_34da40;
        case 0x34da4cu: goto label_34da4c;
        case 0x34da9cu: goto label_34da9c;
        case 0x34daa8u: goto label_34daa8;
        case 0x34dae4u: goto label_34dae4;
        default: break;
    }

    ctx->pc = 0x34da30u;

    // 0x34da30: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34da30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34da34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34da38: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34DA38u;
    SET_GPR_U32(ctx, 31, 0x34DA40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34DA38u, 0x34DA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DA40u;
label_34da40:
    // 0x34da40: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34da40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da44: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34DA44u;
    SET_GPR_U32(ctx, 31, 0x34DA4Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34DA44u, 0x34DA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DA4Cu;
label_34da4c:
    // 0x34da4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34da4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34da50: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34da50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da54: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34da54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34da58: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34da58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34da5c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da60: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34da60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34da64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34da64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34da68: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34da68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34da6c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da70: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34da70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34da74: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x34da74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x34da78: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x34da78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x34da7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34da7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34da80: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x34da80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34da84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34da84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34da88: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34da88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34da8c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34da8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34da90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34da94: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34DA94u;
    SET_GPR_U32(ctx, 31, 0x34DA9Cu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34DA94u, 0x34DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DA9Cu;
label_34da9c:
    // 0x34da9c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34daa0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34DAA0u;
    SET_GPR_U32(ctx, 31, 0x34DAA8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34DAA0u, 0x34DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DAA8u;
label_34daa8:
    // 0x34daa8: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x34daa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34daac: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x34daacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x34dab0: 0x106002c1  beqz        $v1, . + 4 + (0x2C1 << 2)
    ctx->pc = 0x34DAB0u;
    {
        const bool branch_taken_0x34dab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dab0) {
            ctx->pc = 0x34E5B8u;
            return;
        }
    }
    ctx->pc = 0x34DAB8u;
    // 0x34dab8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34dabc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dac0: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x34dac0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34dac4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dac8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34dac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34dacc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34daccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34dad0: 0x24060431  addiu       $a2, $zero, 0x431
    ctx->pc = 0x34dad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1073));
    // 0x34dad4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34dad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34dad8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34dad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34dadc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34DADCu;
    SET_GPR_U32(ctx, 31, 0x34DAE4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34DADCu, 0x34DAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DAE4u;
label_34dae4:
    // 0x34dae4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34dae4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34dae8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34daec: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x34daecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x34daf0: 0x100002b1  b           . + 4 + (0x2B1 << 2)
    ctx->pc = 0x34DAF0u;
    {
        const bool branch_taken_0x34daf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34daf0) {
            ctx->pc = 0x34E5B8u;
            return;
        }
    }
    ctx->pc = 0x34DAF8u;
}
