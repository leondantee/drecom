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

// Function: Eff_md_ot_set_tag
// Address: 0x1abde0 - 0x1abe78
void Eff_md_ot_set_tag_0x1abde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_md_ot_set_tag_0x1abde0");
#endif

    ctx->pc = 0x1abde0u;

    // 0x1abde0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1abde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1abde4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abde8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1abdec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1abdecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1abdf0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1abdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1abdf4: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1abdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1abdf8: 0xa3a70038  sb          $a3, 0x38($sp)
    ctx->pc = 0x1abdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 7));
    // 0x1abdfc: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x1abdfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1abe00: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1abe00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1abe04: 0x41a80  sll         $v1, $a0, 10
    ctx->pc = 0x1abe04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x1abe08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1abe08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abe0c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1abe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1abe10: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1abe10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1abe14: 0x24634fa0  addiu       $v1, $v1, 0x4FA0
    ctx->pc = 0x1abe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20384));
    // 0x1abe18: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1abe18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abe1c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1abe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1abe20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1abe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1abe24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1abe24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1abe28: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1abe28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abe2c: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x1abe2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1abe30: 0x3883e  dsrl32      $s1, $v1, 0
    ctx->pc = 0x1abe30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abe34: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1abe34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abe38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1abe38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abe3c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abe3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abe40: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1abe40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abe44: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abe44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abe48: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1abe48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abe4c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abe4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abe50: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1abe50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1abe54: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abe54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abe58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1abe58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abe5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1abe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1abe60: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1abe60u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1abe64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abe64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abe68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1abe68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abe6c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1abe6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1abe70: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABE78u;
}
