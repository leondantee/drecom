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

// Function: entry_0029d0c4
// Address: 0x29d0c4 - 0x29d108
void entry_0029d0c4_0x29d0c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d0c4_0x29d0c4");
#endif

    ctx->pc = 0x29d0c4u;

    // 0x29d0c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29d0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29d0c8: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x29d0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x29d0cc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x29d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x29d0d0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x29d0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29d0d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29d0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29d0d8: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x29d0d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x29d0dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d0e0: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x29d0e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x29d0e4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x29d0e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29d0e8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29d0ec: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x29D0ECu;
    {
        const bool branch_taken_0x29d0ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29d0ec) {
            ctx->pc = 0x29D190u;
            return;
        }
    }
    ctx->pc = 0x29D0F4u;
    // 0x29d0f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d0f8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D0F8u;
    {
        const bool branch_taken_0x29d0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29d0f8) {
            ctx->pc = 0x29D108u;
            return;
        }
    }
    ctx->pc = 0x29D100u;
    // 0x29d100: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x29D100u;
    {
        const bool branch_taken_0x29d100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d100) {
            ctx->pc = 0x29D108u;
            return;
        }
    }
    ctx->pc = 0x29D108u;
}
