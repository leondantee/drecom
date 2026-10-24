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

// Function: entry_0031dd20
// Address: 0x31dd20 - 0x31dd50
void entry_0031dd20_0x31dd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031dd20_0x31dd20");
#endif

    ctx->pc = 0x31dd20u;

    // 0x31dd20: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dd20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dd24: 0x8c23af60  lw          $v1, -0x50A0($at)
    ctx->pc = 0x31dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF60u));
    // 0x31dd28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31dd2c: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x31DD2Cu;
    {
        const bool branch_taken_0x31dd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31dd2c) {
            ctx->pc = 0x31DDC4u;
            return;
        }
    }
    ctx->pc = 0x31DD34u;
    // 0x31dd34: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dd38: 0x8c22af60  lw          $v0, -0x50A0($at)
    ctx->pc = 0x31dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF60u));
    // 0x31dd3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31dd40: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dd44: 0xac22af60  sw          $v0, -0x50A0($at)
    ctx->pc = 0x31dd44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF60u, _value); } while (0);
    // 0x31dd48: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x31DD48u;
    {
        const bool branch_taken_0x31dd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dd48) {
            ctx->pc = 0x31DDC4u;
            return;
        }
    }
    ctx->pc = 0x31DD50u;
}
