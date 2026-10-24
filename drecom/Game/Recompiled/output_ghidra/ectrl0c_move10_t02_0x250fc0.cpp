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

// Function: ectrl0c_move10_t02
// Address: 0x250fc0 - 0x251048
void ectrl0c_move10_t02_0x250fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl0c_move10_t02_0x250fc0");
#endif

    switch (ctx->pc) {
        case 0x251004u: goto label_251004;
        case 0x251010u: goto label_251010;
        default: break;
    }

    ctx->pc = 0x250fc0u;

    // 0x250fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x250fc4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x250fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x250fc8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x250fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x250fcc: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x250fccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x250fd0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x250fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x250fd4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250fd8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250fdc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250fe0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250fe4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250fe8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250fec: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x250fecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250ff0: 0x24042f01  addiu       $a0, $zero, 0x2F01
    ctx->pc = 0x250ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12033));
    // 0x250ff4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x250ff4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x250ff8: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x250ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x250ffc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x250FFCu;
    SET_GPR_U32(ctx, 31, 0x251004u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x250FFCu, 0x251004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251004u;
label_251004:
    // 0x251004: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251004u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251008: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251008u;
    SET_GPR_U32(ctx, 31, 0x251010u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251008u, 0x251010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251010u;
label_251010:
    // 0x251010: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x251010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251014: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x251014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x251018: 0x2863001e  slti        $v1, $v1, 0x1E
    ctx->pc = 0x251018u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x25101c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25101Cu;
    {
        const bool branch_taken_0x25101c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25101c) {
            ctx->pc = 0x251038u;
            goto label_251038;
        }
    }
    ctx->pc = 0x251024u;
    // 0x251024: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x251024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251028: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x251028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25102c: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x25102cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x251030: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x251030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251034: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x251034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_251038:
    // 0x251038: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x251038u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25103c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25103cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x251040: 0x3e00008  jr          $ra
    ctx->pc = 0x251040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251048u;
}
