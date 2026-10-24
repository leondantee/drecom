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

// Function: entry_0023af74
// Address: 0x23af74 - 0x23b00c
void entry_0023af74_0x23af74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023af74_0x23af74");
#endif

    switch (ctx->pc) {
        case 0x23af7cu: goto label_23af7c;
        case 0x23afd0u: goto label_23afd0;
        case 0x23b004u: goto label_23b004;
        default: break;
    }

    ctx->pc = 0x23af74u;

    // 0x23af74: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23AF74u;
    SET_GPR_U32(ctx, 31, 0x23AF7Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23AF74u, 0x23AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF7Cu;
label_23af7c:
    // 0x23af7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23af7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23af80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23af84: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x23af84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x23af88: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x23af88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23af8c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x23af8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x23af90: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23af94: 0xa444127c  sh          $a0, 0x127C($v0)
    ctx->pc = 0x23af94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x23af98: 0x3c053c8e  lui         $a1, 0x3C8E
    ctx->pc = 0x23af98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15502 << 16));
    // 0x23af9c: 0x34a2fa35  ori         $v0, $a1, 0xFA35
    ctx->pc = 0x23af9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64053);
    // 0x23afa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23afa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23afa4: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x23afa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23afa8: 0x24e21330  addiu       $v0, $a3, 0x1330
    ctx->pc = 0x23afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x23afac: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23afacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23afb0: 0x3c033ac9  lui         $v1, 0x3AC9
    ctx->pc = 0x23afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15049 << 16));
    // 0x23afb4: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x23afb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23afb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23afb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23afbc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23afc0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23afc4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23afc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23afc8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23AFC8u;
    SET_GPR_U32(ctx, 31, 0x23AFD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23AFC8u, 0x23AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AFD0u;
label_23afd0:
    // 0x23afd0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23afd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23afd4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x23afd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x23afd8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x23AFD8u;
    {
        const bool branch_taken_0x23afd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23afd8) {
            ctx->pc = 0x23B00Cu;
            return;
        }
    }
    ctx->pc = 0x23AFE0u;
    // 0x23afe0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23afe4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23afe8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23afe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23afec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23afecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23aff0: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x23aff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x23aff4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23aff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23aff8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23aff8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23affc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23AFFCu;
    SET_GPR_U32(ctx, 31, 0x23B004u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23AFFCu, 0x23B004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B004u;
label_23b004:
    // 0x23b004: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23B004u;
    {
        const bool branch_taken_0x23b004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b004) {
            ctx->pc = 0x23B030u;
            return;
        }
    }
    ctx->pc = 0x23B00Cu;
}
