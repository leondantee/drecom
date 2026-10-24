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

// Function: entry_001d8944
// Address: 0x1d8944 - 0x1d8974
void entry_001d8944_0x1d8944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8944_0x1d8944");
#endif

    ctx->pc = 0x1d8944u;

    // 0x1d8944: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1d8944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d8948: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1d8948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1d894c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d8950: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x1d8950u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d8954: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8954u;
    {
        const bool branch_taken_0x1d8954 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8954) {
            ctx->pc = 0x1D8974u;
            return;
        }
    }
    ctx->pc = 0x1D895Cu;
    // 0x1d895c: 0x26c38000  addiu       $v1, $s6, -0x8000
    ctx->pc = 0x1d895cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294934528));
    // 0x1d8960: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x1d8960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x1d8964: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x1d8964u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1d8968: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8968u;
    {
        const bool branch_taken_0x1d8968 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8968) {
            ctx->pc = 0x1D8974u;
            return;
        }
    }
    ctx->pc = 0x1D8970u;
    // 0x1d8970: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1d8970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    ctx->pc = 0x1d8974u;
}
