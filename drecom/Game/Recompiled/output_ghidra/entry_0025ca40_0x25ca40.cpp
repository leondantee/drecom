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

// Function: entry_0025ca40
// Address: 0x25ca40 - 0x25ca9c
void entry_0025ca40_0x25ca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ca40_0x25ca40");
#endif

    switch (ctx->pc) {
        case 0x25ca90u: goto label_25ca90;
        default: break;
    }

    ctx->pc = 0x25ca40u;

    // 0x25ca40: 0x96050140  lhu         $a1, 0x140($s0)
    ctx->pc = 0x25ca40u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25ca44: 0x34a30040  ori         $v1, $a1, 0x40
    ctx->pc = 0x25ca44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x25ca48: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25ca48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x25ca4c: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x25ca4cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25ca50: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x25ca50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x25ca54: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x25ca54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x25ca58: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x25CA58u;
    {
        const bool branch_taken_0x25ca58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ca58) {
            ctx->pc = 0x25CA9Cu;
            return;
        }
    }
    ctx->pc = 0x25CA60u;
    // 0x25ca60: 0x96060140  lhu         $a2, 0x140($s0)
    ctx->pc = 0x25ca60u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25ca64: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x25ca64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x25ca68: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x25ca68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x25ca6c: 0x14600176  bnez        $v1, . + 4 + (0x176 << 2)
    ctx->pc = 0x25CA6Cu;
    {
        const bool branch_taken_0x25ca6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ca6c) {
            ctx->pc = 0x25D048u;
            return;
        }
    }
    ctx->pc = 0x25CA74u;
    // 0x25ca74: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25ca78: 0x152180  sll         $a0, $s5, 6
    ctx->pc = 0x25ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x25ca7c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x25ca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x25ca80: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x25ca80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25ca84: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25ca84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25ca88: 0xc040ca2  jal         func_103288
    ctx->pc = 0x25CA88u;
    SET_GPR_U32(ctx, 31, 0x25CA90u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25CA90u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CA90u) { return; }
    ctx->pc = 0x25CA90u;
label_25ca90:
    // 0x25ca90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25ca90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25ca94: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x25CA94u;
    {
        const bool branch_taken_0x25ca94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ca94) {
            ctx->pc = 0x25D048u;
            return;
        }
    }
    ctx->pc = 0x25CA9Cu;
}
