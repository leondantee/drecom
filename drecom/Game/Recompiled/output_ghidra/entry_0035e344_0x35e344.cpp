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

// Function: entry_0035e344
// Address: 0x35e344 - 0x35e368
void entry_0035e344_0x35e344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035e344_0x35e344");
#endif

    ctx->pc = 0x35e344u;

    // 0x35e344: 0x96020040  lhu         $v0, 0x40($s0)
    ctx->pc = 0x35e344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x35e348: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x35e348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35e34c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35E34Cu;
    {
        const bool branch_taken_0x35e34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e34c) {
            ctx->pc = 0x35E368u;
            return;
        }
    }
    ctx->pc = 0x35E354u;
    // 0x35e354: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x35e354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x35e358: 0x284103de  slti        $at, $v0, 0x3DE
    ctx->pc = 0x35e358u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)990) ? 1 : 0);
    // 0x35e35c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x35E35Cu;
    {
        const bool branch_taken_0x35e35c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e35c) {
            ctx->pc = 0x35E3FCu;
            return;
        }
    }
    ctx->pc = 0x35E364u;
    // 0x35e364: 0x0  nop
    ctx->pc = 0x35e364u;
    // NOP
    ctx->pc = 0x35e368u;
}
