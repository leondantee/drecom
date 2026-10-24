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

// Function: Em10_R1_dm_blow_front2
// Address: 0x131b70 - 0x131de4
void Em10_R1_dm_blow_front2_0x131b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_dm_blow_front2_0x131b70");
#endif

    switch (ctx->pc) {
        case 0x131bd0u: goto label_131bd0;
        case 0x131c28u: goto label_131c28;
        case 0x131c58u: goto label_131c58;
        case 0x131c88u: goto label_131c88;
        case 0x131cb8u: goto label_131cb8;
        case 0x131cd8u: goto label_131cd8;
        case 0x131ce8u: goto label_131ce8;
        case 0x131cf4u: goto label_131cf4;
        case 0x131d3cu: goto label_131d3c;
        case 0x131d5cu: goto label_131d5c;
        case 0x131d68u: goto label_131d68;
        case 0x131d78u: goto label_131d78;
        case 0x131d84u: goto label_131d84;
        default: break;
    }

    ctx->pc = 0x131b70u;

    // 0x131b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131b74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x131b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x131b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131b7c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x131b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x131b80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131b84: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x131b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x131b88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131b8c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x131b8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x131b90: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x131b90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x131b94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x131b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x131b98: 0x1083006c  beq         $a0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x131B98u;
    {
        const bool branch_taken_0x131b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x131b98) {
            ctx->pc = 0x131D4Cu;
            goto label_131d4c;
        }
    }
    ctx->pc = 0x131BA0u;
    // 0x131ba0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x131ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x131ba4: 0x1083005d  beq         $a0, $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x131BA4u;
    {
        const bool branch_taken_0x131ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x131ba4) {
            ctx->pc = 0x131D1Cu;
            goto label_131d1c;
        }
    }
    ctx->pc = 0x131BACu;
    // 0x131bac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x131bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131bb0: 0x10830045  beq         $a0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x131BB0u;
    {
        const bool branch_taken_0x131bb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x131bb0) {
            ctx->pc = 0x131CC8u;
            goto label_131cc8;
        }
    }
    ctx->pc = 0x131BB8u;
    // 0x131bb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131BB8u;
    {
        const bool branch_taken_0x131bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131bb8) {
            ctx->pc = 0x131BC8u;
            goto label_131bc8;
        }
    }
    ctx->pc = 0x131BC0u;
    // 0x131bc0: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x131BC0u;
    {
        const bool branch_taken_0x131bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131bc0) {
            ctx->pc = 0x131DD0u;
            goto label_131dd0;
        }
    }
    ctx->pc = 0x131BC8u;
label_131bc8:
    // 0x131bc8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x131BC8u;
    SET_GPR_U32(ctx, 31, 0x131BD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x131BC8u, 0x131BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131BD0u;
label_131bd0:
    // 0x131bd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x131bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x131bd4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x131bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x131bd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x131bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x131bdc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x131BDCu;
    {
        const bool branch_taken_0x131bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131bdc) {
            ctx->pc = 0x131C60u;
            goto label_131c60;
        }
    }
    ctx->pc = 0x131BE4u;
    // 0x131be4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131be8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x131BE8u;
    {
        const bool branch_taken_0x131be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131be8) {
            ctx->pc = 0x131C30u;
            goto label_131c30;
        }
    }
    ctx->pc = 0x131BF0u;
    // 0x131bf0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131BF0u;
    {
        const bool branch_taken_0x131bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131bf0) {
            ctx->pc = 0x131C00u;
            goto label_131c00;
        }
    }
    ctx->pc = 0x131BF8u;
    // 0x131bf8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x131BF8u;
    {
        const bool branch_taken_0x131bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131bf8) {
            ctx->pc = 0x131C00u;
            goto label_131c00;
        }
    }
    ctx->pc = 0x131C00u;
label_131c00:
    // 0x131c00: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x131c04: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x131c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131c08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131c0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x131c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131c10: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x131c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131c14: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x131c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x131c18: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x131c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x131c1c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x131c1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131c20: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131C20u;
    SET_GPR_U32(ctx, 31, 0x131C28u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131C20u, 0x131C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C28u;
label_131c28:
    // 0x131c28: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x131C28u;
    {
        const bool branch_taken_0x131c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131c28) {
            ctx->pc = 0x131C88u;
            goto label_131c88;
        }
    }
    ctx->pc = 0x131C30u;
label_131c30:
    // 0x131c30: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x131c34: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x131c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131c38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131c3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x131c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131c40: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x131c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131c44: 0x24040508  addiu       $a0, $zero, 0x508
    ctx->pc = 0x131c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
    // 0x131c48: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x131c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x131c4c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x131c4cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131c50: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131C50u;
    SET_GPR_U32(ctx, 31, 0x131C58u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131C50u, 0x131C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C58u;
label_131c58:
    // 0x131c58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x131C58u;
    {
        const bool branch_taken_0x131c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131c58) {
            ctx->pc = 0x131C88u;
            goto label_131c88;
        }
    }
    ctx->pc = 0x131C60u;
label_131c60:
    // 0x131c60: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x131c64: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x131c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131c68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131c6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x131c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131c70: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x131c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131c74: 0x24040509  addiu       $a0, $zero, 0x509
    ctx->pc = 0x131c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x131c78: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x131c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x131c7c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x131c7cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131c80: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131C80u;
    SET_GPR_U32(ctx, 31, 0x131C88u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131C80u, 0x131C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C88u;
label_131c88:
    // 0x131c88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x131c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131c8c: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x131c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131c90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x131c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131c94: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x131c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x131c98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x131c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131c9c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131ca0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x131ca4: 0x2406031c  addiu       $a2, $zero, 0x31C
    ctx->pc = 0x131ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 796));
    // 0x131ca8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131cac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x131cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131cb0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x131CB0u;
    SET_GPR_U32(ctx, 31, 0x131CB8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131CB0u, 0x131CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CB8u;
label_131cb8:
    // 0x131cb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131cbc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x131cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x131cc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x131cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x131cc4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x131cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_131cc8:
    // 0x131cc8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131ccc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x131cccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131cd0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x131CD0u;
    SET_GPR_U32(ctx, 31, 0x131CD8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x131CD0u, 0x131CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CD8u;
label_131cd8:
    // 0x131cd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131cdc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x131cdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131ce0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x131CE0u;
    SET_GPR_U32(ctx, 31, 0x131CE8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x131CE0u, 0x131CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CE8u;
label_131ce8:
    // 0x131ce8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131cec: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x131CECu;
    SET_GPR_U32(ctx, 31, 0x131CF4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x131CECu, 0x131CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CF4u;
label_131cf4:
    // 0x131cf4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131cf8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x131cf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x131cfc: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x131CFCu;
    {
        const bool branch_taken_0x131cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131cfc) {
            ctx->pc = 0x131DD0u;
            goto label_131dd0;
        }
    }
    ctx->pc = 0x131D04u;
    // 0x131d04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d08: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x131d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x131d0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x131d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x131d10: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x131d10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x131d14: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x131D14u;
    {
        const bool branch_taken_0x131d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d14) {
            ctx->pc = 0x131DD0u;
            goto label_131dd0;
        }
    }
    ctx->pc = 0x131D1Cu;
label_131d1c:
    // 0x131d1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x131d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d20: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d24: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x131d28: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x131d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x131d2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131d30: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x131d30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131d34: 0xc0965d0  jal         func_259740
    ctx->pc = 0x131D34u;
    SET_GPR_U32(ctx, 31, 0x131D3Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131D34u, 0x131D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131D3Cu;
label_131d3c:
    // 0x131d3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d40: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x131d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x131d44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x131d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x131d48: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x131d48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_131d4c:
    // 0x131d4c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x131d50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131d54: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x131D54u;
    SET_GPR_U32(ctx, 31, 0x131D5Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x131D54u, 0x131D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131D5Cu;
label_131d5c:
    // 0x131d5c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d60: 0xc05cd10  jal         func_173440
    ctx->pc = 0x131D60u;
    SET_GPR_U32(ctx, 31, 0x131D68u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x131D60u, 0x131D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131D68u;
label_131d68:
    // 0x131d68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x131d6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131d70: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x131D70u;
    SET_GPR_U32(ctx, 31, 0x131D78u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x131D70u, 0x131D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131D78u;
label_131d78:
    // 0x131d78: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x131d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d7c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x131D7Cu;
    SET_GPR_U32(ctx, 31, 0x131D84u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x131D7Cu, 0x131D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131D84u;
label_131d84:
    // 0x131d84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d88: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x131d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x131d8c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x131D8Cu;
    {
        const bool branch_taken_0x131d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d8c) {
            ctx->pc = 0x131DD0u;
            goto label_131dd0;
        }
    }
    ctx->pc = 0x131D94u;
    // 0x131d94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x131d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131d98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131d9c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x131d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x131da0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x131da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x131da4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131da8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x131da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x131dac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131db0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x131db0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x131db4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131db8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x131db8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x131dbc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x131dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131dc0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x131dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x131dc4: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x131dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x131dc8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x131DC8u;
    {
        const bool branch_taken_0x131dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131dc8) {
            ctx->pc = 0x131DD0u;
            goto label_131dd0;
        }
    }
    ctx->pc = 0x131DD0u;
label_131dd0:
    // 0x131dd0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x131dd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131dd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131dd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x131dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x131ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x131DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131DE4u;
}
