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

// Function: entry_00334d64
// Address: 0x334d64 - 0x334d94
void entry_00334d64_0x334d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00334d64_0x334d64");
#endif

    switch (ctx->pc) {
        case 0x334d90u: goto label_334d90;
        default: break;
    }

    ctx->pc = 0x334d64u;

    // 0x334d64: 0x9202683f  lbu         $v0, 0x683F($s0)
    ctx->pc = 0x334d64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x334d68: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x334d68u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x334d6c: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x334d6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x334d70: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x334d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x334d74: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x334d74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x334d78: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x334d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x334d7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x334d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x334d80: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x334d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x334d84: 0x2444663e  addiu       $a0, $v0, 0x663E
    ctx->pc = 0x334d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26174));
    // 0x334d88: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x334D88u;
    SET_GPR_U32(ctx, 31, 0x334D90u);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x334D88u, 0x334D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D90u;
label_334d90:
    // 0x334d90: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x334d90u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x334d94u;
}
