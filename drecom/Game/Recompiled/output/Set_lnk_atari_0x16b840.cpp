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

// Function: Set_lnk_atari
// Address: 0x16b840 - 0x16b89c
void Set_lnk_atari_0x16b840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_lnk_atari_0x16b840");
#endif

    ctx->pc = 0x16b840u;

    // 0x16b840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b844: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b848: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x16b848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x16b84c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b850: 0x94630012  lhu         $v1, 0x12($v1)
    ctx->pc = 0x16b850u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x16b854: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16b854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16b858: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x16b858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x16b85c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16B85Cu;
    {
        const bool branch_taken_0x16b85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b85c) {
            ctx->pc = 0x16B88Cu;
            goto label_16b88c;
        }
    }
    ctx->pc = 0x16B864u;
    // 0x16b864: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16b864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16b868: 0x8c300df8  lw          $s0, 0xDF8($at)
    ctx->pc = 0x16b868u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0DF8u));
    // 0x16b86c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b870: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16b870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16b874: 0xac230df8  sw          $v1, 0xDF8($at)
    ctx->pc = 0x16b874u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0DF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0DF8u, _value); } while (0);
    // 0x16b878: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16b878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b87c: 0xac700018  sw          $s0, 0x18($v1)
    ctx->pc = 0x16b87cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 16));
    // 0x16b880: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x16b880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x16b884: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16b884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b888: 0xa4640012  sh          $a0, 0x12($v1)
    ctx->pc = 0x16b888u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 4));
label_16b88c:
    // 0x16b88c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b88cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b890: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16b890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16b894: 0x3e00008  jr          $ra
    ctx->pc = 0x16B894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B89Cu;
}
