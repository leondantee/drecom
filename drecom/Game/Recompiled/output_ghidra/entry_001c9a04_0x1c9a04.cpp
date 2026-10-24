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

// Function: entry_001c9a04
// Address: 0x1c9a04 - 0x1c9a90
void entry_001c9a04_0x1c9a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9a04_0x1c9a04");
#endif

    switch (ctx->pc) {
        case 0x1c9a28u: goto label_1c9a28;
        case 0x1c9a38u: goto label_1c9a38;
        case 0x1c9a44u: goto label_1c9a44;
        case 0x1c9a5cu: goto label_1c9a5c;
        case 0x1c9a68u: goto label_1c9a68;
        default: break;
    }

    ctx->pc = 0x1c9a04u;

    // 0x1c9a04: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9a08: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1c9a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9a0c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9a10: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1c9a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9a14: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c9a14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c9a18: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1c9a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1c9a1c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c9a1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c9a20: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C9A20u;
    SET_GPR_U32(ctx, 31, 0x1C9A28u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C9A20u, 0x1C9A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A28u;
label_1c9a28:
    // 0x1c9a28: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9a2c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c9a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c9a30: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C9A30u;
    SET_GPR_U32(ctx, 31, 0x1C9A38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C9A30u, 0x1C9A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A38u;
label_1c9a38:
    // 0x1c9a38: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9a3c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C9A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C9A44u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C9A3Cu, 0x1C9A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A44u;
label_1c9a44:
    // 0x1c9a44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9a48: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9a4c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1c9a4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c9a50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c9a50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c9a54: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C9A54u;
    SET_GPR_U32(ctx, 31, 0x1C9A5Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C9A54u, 0x1C9A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A5Cu;
label_1c9a5c:
    // 0x1c9a5c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c9a5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c9a60: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C9A60u;
    SET_GPR_U32(ctx, 31, 0x1C9A68u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C9A60u, 0x1C9A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A68u;
label_1c9a68:
    // 0x1c9a68: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9a6c: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1c9a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1c9a70: 0x106000e4  beqz        $v1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x1C9A70u;
    {
        const bool branch_taken_0x1c9a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9a70) {
            ctx->pc = 0x1C9E04u;
            return;
        }
    }
    ctx->pc = 0x1C9A78u;
    // 0x1c9a78: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9a7c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c9a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c9a80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c9a84: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c9a84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c9a88: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x1C9A88u;
    {
        const bool branch_taken_0x1c9a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9a88) {
            ctx->pc = 0x1C9F10u;
            return;
        }
    }
    ctx->pc = 0x1C9A90u;
}
