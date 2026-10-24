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

// Function: entry_002f8ab8
// Address: 0x2f8ab8 - 0x2f8b5c
void entry_002f8ab8_0x2f8ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f8ab8_0x2f8ab8");
#endif

    switch (ctx->pc) {
        case 0x2f8ac0u: goto label_2f8ac0;
        case 0x2f8b38u: goto label_2f8b38;
        default: break;
    }

    ctx->pc = 0x2f8ab8u;

    // 0x2f8ab8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F8AB8u;
    SET_GPR_U32(ctx, 31, 0x2F8AC0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8AB8u, 0x2F8AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8AC0u;
label_2f8ac0:
    // 0x2f8ac0: 0x3c0640a0  lui         $a2, 0x40A0
    ctx->pc = 0x2f8ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16544 << 16));
    // 0x2f8ac4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2f8ac4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f8ac8: 0x0  nop
    ctx->pc = 0x2f8ac8u;
    // NOP
    // 0x2f8acc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8accu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f8ad0: 0x3c074234  lui         $a3, 0x4234
    ctx->pc = 0x2f8ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16948 << 16));
    // 0x2f8ad4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f8ad4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8ad8: 0x0  nop
    ctx->pc = 0x2f8ad8u;
    // NOP
    // 0x2f8adc: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8adcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f8ae0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f8ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f8ae4: 0x8fac0048  lw          $t4, 0x48($sp)
    ctx->pc = 0x2f8ae4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8ae8: 0x2609000b  addiu       $t1, $s0, 0xB
    ctx->pc = 0x2f8ae8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
    // 0x2f8aec: 0x8fab0048  lw          $t3, 0x48($sp)
    ctx->pc = 0x2f8aecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8af0: 0x260a000e  addiu       $t2, $s0, 0xE
    ctx->pc = 0x2f8af0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x2f8af4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f8af8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f8af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f8afc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f8afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f8b00: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f8b00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f8b04: 0x8d8400c4  lw          $a0, 0xC4($t4)
    ctx->pc = 0x2f8b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 196)));
    // 0x2f8b08: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2f8b08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f8b0c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f8b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f8b10: 0x24661a90  addiu       $a2, $v1, 0x1A90
    ctx->pc = 0x2f8b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6800));
    // 0x2f8b14: 0x8d6700c4  lw          $a3, 0xC4($t3)
    ctx->pc = 0x2f8b14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 196)));
    // 0x2f8b18: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x2f8b18u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f8b1c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f8b20: 0x24491af0  addiu       $t1, $v0, 0x1AF0
    ctx->pc = 0x2f8b20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 6896));
    // 0x2f8b24: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f8b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f8b28: 0x244a1a80  addiu       $t2, $v0, 0x1A80
    ctx->pc = 0x2f8b28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
    // 0x2f8b2c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f8b2cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8b30: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F8B30u;
    SET_GPR_U32(ctx, 31, 0x2F8B38u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F8B30u, 0x2F8B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8B38u;
label_2f8b38:
    // 0x2f8b38: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2f8b38u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f8b3c: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f8b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f8b40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8b44: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f8b44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f8b48: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2f8b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f8b4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8b50: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f8b50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f8b54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F8B54u;
    {
        const bool branch_taken_0x2f8b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8b54) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F8B5Cu;
}
