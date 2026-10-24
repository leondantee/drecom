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

// Function: entry_001d8dc8
// Address: 0x1d8dc8 - 0x1d8e30
void entry_001d8dc8_0x1d8dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8dc8_0x1d8dc8");
#endif

    ctx->pc = 0x1d8dc8u;

    // 0x1d8dc8: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8dc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8dcc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d8dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8dd0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d8dd4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D8DD4u;
    {
        const bool branch_taken_0x1d8dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8dd4) {
            ctx->pc = 0x1D8E30u;
            return;
        }
    }
    ctx->pc = 0x1D8DDCu;
    // 0x1d8ddc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8de0: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1d8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d8de4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1d8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1d8de8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8dec: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x1d8decu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d8df0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8df4: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1d8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d8df8: 0x244307ff  addiu       $v1, $v0, 0x7FF
    ctx->pc = 0x1d8df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1d8dfc: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1d8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d8e00: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x1d8e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x1d8e04: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x1d8e04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d8e08: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8e0c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1d8e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d8e10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d8e14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8e18: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1d8e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1d8e1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8e20: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1d8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d8e24: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d8e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d8e28: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d8e2c: 0xa2020016  sb          $v0, 0x16($s0)
    ctx->pc = 0x1d8e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1d8e30u;
}
