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

// Function: entry_0019d0ec
// Address: 0x19d0ec - 0x19d128
void entry_0019d0ec_0x19d0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d0ec_0x19d0ec");
#endif

    ctx->pc = 0x19d0ecu;

    // 0x19d0ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d0f0: 0xac30fbd8  sw          $s0, -0x428($at)
    ctx->pc = 0x19d0f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5CFBD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFBD8u, _value); } while (0);
    // 0x19d0f4: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x19d0f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19d0f8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19d0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19d0fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19d100: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x19D100u;
    {
        const bool branch_taken_0x19d100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d100) {
            ctx->pc = 0x19D178u;
            return;
        }
    }
    ctx->pc = 0x19D108u;
    // 0x19d108: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d10c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19D10Cu;
    {
        const bool branch_taken_0x19d10c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d10c) {
            ctx->pc = 0x19D150u;
            return;
        }
    }
    ctx->pc = 0x19D114u;
    // 0x19d114: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19d114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d118: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D118u;
    {
        const bool branch_taken_0x19d118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d118) {
            ctx->pc = 0x19D128u;
            return;
        }
    }
    ctx->pc = 0x19D120u;
    // 0x19d120: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x19D120u;
    {
        const bool branch_taken_0x19d120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d120) {
            ctx->pc = 0x19D190u;
            return;
        }
    }
    ctx->pc = 0x19D128u;
}
