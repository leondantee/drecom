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

// Function: entry_0012f7a4
// Address: 0x12f7a4 - 0x12f7f0
void entry_0012f7a4_0x12f7a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f7a4_0x12f7a4");
#endif

    ctx->pc = 0x12f7a4u;

    // 0x12f7a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x12f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f7a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12f7a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12f7ac: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12F7ACu;
    {
        const bool branch_taken_0x12f7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f7ac) {
            ctx->pc = 0x12F7F0u;
            return;
        }
    }
    ctx->pc = 0x12F7B4u;
    // 0x12f7b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f7b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x12f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f7bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12f7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f7c0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12f7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12f7c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x12f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f7c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12f7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f7cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x12f7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f7d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12f7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f7d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x12f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f7d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12f7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f7dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x12f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f7e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12f7e4: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12f7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f7e8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12F7E8u;
    {
        const bool branch_taken_0x12f7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f7e8) {
            ctx->pc = 0x12F7F0u;
            return;
        }
    }
    ctx->pc = 0x12F7F0u;
}
