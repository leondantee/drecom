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

// Function: entry_0025f680
// Address: 0x25f680 - 0x25f6b8
void entry_0025f680_0x25f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f680_0x25f680");
#endif

    switch (ctx->pc) {
        case 0x25f6b4u: goto label_25f6b4;
        default: break;
    }

    ctx->pc = 0x25f680u;

    // 0x25f680: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f680u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f684: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x25f684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x25f688: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25f688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25f68c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f690: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x25f690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x25f694: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x25f694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x25f698: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25f698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f69c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x25f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x25f6a0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x25f6a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25f6a4: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x25f6a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x25f6a8: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x25f6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x25f6ac: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25F6ACu;
    SET_GPR_U32(ctx, 31, 0x25F6B4u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25F6ACu, 0x25F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6B4u;
label_25f6b4:
    // 0x25f6b4: 0x0  nop
    ctx->pc = 0x25f6b4u;
    // NOP
    ctx->pc = 0x25f6b8u;
}
