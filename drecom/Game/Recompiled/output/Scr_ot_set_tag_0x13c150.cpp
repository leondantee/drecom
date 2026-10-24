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

// Function: Scr_ot_set_tag
// Address: 0x13c150 - 0x13c1e8
void Scr_ot_set_tag_0x13c150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_ot_set_tag_0x13c150");
#endif

    ctx->pc = 0x13c150u;

    // 0x13c150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13c150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13c154: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c15c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13c160: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x13c160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x13c164: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x13c164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x13c168: 0xa3a70038  sb          $a3, 0x38($sp)
    ctx->pc = 0x13c168u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 7));
    // 0x13c16c: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x13c16cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13c170: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x13c170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13c174: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x13c174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x13c178: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13c178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13c17c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x13c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13c180: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x13c180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x13c184: 0x24636eb0  addiu       $v1, $v1, 0x6EB0
    ctx->pc = 0x13c184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28336));
    // 0x13c188: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13c188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13c18c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x13c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c190: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13c190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13c194: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13c194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13c198: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x13c198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13c19c: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x13c19cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13c1a0: 0x3883e  dsrl32      $s1, $v1, 0
    ctx->pc = 0x13c1a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13c1a4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x13c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c1a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13c1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13c1ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13c1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13c1b0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x13c1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13c1b4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x13c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x13c1b8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13c1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13c1bc: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x13c1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x13c1c0: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x13c1c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x13c1c4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x13c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x13c1c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x13c1c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13c1cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13c1d0: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13c1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x13c1d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c1d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c1d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c1d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c1dc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13c1dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13c1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x13C1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C1E8u;
}
