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

// Function: entry_0025a220
// Address: 0x25a220 - 0x25a254
void entry_0025a220_0x25a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a220_0x25a220");
#endif

    ctx->pc = 0x25a220u;

    // 0x25a220: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a224: 0x906309e4  lbu         $v1, 0x9E4($v1)
    ctx->pc = 0x25a224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2532)));
    // 0x25a228: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a22c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x25a22cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25a230: 0x1460ff95  bnez        $v1, . + 4 + (-0x6B << 2)
    ctx->pc = 0x25A230u;
    {
        const bool branch_taken_0x25a230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a230) {
            ctx->pc = 0x25A088u;
            return;
        }
    }
    ctx->pc = 0x25A238u;
    // 0x25a238: 0x12e0001e  beqz        $s7, . + 4 + (0x1E << 2)
    ctx->pc = 0x25A238u;
    {
        const bool branch_taken_0x25a238 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a238) {
            ctx->pc = 0x25A2B4u;
            return;
        }
    }
    ctx->pc = 0x25A240u;
    // 0x25a240: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x25a240u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25a244: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25a244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a248: 0xa0571083  sb          $s7, 0x1083($v0)
    ctx->pc = 0x25a248u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4227), (uint8_t)GPR_U32(ctx, 23));
    // 0x25a24c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a250: 0xa0571084  sb          $s7, 0x1084($v0)
    ctx->pc = 0x25a250u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4228), (uint8_t)GPR_U32(ctx, 23));
    ctx->pc = 0x25a254u;
}
