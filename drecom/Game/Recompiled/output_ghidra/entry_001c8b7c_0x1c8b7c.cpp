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

// Function: entry_001c8b7c
// Address: 0x1c8b7c - 0x1c8bd8
void entry_001c8b7c_0x1c8b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8b7c_0x1c8b7c");
#endif

    ctx->pc = 0x1c8b7cu;

    // 0x1c8b7c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8b80: 0x904309db  lbu         $v1, 0x9DB($v0)
    ctx->pc = 0x1c8b80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1c8b84: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1c8b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c8b88: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c8b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c8b8c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C8B8Cu;
    {
        const bool branch_taken_0x1c8b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8b8c) {
            ctx->pc = 0x1C8BD8u;
            return;
        }
    }
    ctx->pc = 0x1C8B94u;
    // 0x1c8b94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c8b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c8b98: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1c8b98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c8b9c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1c8b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1c8ba0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x1c8ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c8ba4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c8ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c8ba8: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1c8ba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1c8bac: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1c8bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c8bb0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8bb4: 0xa043157d  sb          $v1, 0x157D($v0)
    ctx->pc = 0x1c8bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5501), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8bb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c8bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c8bbc: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1c8bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c8bc0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1c8bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1c8bc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8BC4u;
    {
        const bool branch_taken_0x1c8bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8bc4) {
            ctx->pc = 0x1C8BD8u;
            return;
        }
    }
    ctx->pc = 0x1C8BCCu;
    // 0x1c8bcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c8bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8bd0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8bd4: 0xa04313a7  sb          $v1, 0x13A7($v0)
    ctx->pc = 0x1c8bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5031), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c8bd8u;
}
