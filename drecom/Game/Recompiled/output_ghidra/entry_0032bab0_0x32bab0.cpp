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

// Function: entry_0032bab0
// Address: 0x32bab0 - 0x32bad0
void entry_0032bab0_0x32bab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032bab0_0x32bab0");
#endif

    ctx->pc = 0x32bab0u;

    // 0x32bab0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x32bab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x32bab4: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x32bab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x32bab8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32babc: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x32babcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x32bac0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32bac4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32bac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x32bac8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x32BAC8u;
    {
        const bool branch_taken_0x32bac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bac8) {
            ctx->pc = 0x32BBA0u;
            return;
        }
    }
    ctx->pc = 0x32BAD0u;
}
