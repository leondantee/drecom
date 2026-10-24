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

// Function: entry_002956a0
// Address: 0x2956a0 - 0x2956e4
void entry_002956a0_0x2956a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002956a0_0x2956a0");
#endif

    ctx->pc = 0x2956a0u;

    // 0x2956a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2956a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2956a4: 0x942200dc  lhu         $v0, 0xDC($at)
    ctx->pc = 0x2956a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x2956a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2956a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2956ac: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2956acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2956b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2956B0u;
    {
        const bool branch_taken_0x2956b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2956b0) {
            ctx->pc = 0x2956E4u;
            return;
        }
    }
    ctx->pc = 0x2956B8u;
    // 0x2956b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2956b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2956bc: 0x942200cc  lhu         $v0, 0xCC($at)
    ctx->pc = 0x2956bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x2956c0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2956c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2956c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2956c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2956c8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2956C8u;
    {
        const bool branch_taken_0x2956c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2956c8) {
            ctx->pc = 0x2956E4u;
            return;
        }
    }
    ctx->pc = 0x2956D0u;
    // 0x2956d0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2956d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2956d4: 0x8c226888  lw          $v0, 0x6888($at)
    ctx->pc = 0x2956d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x396888u));
    // 0x2956d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2956d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2956dc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2956dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2956e0: 0xac226888  sw          $v0, 0x6888($at)
    ctx->pc = 0x2956e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x396888u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x396888u, _value); } while (0);
    ctx->pc = 0x2956e4u;
}
