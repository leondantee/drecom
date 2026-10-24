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

// Function: entry_0032db08
// Address: 0x32db08 - 0x32db28
void entry_0032db08_0x32db08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032db08_0x32db08");
#endif

    ctx->pc = 0x32db08u;

    // 0x32db08: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x32db08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x32db0c: 0xafa900a0  sw          $t1, 0xA0($sp)
    ctx->pc = 0x32db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 9));
    // 0x32db10: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32db10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32db14: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x32db14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x32db18: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x32db18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x32db1c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x32db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x32db20: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32db20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32db24: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x32db24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    ctx->pc = 0x32db28u;
}
