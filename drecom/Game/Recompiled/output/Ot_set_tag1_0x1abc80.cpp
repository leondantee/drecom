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

// Function: Ot_set_tag1
// Address: 0x1abc80 - 0x1abd2c
void Ot_set_tag1_0x1abc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ot_set_tag1_0x1abc80");
#endif

    ctx->pc = 0x1abc80u;

    // 0x1abc80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1abc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1abc84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abc88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1abc8c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1abc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1abc90: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1abc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1abc94: 0xa3a60038  sb          $a2, 0x38($sp)
    ctx->pc = 0x1abc94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 6));
    // 0x1abc98: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x1abc98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1abc9c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1abc9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1abca0: 0x41a80  sll         $v1, $a0, 10
    ctx->pc = 0x1abca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x1abca4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1abca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abca8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1abca8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1abcac: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1abcacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1abcb0: 0x24634f60  addiu       $v1, $v1, 0x4F60
    ctx->pc = 0x1abcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20320));
    // 0x1abcb4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1abcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abcb8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1abcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1abcbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1abcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1abcc0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1abcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1abcc4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1abcc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abcc8: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x1abcc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1abccc: 0x3883e  dsrl32      $s1, $v1, 0
    ctx->pc = 0x1abcccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abcd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1abcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1abcd4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1abcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abcd8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abcdc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1abcdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abce0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abce4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1abce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abce8: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abce8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abcec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1abcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1abcf0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1abcf0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1abcf4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1abcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1abcf8: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1abcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1abcfc: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1abcfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1abd00: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abd00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abd04: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1abd04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abd08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1abd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1abd0c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1abd0cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1abd10: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1abd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1abd14: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1abd14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1abd18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abd18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abd1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1abd1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abd20: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1abd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1abd24: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABD2Cu;
}
