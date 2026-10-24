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

// Function: entry_001379b8
// Address: 0x1379b8 - 0x1379e0
void entry_001379b8_0x1379b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001379b8_0x1379b8");
#endif

    switch (ctx->pc) {
        case 0x1379d8u: goto label_1379d8;
        default: break;
    }

    ctx->pc = 0x1379b8u;

    // 0x1379b8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1379b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1379bc: 0x24724e98  addiu       $s2, $v1, 0x4E98
    ctx->pc = 0x1379bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 20120));
    // 0x1379c0: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x1379c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1379c4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1379c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1379c8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1379c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1379cc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x1379ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1379d0: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x1379D0u;
    SET_GPR_U32(ctx, 31, 0x1379D8u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x1379D0u, 0x1379D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379D8u;
label_1379d8:
    // 0x1379d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1379d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1379dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1379dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1379e0u;
}
