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

// Function: Em1d_R1_mv04
// Address: 0x370cd0 - 0x370f38
void Em1d_R1_mv04_0x370cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_R1_mv04_0x370cd0");
#endif

    switch (ctx->pc) {
        case 0x370d4cu: goto label_370d4c;
        case 0x370d5cu: goto label_370d5c;
        case 0x370d68u: goto label_370d68;
        case 0x370d74u: goto label_370d74;
        case 0x370d80u: goto label_370d80;
        case 0x370db0u: goto label_370db0;
        case 0x370de0u: goto label_370de0;
        case 0x370decu: goto label_370dec;
        case 0x370df8u: goto label_370df8;
        case 0x370e04u: goto label_370e04;
        case 0x370e4cu: goto label_370e4c;
        default: break;
    }

    ctx->pc = 0x370cd0u;

    // 0x370cd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x370cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x370cd4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x370cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x370cd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x370cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x370cdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x370cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x370ce0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x370ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x370ce4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ce8: 0x8c7102d0  lw          $s1, 0x2D0($v1)
    ctx->pc = 0x370ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x370cec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370cf0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x370cf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x370cf4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x370cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x370cf8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x370cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370cfc: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x370CFCu;
    {
        const bool branch_taken_0x370cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x370cfc) {
            ctx->pc = 0x370DD0u;
            goto label_370dd0;
        }
    }
    ctx->pc = 0x370D04u;
    // 0x370d04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x370d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370d08: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x370D08u;
    {
        const bool branch_taken_0x370d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x370d08) {
            ctx->pc = 0x370D4Cu;
            goto label_370d4c;
        }
    }
    ctx->pc = 0x370D10u;
    // 0x370d10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x370D10u;
    {
        const bool branch_taken_0x370d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x370d10) {
            ctx->pc = 0x370D20u;
            goto label_370d20;
        }
    }
    ctx->pc = 0x370D18u;
    // 0x370d18: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x370D18u;
    {
        const bool branch_taken_0x370d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370d18) {
            ctx->pc = 0x370EECu;
            goto label_370eec;
        }
    }
    ctx->pc = 0x370D20u;
label_370d20:
    // 0x370d20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x370d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370d24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d28: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x370d28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x370d2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d34: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x370d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x370d38: 0x24063c0a  addiu       $a2, $zero, 0x3C0A
    ctx->pc = 0x370d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15370));
    // 0x370d3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x370d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370d40: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x370d40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x370d44: 0xc0965d0  jal         func_259740
    ctx->pc = 0x370D44u;
    SET_GPR_U32(ctx, 31, 0x370D4Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x370D44u, 0x370D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D4Cu;
label_370d4c:
    // 0x370d4c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370d50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370d54: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x370D54u;
    SET_GPR_U32(ctx, 31, 0x370D5Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x370D54u, 0x370D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D5Cu;
label_370d5c:
    // 0x370d5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d60: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x370D60u;
    SET_GPR_U32(ctx, 31, 0x370D68u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x370D60u, 0x370D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D68u;
label_370d68:
    // 0x370d68: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d6c: 0xc0dd008  jal         func_374020
    ctx->pc = 0x370D6Cu;
    SET_GPR_U32(ctx, 31, 0x370D74u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x370D6Cu, 0x370D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D74u;
label_370d74:
    // 0x370d74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d78: 0xc0dd150  jal         func_374540
    ctx->pc = 0x370D78u;
    SET_GPR_U32(ctx, 31, 0x370D80u);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x370D78u, 0x370D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D80u;
label_370d80:
    // 0x370d80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d84: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x370d84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x370d88: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x370D88u;
    {
        const bool branch_taken_0x370d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x370d88) {
            ctx->pc = 0x370EECu;
            goto label_370eec;
        }
    }
    ctx->pc = 0x370D90u;
    // 0x370d90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370d98: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x370d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x370d9c: 0x24061e0b  addiu       $a2, $zero, 0x1E0B
    ctx->pc = 0x370d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7691));
    // 0x370da0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x370da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370da4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x370da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x370da8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x370DA8u;
    SET_GPR_U32(ctx, 31, 0x370DB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x370DA8u, 0x370DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DB0u;
label_370db0:
    // 0x370db0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x370db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x370db4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370db8: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x370db8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x370dbc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x370dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370dc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370dc4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x370dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x370dc8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x370DC8u;
    {
        const bool branch_taken_0x370dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370dc8) {
            ctx->pc = 0x370EECu;
            goto label_370eec;
        }
    }
    ctx->pc = 0x370DD0u;
label_370dd0:
    // 0x370dd0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370dd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370dd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370dd8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x370DD8u;
    SET_GPR_U32(ctx, 31, 0x370DE0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x370DD8u, 0x370DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DE0u;
label_370de0:
    // 0x370de0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370de4: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x370DE4u;
    SET_GPR_U32(ctx, 31, 0x370DECu);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x370DE4u, 0x370DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DECu;
label_370dec:
    // 0x370dec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370df0: 0xc0dd008  jal         func_374020
    ctx->pc = 0x370DF0u;
    SET_GPR_U32(ctx, 31, 0x370DF8u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x370DF0u, 0x370DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DF8u;
label_370df8:
    // 0x370df8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370dfc: 0xc0dd150  jal         func_374540
    ctx->pc = 0x370DFCu;
    SET_GPR_U32(ctx, 31, 0x370E04u);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x370DFCu, 0x370E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E04u;
label_370e04:
    // 0x370e04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e08: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x370e08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x370e0c: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x370E0Cu;
    {
        const bool branch_taken_0x370e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x370e0c) {
            ctx->pc = 0x370EECu;
            goto label_370eec;
        }
    }
    ctx->pc = 0x370E14u;
    // 0x370e14: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x370e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e18: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x370e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x370e1c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x370e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x370e20: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x370e20u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x370e24: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x370E24u;
    {
        const bool branch_taken_0x370e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x370e24) {
            ctx->pc = 0x370E54u;
            goto label_370e54;
        }
    }
    ctx->pc = 0x370E2Cu;
    // 0x370e2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e34: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x370e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x370e38: 0x24061e0b  addiu       $a2, $zero, 0x1E0B
    ctx->pc = 0x370e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7691));
    // 0x370e3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x370e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370e40: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x370e40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x370e44: 0xc0965d0  jal         func_259740
    ctx->pc = 0x370E44u;
    SET_GPR_U32(ctx, 31, 0x370E4Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x370E44u, 0x370E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E4Cu;
label_370e4c:
    // 0x370e4c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x370E4Cu;
    {
        const bool branch_taken_0x370e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370e4c) {
            ctx->pc = 0x370EECu;
            goto label_370eec;
        }
    }
    ctx->pc = 0x370E54u;
label_370e54:
    // 0x370e54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x370e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370e58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e5c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x370e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x370e60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e64: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x370e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x370e68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e6c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x370e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x370e70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e74: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x370e74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x370e78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e7c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x370e80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e84: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370e88: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x370e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370e8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370e90: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x370E90u;
    {
        const bool branch_taken_0x370e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x370e90) {
            ctx->pc = 0x370EECu;
            goto label_370eec;
        }
    }
    ctx->pc = 0x370E98u;
    // 0x370e98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x370e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370e9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ea0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370ea4: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370ea8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x370ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x370eac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370eb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370eb4: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370eb8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x370eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x370ebc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ec0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370ec4: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370ec8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x370ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x370ecc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ed0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370ed4: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370ed8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x370ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x370edc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ee0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370ee4: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370ee8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_370eec:
    // 0x370eec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ef0: 0x8c7001ac  lw          $s0, 0x1AC($v1)
    ctx->pc = 0x370ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x370ef4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ef8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x370ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x370efc: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x370efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x370f00: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x370f00u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x370f04: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x370f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x370f08: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x370f08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x370f0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370f10: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x370f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x370f14: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x370f14u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x370f18: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x370f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x370f1c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x370f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x370f20: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x370f20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370f24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x370f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x370f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370f2c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x370f2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x370f30: 0x3e00008  jr          $ra
    ctx->pc = 0x370F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370F38u;
}
