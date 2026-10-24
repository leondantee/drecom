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

// Function: entry_001645a0
// Address: 0x1645a0 - 0x1645f0
void entry_001645a0_0x1645a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001645a0_0x1645a0");
#endif

    ctx->pc = 0x1645a0u;

    // 0x1645a0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1645a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1645a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1645a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1645a8: 0x94250330  lhu         $a1, 0x330($at)
    ctx->pc = 0x1645a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D0330u));
    // 0x1645ac: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x1645acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1645b0: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1645b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1645b4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1645b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1645b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1645b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1645bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1645bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1645c0: 0xa4230330  sh          $v1, 0x330($at)
    ctx->pc = 0x1645c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0330u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D0330u, _value); } while (0);
    // 0x1645c4: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1645c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1645c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1645c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1645cc: 0x942501c0  lhu         $a1, 0x1C0($at)
    ctx->pc = 0x1645ccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D01C0u));
    // 0x1645d0: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x1645d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1645d4: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1645d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1645d8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1645d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1645dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1645dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1645e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1645e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1645e4: 0xa42301c0  sh          $v1, 0x1C0($at)
    ctx->pc = 0x1645e4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D01C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D01C0u, _value); } while (0);
    // 0x1645e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1645E8u;
    {
        const bool branch_taken_0x1645e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1645e8) {
            ctx->pc = 0x164638u;
            return;
        }
    }
    ctx->pc = 0x1645F0u;
}
