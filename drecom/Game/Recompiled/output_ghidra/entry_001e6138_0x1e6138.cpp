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

// Function: entry_001e6138
// Address: 0x1e6138 - 0x1e61a8
void entry_001e6138_0x1e6138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6138_0x1e6138");
#endif

    ctx->pc = 0x1e6138u;

    // 0x1e6138: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e6138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e613c: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1e613cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1e6140: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1e6140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6144: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x1e6144u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6148: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x1e6148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e614c: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x1e614cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e6150: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e6150u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e6154: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e6154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6158: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e6158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e615c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e615cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6160: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x1e6160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1e6164: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e6164u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6168: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e6168u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e616c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e616cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6170: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e6170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e6174: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e6174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6178: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1e6178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1e617c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e617cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6180: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e6180u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e6184: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e6184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6188: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e6188u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e618c: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1e618cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e6190: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e6190u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6194: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e6194u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e6198: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e6198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e619c: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x1e619cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e61a0: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x1e61a0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e61a4: 0x0  nop
    ctx->pc = 0x1e61a4u;
    // NOP
    ctx->pc = 0x1e61a8u;
}
