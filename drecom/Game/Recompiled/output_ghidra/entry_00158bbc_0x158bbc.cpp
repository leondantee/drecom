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

// Function: entry_00158bbc
// Address: 0x158bbc - 0x158bf0
void entry_00158bbc_0x158bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158bbc_0x158bbc");
#endif

    ctx->pc = 0x158bbcu;

    // 0x158bbc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158bc0: 0xac30f840  sw          $s0, -0x7C0($at)
    ctx->pc = 0x158bc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3EF840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF840u, _value); } while (0);
    // 0x158bc4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158bc8: 0x94220092  lhu         $v0, 0x92($at)
    ctx->pc = 0x158bc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0092u));
    // 0x158bcc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x158bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158bd0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x158bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x158bd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158BD4u;
    {
        const bool branch_taken_0x158bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158bd4) {
            ctx->pc = 0x158BF0u;
            return;
        }
    }
    ctx->pc = 0x158BDCu;
    // 0x158bdc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158be0: 0x90224f10  lbu         $v0, 0x4F10($at)
    ctx->pc = 0x158be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F4F10u));
    // 0x158be4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x158be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x158be8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158bec: 0xa0224f10  sb          $v0, 0x4F10($at)
    ctx->pc = 0x158becu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F10u, _value); } while (0);
    ctx->pc = 0x158bf0u;
}
