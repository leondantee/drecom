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

// Function: entry_0028eb60
// Address: 0x28eb60 - 0x28ebf0
void entry_0028eb60_0x28eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028eb60_0x28eb60");
#endif

    switch (ctx->pc) {
        case 0x28eb6cu: goto label_28eb6c;
        case 0x28eba0u: goto label_28eba0;
        case 0x28ebe0u: goto label_28ebe0;
        default: break;
    }

    ctx->pc = 0x28eb60u;

    // 0x28eb60: 0xc60c5e00  lwc1        $f12, 0x5E00($s0)
    ctx->pc = 0x28eb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28eb64: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x28EB64u;
    SET_GPR_U32(ctx, 31, 0x28EB6Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28EB64u, 0x28EB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EB6Cu;
label_28eb6c:
    // 0x28eb6c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x28eb6cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28eb70: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x28eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x28eb74: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x28eb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28eb78: 0x3c061c07  lui         $a2, 0x1C07
    ctx->pc = 0x28eb78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7175 << 16));
    // 0x28eb7c: 0x34c2050a  ori         $v0, $a2, 0x50A
    ctx->pc = 0x28eb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1290);
    // 0x28eb80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28eb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28eb84: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28eb84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28eb88: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28eb8c: 0x24421670  addiu       $v0, $v0, 0x1670
    ctx->pc = 0x28eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5744));
    // 0x28eb90: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28eb90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28eb94: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x28eb94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28eb98: 0xc059b14  jal         func_166C50
    ctx->pc = 0x28EB98u;
    SET_GPR_U32(ctx, 31, 0x28EBA0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x28EB98u, 0x28EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBA0u;
label_28eba0:
    // 0x28eba0: 0x92066624  lbu         $a2, 0x6624($s0)
    ctx->pc = 0x28eba0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28eba4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28eba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28eba8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x28EBA8u;
    {
        const bool branch_taken_0x28eba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28eba8) {
            ctx->pc = 0x28EBF0u;
            return;
        }
    }
    ctx->pc = 0x28EBB0u;
    // 0x28ebb0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28ebb4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x28ebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x28ebb8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28ebbc: 0x34621048  ori         $v0, $v1, 0x1048
    ctx->pc = 0x28ebbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4168);
    // 0x28ebc0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x28ebc4: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x28ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x28ebc8: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x28ebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x28ebcc: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x28ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28ebd0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28ebd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28ebd4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28ebd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28ebd8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28EBD8u;
    SET_GPR_U32(ctx, 31, 0x28EBE0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28EBD8u, 0x28EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBE0u;
label_28ebe0:
    // 0x28ebe0: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x28ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28ebe4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x28ebe4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28ebe8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28EBE8u;
    {
        const bool branch_taken_0x28ebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ebe8) {
            ctx->pc = 0x28EC3Cu;
            return;
        }
    }
    ctx->pc = 0x28EBF0u;
}
