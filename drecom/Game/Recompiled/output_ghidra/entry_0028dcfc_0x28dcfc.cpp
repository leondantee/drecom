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

// Function: entry_0028dcfc
// Address: 0x28dcfc - 0x28dd1c
void entry_0028dcfc_0x28dcfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028dcfc_0x28dcfc");
#endif

    ctx->pc = 0x28dcfcu;

    // 0x28dcfc: 0x8e026870  lw          $v0, 0x6870($s0)
    ctx->pc = 0x28dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
    // 0x28dd00: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28dd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28dd04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DD04u;
    {
        const bool branch_taken_0x28dd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dd04) {
            ctx->pc = 0x28DD1Cu;
            return;
        }
    }
    ctx->pc = 0x28DD0Cu;
    // 0x28dd0c: 0x8e036870  lw          $v1, 0x6870($s0)
    ctx->pc = 0x28dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
    // 0x28dd10: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x28dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28dd14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28dd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28dd18: 0xae026870  sw          $v0, 0x6870($s0)
    ctx->pc = 0x28dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26736), GPR_U32(ctx, 2));
    ctx->pc = 0x28dd1cu;
}
