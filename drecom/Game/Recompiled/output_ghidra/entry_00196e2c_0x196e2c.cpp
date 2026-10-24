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

// Function: entry_00196e2c
// Address: 0x196e2c - 0x196fdc
void entry_00196e2c_0x196e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196e2c_0x196e2c");
#endif

    switch (ctx->pc) {
        case 0x196e64u: goto label_196e64;
        case 0x196e8cu: goto label_196e8c;
        case 0x196eb4u: goto label_196eb4;
        case 0x196ee0u: goto label_196ee0;
        case 0x196f0cu: goto label_196f0c;
        case 0x196f34u: goto label_196f34;
        case 0x196f64u: goto label_196f64;
        case 0x196f98u: goto label_196f98;
        case 0x196fccu: goto label_196fcc;
        default: break;
    }

    ctx->pc = 0x196e2cu;

    // 0x196e2c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196e30: 0x94c70094  lhu         $a3, 0x94($a2)
    ctx->pc = 0x196e30u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x196e34: 0x14e00069  bnez        $a3, . + 4 + (0x69 << 2)
    ctx->pc = 0x196E34u;
    {
        const bool branch_taken_0x196e34 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x196e34) {
            ctx->pc = 0x196FDCu;
            return;
        }
    }
    ctx->pc = 0x196E3Cu;
    // 0x196e3c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196e40: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x196e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196e44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x196e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196e48: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196e4c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x196e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x196e50: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196e50u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196e54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196e58: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196e58u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196e5c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196E5Cu;
    SET_GPR_U32(ctx, 31, 0x196E64u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196E5Cu, 0x196E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E64u;
label_196e64:
    // 0x196e64: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196e68: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x196e68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196e6c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x196e6cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196e70: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196e74: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x196e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x196e78: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196e78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196e7c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196e80: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196e80u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196e84: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196E84u;
    SET_GPR_U32(ctx, 31, 0x196E8Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196E84u, 0x196E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E8Cu;
label_196e8c:
    // 0x196e8c: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x196e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x196e90: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x196e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x196e94: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x196e94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196e98: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196e9c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x196e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x196ea0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196ea0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196ea4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196ea8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196ea8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196eac: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196EACu;
    SET_GPR_U32(ctx, 31, 0x196EB4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196EACu, 0x196EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196EB4u;
label_196eb4:
    // 0x196eb4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x196eb4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196eb8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196ebc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x196ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196ec0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x196ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196ec4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196ec8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x196ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x196ecc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196eccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196ed0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196ed4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196ed4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196ed8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196ED8u;
    SET_GPR_U32(ctx, 31, 0x196EE0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196ED8u, 0x196EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196EE0u;
label_196ee0:
    // 0x196ee0: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x196ee0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196ee4: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196ee8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x196ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196eec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x196eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196ef0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196ef4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x196ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x196ef8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196ef8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196efc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196f00: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196f00u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196f04: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196F04u;
    SET_GPR_U32(ctx, 31, 0x196F0Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196F04u, 0x196F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F0Cu;
label_196f0c:
    // 0x196f0c: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x196f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x196f10: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x196f10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x196f14: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x196f14u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196f18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196f1c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x196f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x196f20: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196f20u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196f24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196f28: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196f28u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196f2c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196F2Cu;
    SET_GPR_U32(ctx, 31, 0x196F34u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196F2Cu, 0x196F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F34u;
label_196f34:
    // 0x196f34: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x196f34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196f38: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196f3c: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x196f3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196f40: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x196f40u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196f44: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196f44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196f48: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x196f48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196f4c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x196f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x196f50: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196f50u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196f54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196f58: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196f58u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196f5c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196F5Cu;
    SET_GPR_U32(ctx, 31, 0x196F64u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196F5Cu, 0x196F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F64u;
label_196f64:
    // 0x196f64: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x196f64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196f68: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x196f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x196f6c: 0x34a2d70a  ori         $v0, $a1, 0xD70A
    ctx->pc = 0x196f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x196f70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x196f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196f74: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196f78: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x196f78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x196f7c: 0x2407001b  addiu       $a3, $zero, 0x1B
    ctx->pc = 0x196f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x196f80: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x196f80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196f84: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196f84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196f88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196f8c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196f8cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196f90: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196F90u;
    SET_GPR_U32(ctx, 31, 0x196F98u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196F90u, 0x196F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F98u;
label_196f98:
    // 0x196f98: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x196f98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196f9c: 0x3c083c23  lui         $t0, 0x3C23
    ctx->pc = 0x196f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15395 << 16));
    // 0x196fa0: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x196fa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x196fa4: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x196fa4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196fa8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x196fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196fac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x196facu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196fb0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x196fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x196fb4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x196fb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x196fb8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196fb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196fbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196fc0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x196fc0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196fc4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196FC4u;
    SET_GPR_U32(ctx, 31, 0x196FCCu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196FC4u, 0x196FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196FCCu;
label_196fcc:
    // 0x196fcc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x196fccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196fd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x196fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196fd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x196fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196fd8: 0xa4450094  sh          $a1, 0x94($v0)
    ctx->pc = 0x196fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x196fdcu;
}
