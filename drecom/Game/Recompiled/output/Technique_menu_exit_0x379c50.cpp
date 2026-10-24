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

// Function: Technique_menu_exit
// Address: 0x379c50 - 0x379ca8
void Technique_menu_exit_0x379c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Technique_menu_exit_0x379c50");
#endif

    switch (ctx->pc) {
        case 0x379c94u: goto label_379c94;
        default: break;
    }

    ctx->pc = 0x379c50u;

    // 0x379c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x379c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x379c54: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x379c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x379c58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x379c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x379c5c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x379c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x379c60: 0x24506150  addiu       $s0, $v0, 0x6150
    ctx->pc = 0x379c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x379c64: 0xae005dc0  sw          $zero, 0x5DC0($s0)
    ctx->pc = 0x379c64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x62BF10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62BF10u, _value); } while (0);
    // 0x379c68: 0xae005dc4  sw          $zero, 0x5DC4($s0)
    ctx->pc = 0x379c68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x62BF14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62BF14u, _value); } while (0);
    // 0x379c6c: 0xae005dc8  sw          $zero, 0x5DC8($s0)
    ctx->pc = 0x379c6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x62BF18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62BF18u, _value); } while (0);
    // 0x379c70: 0xae005dcc  sw          $zero, 0x5DCC($s0)
    ctx->pc = 0x379c70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x62BF1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62BF1Cu, _value); } while (0);
    // 0x379c74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x379c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x379c78: 0x8c236140  lw          $v1, 0x6140($at)
    ctx->pc = 0x379c78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x626140u));
    // 0x379c7c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x379c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x379c80: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x379c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x379c84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x379c84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x379c88: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x379c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x379c8c: 0xc0d7558  jal         func_35D560
    ctx->pc = 0x379C8Cu;
    SET_GPR_U32(ctx, 31, 0x379C94u);
    ctx->pc = 0x35D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D560u, 0x379C8Cu, 0x379C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379C94u;
label_379c94:
    // 0x379c94: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x379c94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379c98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x379c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379c9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x379c9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x379ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x379CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379CA8u;
}
