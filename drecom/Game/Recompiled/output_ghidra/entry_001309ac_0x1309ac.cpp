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

// Function: entry_001309ac
// Address: 0x1309ac - 0x1309f4
void entry_001309ac_0x1309ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001309ac_0x1309ac");
#endif

    ctx->pc = 0x1309acu;

    // 0x1309ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1309acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1309b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1309b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1309b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1309b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1309b8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1309b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1309bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1309bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1309c0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1309c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1309c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1309c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1309c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1309c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1309cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1309ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1309d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1309d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1309d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1309d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1309d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1309d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1309dc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1309dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1309e0: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x1309e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x1309e4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1309e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1309e8: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x1309e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x1309ec: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1309ECu;
    {
        const bool branch_taken_0x1309ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1309ec) {
            ctx->pc = 0x1309F4u;
            return;
        }
    }
    ctx->pc = 0x1309F4u;
}
