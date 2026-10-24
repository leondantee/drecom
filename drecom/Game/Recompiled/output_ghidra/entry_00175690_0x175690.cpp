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

// Function: entry_00175690
// Address: 0x175690 - 0x1756ac
void entry_00175690_0x175690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175690_0x175690");
#endif

    ctx->pc = 0x175690u;

    // 0x175690: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x175690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x175694: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x175694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175698: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17569c: 0xa022cc95  sb          $v0, -0x336B($at)
    ctx->pc = 0x17569cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC95u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47CC95u, _value); } while (0);
    // 0x1756a0: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x1756a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1756a4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1756a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1756a8: 0xa422cc92  sh          $v0, -0x336E($at)
    ctx->pc = 0x1756a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC92u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC92u, _value); } while (0);
    ctx->pc = 0x1756acu;
}
