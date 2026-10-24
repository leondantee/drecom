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

// Function: Sg_ot1_set_tag
// Address: 0x1ac060 - 0x1ac0f0
void Sg_ot1_set_tag_0x1ac060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sg_ot1_set_tag_0x1ac060");
#endif

    ctx->pc = 0x1ac060u;

    // 0x1ac060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ac060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ac064: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ac064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ac068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ac068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ac06c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ac06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ac070: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1ac070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1ac074: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ac074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ac078: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ac078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ac07c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1ac07cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ac080: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1ac080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1ac084: 0x24633f00  addiu       $v1, $v1, 0x3F00
    ctx->pc = 0x1ac084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16128));
    // 0x1ac088: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1ac088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ac08c: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x1ac08cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ac090: 0x3883e  dsrl32      $s1, $v1, 0
    ctx->pc = 0x1ac090u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac094: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ac094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac098: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ac098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac09c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac0a0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ac0a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac0a4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ac0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ac0a8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ac0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ac0ac: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1ac0acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1ac0b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ac0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac0b4: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1ac0b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ac0b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1ac0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ac0bc: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1ac0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1ac0c0: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1ac0c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1ac0c4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ac0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ac0c8: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1ac0c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ac0cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ac0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac0d0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1ac0d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ac0d4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1ac0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1ac0d8: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1ac0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1ac0dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ac0dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac0e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ac0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac0e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ac0e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ac0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC0F0u;
}
