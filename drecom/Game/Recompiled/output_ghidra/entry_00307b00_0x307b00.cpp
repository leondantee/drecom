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

// Function: entry_00307b00
// Address: 0x307b00 - 0x307b60
void entry_00307b00_0x307b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307b00_0x307b00");
#endif

    switch (ctx->pc) {
        case 0x307b4cu: goto label_307b4c;
        case 0x307b58u: goto label_307b58;
        default: break;
    }

    ctx->pc = 0x307b00u;

    // 0x307b00: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307b04: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x307b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x307b08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x307b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x307b0c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x307B0Cu;
    {
        const bool branch_taken_0x307b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307b0c) {
            ctx->pc = 0x307B60u;
            return;
        }
    }
    ctx->pc = 0x307B14u;
    // 0x307b14: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307b18: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x307b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x307b1c: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x307b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x307b20: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x307b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x307b24: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x307b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x307b28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x307b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x307b2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x307b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x307b30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x307b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x307b34: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x307b34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x307b38: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x307b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x307b3c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x307b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x307b40: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x307b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x307b44: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x307B44u;
    SET_GPR_U32(ctx, 31, 0x307B4Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x307B44u, 0x307B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B4Cu;
label_307b4c:
    // 0x307b4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x307b4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x307b50: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x307B50u;
    SET_GPR_U32(ctx, 31, 0x307B58u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x307B50u, 0x307B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B58u;
label_307b58:
    // 0x307b58: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x307B58u;
    {
        const bool branch_taken_0x307b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307b58) {
            ctx->pc = 0x307C18u;
            return;
        }
    }
    ctx->pc = 0x307B60u;
}
