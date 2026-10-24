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

// Function: entry_0022e798
// Address: 0x22e798 - 0x22e7d0
void entry_0022e798_0x22e798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e798_0x22e798");
#endif

    ctx->pc = 0x22e798u;

    // 0x22e798: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e79c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e7a0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x22e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22e7a4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x22e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x22e7a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22e7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22e7ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22E7ACu;
    {
        const bool branch_taken_0x22e7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e7ac) {
            ctx->pc = 0x22E7D0u;
            return;
        }
    }
    ctx->pc = 0x22E7B4u;
    // 0x22e7b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22e7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22e7b8: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x22e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22e7bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22e7c0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x22e7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x22e7c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22e7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22e7c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22e7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22e7cc: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x22e7ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    ctx->pc = 0x22e7d0u;
}
