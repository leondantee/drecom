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

// Function: entry_00221a38
// Address: 0x221a38 - 0x221a88
void entry_00221a38_0x221a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221a38_0x221a38");
#endif

    switch (ctx->pc) {
        case 0x221a5cu: goto label_221a5c;
        default: break;
    }

    ctx->pc = 0x221a38u;

    // 0x221a38: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221a3c: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x221a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x221a40: 0x84a3005e  lh          $v1, 0x5E($a1)
    ctx->pc = 0x221a40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 94)));
    // 0x221a44: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x221a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x221a48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x221a48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x221a4c: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x221A4Cu;
    {
        const bool branch_taken_0x221a4c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x221a4c) {
            ctx->pc = 0x221A88u;
            return;
        }
    }
    ctx->pc = 0x221A54u;
    // 0x221a54: 0xc067694  jal         func_19DA50
    ctx->pc = 0x221A54u;
    SET_GPR_U32(ctx, 31, 0x221A5Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x221A54u, 0x221A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A5Cu;
label_221a5c:
    // 0x221a5c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x221a5cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221a60: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x221a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x221a64: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x221a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x221a68: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x221a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x221a6c: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x221a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x221a70: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x221a70u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x221a74: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221a78: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x221a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x221a7c: 0xa485005e  sh          $a1, 0x5E($a0)
    ctx->pc = 0x221a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 94), (uint16_t)GPR_U32(ctx, 5));
    // 0x221a80: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x221A80u;
    {
        const bool branch_taken_0x221a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221a80) {
            ctx->pc = 0x221C1Cu;
            return;
        }
    }
    ctx->pc = 0x221A88u;
}
