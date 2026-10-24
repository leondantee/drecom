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

// Function: entry_0021fbb8
// Address: 0x21fbb8 - 0x21fc8c
void entry_0021fbb8_0x21fbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fbb8_0x21fbb8");
#endif

    switch (ctx->pc) {
        case 0x21fc78u: goto label_21fc78;
        case 0x21fc84u: goto label_21fc84;
        default: break;
    }

    ctx->pc = 0x21fbb8u;

    // 0x21fbb8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fbbc: 0x8c4301f8  lw          $v1, 0x1F8($v0)
    ctx->pc = 0x21fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 504)));
    // 0x21fbc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fbc4: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x21FBC4u;
    {
        const bool branch_taken_0x21fbc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21fbc4) {
            ctx->pc = 0x21FC8Cu;
            return;
        }
    }
    ctx->pc = 0x21FBCCu;
    // 0x21fbcc: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x21fbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
    // 0x21fbd0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21fbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21fbd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fbd8: 0x34441d00  ori         $a0, $v0, 0x1D00
    ctx->pc = 0x21fbd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7424);
    // 0x21fbdc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x21fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x21fbe0: 0x2442ac20  addiu       $v0, $v0, -0x53E0
    ctx->pc = 0x21fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945824));
    // 0x21fbe4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21fbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21fbe8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21fbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21fbec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21fbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21fbf0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21fbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21fbf4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21fbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21fbf8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21fbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21fbfc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x21fbfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21fc00: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x21fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x21fc04: 0x2442ac20  addiu       $v0, $v0, -0x53E0
    ctx->pc = 0x21fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945824));
    // 0x21fc08: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21fc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21fc0c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21fc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21fc10: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21fc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21fc14: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21fc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21fc18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21fc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21fc1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21fc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21fc20: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x21fc20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x21fc24: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fc28: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x21fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x21fc2c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21fc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21fc30: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21fc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21fc34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21fc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21fc38: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21fc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21fc3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21fc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21fc40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21fc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21fc44: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x21fc44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21fc48: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fc4c: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x21fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x21fc50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21fc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21fc54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21fc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21fc58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21fc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21fc5c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21fc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21fc60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21fc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21fc64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21fc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21fc68: 0xc23825  or          $a3, $a2, $v0
    ctx->pc = 0x21fc68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x21fc6c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x21fc6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21fc70: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x21FC70u;
    SET_GPR_U32(ctx, 31, 0x21FC78u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x21FC70u, 0x21FC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC78u;
label_21fc78:
    // 0x21fc78: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21fc78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21fc7c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x21FC7Cu;
    SET_GPR_U32(ctx, 31, 0x21FC84u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x21FC7Cu, 0x21FC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC84u;
label_21fc84:
    // 0x21fc84: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x21fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fc88: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x21fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x21fc8cu;
}
