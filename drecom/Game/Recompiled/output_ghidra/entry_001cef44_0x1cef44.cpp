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

// Function: entry_001cef44
// Address: 0x1cef44 - 0x1ceff0
void entry_001cef44_0x1cef44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cef44_0x1cef44");
#endif

    switch (ctx->pc) {
        case 0x1cef58u: goto label_1cef58;
        case 0x1cef68u: goto label_1cef68;
        case 0x1cef84u: goto label_1cef84;
        case 0x1cef94u: goto label_1cef94;
        default: break;
    }

    ctx->pc = 0x1cef44u;

    // 0x1cef44: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cef44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cef48: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1cef48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1cef4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cef4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cef50: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CEF50u;
    SET_GPR_U32(ctx, 31, 0x1CEF58u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CEF50u, 0x1CEF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF58u;
label_1cef58:
    // 0x1cef58: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cef58u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cef5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cef60: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CEF60u;
    SET_GPR_U32(ctx, 31, 0x1CEF68u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CEF60u, 0x1CEF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF68u;
label_1cef68:
    // 0x1cef68: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cef68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cef6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cef6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cef70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cef70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cef74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cef74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cef78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cef78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cef7c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CEF7Cu;
    SET_GPR_U32(ctx, 31, 0x1CEF84u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CEF7Cu, 0x1CEF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF84u;
label_1cef84:
    // 0x1cef84: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cef84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cef88: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cef88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cef8c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CEF8Cu;
    SET_GPR_U32(ctx, 31, 0x1CEF94u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CEF8Cu, 0x1CEF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEF94u;
label_1cef94:
    // 0x1cef94: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1cef94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cef98: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1cef98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cef9c: 0x90e809e7  lbu         $t0, 0x9E7($a3)
    ctx->pc = 0x1cef9cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2535)));
    // 0x1cefa0: 0x11000024  beqz        $t0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1CEFA0u;
    {
        const bool branch_taken_0x1cefa0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cefa0) {
            ctx->pc = 0x1CF034u;
            return;
        }
    }
    ctx->pc = 0x1CEFA8u;
    // 0x1cefa8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cefa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cefac: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x1cefacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
    // 0x1cefb0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CEFB0u;
    {
        const bool branch_taken_0x1cefb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cefb0) {
            ctx->pc = 0x1CEFF0u;
            return;
        }
    }
    ctx->pc = 0x1CEFB8u;
    // 0x1cefb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cefb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cefbc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cefbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cefc0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1cefc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cefc4: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1cefc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1cefc8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cefc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cefcc: 0xa0c50001  sb          $a1, 0x1($a2)
    ctx->pc = 0x1cefccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cefd0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cefd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cefd4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1cefd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cefd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cefd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cefdc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cefdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cefe0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cefe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cefe4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cefe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cefe8: 0x100003eb  b           . + 4 + (0x3EB << 2)
    ctx->pc = 0x1CEFE8u;
    {
        const bool branch_taken_0x1cefe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cefe8) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CEFF0u;
}
