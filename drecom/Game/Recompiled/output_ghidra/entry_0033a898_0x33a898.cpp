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

// Function: entry_0033a898
// Address: 0x33a898 - 0x33a8d4
void entry_0033a898_0x33a898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a898_0x33a898");
#endif

    ctx->pc = 0x33a898u;

    // 0x33a898: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33a898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a89c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x33a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33a8a0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x33a8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x33a8a4: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x33A8A4u;
    {
        const bool branch_taken_0x33a8a4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33a8a4) {
            ctx->pc = 0x33A8D4u;
            return;
        }
    }
    ctx->pc = 0x33A8ACu;
    // 0x33a8ac: 0x93a40060  lbu         $a0, 0x60($sp)
    ctx->pc = 0x33a8acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33a8b0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a8b4: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a8b8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x33a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33a8bc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a8c0: 0xac225440  sw          $v0, 0x5440($at)
    ctx->pc = 0x33a8c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33a8c4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a8c8: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a8cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a8d0: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33a8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x33a8d4u;
}
