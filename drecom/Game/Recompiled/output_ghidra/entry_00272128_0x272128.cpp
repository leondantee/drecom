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

// Function: entry_00272128
// Address: 0x272128 - 0x272154
void entry_00272128_0x272128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272128_0x272128");
#endif

    ctx->pc = 0x272128u;

    // 0x272128: 0x86020096  lh          $v0, 0x96($s0)
    ctx->pc = 0x272128u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x27212c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x27212cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x272130: 0x86020096  lh          $v0, 0x96($s0)
    ctx->pc = 0x272130u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x272134: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x272134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x272138: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x272138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27213c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27213cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x272140: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x272140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x272144: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x272144u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x272148: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x272148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27214c: 0xc06c4d4  jal         func_1B1350
    ctx->pc = 0x27214Cu;
    SET_GPR_U32(ctx, 31, 0x272154u);
    ctx->pc = 0x1B1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1350u, 0x27214Cu, 0x272154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272154u;
}
