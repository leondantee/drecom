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

// Function: entry_003297e8
// Address: 0x3297e8 - 0x329828
void entry_003297e8_0x3297e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003297e8_0x3297e8");
#endif

    ctx->pc = 0x3297e8u;

    // 0x3297e8: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x3297e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x3297ec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3297ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3297f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3297f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3297f4: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x3297f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x3297f8: 0xac23af78  sw          $v1, -0x5088($at)
    ctx->pc = 0x3297f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x85AF78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF78u, _value); } while (0);
    // 0x3297fc: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3297fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x329800: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329804: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x329804u;
    {
        const bool branch_taken_0x329804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329804) {
            ctx->pc = 0x329828u;
            return;
        }
    }
    ctx->pc = 0x32980Cu;
    // 0x32980c: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x32980cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x329810: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329814: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x329814u;
    {
        const bool branch_taken_0x329814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329814) {
            ctx->pc = 0x329828u;
            return;
        }
    }
    ctx->pc = 0x32981Cu;
    // 0x32981c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32981cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329820: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x329820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x329824: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x329824u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x329828u;
}
