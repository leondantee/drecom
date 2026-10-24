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

// Function: entry_001a0a60
// Address: 0x1a0a60 - 0x1a0acc
void entry_001a0a60_0x1a0a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0a60_0x1a0a60");
#endif

    switch (ctx->pc) {
        case 0x1a0a98u: goto label_1a0a98;
        case 0x1a0aacu: goto label_1a0aac;
        case 0x1a0ab4u: goto label_1a0ab4;
        default: break;
    }

    ctx->pc = 0x1a0a60u;

    // 0x1a0a60: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a0a64: 0x24432762  addiu       $v1, $v0, 0x2762
    ctx->pc = 0x1a0a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10082));
    // 0x1a0a68: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1a0a68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D2762u));
    // 0x1a0a6c: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a0a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
    // 0x1a0a70: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x1a0a70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D2762u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D2762u, _value); } while (0);
    // 0x1a0a74: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a0a78: 0x24432764  addiu       $v1, $v0, 0x2764
    ctx->pc = 0x1a0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10084));
    // 0x1a0a7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D2764u));
    // 0x1a0a80: 0x401027  not         $v0, $v0
    ctx->pc = 0x1a0a80u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1a0a84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a0a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a0a88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a0a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a0a8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0a90: 0xc0683a0  jal         func_1A0E80
    ctx->pc = 0x1A0A90u;
    SET_GPR_U32(ctx, 31, 0x1A0A98u);
    ctx->pc = 0x1A0E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E80u, 0x1A0A90u, 0x1A0A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A98u;
label_1a0a98:
    // 0x1a0a98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a0a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a0a9c: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x1a0a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1a0aa0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a0aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a0aa4: 0xc0682b4  jal         func_1A0AD0
    ctx->pc = 0x1A0AA4u;
    SET_GPR_U32(ctx, 31, 0x1A0AACu);
    ctx->pc = 0x1A0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD0u, 0x1A0AA4u, 0x1A0AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0AACu;
label_1a0aac:
    // 0x1a0aac: 0xc068510  jal         func_1A1440
    ctx->pc = 0x1A0AACu;
    SET_GPR_U32(ctx, 31, 0x1A0AB4u);
    ctx->pc = 0x1A1440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1440u, 0x1A0AACu, 0x1A0AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0AB4u;
label_1a0ab4:
    // 0x1a0ab4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1a0ab4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0ab8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0abc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0ac0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a0ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a0ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0ACCu;
}
