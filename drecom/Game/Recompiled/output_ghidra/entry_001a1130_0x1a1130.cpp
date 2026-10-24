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

// Function: entry_001a1130
// Address: 0x1a1130 - 0x1a11c0
void entry_001a1130_0x1a1130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1130_0x1a1130");
#endif

    ctx->pc = 0x1a1130u;

    // 0x1a1130: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1134: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a1134u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1138: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a1138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a113c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a113cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1140: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x1a1140u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a1144: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1148: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1a1148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a114c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a114cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1150: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a1150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a1154: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1a1154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a1158: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A1158u;
    {
        const bool branch_taken_0x1a1158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1158) {
            ctx->pc = 0x1A11C0u;
            return;
        }
    }
    ctx->pc = 0x1A1160u;
    // 0x1a1160: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1a1160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a1164: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1168: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a116c: 0xa0640016  sb          $a0, 0x16($v1)
    ctx->pc = 0x1a116cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1174: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a1174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a1178: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a1178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a117c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a117cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1180: 0x94830012  lhu         $v1, 0x12($a0)
    ctx->pc = 0x1a1180u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1a1184: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a1184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a1188: 0xa4830012  sh          $v1, 0x12($a0)
    ctx->pc = 0x1a1188u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a118c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a118cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a1190: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1194: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a1198: 0xa0640026  sb          $a0, 0x26($v1)
    ctx->pc = 0x1a1198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 38), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a119c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a119cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a11a0: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a11a4: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a11a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a11a8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a11a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a11ac: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x1a11acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a11b0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a11b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a11b4: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x1a11b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a11b8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1A11B8u;
    {
        const bool branch_taken_0x1a11b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a11b8) {
            ctx->pc = 0x1A1340u;
            return;
        }
    }
    ctx->pc = 0x1A11C0u;
}
