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

// Function: entry_001dcb20
// Address: 0x1dcb20 - 0x1dcbc0
void entry_001dcb20_0x1dcb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcb20_0x1dcb20");
#endif

    switch (ctx->pc) {
        case 0x1dcb74u: goto label_1dcb74;
        case 0x1dcb90u: goto label_1dcb90;
        default: break;
    }

    ctx->pc = 0x1dcb20u;

    // 0x1dcb20: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1dcb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dcb24: 0x2842003a  slti        $v0, $v0, 0x3A
    ctx->pc = 0x1dcb24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x1dcb28: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1DCB28u;
    {
        const bool branch_taken_0x1dcb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcb28) {
            ctx->pc = 0x1DCA4Cu;
            return;
        }
    }
    ctx->pc = 0x1DCB30u;
    // 0x1dcb30: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x1dcb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1dcb34: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dcb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dcb38: 0xa0430013  sb          $v1, 0x13($v0)
    ctx->pc = 0x1dcb38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dcb3c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dcb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dcb40: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x1dcb40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1dcb44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dcb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dcb48: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dcb48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dcb4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dcb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dcb50: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dcb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dcb54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dcb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dcb58: 0x8c570064  lw          $s7, 0x64($v0)
    ctx->pc = 0x1dcb58u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1dcb5c: 0x26e40070  addiu       $a0, $s7, 0x70
    ctx->pc = 0x1dcb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
    // 0x1dcb60: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1dcb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dcb64: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1dcb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dcb68: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x1dcb68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dcb6c: 0xc040dac  jal         func_1036B0
    ctx->pc = 0x1DCB6Cu;
    SET_GPR_U32(ctx, 31, 0x1DCB74u);
    ctx->pc = 0x1036B0u;
    {
        ctx->pc = 0x1DCB74u;
        ps2_stubs::sceVu0NormalLightMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DCB74u) { return; }
    ctx->pc = 0x1DCB74u;
label_1dcb74:
    // 0x1dcb74: 0x26280070  addiu       $t0, $s1, 0x70
    ctx->pc = 0x1dcb74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1dcb78: 0x26e40030  addiu       $a0, $s7, 0x30
    ctx->pc = 0x1dcb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x1dcb7c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1dcb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1dcb80: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1dcb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1dcb84: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1dcb84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1dcb88: 0xc040ddc  jal         func_103770
    ctx->pc = 0x1DCB88u;
    SET_GPR_U32(ctx, 31, 0x1DCB90u);
    ctx->pc = 0x103770u;
    {
        ctx->pc = 0x1DCB90u;
        ps2_stubs::sceVu0LightColorMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DCB90u) { return; }
    ctx->pc = 0x1DCB90u;
label_1dcb90:
    // 0x1dcb90: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x1dcb90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dcb94: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1dcb94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dcb98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1dcb98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dcb9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1dcb9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dcba0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dcba0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dcba4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dcba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dcba8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dcba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dcbac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dcbacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcbb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dcbb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcbb4: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1dcbb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dcbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCBC0u;
}
