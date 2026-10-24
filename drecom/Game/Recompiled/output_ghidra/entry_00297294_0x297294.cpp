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

// Function: entry_00297294
// Address: 0x297294 - 0x2972e0
void entry_00297294_0x297294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297294_0x297294");
#endif

    ctx->pc = 0x297294u;

    // 0x297294: 0x860269a8  lh          $v0, 0x69A8($s0)
    ctx->pc = 0x297294u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27048)));
    // 0x297298: 0xa60269a4  sh          $v0, 0x69A4($s0)
    ctx->pc = 0x297298u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27044), (uint16_t)GPR_U32(ctx, 2));
    // 0x29729c: 0x860269aa  lh          $v0, 0x69AA($s0)
    ctx->pc = 0x29729cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27050)));
    // 0x2972a0: 0x2bc3c  dsll32      $s7, $v0, 16
    ctx->pc = 0x2972a0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2972a4: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x2972a4u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
    // 0x2972a8: 0x860269ae  lh          $v0, 0x69AE($s0)
    ctx->pc = 0x2972a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27054)));
    // 0x2972ac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2972acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2972b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2972b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2972b4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2972b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2972b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2972b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2972bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2972bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2972c0: 0xa60269a6  sh          $v0, 0x69A6($s0)
    ctx->pc = 0x2972c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27046), (uint16_t)GPR_U32(ctx, 2));
    // 0x2972c4: 0x860269ac  lh          $v0, 0x69AC($s0)
    ctx->pc = 0x2972c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27052)));
    // 0x2972c8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2972c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2972cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2972ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2972d0: 0x8e0269d4  lw          $v0, 0x69D4($s0)
    ctx->pc = 0x2972d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x2972d4: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x2972d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2972d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2972D8u;
    {
        const bool branch_taken_0x2972d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2972d8) {
            ctx->pc = 0x297328u;
            return;
        }
    }
    ctx->pc = 0x2972E0u;
}
