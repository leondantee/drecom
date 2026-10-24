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

// Function: entry_0033a188
// Address: 0x33a188 - 0x33a1c8
void entry_0033a188_0x33a188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a188_0x33a188");
#endif

    ctx->pc = 0x33a188u;

    // 0x33a188: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a18c: 0xac305430  sw          $s0, 0x5430($at)
    ctx->pc = 0x33a18cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x895430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895430u, _value); } while (0);
    // 0x33a190: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a194: 0x8c225440  lw          $v0, 0x5440($at)
    ctx->pc = 0x33a194u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895440u));
    // 0x33a198: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x33A198u;
    {
        const bool branch_taken_0x33a198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a198) {
            ctx->pc = 0x33A250u;
            return;
        }
    }
    ctx->pc = 0x33A1A0u;
    // 0x33a1a0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a1a4: 0x8c225440  lw          $v0, 0x5440($at)
    ctx->pc = 0x33a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895440u));
    // 0x33a1a8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x33a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x33a1ac: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x33a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x33a1b0: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x33a1b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33a1b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a1b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A1B8u;
    {
        const bool branch_taken_0x33a1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a1b8) {
            ctx->pc = 0x33A1C8u;
            return;
        }
    }
    ctx->pc = 0x33A1C0u;
    // 0x33a1c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a1c4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x33a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x33a1c8u;
}
