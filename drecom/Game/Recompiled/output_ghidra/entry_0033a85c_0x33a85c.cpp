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

// Function: entry_0033a85c
// Address: 0x33a85c - 0x33a898
void entry_0033a85c_0x33a85c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a85c_0x33a85c");
#endif

    ctx->pc = 0x33a85cu;

    // 0x33a85c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a860: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x33a860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33a864: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x33a864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x33a868: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x33A868u;
    {
        const bool branch_taken_0x33a868 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33a868) {
            ctx->pc = 0x33A898u;
            return;
        }
    }
    ctx->pc = 0x33A870u;
    // 0x33a870: 0x93a40058  lbu         $a0, 0x58($sp)
    ctx->pc = 0x33a870u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x33a874: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a878: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a87c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x33a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33a880: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a884: 0xac225440  sw          $v0, 0x5440($at)
    ctx->pc = 0x33a884u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33a888: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a88c: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a894: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33a894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x33a898u;
}
