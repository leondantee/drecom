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

// Function: entry_00135150
// Address: 0x135150 - 0x1351a8
void entry_00135150_0x135150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135150_0x135150");
#endif

    ctx->pc = 0x135150u;

    // 0x135150: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x135150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x135154: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x135154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135158: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x135158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x13515c: 0xac640f90  sw          $a0, 0xF90($v1)
    ctx->pc = 0x13515cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3984), GPR_U32(ctx, 4));
    // 0x135160: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x135160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x135164: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x135164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135168: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x135168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x13516c: 0xac640f94  sw          $a0, 0xF94($v1)
    ctx->pc = 0x13516cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3988), GPR_U32(ctx, 4));
    // 0x135170: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x135170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x135174: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x135174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135178: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x135178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x13517c: 0xac640f98  sw          $a0, 0xF98($v1)
    ctx->pc = 0x13517cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3992), GPR_U32(ctx, 4));
    // 0x135180: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x135180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135184: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x135184u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x135188: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x135188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13518c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13518cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x135190: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x135190u;
    {
        const bool branch_taken_0x135190 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x135190) {
            ctx->pc = 0x1351A8u;
            return;
        }
    }
    ctx->pc = 0x135198u;
    // 0x135198: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x135198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13519c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x13519cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1351a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1351a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1351a4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1351a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    ctx->pc = 0x1351a8u;
}
