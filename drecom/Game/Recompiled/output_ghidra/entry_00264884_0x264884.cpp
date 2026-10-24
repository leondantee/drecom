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

// Function: entry_00264884
// Address: 0x264884 - 0x2648a8
void entry_00264884_0x264884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264884_0x264884");
#endif

    ctx->pc = 0x264884u;

    // 0x264884: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x264884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x264888: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x264888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x26488c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x26488cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x264890: 0x8c6300a0  lw          $v1, 0xA0($v1)
    ctx->pc = 0x264890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x264894: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264894u;
    {
        const bool branch_taken_0x264894 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x264894) {
            ctx->pc = 0x2648A8u;
            return;
        }
    }
    ctx->pc = 0x26489Cu;
    // 0x26489c: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x26489cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2648a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2648A0u;
    {
        const bool branch_taken_0x2648a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2648a0) {
            ctx->pc = 0x2648C0u;
            return;
        }
    }
    ctx->pc = 0x2648A8u;
}
