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

// Function: entry_00187220
// Address: 0x187220 - 0x187258
void entry_00187220_0x187220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187220_0x187220");
#endif

    ctx->pc = 0x187220u;

    // 0x187220: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x187220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x187224: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x187224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x187228: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x187228u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18722c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18722cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x187230: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x187230u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x187234: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x187234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x187238: 0x8e22025c  lw          $v0, 0x25C($s1)
    ctx->pc = 0x187238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x18723c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18723cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x187240: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x187240u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x187244: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x187244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x187248: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x187248u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18724c: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x18724cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x187250: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x187250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x187254: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x187254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    ctx->pc = 0x187258u;
}
