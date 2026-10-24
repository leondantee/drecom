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

// Function: SndSeCallDirect
// Address: 0x19f090 - 0x19f100
void SndSeCallDirect_0x19f090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndSeCallDirect_0x19f090");
#endif

    switch (ctx->pc) {
        case 0x19f0ecu: goto label_19f0ec;
        default: break;
    }

    ctx->pc = 0x19f090u;

    // 0x19f090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19f094: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x19f094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x19f098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f09c: 0xa7a40020  sh          $a0, 0x20($sp)
    ctx->pc = 0x19f09cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 4));
    // 0x19f0a0: 0xa3a50028  sb          $a1, 0x28($sp)
    ctx->pc = 0x19f0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 5));
    // 0x19f0a4: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x19f0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x19f0a8: 0xa7a70038  sh          $a3, 0x38($sp)
    ctx->pc = 0x19f0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 56), (uint16_t)GPR_U32(ctx, 7));
    // 0x19f0ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f0b0: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x19f0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x19f0b4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x19f0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x19f0b8: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19F0B8u;
    {
        const bool branch_taken_0x19f0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f0b8) {
            ctx->pc = 0x19F0ECu;
            goto label_19f0ec;
        }
    }
    ctx->pc = 0x19F0C0u;
    // 0x19f0c0: 0x97a20020  lhu         $v0, 0x20($sp)
    ctx->pc = 0x19f0c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f0c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19f0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19f0c8: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x19f0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19f0cc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x19f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x19f0d0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x19f0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19f0d4: 0x83a50028  lb          $a1, 0x28($sp)
    ctx->pc = 0x19f0d4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19f0d8: 0x83a60030  lb          $a2, 0x30($sp)
    ctx->pc = 0x19f0d8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f0dc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x19f0dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19f0e0: 0x87a70038  lh          $a3, 0x38($sp)
    ctx->pc = 0x19f0e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19f0e4: 0xc0ce318  jal         func_338C60
    ctx->pc = 0x19F0E4u;
    SET_GPR_U32(ctx, 31, 0x19F0ECu);
    ctx->pc = 0x338C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338C60u, 0x19F0E4u, 0x19F0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0ECu;
label_19f0ec:
    // 0x19f0ec: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x19f0ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f0f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f0f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f0f4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19f0f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19f0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x19F0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F100u;
}
