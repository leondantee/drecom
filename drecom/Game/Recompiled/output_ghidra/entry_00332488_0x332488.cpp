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

// Function: entry_00332488
// Address: 0x332488 - 0x3324d4
void entry_00332488_0x332488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332488_0x332488");
#endif

    ctx->pc = 0x332488u;

    // 0x332488: 0x92036607  lbu         $v1, 0x6607($s0)
    ctx->pc = 0x332488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26119)));
    // 0x33248c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33248cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x332490: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x332490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x332494: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x332494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x332498: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x332498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33249c: 0x247265f8  addiu       $s2, $v1, 0x65F8
    ctx->pc = 0x33249cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 26104));
    // 0x3324a0: 0x8e230258  lw          $v1, 0x258($s1)
    ctx->pc = 0x3324a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x3324a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3324a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3324a8: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x3324a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3324ac: 0x8e23025c  lw          $v1, 0x25C($s1)
    ctx->pc = 0x3324acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x3324b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3324b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3324b4: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x3324b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3324b8: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x3324b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3324bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3324bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3324c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3324c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3324c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3324c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3324c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3324c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3324cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3324CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3324CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3324D4u;
}
