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

// Function: entry_001e6028
// Address: 0x1e6028 - 0x1e6088
void entry_001e6028_0x1e6028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6028_0x1e6028");
#endif

    ctx->pc = 0x1e6028u;

    // 0x1e6028: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e6028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e602c: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1e602cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1e6030: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e6030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6034: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x1e6034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e6038: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e6038u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e603c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e603cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e6040: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e6040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6044: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e6044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e6048: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e6048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e604c: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x1e604cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e6050: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e6050u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6054: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e6054u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e6058: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e6058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e605c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e605cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e6060: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e6060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6064: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x1e6064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1e6068: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e6068u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e606c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e606cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e6070: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e6070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6074: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1e6074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1e6078: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e6078u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e607c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e607cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e6080: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e6080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6084: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e6084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x1e6088u;
}
