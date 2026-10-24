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

// Function: entry_0026c3e8
// Address: 0x26c3e8 - 0x26c434
void entry_0026c3e8_0x26c3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c3e8_0x26c3e8");
#endif

    ctx->pc = 0x26c3e8u;

    // 0x26c3e8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x26c3e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26c3ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26c3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26c3f0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x26c3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x26c3f4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x26C3F4u;
    {
        const bool branch_taken_0x26c3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c3f4) {
            ctx->pc = 0x26C434u;
            return;
        }
    }
    ctx->pc = 0x26C3FCu;
    // 0x26c3fc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x26c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26c400: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c404: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26c404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x26c408: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26c408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c40c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c410: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x26c410u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x26c414: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c418: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x26c418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c41c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c420: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x26c420u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c424: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c428: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x26c428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x26c42c: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x26C42Cu;
    {
        const bool branch_taken_0x26c42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c42c) {
            ctx->pc = 0x26C9F8u;
            return;
        }
    }
    ctx->pc = 0x26C434u;
}
