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

// Function: entry_0017e948
// Address: 0x17e948 - 0x17e9c0
void entry_0017e948_0x17e948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e948_0x17e948");
#endif

    switch (ctx->pc) {
        case 0x17e95cu: goto label_17e95c;
        case 0x17e97cu: goto label_17e97c;
        case 0x17e99cu: goto label_17e99c;
        default: break;
    }

    ctx->pc = 0x17e948u;

    // 0x17e948: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17e948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e94c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17e94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e950: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x17e950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17e954: 0xc040c8c  jal         func_103230
    ctx->pc = 0x17E954u;
    SET_GPR_U32(ctx, 31, 0x17E95Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x17E95Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E95Cu) { return; }
    ctx->pc = 0x17E95Cu;
label_17e95c:
    // 0x17e95c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e960: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e960u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e964: 0x244401a0  addiu       $a0, $v0, 0x1A0
    ctx->pc = 0x17e964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x17e968: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17e968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e96c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17e970: 0x2446f100  addiu       $a2, $v0, -0xF00
    ctx->pc = 0x17e970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963456));
    // 0x17e974: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17E974u;
    SET_GPR_U32(ctx, 31, 0x17E97Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17E97Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E97Cu) { return; }
    ctx->pc = 0x17E97Cu;
label_17e97c:
    // 0x17e97c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e980: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e980u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e984: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17e984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e988: 0x24450190  addiu       $a1, $v0, 0x190
    ctx->pc = 0x17e988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x17e98c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17e990: 0x2446f110  addiu       $a2, $v0, -0xEF0
    ctx->pc = 0x17e990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963472));
    // 0x17e994: 0xc040c80  jal         func_103200
    ctx->pc = 0x17E994u;
    SET_GPR_U32(ctx, 31, 0x17E99Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17E99Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E99Cu) { return; }
    ctx->pc = 0x17E99Cu;
label_17e99c:
    // 0x17e99c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e9a0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x17e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x17e9a4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x17e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x17e9a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17e9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17e9ac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17E9ACu;
    {
        const bool branch_taken_0x17e9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e9ac) {
            ctx->pc = 0x17EA04u;
            return;
        }
    }
    ctx->pc = 0x17E9B4u;
    // 0x17e9b4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17e9b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17e9b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17E9B8u;
    {
        const bool branch_taken_0x17e9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e9b8) {
            ctx->pc = 0x17E9E0u;
            return;
        }
    }
    ctx->pc = 0x17E9C0u;
}
