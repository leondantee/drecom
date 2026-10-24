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

// Function: entry_00262740
// Address: 0x262740 - 0x262820
void entry_00262740_0x262740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00262740_0x262740");
#endif

    switch (ctx->pc) {
        case 0x262754u: goto label_262754;
        case 0x262768u: goto label_262768;
        case 0x26277cu: goto label_26277c;
        case 0x262790u: goto label_262790;
        case 0x2627a4u: goto label_2627a4;
        case 0x2627b8u: goto label_2627b8;
        case 0x2627c8u: goto label_2627c8;
        case 0x2627dcu: goto label_2627dc;
        case 0x2627ecu: goto label_2627ec;
        case 0x262800u: goto label_262800;
        case 0x262810u: goto label_262810;
        default: break;
    }

    ctx->pc = 0x262740u;

    // 0x262740: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262744: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x262744u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x262748: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x262748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x26274c: 0xc040c80  jal         func_103200
    ctx->pc = 0x26274Cu;
    SET_GPR_U32(ctx, 31, 0x262754u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x262754u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262754u) { return; }
    ctx->pc = 0x262754u;
label_262754:
    // 0x262754: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262758: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x262758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26275c: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x26275cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x262760: 0xc040c80  jal         func_103200
    ctx->pc = 0x262760u;
    SET_GPR_U32(ctx, 31, 0x262768u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x262768u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262768u) { return; }
    ctx->pc = 0x262768u;
label_262768:
    // 0x262768: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26276c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x26276cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262770: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x262770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262774: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262774u;
    SET_GPR_U32(ctx, 31, 0x26277Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x26277Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26277Cu) { return; }
    ctx->pc = 0x26277Cu;
label_26277c:
    // 0x26277c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26277cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262780: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262784: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x262784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262788: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262788u;
    SET_GPR_U32(ctx, 31, 0x262790u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262790u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262790u) { return; }
    ctx->pc = 0x262790u;
label_262790:
    // 0x262790: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262794: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262798: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x262798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x26279c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x26279Cu;
    SET_GPR_U32(ctx, 31, 0x2627A4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x2627A4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2627A4u) { return; }
    ctx->pc = 0x2627A4u;
label_2627a4:
    // 0x2627a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2627a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2627a8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2627a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2627ac: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x2627acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2627b0: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x2627B0u;
    SET_GPR_U32(ctx, 31, 0x2627B8u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x2627B8u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2627B8u) { return; }
    ctx->pc = 0x2627B8u;
label_2627b8:
    // 0x2627b8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2627b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2627bc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2627bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2627c0: 0xc040c24  jal         func_103090
    ctx->pc = 0x2627C0u;
    SET_GPR_U32(ctx, 31, 0x2627C8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2627C8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2627C8u) { return; }
    ctx->pc = 0x2627C8u;
label_2627c8:
    // 0x2627c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2627c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2627cc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2627ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2627d0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2627d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2627d4: 0xc040c12  jal         func_103048
    ctx->pc = 0x2627D4u;
    SET_GPR_U32(ctx, 31, 0x2627DCu);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x2627DCu;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2627DCu) { return; }
    ctx->pc = 0x2627DCu;
label_2627dc:
    // 0x2627dc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2627dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2627e0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2627e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2627e4: 0xc040c24  jal         func_103090
    ctx->pc = 0x2627E4u;
    SET_GPR_U32(ctx, 31, 0x2627ECu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2627ECu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2627ECu) { return; }
    ctx->pc = 0x2627ECu;
label_2627ec:
    // 0x2627ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2627ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2627f0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2627f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2627f4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2627f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2627f8: 0xc040c12  jal         func_103048
    ctx->pc = 0x2627F8u;
    SET_GPR_U32(ctx, 31, 0x262800u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x262800u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262800u) { return; }
    ctx->pc = 0x262800u;
label_262800:
    // 0x262800: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x262800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x262804: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262808: 0xc040c24  jal         func_103090
    ctx->pc = 0x262808u;
    SET_GPR_U32(ctx, 31, 0x262810u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x262810u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262810u) { return; }
    ctx->pc = 0x262810u;
label_262810:
    // 0x262810: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x262810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x262814: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x262814u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x262818: 0xc040ca2  jal         func_103288
    ctx->pc = 0x262818u;
    SET_GPR_U32(ctx, 31, 0x262820u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x262820u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262820u) { return; }
    ctx->pc = 0x262820u;
}
