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

// Function: entry_0014ce58
// Address: 0x14ce58 - 0x14cecc
void entry_0014ce58_0x14ce58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ce58_0x14ce58");
#endif

    switch (ctx->pc) {
        case 0x14ce68u: goto label_14ce68;
        case 0x14ce74u: goto label_14ce74;
        case 0x14ce88u: goto label_14ce88;
        case 0x14ce94u: goto label_14ce94;
        case 0x14ceb4u: goto label_14ceb4;
        default: break;
    }

    ctx->pc = 0x14ce58u;

    // 0x14ce58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ce5c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ce5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ce60: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14CE60u;
    SET_GPR_U32(ctx, 31, 0x14CE68u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14CE60u, 0x14CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE68u;
label_14ce68:
    // 0x14ce68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ce68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ce6c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14CE6Cu;
    SET_GPR_U32(ctx, 31, 0x14CE74u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14CE6Cu, 0x14CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE74u;
label_14ce74:
    // 0x14ce74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14ce74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14ce78: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ce7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ce7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ce80: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14CE80u;
    SET_GPR_U32(ctx, 31, 0x14CE88u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14CE80u, 0x14CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE88u;
label_14ce88:
    // 0x14ce88: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14ce88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ce8c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14CE8Cu;
    SET_GPR_U32(ctx, 31, 0x14CE94u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14CE8Cu, 0x14CE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE94u;
label_14ce94:
    // 0x14ce94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ce98: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x14ce98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x14ce9c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14ce9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14cea0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x14cea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x14cea4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14CEA4u;
    {
        const bool branch_taken_0x14cea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cea4) {
            ctx->pc = 0x14CECCu;
            return;
        }
    }
    ctx->pc = 0x14CEACu;
    // 0x14ceac: 0xc0585dc  jal         func_161770
    ctx->pc = 0x14CEACu;
    SET_GPR_U32(ctx, 31, 0x14CEB4u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x14CEACu, 0x14CEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CEB4u;
label_14ceb4:
    // 0x14ceb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14CEB4u;
    {
        const bool branch_taken_0x14ceb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ceb4) {
            ctx->pc = 0x14CECCu;
            return;
        }
    }
    ctx->pc = 0x14CEBCu;
    // 0x14cebc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cec0: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14cec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cec4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14CEC4u;
    {
        const bool branch_taken_0x14cec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cec4) {
            ctx->pc = 0x14CF1Cu;
            return;
        }
    }
    ctx->pc = 0x14CECCu;
}
