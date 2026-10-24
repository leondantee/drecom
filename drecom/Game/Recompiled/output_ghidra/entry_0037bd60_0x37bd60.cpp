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

// Function: entry_0037bd60
// Address: 0x37bd60 - 0x37bdac
void entry_0037bd60_0x37bd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037bd60_0x37bd60");
#endif

    ctx->pc = 0x37bd60u;

    // 0x37bd60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x37bd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x37bd64: 0x8c240128  lw          $a0, 0x128($at)
    ctx->pc = 0x37bd64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0128u));
    // 0x37bd68: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x37bd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x37bd6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x37bd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x37bd70: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x37BD70u;
    {
        const bool branch_taken_0x37bd70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bd70) {
            ctx->pc = 0x37BDCCu;
            return;
        }
    }
    ctx->pc = 0x37BD78u;
    // 0x37bd78: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bd7c: 0x8c230588  lw          $v1, 0x588($at)
    ctx->pc = 0x37bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0588u));
    // 0x37bd80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37bd84: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bd88: 0xac230588  sw          $v1, 0x588($at)
    ctx->pc = 0x37bd88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9A0588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0588u, _value); } while (0);
    // 0x37bd8c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bd90: 0x8c230588  lw          $v1, 0x588($at)
    ctx->pc = 0x37bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0588u));
    // 0x37bd94: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x37BD94u;
    {
        const bool branch_taken_0x37bd94 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x37bd94) {
            ctx->pc = 0x37BDACu;
            return;
        }
    }
    ctx->pc = 0x37BD9Cu;
    // 0x37bd9c: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37bd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37bda0: 0xac200588  sw          $zero, 0x588($at)
    ctx->pc = 0x37bda0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0588u, _value); } while (0);
    // 0x37bda4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37BDA4u;
    {
        const bool branch_taken_0x37bda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bda4) {
            ctx->pc = 0x37BDCCu;
            return;
        }
    }
    ctx->pc = 0x37BDACu;
}
