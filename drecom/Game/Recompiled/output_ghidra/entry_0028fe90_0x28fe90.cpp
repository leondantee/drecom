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

// Function: entry_0028fe90
// Address: 0x28fe90 - 0x28fee0
void entry_0028fe90_0x28fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028fe90_0x28fe90");
#endif

    switch (ctx->pc) {
        case 0x28feb0u: goto label_28feb0;
        case 0x28fec8u: goto label_28fec8;
        case 0x28fed4u: goto label_28fed4;
        default: break;
    }

    ctx->pc = 0x28fe90u;

    // 0x28fe90: 0x92025e04  lbu         $v0, 0x5E04($s0)
    ctx->pc = 0x28fe90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24068)));
    // 0x28fe94: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x28fe94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28fe98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fe9c: 0x14c30010  bne         $a2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x28FE9Cu;
    {
        const bool branch_taken_0x28fe9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x28fe9c) {
            ctx->pc = 0x28FEE0u;
            return;
        }
    }
    ctx->pc = 0x28FEA4u;
    // 0x28fea4: 0xc60c5e00  lwc1        $f12, 0x5E00($s0)
    ctx->pc = 0x28fea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28fea8: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x28FEA8u;
    SET_GPR_U32(ctx, 31, 0x28FEB0u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28FEA8u, 0x28FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FEB0u;
label_28feb0:
    // 0x28feb0: 0x3c064060  lui         $a2, 0x4060
    ctx->pc = 0x28feb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16480 << 16));
    // 0x28feb4: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x28feb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x28feb8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28feb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28febc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28febcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28fec0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x28FEC0u;
    SET_GPR_U32(ctx, 31, 0x28FEC8u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x28FEC0u, 0x28FEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FEC8u;
label_28fec8:
    // 0x28fec8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28fec8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28fecc: 0xc047ca2  jal         func_11F288
    ctx->pc = 0x28FECCu;
    SET_GPR_U32(ctx, 31, 0x28FED4u);
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x28FECCu, 0x28FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FED4u;
label_28fed4:
    // 0x28fed4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28fed4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28fed8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x28FED8u;
    {
        const bool branch_taken_0x28fed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fed8) {
            ctx->pc = 0x28FF30u;
            return;
        }
    }
    ctx->pc = 0x28FEE0u;
}
