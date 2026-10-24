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

// Function: entry_0018b43c
// Address: 0x18b43c - 0x18b470
void entry_0018b43c_0x18b43c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b43c_0x18b43c");
#endif

    ctx->pc = 0x18b43cu;

    // 0x18b43c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18B43Cu;
    {
        const bool branch_taken_0x18b43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b43c) {
            ctx->pc = 0x18B470u;
            return;
        }
    }
    ctx->pc = 0x18B444u;
    // 0x18b444: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x18b444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x18b448: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b44c: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x18b44cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b450: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x18b450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18b454: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x18b454u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x18b458: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B458u;
    {
        const bool branch_taken_0x18b458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b458) {
            ctx->pc = 0x18B470u;
            return;
        }
    }
    ctx->pc = 0x18B460u;
    // 0x18b460: 0x9202002b  lbu         $v0, 0x2B($s0)
    ctx->pc = 0x18b460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x18b464: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b468: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x18b468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b46c: 0x0  nop
    ctx->pc = 0x18b46cu;
    // NOP
    ctx->pc = 0x18b470u;
}
