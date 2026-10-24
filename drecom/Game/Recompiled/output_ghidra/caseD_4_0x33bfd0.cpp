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

// Function: caseD_4
// Address: 0x33bfd0 - 0x33c054
void caseD_4_0x33bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x33bfd0");
#endif

    switch (ctx->pc) {
        case 0x33bfe8u: goto label_33bfe8;
        case 0x33c004u: goto label_33c004;
        default: break;
    }

    ctx->pc = 0x33bfd0u;

    // 0x33bfd0: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33bfd4: 0x906311ec  lbu         $v1, 0x11EC($v1)
    ctx->pc = 0x33bfd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x33bfd8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x33bfd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33bfdc: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x33bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33bfe0: 0xc096348  jal         func_258D20
    ctx->pc = 0x33BFE0u;
    SET_GPR_U32(ctx, 31, 0x33BFE8u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x33BFE0u, 0x33BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BFE8u;
label_33bfe8:
    // 0x33bfe8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x33bfe8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33bfec: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x33bfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33bff0: 0x908311ec  lbu         $v1, 0x11EC($a0)
    ctx->pc = 0x33bff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4588)));
    // 0x33bff4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x33bff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33bff8: 0x8e040134  lw          $a0, 0x134($s0)
    ctx->pc = 0x33bff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33bffc: 0xc096348  jal         func_258D20
    ctx->pc = 0x33BFFCu;
    SET_GPR_U32(ctx, 31, 0x33C004u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x33BFFCu, 0x33C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C004u;
label_33c004:
    // 0x33c004: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x33c004u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33c008: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c00c: 0x906411ec  lbu         $a0, 0x11EC($v1)
    ctx->pc = 0x33c00cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x33c010: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x33c010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x33c014: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x33C014u;
    {
        const bool branch_taken_0x33c014 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33c014) {
            ctx->pc = 0x33C068u;
            return;
        }
    }
    ctx->pc = 0x33C01Cu;
    // 0x33c01c: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x33c01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c020: 0x90a411ec  lbu         $a0, 0x11EC($a1)
    ctx->pc = 0x33c020u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4588)));
    // 0x33c024: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x33c024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x33c028: 0xa0a311ec  sb          $v1, 0x11EC($a1)
    ctx->pc = 0x33c028u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4588), (uint8_t)GPR_U32(ctx, 3));
    // 0x33c02c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c030: 0x906311ec  lbu         $v1, 0x11EC($v1)
    ctx->pc = 0x33c030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x33c034: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33c034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33c038: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33c038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33c03c: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x33c03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x33c040: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33C040u;
    {
        const bool branch_taken_0x33c040 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x33c040) {
            ctx->pc = 0x33C054u;
            return;
        }
    }
    ctx->pc = 0x33C048u;
    // 0x33c048: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x33C048u;
    {
        const bool branch_taken_0x33c048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c048) {
            ctx->pc = 0x33C054u;
            return;
        }
    }
    ctx->pc = 0x33C050u;
    // 0x33c050: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x33c050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    ctx->pc = 0x33c054u;
}
