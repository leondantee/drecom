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

// Function: entry_0032ebd4
// Address: 0x32ebd4 - 0x32ebec
void entry_0032ebd4_0x32ebd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ebd4_0x32ebd4");
#endif

    ctx->pc = 0x32ebd4u;

    // 0x32ebd4: 0x8e036610  lw          $v1, 0x6610($s0)
    ctx->pc = 0x32ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26128)));
    // 0x32ebd8: 0x28610199  slti        $at, $v1, 0x199
    ctx->pc = 0x32ebd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)409) ? 1 : 0);
    // 0x32ebdc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32EBDCu;
    {
        const bool branch_taken_0x32ebdc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ebdc) {
            ctx->pc = 0x32EBECu;
            return;
        }
    }
    ctx->pc = 0x32EBE4u;
    // 0x32ebe4: 0x24030198  addiu       $v1, $zero, 0x198
    ctx->pc = 0x32ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
    // 0x32ebe8: 0xae036610  sw          $v1, 0x6610($s0)
    ctx->pc = 0x32ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26128), GPR_U32(ctx, 3));
    ctx->pc = 0x32ebecu;
}
