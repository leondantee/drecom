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

// Function: entry_001d067c
// Address: 0x1d067c - 0x1d0704
void entry_001d067c_0x1d067c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d067c_0x1d067c");
#endif

    switch (ctx->pc) {
        case 0x1d06a0u: goto label_1d06a0;
        case 0x1d06b0u: goto label_1d06b0;
        case 0x1d06bcu: goto label_1d06bc;
        case 0x1d06d0u: goto label_1d06d0;
        case 0x1d06dcu: goto label_1d06dc;
        default: break;
    }

    ctx->pc = 0x1d067cu;

    // 0x1d067c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0680: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1d0680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0684: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0688: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1d0688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d068c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d068cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d0690: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1d0690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1d0694: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d0694u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0698: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1D0698u;
    SET_GPR_U32(ctx, 31, 0x1D06A0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1D0698u, 0x1D06A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D06A0u;
label_1d06a0:
    // 0x1d06a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d06a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d06a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d06a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d06a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1D06A8u;
    SET_GPR_U32(ctx, 31, 0x1D06B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1D06A8u, 0x1D06B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D06B0u;
label_1d06b0:
    // 0x1d06b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d06b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d06b4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1D06B4u;
    SET_GPR_U32(ctx, 31, 0x1D06BCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1D06B4u, 0x1D06BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D06BCu;
label_1d06bc:
    // 0x1d06bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d06bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d06c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d06c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d06c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d06c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d06c8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1D06C8u;
    SET_GPR_U32(ctx, 31, 0x1D06D0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1D06C8u, 0x1D06D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D06D0u;
label_1d06d0:
    // 0x1d06d0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d06d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d06d4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1D06D4u;
    SET_GPR_U32(ctx, 31, 0x1D06DCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1D06D4u, 0x1D06DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D06DCu;
label_1d06dc:
    // 0x1d06dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d06dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d06e0: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1d06e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1d06e4: 0x106000ce  beqz        $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x1D06E4u;
    {
        const bool branch_taken_0x1d06e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d06e4) {
            ctx->pc = 0x1D0A20u;
            return;
        }
    }
    ctx->pc = 0x1D06ECu;
    // 0x1d06ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d06ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d06f0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1d06f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d06f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d06f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d06f8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1d06f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d06fc: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x1D06FCu;
    {
        const bool branch_taken_0x1d06fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d06fc) {
            ctx->pc = 0x1D0A20u;
            return;
        }
    }
    ctx->pc = 0x1D0704u;
}
