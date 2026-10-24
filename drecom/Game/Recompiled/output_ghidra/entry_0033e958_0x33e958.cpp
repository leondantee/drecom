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

// Function: entry_0033e958
// Address: 0x33e958 - 0x33e9b8
void entry_0033e958_0x33e958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033e958_0x33e958");
#endif

    ctx->pc = 0x33e958u;

    // 0x33e958: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e95c: 0x8c42121c  lw          $v0, 0x121C($v0)
    ctx->pc = 0x33e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4636)));
    // 0x33e960: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x33E960u;
    {
        const bool branch_taken_0x33e960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e960) {
            ctx->pc = 0x33E9B8u;
            return;
        }
    }
    ctx->pc = 0x33E968u;
    // 0x33e968: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33e968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33e96c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e970: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33e970u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33e974: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e978: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x33e978u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e97c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e980: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x33e980u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e984: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e988: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x33e988u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e98c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e990: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x33e990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x33e994: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x33e994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e998: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x33e998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33e99c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x33e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x33e9a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33e9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33e9a4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x33e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x33e9a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33e9ac: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e9b0: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x33e9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x33e9b4: 0x0  nop
    ctx->pc = 0x33e9b4u;
    // NOP
    ctx->pc = 0x33e9b8u;
}
