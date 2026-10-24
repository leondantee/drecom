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

// Function: entry_0032d2b0
// Address: 0x32d2b0 - 0x32d2f4
void entry_0032d2b0_0x32d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d2b0_0x32d2b0");
#endif

    switch (ctx->pc) {
        case 0x32d2d4u: goto label_32d2d4;
        case 0x32d2ecu: goto label_32d2ec;
        default: break;
    }

    ctx->pc = 0x32d2b0u;

    // 0x32d2b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x32d2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x32d2b4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32d2b8: 0x2443a620  addiu       $v1, $v0, -0x59E0
    ctx->pc = 0x32d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944288));
    // 0x32d2bc: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32d2bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32d2c0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32d2c4: 0x2446a630  addiu       $a2, $v0, -0x59D0
    ctx->pc = 0x32d2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x32d2c8: 0xc7ac00d4  lwc1        $f12, 0xD4($sp)
    ctx->pc = 0x32d2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d2cc: 0xc040ecc  jal         func_103B30
    ctx->pc = 0x32D2CCu;
    SET_GPR_U32(ctx, 31, 0x32D2D4u);
    ctx->pc = 0x103B30u;
    {
        ctx->pc = 0x32D2D4u;
        ps2_stubs::sceVu0InterVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32D2D4u) { return; }
    ctx->pc = 0x32D2D4u;
label_32d2d4:
    // 0x32d2d4: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x32d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x32d2d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32d2d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d2dc: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x32d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x32d2e0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32d2e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d2e4: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x32D2E4u;
    SET_GPR_U32(ctx, 31, 0x32D2ECu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x32D2ECu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32D2ECu) { return; }
    ctx->pc = 0x32D2ECu;
label_32d2ec:
    // 0x32d2ec: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x32D2ECu;
    {
        const bool branch_taken_0x32d2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d2ec) {
            ctx->pc = 0x32D3D0u;
            return;
        }
    }
    ctx->pc = 0x32D2F4u;
}
