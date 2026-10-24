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

// Function: entry_001a8de4
// Address: 0x1a8de4 - 0x1a8e24
void entry_001a8de4_0x1a8de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8de4_0x1a8de4");
#endif

    ctx->pc = 0x1a8de4u;

    // 0x1a8de4: 0x8fb30098  lw          $s3, 0x98($sp)
    ctx->pc = 0x1a8de4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1a8de8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1a8de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a8dec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a8decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a8df0: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1a8df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x1a8df4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1a8df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a8df8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1a8df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1a8dfc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a8dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a8e00: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x1a8e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x1a8e04: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1a8e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a8e08: 0x41c02  srl         $v1, $a0, 16
    ctx->pc = 0x1a8e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1a8e0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a8e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a8e10: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x1a8e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x1a8e14: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1a8e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a8e18: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x1a8e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1a8e1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a8e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a8e20: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x1a8e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    ctx->pc = 0x1a8e24u;
}
