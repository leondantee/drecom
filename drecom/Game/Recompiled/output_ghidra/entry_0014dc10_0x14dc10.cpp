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

// Function: entry_0014dc10
// Address: 0x14dc10 - 0x14dc2c
void entry_0014dc10_0x14dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dc10_0x14dc10");
#endif

    ctx->pc = 0x14dc10u;

    // 0x14dc10: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x14dc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x14dc14: 0x8c22af60  lw          $v0, -0x50A0($at)
    ctx->pc = 0x14dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF60u));
    // 0x14dc18: 0x2c5303e7  sltiu       $s3, $v0, 0x3E7
    ctx->pc = 0x14dc18u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)999) ? 1 : 0);
    // 0x14dc1c: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DC1Cu;
    {
        const bool branch_taken_0x14dc1c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dc1c) {
            ctx->pc = 0x14DC2Cu;
            return;
        }
    }
    ctx->pc = 0x14DC24u;
    // 0x14dc24: 0x860313ae  lh          $v1, 0x13AE($s0)
    ctx->pc = 0x14dc24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5038)));
    // 0x14dc28: 0xa60313ac  sh          $v1, 0x13AC($s0)
    ctx->pc = 0x14dc28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5036), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x14dc2cu;
}
