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

// Function: entry_00336ecc
// Address: 0x336ecc - 0x336f00
void entry_00336ecc_0x336ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336ecc_0x336ecc");
#endif

    ctx->pc = 0x336eccu;

    // 0x336ecc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336ed0: 0xa4204c42  sh          $zero, 0x4C42($at)
    ctx->pc = 0x336ed0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x894C42u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894C42u, _value); } while (0);
    // 0x336ed4: 0x3004ffff  andi        $a0, $zero, 0xFFFF
    ctx->pc = 0x336ed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x336ed8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336edc: 0xa4244c40  sh          $a0, 0x4C40($at)
    ctx->pc = 0x336edcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x894C40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894C40u, _value); } while (0);
    // 0x336ee0: 0x240201cc  addiu       $v0, $zero, 0x1CC
    ctx->pc = 0x336ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x336ee4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336ee8: 0xa4224c46  sh          $v0, 0x4C46($at)
    ctx->pc = 0x336ee8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C46u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894C46u, _value); } while (0);
    // 0x336eec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336ef0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336ef4: 0xa4224c44  sh          $v0, 0x4C44($at)
    ctx->pc = 0x336ef4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894C44u, _value); } while (0);
    // 0x336ef8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x336EF8u;
    {
        const bool branch_taken_0x336ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336ef8) {
            ctx->pc = 0x336F70u;
            return;
        }
    }
    ctx->pc = 0x336F00u;
}
