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

// Function: entry_002f7c38
// Address: 0x2f7c38 - 0x2f7cdc
void entry_002f7c38_0x2f7c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7c38_0x2f7c38");
#endif

    switch (ctx->pc) {
        case 0x2f7c40u: goto label_2f7c40;
        case 0x2f7cbcu: goto label_2f7cbc;
        default: break;
    }

    ctx->pc = 0x2f7c38u;

    // 0x2f7c38: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F7C38u;
    SET_GPR_U32(ctx, 31, 0x2F7C40u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F7C38u, 0x2F7C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7C40u;
label_2f7c40:
    // 0x2f7c40: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f7c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7c44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f7c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7c48: 0x0  nop
    ctx->pc = 0x2f7c48u;
    // NOP
    // 0x2f7c4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7c4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7c50: 0x3c044234  lui         $a0, 0x4234
    ctx->pc = 0x2f7c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7c54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f7c54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7c58: 0x0  nop
    ctx->pc = 0x2f7c58u;
    // NOP
    // 0x2f7c5c: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7c5cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7c60: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f7c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7c64: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7c68: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2f7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7c6c: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2f7c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7c70: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2f7c70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f7c74: 0x3c0541a0  lui         $a1, 0x41A0
    ctx->pc = 0x2f7c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16800 << 16));
    // 0x2f7c78: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x2f7c78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7c7c: 0x8c6600c4  lw          $a2, 0xC4($v1)
    ctx->pc = 0x2f7c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f7c80: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2f7c80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f7c84: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2f7c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2f7c88: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2f7c88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f7c8c: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2f7c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7c90: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2f7c90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f7c94: 0x8c4900c4  lw          $t1, 0xC4($v0)
    ctx->pc = 0x2f7c94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2f7c98: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2f7c98u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f7c9c: 0x240a0021  addiu       $t2, $zero, 0x21
    ctx->pc = 0x2f7c9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2f7ca0: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x2f7ca0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f7ca4: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2f7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7ca8: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2f7ca8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7cac: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7cacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7cb0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7cb0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f7cb4: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F7CB4u;
    SET_GPR_U32(ctx, 31, 0x2F7CBCu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F7CB4u, 0x2F7CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7CBCu;
label_2f7cbc:
    // 0x2f7cbc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f7cbcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7cc0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7cc4: 0xa0800100  sb          $zero, 0x100($a0)
    ctx->pc = 0x2f7cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7cc8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f7cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f7ccc: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7cd0: 0xa0830101  sb          $v1, 0x101($a0)
    ctx->pc = 0x2f7cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f7cd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7CD4u;
    {
        const bool branch_taken_0x2f7cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7cd4) {
            ctx->pc = 0x2F7CF0u;
            return;
        }
    }
    ctx->pc = 0x2F7CDCu;
}
