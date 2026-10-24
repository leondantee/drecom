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

// Function: entry_003772f0
// Address: 0x3772f0 - 0x37731c
void entry_003772f0_0x3772f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003772f0_0x3772f0");
#endif

    ctx->pc = 0x3772f0u;

    // 0x3772f0: 0x2e02000f  sltiu       $v0, $s0, 0xF
    ctx->pc = 0x3772f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x3772f4: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3772F4u;
    {
        const bool branch_taken_0x3772f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3772f4) {
            ctx->pc = 0x377264u;
            return;
        }
    }
    ctx->pc = 0x3772FCu;
    // 0x3772fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3772fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x377300: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x377300u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x377304: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x377304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x377308: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x377308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37730c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x37730cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x377310: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x377310u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x377314: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377318: 0xa4200394  sh          $zero, 0x394($at)
    ctx->pc = 0x377318u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0394u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x9A0394u, _value); } while (0);
    ctx->pc = 0x37731cu;
}
