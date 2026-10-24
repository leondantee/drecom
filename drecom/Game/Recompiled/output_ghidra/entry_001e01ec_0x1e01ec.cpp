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

// Function: entry_001e01ec
// Address: 0x1e01ec - 0x1e0210
void entry_001e01ec_0x1e01ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e01ec_0x1e01ec");
#endif

    ctx->pc = 0x1e01ecu;

    // 0x1e01ec: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x1e01ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e01f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e01f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e01f4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1e01f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1e01f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E01F8u;
    {
        const bool branch_taken_0x1e01f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e01f8) {
            ctx->pc = 0x1E0210u;
            return;
        }
    }
    ctx->pc = 0x1E0200u;
    // 0x1e0200: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0204: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0208: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1e020c: 0x0  nop
    ctx->pc = 0x1e020cu;
    // NOP
    ctx->pc = 0x1e0210u;
}
