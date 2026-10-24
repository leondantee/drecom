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

// Function: entry_0033dd44
// Address: 0x33dd44 - 0x33ddc0
void entry_0033dd44_0x33dd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033dd44_0x33dd44");
#endif

    ctx->pc = 0x33dd44u;

    // 0x33dd44: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x33dd44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x33dd48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33dd4c: 0x2a32004  sllv        $a0, $v1, $s5
    ctx->pc = 0x33dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 21) & 0x1F));
    // 0x33dd50: 0x8ca31348  lw          $v1, 0x1348($a1)
    ctx->pc = 0x33dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4936)));
    // 0x33dd54: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x33dd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x33dd58: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x33DD58u;
    {
        const bool branch_taken_0x33dd58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33dd58) {
            ctx->pc = 0x33DF30u;
            return;
        }
    }
    ctx->pc = 0x33DD60u;
    // 0x33dd60: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x33dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x33dd64: 0x2465134c  addiu       $a1, $v1, 0x134C
    ctx->pc = 0x33dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x33dd68: 0x142042  srl         $a0, $s4, 1
    ctx->pc = 0x33dd68u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x33dd6c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33dd70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33dd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33dd74: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x33dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x33dd78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33dd7c: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x33dd7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33dd80: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x33dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x33dd84: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x33dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x33dd88: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x33dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x33dd8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33dd90: 0x24760008  addiu       $s6, $v1, 0x8
    ctx->pc = 0x33dd90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x33dd94: 0x92c30000  lbu         $v1, 0x0($s6)
    ctx->pc = 0x33dd94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x33dd98: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x33dd98u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33dd9c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x33dd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x33dda0: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x33dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x33dda4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x33dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x33dda8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x33dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x33ddac: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x33ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x33ddb0: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x33ddb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ddb4: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x33ddb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x33ddb8: 0x0  nop
    ctx->pc = 0x33ddb8u;
    // NOP
    // 0x33ddbc: 0x0  nop
    ctx->pc = 0x33ddbcu;
    // NOP
    ctx->pc = 0x33ddc0u;
}
