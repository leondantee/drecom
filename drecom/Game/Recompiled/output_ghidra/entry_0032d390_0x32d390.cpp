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

// Function: entry_0032d390
// Address: 0x32d390 - 0x32d3d0
void entry_0032d390_0x32d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d390_0x32d390");
#endif

    switch (ctx->pc) {
        case 0x32d3b8u: goto label_32d3b8;
        default: break;
    }

    ctx->pc = 0x32d390u;

    // 0x32d390: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x32d390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x32d394: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32d394u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d398: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32d398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32d39c: 0x2443a610  addiu       $v1, $v0, -0x59F0
    ctx->pc = 0x32d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x32d3a0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32d3a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32d3a4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32d3a8: 0x2446a600  addiu       $a2, $v0, -0x5A00
    ctx->pc = 0x32d3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944256));
    // 0x32d3ac: 0xc7ac00d4  lwc1        $f12, 0xD4($sp)
    ctx->pc = 0x32d3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d3b0: 0xc040ecc  jal         func_103B30
    ctx->pc = 0x32D3B0u;
    SET_GPR_U32(ctx, 31, 0x32D3B8u);
    ctx->pc = 0x103B30u;
    {
        ctx->pc = 0x32D3B8u;
        ps2_stubs::sceVu0InterVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32D3B8u) { return; }
    ctx->pc = 0x32D3B8u;
label_32d3b8:
    // 0x32d3b8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x32d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x32d3bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32d3bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d3c0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x32d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x32d3c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32d3c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d3c8: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x32D3C8u;
    SET_GPR_U32(ctx, 31, 0x32D3D0u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x32D3D0u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32D3D0u) { return; }
    ctx->pc = 0x32D3D0u;
}
