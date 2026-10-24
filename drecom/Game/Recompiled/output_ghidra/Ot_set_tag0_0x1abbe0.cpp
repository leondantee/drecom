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

// Function: Ot_set_tag0
// Address: 0x1abbe0 - 0x1abc78
void Ot_set_tag0_0x1abbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ot_set_tag0_0x1abbe0");
#endif

    ctx->pc = 0x1abbe0u;

    // 0x1abbe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1abbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1abbe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abbe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1abbec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1abbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1abbf0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1abbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1abbf4: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1abbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1abbf8: 0xa3a70038  sb          $a3, 0x38($sp)
    ctx->pc = 0x1abbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 7));
    // 0x1abbfc: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x1abbfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1abc00: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1abc00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1abc04: 0x41a80  sll         $v1, $a0, 10
    ctx->pc = 0x1abc04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x1abc08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1abc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abc0c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1abc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1abc10: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1abc10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1abc14: 0x2463cf80  addiu       $v1, $v1, -0x3080
    ctx->pc = 0x1abc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954880));
    // 0x1abc18: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1abc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abc1c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1abc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1abc20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1abc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1abc24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1abc24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1abc28: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1abc28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abc2c: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x1abc2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1abc30: 0x3883e  dsrl32      $s1, $v1, 0
    ctx->pc = 0x1abc30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abc34: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1abc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abc38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1abc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abc3c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abc40: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1abc40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abc44: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abc48: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1abc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abc4c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abc50: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1abc50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1abc54: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abc58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1abc58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abc5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1abc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1abc60: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1abc60u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1abc64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abc64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abc68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1abc68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abc6c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1abc6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1abc70: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABC78u;
}
