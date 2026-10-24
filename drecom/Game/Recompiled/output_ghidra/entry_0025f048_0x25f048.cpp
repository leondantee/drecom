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

// Function: entry_0025f048
// Address: 0x25f048 - 0x25f0ac
void entry_0025f048_0x25f048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f048_0x25f048");
#endif

    switch (ctx->pc) {
        case 0x25f0a4u: goto label_25f0a4;
        default: break;
    }

    ctx->pc = 0x25f048u;

    // 0x25f048: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25f048u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f04c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25f04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25f050: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25f050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25f054: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x25F054u;
    {
        const bool branch_taken_0x25f054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f054) {
            ctx->pc = 0x25F168u;
            return;
        }
    }
    ctx->pc = 0x25F05Cu;
    // 0x25f05c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f060: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x25f060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x25f064: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x25f064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x25f068: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x25f068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f06c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f06cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f070: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f074: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25f074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25f078: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25F078u;
    {
        const bool branch_taken_0x25f078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f078) {
            ctx->pc = 0x25F0ACu;
            return;
        }
    }
    ctx->pc = 0x25F080u;
    // 0x25f080: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f084: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f088: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x25f088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x25f08c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25F08Cu;
    {
        const bool branch_taken_0x25f08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f08c) {
            ctx->pc = 0x25F0C0u;
            return;
        }
    }
    ctx->pc = 0x25F094u;
    // 0x25f094: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25f094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f098: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25f098u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f09c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x25F09Cu;
    SET_GPR_U32(ctx, 31, 0x25F0A4u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25F0A4u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F0A4u) { return; }
    ctx->pc = 0x25F0A4u;
label_25f0a4:
    // 0x25f0a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25F0A4u;
    {
        const bool branch_taken_0x25f0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f0a4) {
            ctx->pc = 0x25F0C0u;
            return;
        }
    }
    ctx->pc = 0x25F0ACu;
}
