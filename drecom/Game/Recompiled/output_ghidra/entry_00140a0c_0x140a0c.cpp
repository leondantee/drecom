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

// Function: entry_00140a0c
// Address: 0x140a0c - 0x140a4c
void entry_00140a0c_0x140a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140a0c_0x140a0c");
#endif

    ctx->pc = 0x140a0cu;

    // 0x140a0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x140a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x140a10: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x140a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x140a14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x140a14u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x140a18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140a1c: 0x8c228ee8  lw          $v0, -0x7118($at)
    ctx->pc = 0x140a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E8EE8u));
    // 0x140a20: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x140a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140a24: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140a28: 0xac228ed8  sw          $v0, -0x7128($at)
    ctx->pc = 0x140a28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E8ED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E8ED8u, _value); } while (0);
    // 0x140a2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140a30: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x140a30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140a34: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x140a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x140a38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140a3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140A3Cu;
    {
        const bool branch_taken_0x140a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140a3c) {
            ctx->pc = 0x140A4Cu;
            return;
        }
    }
    ctx->pc = 0x140A44u;
    // 0x140a44: 0xc08482c  jal         func_2120B0
    ctx->pc = 0x140A44u;
    SET_GPR_U32(ctx, 31, 0x140A4Cu);
    ctx->pc = 0x2120B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2120B0u, 0x140A44u, 0x140A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A4Cu;
}
