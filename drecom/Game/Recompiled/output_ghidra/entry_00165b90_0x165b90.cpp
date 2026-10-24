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

// Function: entry_00165b90
// Address: 0x165b90 - 0x165cc0
void entry_00165b90_0x165b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165b90_0x165b90");
#endif

    switch (ctx->pc) {
        case 0x165bacu: goto label_165bac;
        case 0x165bb4u: goto label_165bb4;
        case 0x165bbcu: goto label_165bbc;
        case 0x165bd4u: goto label_165bd4;
        case 0x165be0u: goto label_165be0;
        case 0x165c10u: goto label_165c10;
        case 0x165c44u: goto label_165c44;
        case 0x165cb4u: goto label_165cb4;
        default: break;
    }

    ctx->pc = 0x165b90u;

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
            return;
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
}
