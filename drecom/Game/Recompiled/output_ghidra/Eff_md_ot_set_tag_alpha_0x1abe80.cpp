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

// Function: Eff_md_ot_set_tag_alpha
// Address: 0x1abe80 - 0x1abf18
void Eff_md_ot_set_tag_alpha_0x1abe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_md_ot_set_tag_alpha_0x1abe80");
#endif

    ctx->pc = 0x1abe80u;

    // 0x1abe80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1abe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1abe84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abe84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abe88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abe88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1abe8c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1abe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1abe90: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1abe90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1abe94: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1abe94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1abe98: 0xa3a70038  sb          $a3, 0x38($sp)
    ctx->pc = 0x1abe98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 7));
    // 0x1abe9c: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x1abe9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1abea0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1abea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1abea4: 0x41a80  sll         $v1, $a0, 10
    ctx->pc = 0x1abea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x1abea8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1abea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abeac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1abeacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1abeb0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1abeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1abeb4: 0x24634f60  addiu       $v1, $v1, 0x4F60
    ctx->pc = 0x1abeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20320));
    // 0x1abeb8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1abeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abebc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1abebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1abec0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1abec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1abec4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1abec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1abec8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1abec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abecc: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x1abeccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1abed0: 0x3883e  dsrl32      $s1, $v1, 0
    ctx->pc = 0x1abed0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abed4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1abed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abed8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1abed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abedc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abee0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1abee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abee4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abee8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1abee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abeec: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abeecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abef0: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1abef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1abef4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abef8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1abef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abefc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1abefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1abf00: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1abf00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1abf04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abf04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abf08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1abf08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abf0c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1abf0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1abf10: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABF18u;
}
