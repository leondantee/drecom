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

// Function: entry_00204ee4
// Address: 0x204ee4 - 0x204f88
void entry_00204ee4_0x204ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204ee4_0x204ee4");
#endif

    switch (ctx->pc) {
        case 0x204f30u: goto label_204f30;
        case 0x204f74u: goto label_204f74;
        default: break;
    }

    ctx->pc = 0x204ee4u;

    // 0x204ee4: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204ee8: 0x94e50094  lhu         $a1, 0x94($a3)
    ctx->pc = 0x204ee8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x204eec: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x204eecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x204ef0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x204ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204ef4: 0x14e80024  bne         $a3, $t0, . + 4 + (0x24 << 2)
    ctx->pc = 0x204EF4u;
    {
        const bool branch_taken_0x204ef4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x204ef4) {
            ctx->pc = 0x204F88u;
            return;
        }
    }
    ctx->pc = 0x204EFCu;
    // 0x204efc: 0x3c053e19  lui         $a1, 0x3E19
    ctx->pc = 0x204efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15897 << 16));
    // 0x204f00: 0x34a2999a  ori         $v0, $a1, 0x999A
    ctx->pc = 0x204f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39322);
    // 0x204f04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x204f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204f08: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x204f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204f0c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x204f0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204f10: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x204f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204f14: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204f14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204f1c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x204f1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204f20: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204f24: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204f24u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204f28: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204F28u;
    SET_GPR_U32(ctx, 31, 0x204F30u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204F28u, 0x204F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F30u;
label_204f30:
    // 0x204f30: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x204f30u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204f34: 0x3c053f59  lui         $a1, 0x3F59
    ctx->pc = 0x204f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16217 << 16));
    // 0x204f38: 0x34a2999a  ori         $v0, $a1, 0x999A
    ctx->pc = 0x204f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39322);
    // 0x204f3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x204f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x204f40: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x204f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204f44: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x204f44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x204f48: 0x8ce208c0  lw          $v0, 0x8C0($a3)
    ctx->pc = 0x204f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2240)));
    // 0x204f4c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x204f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x204f50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x204f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x204f54: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x204f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204f58: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204f5c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x204f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204f60: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204f60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204f64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204f68: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204f68u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204f6c: 0xc06c130  jal         func_1B04C0
    ctx->pc = 0x204F6Cu;
    SET_GPR_U32(ctx, 31, 0x204F74u);
    ctx->pc = 0x1B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04C0u, 0x204F6Cu, 0x204F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F74u;
label_204f74:
    // 0x204f74: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x204f74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204f78: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204f78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204f7c: 0x94e20094  lhu         $v0, 0x94($a3)
    ctx->pc = 0x204f7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x204f80: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x204f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204f84: 0xa4e30094  sh          $v1, 0x94($a3)
    ctx->pc = 0x204f84u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 148), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x204f88u;
}
