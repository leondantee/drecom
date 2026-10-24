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

// Function: entry_0021ec00
// Address: 0x21ec00 - 0x21ec1c
void entry_0021ec00_0x21ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ec00_0x21ec00");
#endif

    ctx->pc = 0x21ec00u;

    // 0x21ec00: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x21ec00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x21ec04: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21EC04u;
    {
        const bool branch_taken_0x21ec04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ec04) {
            ctx->pc = 0x21EBECu;
            return;
        }
    }
    ctx->pc = 0x21EC0Cu;
    // 0x21ec0c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x21ec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ec10: 0x8ca3020c  lw          $v1, 0x20C($a1)
    ctx->pc = 0x21ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x21ec14: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x21ec14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x21ec18: 0xaca4020c  sw          $a0, 0x20C($a1)
    ctx->pc = 0x21ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 4));
    ctx->pc = 0x21ec1cu;
}
