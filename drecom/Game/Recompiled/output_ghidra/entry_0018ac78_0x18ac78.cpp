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

// Function: entry_0018ac78
// Address: 0x18ac78 - 0x18acc8
void entry_0018ac78_0x18ac78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ac78_0x18ac78");
#endif

    ctx->pc = 0x18ac78u;

    // 0x18ac78: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x18ac78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ac7c: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x18ac7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18ac80: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x18ac80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x18ac84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x18ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x18ac88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18ac8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x18ac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x18ac90: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ac94: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x18ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x18ac98: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x18ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x18ac9c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18aca0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x18aca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x18aca4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x18aca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18aca8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18acac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18acacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18acb0: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x18acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x18acb4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x18acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18acb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18acbc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x18acbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x18acc0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x18acc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x18acc4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18acc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x18acc8u;
}
