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

// Function: entry_001e6250
// Address: 0x1e6250 - 0x1e62c8
void entry_001e6250_0x1e6250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6250_0x1e6250");
#endif

    ctx->pc = 0x1e6250u;

    // 0x1e6250: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e6250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e6254: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1e6254u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1e6258: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e6258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e625c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e625cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e6260: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x1e6260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1e6264: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e6264u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6268: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e6268u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e626c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e626cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6270: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e6270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e6274: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e6274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6278: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e6278u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e627c: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x1e627cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e6280: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e6280u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6284: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e6284u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e6288: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e6288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e628c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e628cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e6290: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e6290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6294: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e6294u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e6298: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1e6298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e629c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1e629cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e62a0: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e62a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e62a4: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e62a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e62a8: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e62a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e62ac: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x1e62acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1e62b0: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1e62b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e62b4: 0x7e060000  sq          $a2, 0x0($s0)
    ctx->pc = 0x1e62b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 6));
    // 0x1e62b8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e62b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e62bc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e62bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e62c0: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x1e62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e62c4: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1e62c4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1e62c8u;
}
