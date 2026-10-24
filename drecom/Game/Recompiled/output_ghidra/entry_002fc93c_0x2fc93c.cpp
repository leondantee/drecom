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

// Function: entry_002fc93c
// Address: 0x2fc93c - 0x2fc974
void entry_002fc93c_0x2fc93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc93c_0x2fc93c");
#endif

    ctx->pc = 0x2fc93cu;

    // 0x2fc93c: 0x868415f0  lh          $a0, 0x15F0($s4)
    ctx->pc = 0x2fc93cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5616)));
    // 0x2fc940: 0x43e3c  dsll32      $a3, $a0, 24
    ctx->pc = 0x2fc940u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2fc944: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x2fc944u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x2fc948: 0x7263c  dsll32      $a0, $a3, 24
    ctx->pc = 0x2fc948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2fc94c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fc94cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fc950: 0x7080b628  paddub      $s6, $a0, $zero
    ctx->pc = 0x2fc950u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2fc954: 0x868415f0  lh          $a0, 0x15F0($s4)
    ctx->pc = 0x2fc954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5616)));
    // 0x2fc958: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x2fc958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2fc95c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc95cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc960: 0x3b63c  dsll32      $s6, $v1, 24
    ctx->pc = 0x2fc960u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fc964: 0x16b63f  dsra32      $s6, $s6, 24
    ctx->pc = 0x2fc964u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
    // 0x2fc968: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2fc968u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fc96c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2FC96Cu;
    {
        const bool branch_taken_0x2fc96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc96c) {
            ctx->pc = 0x2FC9C0u;
            return;
        }
    }
    ctx->pc = 0x2FC974u;
}
