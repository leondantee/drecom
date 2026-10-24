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

// Function: entry_002f6ab8
// Address: 0x2f6ab8 - 0x2f6b58
void entry_002f6ab8_0x2f6ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6ab8_0x2f6ab8");
#endif

    switch (ctx->pc) {
        case 0x2f6ac4u: goto label_2f6ac4;
        case 0x2f6b34u: goto label_2f6b34;
        default: break;
    }

    ctx->pc = 0x2f6ab8u;

    // 0x2f6ab8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f6ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f6abc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6ABCu;
    SET_GPR_U32(ctx, 31, 0x2F6AC4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6ABCu, 0x2F6AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6AC4u;
label_2f6ac4:
    // 0x2f6ac4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6ac8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6acc: 0x0  nop
    ctx->pc = 0x2f6accu;
    // NOP
    // 0x2f6ad0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6ad0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6ad4: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6ad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f6ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6adc: 0x0  nop
    ctx->pc = 0x2f6adcu;
    // NOP
    // 0x2f6ae0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6ae0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6ae4: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2f6ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6ae8: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2f6ae8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6aec: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6af0: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x2f6af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6af4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2f6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6af8: 0x8ca700c4  lw          $a3, 0xC4($a1)
    ctx->pc = 0x2f6af8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2f6afc: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2f6afcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f6b00: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x2f6b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f6b04: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2f6b04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f6b08: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f6b08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6b0c: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2f6b0cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f6b10: 0x8c4a00c4  lw          $t2, 0xC4($v0)
    ctx->pc = 0x2f6b10u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2f6b14: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x2f6b14u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f6b18: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x2f6b18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f6b1c: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f6b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6b20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f6b20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f6b24: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6b24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6b28: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6b28u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6b2c: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F6B2Cu;
    SET_GPR_U32(ctx, 31, 0x2F6B34u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F6B2Cu, 0x2F6B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B34u;
label_2f6b34:
    // 0x2f6b34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f6b34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6b38: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2f6b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f6b3c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6b40: 0xa0700100  sb          $s0, 0x100($v1)
    ctx->pc = 0x2f6b40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 16));
    // 0x2f6b44: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f6b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6b48: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f6b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6b4c: 0xa0830101  sb          $v1, 0x101($a0)
    ctx->pc = 0x2f6b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f6b50: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2F6B50u;
    {
        const bool branch_taken_0x2f6b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6b50) {
            ctx->pc = 0x2F6CA0u;
            return;
        }
    }
    ctx->pc = 0x2F6B58u;
}
