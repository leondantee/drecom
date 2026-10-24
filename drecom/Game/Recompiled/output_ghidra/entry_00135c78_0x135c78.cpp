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

// Function: entry_00135c78
// Address: 0x135c78 - 0x135c94
void entry_00135c78_0x135c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135c78_0x135c78");
#endif

    ctx->pc = 0x135c78u;

    // 0x135c78: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x135c78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135c7c: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x135c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x135c80: 0x3c05feff  lui         $a1, 0xFEFF
    ctx->pc = 0x135c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65279 << 16));
    // 0x135c84: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x135c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x135c88: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x135c88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x135c8c: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x135c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    // 0x135c90: 0xa2000098  sb          $zero, 0x98($s0)
    ctx->pc = 0x135c90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x135c94u;
}
