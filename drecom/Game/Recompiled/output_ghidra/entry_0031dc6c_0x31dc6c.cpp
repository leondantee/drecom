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

// Function: entry_0031dc6c
// Address: 0x31dc6c - 0x31dcf8
void entry_0031dc6c_0x31dc6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031dc6c_0x31dc6c");
#endif

    ctx->pc = 0x31dc6cu;

    // 0x31dc6c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dc70: 0x8c22aea0  lw          $v0, -0x5160($at)
    ctx->pc = 0x31dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AEA0u));
    // 0x31dc74: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x31DC74u;
    {
        const bool branch_taken_0x31dc74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31dc74) {
            ctx->pc = 0x31DCF8u;
            return;
        }
    }
    ctx->pc = 0x31DC7Cu;
    // 0x31dc7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31dc80: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dc84: 0xac22aea0  sw          $v0, -0x5160($at)
    ctx->pc = 0x31dc84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AEA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AEA0u, _value); } while (0);
    // 0x31dc88: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x31dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31dc8c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dc90: 0xa022af3c  sb          $v0, -0x50C4($at)
    ctx->pc = 0x31dc90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF3Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AF3Cu, _value); } while (0);
    // 0x31dc94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31dc98: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dc9c: 0xa022af38  sb          $v0, -0x50C8($at)
    ctx->pc = 0x31dc9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF38u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AF38u, _value); } while (0);
    // 0x31dca0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x31dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x31dca4: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dca8: 0xa022af39  sb          $v0, -0x50C7($at)
    ctx->pc = 0x31dca8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF39u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AF39u, _value); } while (0);
    // 0x31dcac: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x31dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x31dcb0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31dcb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31dcb4: 0xa022af3b  sb          $v0, -0x50C5($at)
    ctx->pc = 0x31dcb4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF3Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AF3Bu, _value); } while (0);
    // 0x31dcb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31dcbc: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x31dcbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x31dcc0: 0xa022c775  sb          $v0, -0x388B($at)
    ctx->pc = 0x31dcc0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x62C775u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x62C775u, _value); } while (0);
    // 0x31dcc4: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x31dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x31dcc8: 0x2442aeb0  addiu       $v0, $v0, -0x5150
    ctx->pc = 0x31dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946480));
    // 0x31dccc: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x31dcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x31dcd0: 0xac22c778  sw          $v0, -0x3888($at)
    ctx->pc = 0x31dcd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x62C778u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62C778u, _value); } while (0);
    // 0x31dcd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31dcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31dcd8: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x31dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x31dcdc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x31dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x31dce0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31dce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31dce4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31dce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31dce8: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x31dce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x31dcec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31dcf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31dcf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31dcf4: 0xa022fe13  sb          $v0, -0x1ED($at)
    ctx->pc = 0x31dcf4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFE13u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CFE13u, _value); } while (0);
    ctx->pc = 0x31dcf8u;
}
