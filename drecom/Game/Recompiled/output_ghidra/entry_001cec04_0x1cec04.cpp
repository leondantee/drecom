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

// Function: entry_001cec04
// Address: 0x1cec04 - 0x1cec90
void entry_001cec04_0x1cec04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cec04_0x1cec04");
#endif

    switch (ctx->pc) {
        case 0x1cec14u: goto label_1cec14;
        case 0x1cec24u: goto label_1cec24;
        case 0x1cec3cu: goto label_1cec3c;
        case 0x1cec4cu: goto label_1cec4c;
        default: break;
    }

    ctx->pc = 0x1cec04u;

    // 0x1cec04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cec04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cec08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cec08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cec0c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CEC0Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC14u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CEC0Cu, 0x1CEC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC14u;
label_1cec14:
    // 0x1cec14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cec14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cec18: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cec18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cec1c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CEC1Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC24u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CEC1Cu, 0x1CEC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC24u;
label_1cec24:
    // 0x1cec24: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cec24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cec28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cec28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cec2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cec30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cec30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cec34: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CEC34u;
    SET_GPR_U32(ctx, 31, 0x1CEC3Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CEC34u, 0x1CEC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC3Cu;
label_1cec3c:
    // 0x1cec3c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cec3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cec40: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cec40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cec44: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CEC44u;
    SET_GPR_U32(ctx, 31, 0x1CEC4Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CEC44u, 0x1CEC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC4Cu;
label_1cec4c:
    // 0x1cec4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cec4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cec50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cec54: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1cec54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1cec58: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CEC58u;
    {
        const bool branch_taken_0x1cec58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cec58) {
            ctx->pc = 0x1CECA4u;
            return;
        }
    }
    ctx->pc = 0x1CEC60u;
    // 0x1cec60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cec64: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cec64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cec68: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1cec68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1cec6c: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1cec6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cec70: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CEC70u;
    {
        const bool branch_taken_0x1cec70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cec70) {
            ctx->pc = 0x1CEC90u;
            return;
        }
    }
    ctx->pc = 0x1CEC78u;
    // 0x1cec78: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cec78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cec7c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1cec7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1cec80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cec80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cec84: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1cec84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cec88: 0x100004c3  b           . + 4 + (0x4C3 << 2)
    ctx->pc = 0x1CEC88u;
    {
        const bool branch_taken_0x1cec88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cec88) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CEC90u;
}
