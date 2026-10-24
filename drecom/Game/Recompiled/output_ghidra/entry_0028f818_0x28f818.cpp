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

// Function: entry_0028f818
// Address: 0x28f818 - 0x28f868
void entry_0028f818_0x28f818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f818_0x28f818");
#endif

    switch (ctx->pc) {
        case 0x28f838u: goto label_28f838;
        case 0x28f850u: goto label_28f850;
        case 0x28f85cu: goto label_28f85c;
        default: break;
    }

    ctx->pc = 0x28f818u;

    // 0x28f818: 0x92025e04  lbu         $v0, 0x5E04($s0)
    ctx->pc = 0x28f818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24068)));
    // 0x28f81c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28f81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28f820: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28f820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f824: 0x14460010  bne         $v0, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x28F824u;
    {
        const bool branch_taken_0x28f824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x28f824) {
            ctx->pc = 0x28F868u;
            return;
        }
    }
    ctx->pc = 0x28F82Cu;
    // 0x28f82c: 0xc60c5e00  lwc1        $f12, 0x5E00($s0)
    ctx->pc = 0x28f82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28f830: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x28F830u;
    SET_GPR_U32(ctx, 31, 0x28F838u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28F830u, 0x28F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F838u;
label_28f838:
    // 0x28f838: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x28f838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
    // 0x28f83c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x28f83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28f840: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28f840u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28f844: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28f844u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28f848: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x28F848u;
    SET_GPR_U32(ctx, 31, 0x28F850u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x28F848u, 0x28F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F850u;
label_28f850:
    // 0x28f850: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28f850u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28f854: 0xc047ca2  jal         func_11F288
    ctx->pc = 0x28F854u;
    SET_GPR_U32(ctx, 31, 0x28F85Cu);
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x28F854u, 0x28F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F85Cu;
label_28f85c:
    // 0x28f85c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28f85cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28f860: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x28F860u;
    {
        const bool branch_taken_0x28f860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f860) {
            ctx->pc = 0x28F8B8u;
            return;
        }
    }
    ctx->pc = 0x28F868u;
}
