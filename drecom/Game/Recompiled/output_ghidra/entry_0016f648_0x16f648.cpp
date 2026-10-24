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

// Function: entry_0016f648
// Address: 0x16f648 - 0x16f670
void entry_0016f648_0x16f648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f648_0x16f648");
#endif

    ctx->pc = 0x16f648u;

    // 0x16f648: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16f648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16f64c: 0x90220e05  lbu         $v0, 0xE05($at)
    ctx->pc = 0x16f64cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x16f650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16f650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16f654: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16f654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16f658: 0xa0220e05  sb          $v0, 0xE05($at)
    ctx->pc = 0x16f658u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0E05u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0E05u, _value); } while (0);
    // 0x16f65c: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x16f65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x16f660: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x16f660u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x16f664: 0x97a400dc  lhu         $a0, 0xDC($sp)
    ctx->pc = 0x16f664u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x16f668: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x16f668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16f66c: 0xa7a600dc  sh          $a2, 0xDC($sp)
    ctx->pc = 0x16f66cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 220), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x16f670u;
}
