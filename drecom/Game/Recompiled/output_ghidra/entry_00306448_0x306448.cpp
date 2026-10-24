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

// Function: entry_00306448
// Address: 0x306448 - 0x306468
void entry_00306448_0x306448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306448_0x306448");
#endif

    ctx->pc = 0x306448u;

    // 0x306448: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x306448u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x30644c: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x30644Cu;
    {
        const bool branch_taken_0x30644c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30644c) {
            ctx->pc = 0x306330u;
            return;
        }
    }
    ctx->pc = 0x306454u;
    // 0x306454: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x306454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306458: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x306458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30645c: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x30645cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x306460: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x306460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x306464: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x306464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    ctx->pc = 0x306468u;
}
