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

// Function: entry_001cf378
// Address: 0x1cf378 - 0x1cf3a4
void entry_001cf378_0x1cf378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf378_0x1cf378");
#endif

    ctx->pc = 0x1cf378u;

    // 0x1cf378: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf37c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cf37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cf380: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1cf380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1cf384: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1cf384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cf388: 0x10a00303  beqz        $a1, . + 4 + (0x303 << 2)
    ctx->pc = 0x1CF388u;
    {
        const bool branch_taken_0x1cf388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf388) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CF390u;
    // 0x1cf390: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1cf390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cf394: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf398: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cf398u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cf39c: 0x100002fe  b           . + 4 + (0x2FE << 2)
    ctx->pc = 0x1CF39Cu;
    {
        const bool branch_taken_0x1cf39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf39c) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CF3A4u;
}
