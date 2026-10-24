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

// Function: entry_00373200
// Address: 0x373200 - 0x373258
void entry_00373200_0x373200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373200_0x373200");
#endif

    switch (ctx->pc) {
        case 0x373250u: goto label_373250;
        default: break;
    }

    ctx->pc = 0x373200u;

    // 0x373200: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x373200u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x373204: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x373204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x373208: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x373208u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x37320c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x37320cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x373210: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x373210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x373214: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x373214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x373218: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x373218u;
    {
        const bool branch_taken_0x373218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373218) {
            ctx->pc = 0x373258u;
            return;
        }
    }
    ctx->pc = 0x373220u;
    // 0x373220: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x373220u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x373224: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x373224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x373228: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x373228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x37322c: 0x146000fe  bnez        $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x37322Cu;
    {
        const bool branch_taken_0x37322c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37322c) {
            ctx->pc = 0x373628u;
            return;
        }
    }
    ctx->pc = 0x373234u;
    // 0x373234: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x373234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373238: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x373238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x37323c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x37323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373240: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x373240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373244: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x373244u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x373248: 0xc040ca2  jal         func_103288
    ctx->pc = 0x373248u;
    SET_GPR_U32(ctx, 31, 0x373250u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x373250u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373250u) { return; }
    ctx->pc = 0x373250u;
label_373250:
    // 0x373250: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x373250u;
    {
        const bool branch_taken_0x373250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373250) {
            ctx->pc = 0x373628u;
            return;
        }
    }
    ctx->pc = 0x373258u;
}
