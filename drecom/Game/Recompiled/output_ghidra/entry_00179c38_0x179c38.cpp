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

// Function: entry_00179c38
// Address: 0x179c38 - 0x179c68
void entry_00179c38_0x179c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179c38_0x179c38");
#endif

    ctx->pc = 0x179c38u;

    // 0x179c38: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x179c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179c3c: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x179c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x179c40: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x179c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x179c44: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x179c44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
    // 0x179c48: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x179c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x179c4c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x179c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179c50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x179c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x179c54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179C54u;
    {
        const bool branch_taken_0x179c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179c54) {
            ctx->pc = 0x179C68u;
            return;
        }
    }
    ctx->pc = 0x179C5Cu;
    // 0x179c5c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x179c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179c60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x179c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x179c64: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x179c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x179c68u;
}
