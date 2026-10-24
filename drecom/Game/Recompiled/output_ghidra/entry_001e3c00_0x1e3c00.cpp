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

// Function: entry_001e3c00
// Address: 0x1e3c00 - 0x1e3c78
void entry_001e3c00_0x1e3c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3c00_0x1e3c00");
#endif

    ctx->pc = 0x1e3c00u;

    // 0x1e3c00: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e3c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e3c04: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c08: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1e3c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1e3c0c: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x1e3c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e3c10: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c14: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1e3c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1e3c18: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x1e3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1e3c1c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c20: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1e3c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1e3c24: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e3c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e3c28: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c2c: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x1e3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x1e3c30: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x1e3c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e3c34: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c38: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1e3c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1e3c3c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x1e3c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1e3c40: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c44: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x1e3c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x1e3c48: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e3c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e3c4c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c50: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x1e3c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x1e3c54: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x1e3c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e3c58: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c5c: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x1e3c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x1e3c60: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x1e3c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1e3c64: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3c68: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1e3c68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1e3c6c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e3c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3c70: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1e3c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1e3c74: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e3c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    ctx->pc = 0x1e3c78u;
}
