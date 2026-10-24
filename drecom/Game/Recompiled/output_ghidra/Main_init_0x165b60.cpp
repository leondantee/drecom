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

// Function: Main_init
// Address: 0x165b60 - 0x165eb8
void Main_init_0x165b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Main_init_0x165b60");
#endif

    switch (ctx->pc) {
        case 0x165b84u: goto label_165b84;
        case 0x165bacu: goto label_165bac;
        case 0x165bb4u: goto label_165bb4;
        case 0x165bbcu: goto label_165bbc;
        case 0x165bd4u: goto label_165bd4;
        case 0x165be0u: goto label_165be0;
        case 0x165c10u: goto label_165c10;
        case 0x165c44u: goto label_165c44;
        case 0x165cb4u: goto label_165cb4;
        case 0x165cc0u: goto label_165cc0;
        case 0x165cccu: goto label_165ccc;
        case 0x165ce0u: goto label_165ce0;
        case 0x165ce8u: goto label_165ce8;
        case 0x165cfcu: goto label_165cfc;
        case 0x165d0cu: goto label_165d0c;
        case 0x165d18u: goto label_165d18;
        case 0x165d20u: goto label_165d20;
        case 0x165d34u: goto label_165d34;
        case 0x165d40u: goto label_165d40;
        case 0x165d54u: goto label_165d54;
        case 0x165d5cu: goto label_165d5c;
        case 0x165d64u: goto label_165d64;
        case 0x165d7cu: goto label_165d7c;
        case 0x165d88u: goto label_165d88;
        case 0x165da4u: goto label_165da4;
        case 0x165db0u: goto label_165db0;
        case 0x165dccu: goto label_165dcc;
        case 0x165dd8u: goto label_165dd8;
        case 0x165df4u: goto label_165df4;
        case 0x165e00u: goto label_165e00;
        case 0x165e1cu: goto label_165e1c;
        case 0x165e2cu: goto label_165e2c;
        case 0x165e34u: goto label_165e34;
        case 0x165e3cu: goto label_165e3c;
        case 0x165e44u: goto label_165e44;
        case 0x165e4cu: goto label_165e4c;
        case 0x165e54u: goto label_165e54;
        case 0x165e5cu: goto label_165e5c;
        case 0x165e64u: goto label_165e64;
        case 0x165e6cu: goto label_165e6c;
        case 0x165e74u: goto label_165e74;
        case 0x165e7cu: goto label_165e7c;
        case 0x165e90u: goto label_165e90;
        default: break;
    }

    ctx->pc = 0x165b60u;

    // 0x165b60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x165b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x165b64: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x165b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x165b68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x165b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x165b6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x165b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x165b70: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x165b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x165b74: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x165b74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165b78: 0x241106b0  addiu       $s1, $zero, 0x6B0
    ctx->pc = 0x165b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1712));
    // 0x165b7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x165B7Cu;
    {
        const bool branch_taken_0x165b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165b7c) {
            ctx->pc = 0x165B90u;
            goto label_165b90;
        }
    }
    ctx->pc = 0x165B84u;
label_165b84:
    // 0x165b84: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x165b84u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x165b88: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x165b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x165b8c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x165b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_165b90:
    // 0x165b90: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x165b90u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x165b94: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x165b94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x165b98: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x165B98u;
    {
        const bool branch_taken_0x165b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165b98) {
            ctx->pc = 0x165B84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165b84;
        }
    }
    ctx->pc = 0x165BA0u;
    // 0x165ba0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x165ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165ba4: 0xc0407a4  jal         func_101E90
    ctx->pc = 0x165BA4u;
    SET_GPR_U32(ctx, 31, 0x165BACu);
    ctx->pc = 0x101E90u;
    {
        ctx->pc = 0x165BACu;
        ps2_stubs::sceDmaReset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165BACu) { return; }
    ctx->pc = 0x165BACu;
label_165bac:
    // 0x165bac: 0xc040f2c  jal         func_103CB0
    ctx->pc = 0x165BACu;
    SET_GPR_U32(ctx, 31, 0x165BB4u);
    ctx->pc = 0x103CB0u;
    {
        ctx->pc = 0x165BB4u;
        ps2_stubs::sceVpu0Reset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165BB4u) { return; }
    ctx->pc = 0x165BB4u;
label_165bb4:
    // 0x165bb4: 0xc0400a0  jal         func_100280
    ctx->pc = 0x165BB4u;
    SET_GPR_U32(ctx, 31, 0x165BBCu);
    ctx->pc = 0x100280u;
    {
        ctx->pc = 0x165BBCu;
        ps2_stubs::sceGsResetPath(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165BBCu) { return; }
    ctx->pc = 0x165BBCu;
label_165bbc:
    // 0x165bbc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x165bbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165bc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x165bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165bc4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x165bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165bc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x165bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165bcc: 0xc040058  jal         func_100160
    ctx->pc = 0x165BCCu;
    SET_GPR_U32(ctx, 31, 0x165BD4u);
    ctx->pc = 0x100160u;
    {
        ctx->pc = 0x165BD4u;
        ps2_stubs::sceGsResetGraph(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165BD4u) { return; }
    ctx->pc = 0x165BD4u;
label_165bd4:
    // 0x165bd4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x165bd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165bd8: 0xc040244  jal         func_100910
    ctx->pc = 0x165BD8u;
    SET_GPR_U32(ctx, 31, 0x165BE0u);
    ctx->pc = 0x100910u;
    {
        ctx->pc = 0x165BE0u;
        ps2_stubs::sceGsSyncV(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165BE0u) { return; }
    ctx->pc = 0x165BE0u;
label_165be0:
    // 0x165be0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x165be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x165be4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x165be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165be8: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x165be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x165bec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x165becu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165bf0: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x165bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x165bf4: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x165bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x165bf8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x165bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165bfc: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x165bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x165c00: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x165c00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165c04: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x165c04u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165c08: 0xc059a04  jal         func_166810
    ctx->pc = 0x165C08u;
    SET_GPR_U32(ctx, 31, 0x165C10u);
    ctx->pc = 0x166810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166810u, 0x165C08u, 0x165C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C10u;
label_165c10:
    // 0x165c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165c14: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x165c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x165c18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x165c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165c1c: 0x24440590  addiu       $a0, $v0, 0x590
    ctx->pc = 0x165c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1424));
    // 0x165c20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x165c20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165c24: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x165c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x165c28: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x165c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x165c2c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x165c2cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165c30: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x165c30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x165c34: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x165c34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165c38: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x165c38u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165c3c: 0xc059a04  jal         func_166810
    ctx->pc = 0x165C3Cu;
    SET_GPR_U32(ctx, 31, 0x165C44u);
    ctx->pc = 0x166810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166810u, 0x165C3Cu, 0x165C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C44u;
label_165c44:
    // 0x165c44: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x165c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x165c48: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x165c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165c4c: 0x94a405d8  lhu         $a0, 0x5D8($a1)
    ctx->pc = 0x165c4cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1496)));
    // 0x165c50: 0x304301ff  andi        $v1, $v0, 0x1FF
    ctx->pc = 0x165c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x165c54: 0x2402fe00  addiu       $v0, $zero, -0x200
    ctx->pc = 0x165c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x165c58: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x165c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x165c5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x165c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x165c60: 0xa4a205d8  sh          $v0, 0x5D8($a1)
    ctx->pc = 0x165c60u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1496), (uint16_t)GPR_U32(ctx, 2));
    // 0x165c64: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x165c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x165c68: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x165c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165c6c: 0x94a40610  lhu         $a0, 0x610($a1)
    ctx->pc = 0x165c6cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1552)));
    // 0x165c70: 0x304301ff  andi        $v1, $v0, 0x1FF
    ctx->pc = 0x165c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x165c74: 0x2402fe00  addiu       $v0, $zero, -0x200
    ctx->pc = 0x165c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x165c78: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x165c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x165c7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x165c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x165c80: 0xa4a20610  sh          $v0, 0x610($a1)
    ctx->pc = 0x165c80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1552), (uint16_t)GPR_U32(ctx, 2));
    // 0x165c84: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x165c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x165c88: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x165c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165c8c: 0x94a40690  lhu         $a0, 0x690($a1)
    ctx->pc = 0x165c8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1680)));
    // 0x165c90: 0x304301ff  andi        $v1, $v0, 0x1FF
    ctx->pc = 0x165c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x165c94: 0x2402fe00  addiu       $v0, $zero, -0x200
    ctx->pc = 0x165c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x165c98: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x165c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x165c9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x165c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x165ca0: 0xa4a20690  sh          $v0, 0x690($a1)
    ctx->pc = 0x165ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1680), (uint16_t)GPR_U32(ctx, 2));
    // 0x165ca4: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x165ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x165ca8: 0x24445b40  addiu       $a0, $v0, 0x5B40
    ctx->pc = 0x165ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x165cac: 0xc0405fe  jal         func_1017F8
    ctx->pc = 0x165CACu;
    SET_GPR_U32(ctx, 31, 0x165CB4u);
    ctx->pc = 0x1017F8u;
    {
        ctx->pc = 0x165CB4u;
        ps2_stubs::sceGsSyncVCallback(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165CB4u) { return; }
    ctx->pc = 0x165CB4u;
label_165cb4:
    // 0x165cb4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x165cb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165cb8: 0xc0854d2  jal         func_215348
    ctx->pc = 0x165CB8u;
    SET_GPR_U32(ctx, 31, 0x165CC0u);
    ctx->pc = 0x215348u;
    {
        ctx->pc = 0x165CC0u;
        ps2_stubs::sceSifInitRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165CC0u) { return; }
    ctx->pc = 0x165CC0u;
label_165cc0:
    // 0x165cc0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x165cc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165cc4: 0xc043abc  jal         func_10EAF0
    ctx->pc = 0x165CC4u;
    SET_GPR_U32(ctx, 31, 0x165CCCu);
    ctx->pc = 0x10EAF0u;
    {
        ctx->pc = 0x165CCCu;
        ps2_stubs::sceCdInit(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165CCCu) { return; }
    ctx->pc = 0x165CCCu;
label_165ccc:
    // 0x165ccc: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x165CCCu;
    {
        const bool branch_taken_0x165ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165ccc) {
            ctx->pc = 0x165CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165cc0;
        }
    }
    ctx->pc = 0x165CD4u;
    // 0x165cd4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x165cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165cd8: 0xc043d0c  jal         func_10F430
    ctx->pc = 0x165CD8u;
    SET_GPR_U32(ctx, 31, 0x165CE0u);
    ctx->pc = 0x10F430u;
    {
        ctx->pc = 0x165CE0u;
        ps2_stubs::sceCdMmode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165CE0u) { return; }
    ctx->pc = 0x165CE0u;
label_165ce0:
    // 0x165ce0: 0xc059ad4  jal         func_166B50
    ctx->pc = 0x165CE0u;
    SET_GPR_U32(ctx, 31, 0x165CE8u);
    ctx->pc = 0x166B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166B50u, 0x165CE0u, 0x165CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165CE8u;
label_165ce8:
    // 0x165ce8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165cec: 0x8c221a40  lw          $v0, 0x1A40($at)
    ctx->pc = 0x165cecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x165cf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x165cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x165cf4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x165CF4u;
    {
        const bool branch_taken_0x165cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165cf4) {
            ctx->pc = 0x165D5Cu;
            goto label_165d5c;
        }
    }
    ctx->pc = 0x165CFCu;
label_165cfc:
    // 0x165cfc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165d00: 0x2444eaf0  addiu       $a0, $v0, -0x1510
    ctx->pc = 0x165d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961904));
    // 0x165d04: 0xc085f16  jal         func_217C58
    ctx->pc = 0x165D04u;
    SET_GPR_U32(ctx, 31, 0x165D0Cu);
    ctx->pc = 0x217C58u;
    {
        ctx->pc = 0x165D0Cu;
        ps2_stubs::sceSifRebootIop(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D0Cu) { return; }
    ctx->pc = 0x165D0Cu;
label_165d0c:
    // 0x165d0c: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x165D0Cu;
    {
        const bool branch_taken_0x165d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165d0c) {
            ctx->pc = 0x165CFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165cfc;
        }
    }
    ctx->pc = 0x165D14u;
    // 0x165d14: 0x0  nop
    ctx->pc = 0x165d14u;
    // NOP
label_165d18:
    // 0x165d18: 0xc085f04  jal         func_217C10
    ctx->pc = 0x165D18u;
    SET_GPR_U32(ctx, 31, 0x165D20u);
    ctx->pc = 0x217C10u;
    {
        ctx->pc = 0x165D20u;
        ps2_stubs::sceSifSyncIop(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D20u) { return; }
    ctx->pc = 0x165D20u;
label_165d20:
    // 0x165d20: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x165D20u;
    {
        const bool branch_taken_0x165d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165d20) {
            ctx->pc = 0x165D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165d18;
        }
    }
    ctx->pc = 0x165D28u;
    // 0x165d28: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x165d28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165d2c: 0xc0854d2  jal         func_215348
    ctx->pc = 0x165D2Cu;
    SET_GPR_U32(ctx, 31, 0x165D34u);
    ctx->pc = 0x215348u;
    {
        ctx->pc = 0x165D34u;
        ps2_stubs::sceSifInitRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D34u) { return; }
    ctx->pc = 0x165D34u;
label_165d34:
    // 0x165d34: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x165d34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165d38: 0xc043abc  jal         func_10EAF0
    ctx->pc = 0x165D38u;
    SET_GPR_U32(ctx, 31, 0x165D40u);
    ctx->pc = 0x10EAF0u;
    {
        ctx->pc = 0x165D40u;
        ps2_stubs::sceCdInit(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D40u) { return; }
    ctx->pc = 0x165D40u;
label_165d40:
    // 0x165d40: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x165D40u;
    {
        const bool branch_taken_0x165d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165d40) {
            ctx->pc = 0x165D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165d34;
        }
    }
    ctx->pc = 0x165D48u;
    // 0x165d48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x165d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165d4c: 0xc043d0c  jal         func_10F430
    ctx->pc = 0x165D4Cu;
    SET_GPR_U32(ctx, 31, 0x165D54u);
    ctx->pc = 0x10F430u;
    {
        ctx->pc = 0x165D54u;
        ps2_stubs::sceCdMmode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D54u) { return; }
    ctx->pc = 0x165D54u;
label_165d54:
    // 0x165d54: 0xc085938  jal         func_2164E0
    ctx->pc = 0x165D54u;
    SET_GPR_U32(ctx, 31, 0x165D5Cu);
    ctx->pc = 0x2164E0u;
    {
        ctx->pc = 0x165D5Cu;
        ps2_stubs::sceFsReset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D5Cu) { return; }
    ctx->pc = 0x165D5Cu;
label_165d5c:
    // 0x165d5c: 0xc085be2  jal         func_216F88
    ctx->pc = 0x165D5Cu;
    SET_GPR_U32(ctx, 31, 0x165D64u);
    ctx->pc = 0x216F88u;
    {
        ctx->pc = 0x165D64u;
        ps2_stubs::sceSifInitIopHeap(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D64u) { return; }
    ctx->pc = 0x165D64u;
label_165d64:
    // 0x165d64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x165D64u;
    {
        const bool branch_taken_0x165d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165d64) {
            ctx->pc = 0x165D88u;
            goto label_165d88;
        }
    }
    ctx->pc = 0x165D6Cu;
    // 0x165d6c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165d70: 0x2444eb20  addiu       $a0, $v0, -0x14E0
    ctx->pc = 0x165d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961952));
    // 0x165d74: 0xc046760  jal         func_119D80
    ctx->pc = 0x165D74u;
    SET_GPR_U32(ctx, 31, 0x165D7Cu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x165D7Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D7Cu) { return; }
    ctx->pc = 0x165D7Cu;
label_165d7c:
    // 0x165d7c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x165d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165d80: 0xc045bc0  jal         func_116F00
    ctx->pc = 0x165D80u;
    SET_GPR_U32(ctx, 31, 0x165D88u);
    ctx->pc = 0x116F00u;
    {
        ctx->pc = 0x165D88u;
        ps2_stubs::exit(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D88u) { return; }
    ctx->pc = 0x165D88u;
label_165d88:
    // 0x165d88: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165d8c: 0x2444eb40  addiu       $a0, $v0, -0x14C0
    ctx->pc = 0x165d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961984));
    // 0x165d90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x165d90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165d94: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165d98: 0x2446eb68  addiu       $a2, $v0, -0x1498
    ctx->pc = 0x165d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962024));
    // 0x165d9c: 0xc085dde  jal         func_217778
    ctx->pc = 0x165D9Cu;
    SET_GPR_U32(ctx, 31, 0x165DA4u);
    ctx->pc = 0x217778u;
    {
        ctx->pc = 0x165DA4u;
        ps2_syscalls::sceSifLoadModule(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165DA4u) { return; }
    ctx->pc = 0x165DA4u;
label_165da4:
    // 0x165da4: 0x440fff8  bltz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x165DA4u;
    {
        const bool branch_taken_0x165da4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x165da4) {
            ctx->pc = 0x165D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165d88;
        }
    }
    ctx->pc = 0x165DACu;
    // 0x165dac: 0x0  nop
    ctx->pc = 0x165dacu;
    // NOP
label_165db0:
    // 0x165db0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165db4: 0x2444eb70  addiu       $a0, $v0, -0x1490
    ctx->pc = 0x165db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x165db8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x165db8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165dbc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165dc0: 0x2446eb68  addiu       $a2, $v0, -0x1498
    ctx->pc = 0x165dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962024));
    // 0x165dc4: 0xc085dde  jal         func_217778
    ctx->pc = 0x165DC4u;
    SET_GPR_U32(ctx, 31, 0x165DCCu);
    ctx->pc = 0x217778u;
    {
        ctx->pc = 0x165DCCu;
        ps2_syscalls::sceSifLoadModule(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165DCCu) { return; }
    ctx->pc = 0x165DCCu;
label_165dcc:
    // 0x165dcc: 0x440fff8  bltz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x165DCCu;
    {
        const bool branch_taken_0x165dcc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x165dcc) {
            ctx->pc = 0x165DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165db0;
        }
    }
    ctx->pc = 0x165DD4u;
    // 0x165dd4: 0x0  nop
    ctx->pc = 0x165dd4u;
    // NOP
label_165dd8:
    // 0x165dd8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165ddc: 0x2444eba0  addiu       $a0, $v0, -0x1460
    ctx->pc = 0x165ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962080));
    // 0x165de0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x165de0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165de4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165de8: 0x2446eb68  addiu       $a2, $v0, -0x1498
    ctx->pc = 0x165de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962024));
    // 0x165dec: 0xc085dde  jal         func_217778
    ctx->pc = 0x165DECu;
    SET_GPR_U32(ctx, 31, 0x165DF4u);
    ctx->pc = 0x217778u;
    {
        ctx->pc = 0x165DF4u;
        ps2_syscalls::sceSifLoadModule(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165DF4u) { return; }
    ctx->pc = 0x165DF4u;
label_165df4:
    // 0x165df4: 0x440fff8  bltz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x165DF4u;
    {
        const bool branch_taken_0x165df4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x165df4) {
            ctx->pc = 0x165DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165dd8;
        }
    }
    ctx->pc = 0x165DFCu;
    // 0x165dfc: 0x0  nop
    ctx->pc = 0x165dfcu;
    // NOP
label_165e00:
    // 0x165e00: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165e04: 0x2444ebd0  addiu       $a0, $v0, -0x1430
    ctx->pc = 0x165e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962128));
    // 0x165e08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x165e08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165e0c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165e10: 0x2446eb68  addiu       $a2, $v0, -0x1498
    ctx->pc = 0x165e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962024));
    // 0x165e14: 0xc085dde  jal         func_217778
    ctx->pc = 0x165E14u;
    SET_GPR_U32(ctx, 31, 0x165E1Cu);
    ctx->pc = 0x217778u;
    {
        ctx->pc = 0x165E1Cu;
        ps2_syscalls::sceSifLoadModule(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165E1Cu) { return; }
    ctx->pc = 0x165E1Cu;
label_165e1c:
    // 0x165e1c: 0x440fff8  bltz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x165E1Cu;
    {
        const bool branch_taken_0x165e1c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x165e1c) {
            ctx->pc = 0x165E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165e00;
        }
    }
    ctx->pc = 0x165E24u;
    // 0x165e24: 0xc0678c0  jal         func_19E300
    ctx->pc = 0x165E24u;
    SET_GPR_U32(ctx, 31, 0x165E2Cu);
    ctx->pc = 0x19E300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E300u, 0x165E24u, 0x165E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E2Cu;
label_165e2c:
    // 0x165e2c: 0xc0762a8  jal         func_1D8AA0
    ctx->pc = 0x165E2Cu;
    SET_GPR_U32(ctx, 31, 0x165E34u);
    ctx->pc = 0x1D8AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8AA0u, 0x165E2Cu, 0x165E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E34u;
label_165e34:
    // 0x165e34: 0xc088214  jal         func_220850
    ctx->pc = 0x165E34u;
    SET_GPR_U32(ctx, 31, 0x165E3Cu);
    ctx->pc = 0x220850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220850u, 0x165E34u, 0x165E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E3Cu;
label_165e3c:
    // 0x165e3c: 0xc06811c  jal         func_1A0470
    ctx->pc = 0x165E3Cu;
    SET_GPR_U32(ctx, 31, 0x165E44u);
    ctx->pc = 0x1A0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0470u, 0x165E3Cu, 0x165E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E44u;
label_165e44:
    // 0x165e44: 0xc067530  jal         func_19D4C0
    ctx->pc = 0x165E44u;
    SET_GPR_U32(ctx, 31, 0x165E4Cu);
    ctx->pc = 0x19D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D4C0u, 0x165E44u, 0x165E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E4Cu;
label_165e4c:
    // 0x165e4c: 0xc059c14  jal         func_167050
    ctx->pc = 0x165E4Cu;
    SET_GPR_U32(ctx, 31, 0x165E54u);
    ctx->pc = 0x167050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167050u, 0x165E4Cu, 0x165E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E54u;
label_165e54:
    // 0x165e54: 0xc0a5818  jal         func_296060
    ctx->pc = 0x165E54u;
    SET_GPR_U32(ctx, 31, 0x165E5Cu);
    ctx->pc = 0x296060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296060u, 0x165E54u, 0x165E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E5Cu;
label_165e5c:
    // 0x165e5c: 0xc0597b0  jal         func_165EC0
    ctx->pc = 0x165E5Cu;
    SET_GPR_U32(ctx, 31, 0x165E64u);
    ctx->pc = 0x165EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EC0u, 0x165E5Cu, 0x165E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E64u;
label_165e64:
    // 0x165e64: 0xc05e9e0  jal         func_17A780
    ctx->pc = 0x165E64u;
    SET_GPR_U32(ctx, 31, 0x165E6Cu);
    ctx->pc = 0x17A780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A780u, 0x165E64u, 0x165E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E6Cu;
label_165e6c:
    // 0x165e6c: 0xc0592fc  jal         func_164BF0
    ctx->pc = 0x165E6Cu;
    SET_GPR_U32(ctx, 31, 0x165E74u);
    ctx->pc = 0x164BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BF0u, 0x165E6Cu, 0x165E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E74u;
label_165e74:
    // 0x165e74: 0xc0ca394  jal         func_328E50
    ctx->pc = 0x165E74u;
    SET_GPR_U32(ctx, 31, 0x165E7Cu);
    ctx->pc = 0x328E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328E50u, 0x165E74u, 0x165E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E7Cu;
label_165e7c:
    // 0x165e7c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x165e7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165e80: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x165e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x165e84: 0x24451770  addiu       $a1, $v0, 0x1770
    ctx->pc = 0x165e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x165e88: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x165E88u;
    SET_GPR_U32(ctx, 31, 0x165E90u);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x165E88u, 0x165E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E90u;
label_165e90:
    // 0x165e90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x165e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165e94: 0x8c640a68  lw          $a0, 0xA68($v1)
    ctx->pc = 0x165e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2664)));
    // 0x165e98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x165e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165e9c: 0xac640a60  sw          $a0, 0xA60($v1)
    ctx->pc = 0x165e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2656), GPR_U32(ctx, 4));
    // 0x165ea0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x165ea0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165ea4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x165ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165ea8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x165ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165eac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x165eacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x165eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x165EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165EB8u;
}
