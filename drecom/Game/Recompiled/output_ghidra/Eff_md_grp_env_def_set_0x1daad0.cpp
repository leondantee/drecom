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

// Function: Eff_md_grp_env_def_set
// Address: 0x1daad0 - 0x1dabc8
void Eff_md_grp_env_def_set_0x1daad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_md_grp_env_def_set_0x1daad0");
#endif

    ctx->pc = 0x1daad0u;

    // 0x1daad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1daad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1daad4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1daad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1daad8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1daad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1daadc: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1daadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1daae0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1daae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1daae4: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1daae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1daae8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1daae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1daaec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1daaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1daaf0: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1daaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1daaf4: 0x24040eee  addiu       $a0, $zero, 0xEEE
    ctx->pc = 0x1daaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3822));
    // 0x1daaf8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1daaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1daafc: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1daafcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1dab00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1dab00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dab04: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x1dab04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1dab08: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAB08u;
    {
        const bool branch_taken_0x1dab08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dab08) {
            ctx->pc = 0x1DAB20u;
            goto label_1dab20;
        }
    }
    ctx->pc = 0x1DAB10u;
    // 0x1dab10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dab10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dab14: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x1dab14u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x1dab18: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1DAB18u;
    {
        const bool branch_taken_0x1dab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dab18) {
            ctx->pc = 0x1DAB78u;
            goto label_1dab78;
        }
    }
    ctx->pc = 0x1DAB20u;
label_1dab20:
    // 0x1dab20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1dab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dab24: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x1dab24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1dab28: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dab28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dab2c: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x1dab2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x1dab30: 0x3464000f  ori         $a0, $v1, 0xF
    ctx->pc = 0x1dab30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x1dab34: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1dab34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dab38: 0x9463001e  lhu         $v1, 0x1E($v1)
    ctx->pc = 0x1dab38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x1dab3c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dab3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dab40: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1dab40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1dab44: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1dab44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1dab48: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1dab48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dab4c: 0x94630020  lhu         $v1, 0x20($v1)
    ctx->pc = 0x1dab4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dab50: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dab50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dab54: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1dab54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1dab58: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1dab58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dab5c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1dab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dab60: 0x94630022  lhu         $v1, 0x22($v1)
    ctx->pc = 0x1dab60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x1dab64: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dab64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dab68: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1dab68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1dab6c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1dab6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dab70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dab70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dab74: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x1dab74u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
label_1dab78:
    // 0x1dab78: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1dab78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1dab7c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dab80: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x1dab80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x1dab84: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x1dab84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x1dab88: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1dab88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dab8c: 0x24030160  addiu       $v1, $zero, 0x160
    ctx->pc = 0x1dab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x1dab90: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1dab90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dab94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dab94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dab98: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1dab98u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1dab9c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1dab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1daba0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1daba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1daba4: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x1daba4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x1daba8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1daba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dabac: 0xfc600030  sd          $zero, 0x30($v1)
    ctx->pc = 0x1dabacu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 0));
    // 0x1dabb0: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1dabb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1dabb4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dabb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dabb8: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x1dabb8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x1dabbc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1dabbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dabc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DABC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DABC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DABC8u;
}
