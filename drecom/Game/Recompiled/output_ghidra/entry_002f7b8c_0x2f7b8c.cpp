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

// Function: entry_002f7b8c
// Address: 0x2f7b8c - 0x2f7c38
void entry_002f7b8c_0x2f7b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7b8c_0x2f7b8c");
#endif

    switch (ctx->pc) {
        case 0x2f7b94u: goto label_2f7b94;
        case 0x2f7c14u: goto label_2f7c14;
        default: break;
    }

    ctx->pc = 0x2f7b8cu;

    // 0x2f7b8c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F7B8Cu;
    SET_GPR_U32(ctx, 31, 0x2F7B94u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F7B8Cu, 0x2F7B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B94u;
label_2f7b94:
    // 0x2f7b94: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f7b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7b98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f7b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7b9c: 0x0  nop
    ctx->pc = 0x2f7b9cu;
    // NOP
    // 0x2f7ba0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7ba0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7ba4: 0x3c074234  lui         $a3, 0x4234
    ctx->pc = 0x2f7ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7ba8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f7ba8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7bac: 0x0  nop
    ctx->pc = 0x2f7bacu;
    // NOP
    // 0x2f7bb0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7bb0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7bb4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f7bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7bb8: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x2f7bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7bbc: 0x8fa800f8  lw          $t0, 0xF8($sp)
    ctx->pc = 0x2f7bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7bc0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f7bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7bc4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2f7bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f7bc8: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x2f7bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x2f7bcc: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2f7bccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7bd0: 0x8ca500c4  lw          $a1, 0xC4($a1)
    ctx->pc = 0x2f7bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2f7bd4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2f7bd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2f7bd8: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x2f7bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2f7bdc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2f7bdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f7be0: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2f7be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7be4: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2f7be4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f7be8: 0x8d0800c4  lw          $t0, 0xC4($t0)
    ctx->pc = 0x2f7be8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 196)));
    // 0x2f7bec: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2f7becu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f7bf0: 0x24090016  addiu       $t1, $zero, 0x16
    ctx->pc = 0x2f7bf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2f7bf4: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x2f7bf4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f7bf8: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7bf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7bfc: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x2f7bfcu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f7c00: 0x27b500c0  addiu       $s5, $sp, 0xC0
    ctx->pc = 0x2f7c00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7c04: 0x72a05628  paddub      $t2, $s5, $zero
    ctx->pc = 0x2f7c04u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2f7c08: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7c08u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f7c0c: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F7C0Cu;
    SET_GPR_U32(ctx, 31, 0x2F7C14u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F7C0Cu, 0x2F7C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7C14u;
label_2f7c14:
    // 0x2f7c14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f7c14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7c18: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f7c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f7c1c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7c20: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f7c20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f7c24: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f7c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f7c28: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7c2c: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f7c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f7c30: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2F7C30u;
    {
        const bool branch_taken_0x2f7c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7c30) {
            ctx->pc = 0x2F7CF0u;
            return;
        }
    }
    ctx->pc = 0x2F7C38u;
}
