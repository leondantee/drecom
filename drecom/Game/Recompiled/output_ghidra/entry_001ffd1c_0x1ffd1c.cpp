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

// Function: entry_001ffd1c
// Address: 0x1ffd1c - 0x1ffdc8
void entry_001ffd1c_0x1ffd1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffd1c_0x1ffd1c");
#endif

    ctx->pc = 0x1ffd1cu;

    // 0x1ffd1c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd20: 0x90a30346  lbu         $v1, 0x346($a1)
    ctx->pc = 0x1ffd20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 838)));
    // 0x1ffd24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ffd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ffd28: 0xa0a30346  sb          $v1, 0x346($a1)
    ctx->pc = 0x1ffd28u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffd2c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd30: 0x90a70348  lbu         $a3, 0x348($a1)
    ctx->pc = 0x1ffd30u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1ffd34: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x1ffd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ffd38: 0xa0a30348  sb          $v1, 0x348($a1)
    ctx->pc = 0x1ffd38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffd3c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd40: 0x90660348  lbu         $a2, 0x348($v1)
    ctx->pc = 0x1ffd40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1ffd44: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x1ffd44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ffd48: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1ffd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ffd4c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1ffd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ffd50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffd54: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ffd54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd58: 0xa0c3034b  sb          $v1, 0x34B($a2)
    ctx->pc = 0x1ffd58u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 843), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffd5c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd60: 0x90650346  lbu         $a1, 0x346($v1)
    ctx->pc = 0x1ffd60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1ffd64: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x1ffd64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffd68: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x1ffd68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1ffd6c: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x1ffd6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd70: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1ffd70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1ffd74: 0x79080000  lq          $t0, 0x0($t0)
    ctx->pc = 0x1ffd74u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ffd78: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x1ffd78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd7c: 0x90f10346  lbu         $s1, 0x346($a3)
    ctx->pc = 0x1ffd7cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 838)));
    // 0x1ffd80: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x1ffd80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1ffd84: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1ffd84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ffd88: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ffd88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd8c: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x1ffd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1ffd90: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1ffd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1ffd94: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x1ffd94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x1ffd98: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffd9c: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1ffd9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1ffda0: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1ffda0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffda4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffda8: 0x90850347  lbu         $a1, 0x347($a0)
    ctx->pc = 0x1ffda8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 839)));
    // 0x1ffdac: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ffdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ffdb0: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x1ffdb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ffdb4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFDB4u;
    {
        const bool branch_taken_0x1ffdb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffdb4) {
            ctx->pc = 0x1FFDC8u;
            return;
        }
    }
    ctx->pc = 0x1FFDBCu;
    // 0x1ffdbc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1ffdbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffdc0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffdc4: 0xa0700abc  sb          $s0, 0xABC($v1)
    ctx->pc = 0x1ffdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 16));
    ctx->pc = 0x1ffdc8u;
}
