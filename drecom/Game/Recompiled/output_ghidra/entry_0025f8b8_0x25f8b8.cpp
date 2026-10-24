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

// Function: entry_0025f8b8
// Address: 0x25f8b8 - 0x25f8f8
void entry_0025f8b8_0x25f8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f8b8_0x25f8b8");
#endif

    switch (ctx->pc) {
        case 0x25f8f0u: goto label_25f8f0;
        default: break;
    }

    ctx->pc = 0x25f8b8u;

    // 0x25f8b8: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f8b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f8bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f8c0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25f8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25f8c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25F8C4u;
    {
        const bool branch_taken_0x25f8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f8c4) {
            ctx->pc = 0x25F8F8u;
            return;
        }
    }
    ctx->pc = 0x25F8CCu;
    // 0x25f8cc: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f8ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f8d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f8d4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x25f8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x25f8d8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25F8D8u;
    {
        const bool branch_taken_0x25f8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f8d8) {
            ctx->pc = 0x25F910u;
            return;
        }
    }
    ctx->pc = 0x25F8E0u;
    // 0x25f8e0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25f8e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f8e4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25f8e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f8e8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x25F8E8u;
    SET_GPR_U32(ctx, 31, 0x25F8F0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25F8F0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F8F0u) { return; }
    ctx->pc = 0x25F8F0u;
label_25f8f0:
    // 0x25f8f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25F8F0u;
    {
        const bool branch_taken_0x25f8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f8f0) {
            ctx->pc = 0x25F910u;
            return;
        }
    }
    ctx->pc = 0x25F8F8u;
}
