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

// Function: caseD_1
// Address: 0x34c01c - 0x34c08c
void caseD_1_0x34c01c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x34c01c");
#endif

    switch (ctx->pc) {
        case 0x34c068u: goto label_34c068;
        case 0x34c084u: goto label_34c084;
        default: break;
    }

    ctx->pc = 0x34c01cu;

    // 0x34c01c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34c01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c020: 0x90a409db  lbu         $a0, 0x9DB($a1)
    ctx->pc = 0x34c020u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2523)));
    // 0x34c024: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x34c024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34c028: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x34c028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x34c02c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x34C02Cu;
    {
        const bool branch_taken_0x34c02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c02c) {
            ctx->pc = 0x34C08Cu;
            return;
        }
    }
    ctx->pc = 0x34C034u;
    // 0x34c034: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34c034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c038: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c03c: 0x3c053dd6  lui         $a1, 0x3DD6
    ctx->pc = 0x34c03cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15830 << 16));
    // 0x34c040: 0x34a47750  ori         $a0, $a1, 0x7750
    ctx->pc = 0x34c040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30544);
    // 0x34c044: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x34c044u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34c048: 0x24c60120  addiu       $a2, $a2, 0x120
    ctx->pc = 0x34c048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x34c04c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x34c04cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x34c050: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34c050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34c054: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x34c054u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x34c058: 0x24e8dce0  addiu       $t0, $a3, -0x2320
    ctx->pc = 0x34c058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958304));
    // 0x34c05c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x34c05cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x34c060: 0xc05c848  jal         func_172120
    ctx->pc = 0x34C060u;
    SET_GPR_U32(ctx, 31, 0x34C068u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34C060u, 0x34C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C068u;
label_34c068:
    // 0x34c068: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x34c068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x34c06c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c070: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x34c070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c074: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x34c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c078: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34c078u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34c07c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34C07Cu;
    SET_GPR_U32(ctx, 31, 0x34C084u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34C07Cu, 0x34C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C084u;
label_34c084:
    // 0x34c084: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c088: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x34c088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    ctx->pc = 0x34c08cu;
}
