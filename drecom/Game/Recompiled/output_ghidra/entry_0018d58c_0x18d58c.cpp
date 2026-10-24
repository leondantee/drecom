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

// Function: entry_0018d58c
// Address: 0x18d58c - 0x18d608
void entry_0018d58c_0x18d58c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d58c_0x18d58c");
#endif

    ctx->pc = 0x18d58cu;

    // 0x18d58c: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x18d58cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d590: 0x2203e  dsrl32      $a0, $v0, 0
    ctx->pc = 0x18d590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d594: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x18d594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d598: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x18d598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x18d59c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x18d59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d5a0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x18d5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18d5a4: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x18d5a4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d5a8: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x18d5a8u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x18d5ac: 0xdfa200a8  ld          $v0, 0xA8($sp)
    ctx->pc = 0x18d5acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x18d5b0: 0x2203e  dsrl32      $a0, $v0, 0
    ctx->pc = 0x18d5b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d5b4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x18d5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d5b8: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x18d5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x18d5bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d5c0: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x18d5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x18d5c4: 0x3903c  dsll32      $s2, $v1, 0
    ctx->pc = 0x18d5c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18d5c8: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x18d5c8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x18d5cc: 0xdfa400a8  ld          $a0, 0xA8($sp)
    ctx->pc = 0x18d5ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x18d5d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d5d4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x18d5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x18d5d8: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x18d5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x18d5dc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x18d5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x18d5e0: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x18d5e0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d5e4: 0x17b83f  dsra32      $s7, $s7, 0
    ctx->pc = 0x18d5e4u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x18d5e8: 0x32c28000  andi        $v0, $s6, 0x8000
    ctx->pc = 0x18d5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32768);
    // 0x18d5ec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18D5ECu;
    {
        const bool branch_taken_0x18d5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d5ec) {
            ctx->pc = 0x18D668u;
            return;
        }
    }
    ctx->pc = 0x18D5F4u;
    // 0x18d5f4: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x18d5f4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18d5f8: 0x8e421214  lw          $v0, 0x1214($s2)
    ctx->pc = 0x18d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4628)));
    // 0x18d5fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18d5fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18d600: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18D600u;
    {
        const bool branch_taken_0x18d600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d600) {
            ctx->pc = 0x18D628u;
            return;
        }
    }
    ctx->pc = 0x18D608u;
}
