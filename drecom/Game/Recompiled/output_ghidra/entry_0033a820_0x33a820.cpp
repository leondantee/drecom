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

// Function: entry_0033a820
// Address: 0x33a820 - 0x33a85c
void entry_0033a820_0x33a820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a820_0x33a820");
#endif

    ctx->pc = 0x33a820u;

    // 0x33a820: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33a820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a824: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x33a824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33a828: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x33a828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x33a82c: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x33A82Cu;
    {
        const bool branch_taken_0x33a82c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33a82c) {
            ctx->pc = 0x33A85Cu;
            return;
        }
    }
    ctx->pc = 0x33A834u;
    // 0x33a834: 0x93a40050  lbu         $a0, 0x50($sp)
    ctx->pc = 0x33a834u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33a838: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a83c: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a840: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x33a840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33a844: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a848: 0xac225440  sw          $v0, 0x5440($at)
    ctx->pc = 0x33a848u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33a84c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a850: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a858: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33a858u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x33a85cu;
}
