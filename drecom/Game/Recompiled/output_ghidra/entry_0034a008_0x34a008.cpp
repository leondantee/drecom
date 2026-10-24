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

// Function: entry_0034a008
// Address: 0x34a008 - 0x34a030
void entry_0034a008_0x34a008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034a008_0x34a008");
#endif

    ctx->pc = 0x34a008u;

    // 0x34a008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a00c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a010: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34a010u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a014: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a018: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34a018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a01c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x34a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x34a020: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34a020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34a024: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34A024u;
    {
        const bool branch_taken_0x34a024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a024) {
            ctx->pc = 0x34A030u;
            return;
        }
    }
    ctx->pc = 0x34A02Cu;
    // 0x34a02c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x34a02cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x34a030u;
}
