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

// Function: entry_00158bf0
// Address: 0x158bf0 - 0x158c1c
void entry_00158bf0_0x158bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158bf0_0x158bf0");
#endif

    ctx->pc = 0x158bf0u;

    // 0x158bf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158bf4: 0x94220092  lhu         $v0, 0x92($at)
    ctx->pc = 0x158bf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0092u));
    // 0x158bf8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x158bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158bfc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x158bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x158c00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158C00u;
    {
        const bool branch_taken_0x158c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c00) {
            ctx->pc = 0x158C1Cu;
            return;
        }
    }
    ctx->pc = 0x158C08u;
    // 0x158c08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158c0c: 0x90224f10  lbu         $v0, 0x4F10($at)
    ctx->pc = 0x158c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F4F10u));
    // 0x158c10: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x158c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x158c14: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158c18: 0xa0224f10  sb          $v0, 0x4F10($at)
    ctx->pc = 0x158c18u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F10u, _value); } while (0);
    ctx->pc = 0x158c1cu;
}
