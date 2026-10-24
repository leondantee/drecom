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
// Address: 0x14d00c - 0x14d088
void caseD_1_0x14d00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x14d00c");
#endif

    switch (ctx->pc) {
        case 0x14d030u: goto label_14d030;
        case 0x14d054u: goto label_14d054;
        case 0x14d068u: goto label_14d068;
        case 0x14d074u: goto label_14d074;
        default: break;
    }

    ctx->pc = 0x14d00cu;

    // 0x14d00c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d010: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x14d010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14d014: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x14d014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x14d018: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14d018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14d01c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x14d01cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x14d020: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d024: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d024u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d028: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14D028u;
    SET_GPR_U32(ctx, 31, 0x14D030u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14D028u, 0x14D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D030u;
label_14d030:
    // 0x14d030: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d034: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x14d034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x14d038: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14d038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d03c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x14d03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d040: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d044: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x14d044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x14d048: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d04c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14D04Cu;
    SET_GPR_U32(ctx, 31, 0x14D054u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14D04Cu, 0x14D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D054u;
label_14d054:
    // 0x14d054: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14d054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14d058: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d05c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14d05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14d060: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14D060u;
    SET_GPR_U32(ctx, 31, 0x14D068u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14D060u, 0x14D068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D068u;
label_14d068:
    // 0x14d068: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d06c: 0xc05cf54  jal         func_173D50
    ctx->pc = 0x14D06Cu;
    SET_GPR_U32(ctx, 31, 0x14D074u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x14D06Cu, 0x14D074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D074u;
label_14d074:
    // 0x14d074: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D074u;
    {
        const bool branch_taken_0x14d074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d074) {
            ctx->pc = 0x14D088u;
            return;
        }
    }
    ctx->pc = 0x14D07Cu;
    // 0x14d07c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14d07cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d080: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d084: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14d084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x14d088u;
}
