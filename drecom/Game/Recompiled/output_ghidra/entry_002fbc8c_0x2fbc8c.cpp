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

// Function: entry_002fbc8c
// Address: 0x2fbc8c - 0x2fbcb8
void entry_002fbc8c_0x2fbc8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fbc8c_0x2fbc8c");
#endif

    ctx->pc = 0x2fbc8cu;

    // 0x2fbc8c: 0x8fa70178  lw          $a3, 0x178($sp)
    ctx->pc = 0x2fbc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fbc90: 0x8ce60108  lw          $a2, 0x108($a3)
    ctx->pc = 0x2fbc90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 264)));
    // 0x2fbc94: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x2fbc94u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fbc98: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fbc98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fbc9c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fbc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fbca0: 0x126300c3  beq         $s3, $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2FBCA0u;
    {
        const bool branch_taken_0x2fbca0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fbca0) {
            ctx->pc = 0x2FBFB0u;
            return;
        }
    }
    ctx->pc = 0x2FBCA8u;
    // 0x2fbca8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2fbca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fbcac: 0x71008628  paddub      $s0, $t0, $zero
    ctx->pc = 0x2fbcacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fbcb0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2FBCB0u;
    {
        const bool branch_taken_0x2fbcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbcb0) {
            ctx->pc = 0x2FBE18u;
            return;
        }
    }
    ctx->pc = 0x2FBCB8u;
}
