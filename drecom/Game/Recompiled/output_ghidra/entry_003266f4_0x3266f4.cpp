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

// Function: entry_003266f4
// Address: 0x3266f4 - 0x32670c
void entry_003266f4_0x3266f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003266f4_0x3266f4");
#endif

    ctx->pc = 0x3266f4u;

    // 0x3266f4: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x3266f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3266f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3266f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3266fc: 0x90420b1c  lbu         $v0, 0xB1C($v0)
    ctx->pc = 0x3266fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2844)));
    // 0x326700: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x326700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326704: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x326704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x326708: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x326708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->pc = 0x32670cu;
}
