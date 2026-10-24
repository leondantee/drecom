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

// Function: Ot_set_tag_om
// Address: 0x1abd30 - 0x1abddc
void Ot_set_tag_om_0x1abd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ot_set_tag_om_0x1abd30");
#endif

    ctx->pc = 0x1abd30u;

    // 0x1abd30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1abd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1abd34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abd38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1abd3c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1abd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1abd40: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1abd40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1abd44: 0xa3a60038  sb          $a2, 0x38($sp)
    ctx->pc = 0x1abd44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 6));
    // 0x1abd48: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x1abd48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1abd4c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1abd4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1abd50: 0x41a80  sll         $v1, $a0, 10
    ctx->pc = 0x1abd50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x1abd54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1abd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abd58: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1abd58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1abd5c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1abd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1abd60: 0x24634fa0  addiu       $v1, $v1, 0x4FA0
    ctx->pc = 0x1abd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20384));
    // 0x1abd64: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1abd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abd68: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1abd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1abd6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1abd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1abd70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1abd70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1abd74: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1abd74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abd78: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x1abd78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1abd7c: 0x3883e  dsrl32      $s1, $v1, 0
    ctx->pc = 0x1abd7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abd80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1abd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1abd84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1abd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abd88: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abd8c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1abd8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abd90: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abd94: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1abd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abd98: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abd98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abd9c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1abd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1abda0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1abda0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1abda4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1abda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1abda8: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1abda8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1abdac: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1abdacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1abdb0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abdb4: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1abdb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abdb8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1abdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1abdbc: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1abdbcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1abdc0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1abdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1abdc4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1abdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1abdc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abdc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abdcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1abdccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abdd0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1abdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1abdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABDDCu;
}
