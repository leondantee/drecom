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

// Function: entry_0025f130
// Address: 0x25f130 - 0x25f168
void entry_0025f130_0x25f130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f130_0x25f130");
#endif

    switch (ctx->pc) {
        case 0x25f164u: goto label_25f164;
        default: break;
    }

    ctx->pc = 0x25f130u;

    // 0x25f130: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f134: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25f134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25f138: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f138u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25f13c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f140: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x25f140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x25f144: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x25f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x25f148: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25f148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f14c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x25f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x25f150: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x25f150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25f154: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x25f154u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f158: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x25f158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x25f15c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25F15Cu;
    SET_GPR_U32(ctx, 31, 0x25F164u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25F15Cu, 0x25F164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F164u;
label_25f164:
    // 0x25f164: 0x0  nop
    ctx->pc = 0x25f164u;
    // NOP
    ctx->pc = 0x25f168u;
}
