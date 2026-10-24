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

// Function: entry_00272188
// Address: 0x272188 - 0x2721b8
void entry_00272188_0x272188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272188_0x272188");
#endif

    ctx->pc = 0x272188u;

    // 0x272188: 0x96020094  lhu         $v0, 0x94($s0)
    ctx->pc = 0x272188u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x27218c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x27218cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x272190: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x272190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x272194: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x272194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x272198: 0x96020094  lhu         $v0, 0x94($s0)
    ctx->pc = 0x272198u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x27219c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x27219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2721a0: 0x2442002a  addiu       $v0, $v0, 0x2A
    ctx->pc = 0x2721a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 42));
    // 0x2721a4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x2721a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2721a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2721a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2721ac: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x2721acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2721b0: 0xc06c4d4  jal         func_1B1350
    ctx->pc = 0x2721B0u;
    SET_GPR_U32(ctx, 31, 0x2721B8u);
    ctx->pc = 0x1B1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1350u, 0x2721B0u, 0x2721B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2721B8u;
}
