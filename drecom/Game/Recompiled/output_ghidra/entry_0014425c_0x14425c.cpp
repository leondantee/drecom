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

// Function: entry_0014425c
// Address: 0x14425c - 0x1442c0
void entry_0014425c_0x14425c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014425c_0x14425c");
#endif

    ctx->pc = 0x14425cu;

    // 0x14425c: 0x8e330058  lw          $s3, 0x58($s1)
    ctx->pc = 0x14425cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x144260: 0x8e720034  lw          $s2, 0x34($s3)
    ctx->pc = 0x144260u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x144264: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x144264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x144268: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x144268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14426c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x14426cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x144270: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x144270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x144274: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x144274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x144278: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x144278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x14427c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14427cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x144280: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x144280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x144284: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x144284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x144288: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x144288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x14428c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x14428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x144290: 0x24530090  addiu       $s3, $v0, 0x90
    ctx->pc = 0x144290u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x144294: 0x8e720034  lw          $s2, 0x34($s3)
    ctx->pc = 0x144294u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x144298: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x144298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x14429c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14429cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1442a0: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1442a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1442a4: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x1442a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1442a8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1442a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1442ac: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x1442acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1442b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1442b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1442b4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1442b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1442b8: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x1442b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1442bc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1442bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x1442c0u;
}
