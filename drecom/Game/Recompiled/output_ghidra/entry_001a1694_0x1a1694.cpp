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

// Function: entry_001a1694
// Address: 0x1a1694 - 0x1a16c8
void entry_001a1694_0x1a1694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1694_0x1a1694");
#endif

    ctx->pc = 0x1a1694u;

    // 0x1a1694: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a1694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1698: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1a1698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a169c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a169cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a16a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a16a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a16a4: 0x90232531  lbu         $v1, 0x2531($at)
    ctx->pc = 0x1a16a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D2531u));
    // 0x1a16a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a16a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a16ac: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1a16acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1a16b0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A16B0u;
    {
        const bool branch_taken_0x1a16b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a16b0) {
            ctx->pc = 0x1A16C8u;
            return;
        }
    }
    ctx->pc = 0x1A16B8u;
    // 0x1a16b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a16b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a16bc: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1a16bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a16c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a16c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a16c4: 0xa0232531  sb          $v1, 0x2531($at)
    ctx->pc = 0x1a16c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D2531u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D2531u, _value); } while (0);
    ctx->pc = 0x1a16c8u;
}
