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

// Function: entry_0015a684
// Address: 0x15a684 - 0x15a878
void entry_0015a684_0x15a684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a684_0x15a684");
#endif

    switch (ctx->pc) {
        case 0x15a6c4u: goto label_15a6c4;
        case 0x15a6dcu: goto label_15a6dc;
        case 0x15a6f4u: goto label_15a6f4;
        case 0x15a70cu: goto label_15a70c;
        case 0x15a724u: goto label_15a724;
        case 0x15a73cu: goto label_15a73c;
        case 0x15a758u: goto label_15a758;
        case 0x15a774u: goto label_15a774;
        case 0x15a790u: goto label_15a790;
        case 0x15a7a8u: goto label_15a7a8;
        case 0x15a7c0u: goto label_15a7c0;
        case 0x15a7d8u: goto label_15a7d8;
        case 0x15a7f0u: goto label_15a7f0;
        case 0x15a808u: goto label_15a808;
        case 0x15a820u: goto label_15a820;
        case 0x15a838u: goto label_15a838;
        case 0x15a850u: goto label_15a850;
        case 0x15a868u: goto label_15a868;
        default: break;
    }

    ctx->pc = 0x15a684u;

    // 0x15a684: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15a684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15a688: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15a688u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a68c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a690: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15a690u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15a694: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15a694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15a698: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x15a698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x15a69c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15a69cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a6a0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a6a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15a6a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15a6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15a6ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15a6b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a6b4: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x15a6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15a6b8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x15a6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15a6bc: 0xc040c80  jal         func_103200
    ctx->pc = 0x15A6BCu;
    SET_GPR_U32(ctx, 31, 0x15A6C4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x15A6C4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A6C4u) { return; }
    ctx->pc = 0x15A6C4u;
label_15a6c4:
    // 0x15a6c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15a6c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15a6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a6cc: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x15a6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x15a6d0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x15a6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15a6d4: 0xc040c80  jal         func_103200
    ctx->pc = 0x15A6D4u;
    SET_GPR_U32(ctx, 31, 0x15A6DCu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x15A6DCu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A6DCu) { return; }
    ctx->pc = 0x15A6DCu;
label_15a6dc:
    // 0x15a6dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15a6e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15a6e4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x15a6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15a6e8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x15a6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15a6ec: 0xc040c80  jal         func_103200
    ctx->pc = 0x15A6ECu;
    SET_GPR_U32(ctx, 31, 0x15A6F4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x15A6F4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A6F4u) { return; }
    ctx->pc = 0x15A6F4u;
label_15a6f4:
    // 0x15a6f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a6f8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x15a6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x15a6fc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15a6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a700: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x15a700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a704: 0xc040c12  jal         func_103048
    ctx->pc = 0x15A704u;
    SET_GPR_U32(ctx, 31, 0x15A70Cu);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x15A70Cu;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A70Cu) { return; }
    ctx->pc = 0x15A70Cu;
label_15a70c:
    // 0x15a70c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a710: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x15a710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15a714: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15a714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a718: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15a718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15a71c: 0xc040c12  jal         func_103048
    ctx->pc = 0x15A71Cu;
    SET_GPR_U32(ctx, 31, 0x15A724u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x15A724u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A724u) { return; }
    ctx->pc = 0x15A724u;
label_15a724:
    // 0x15a724: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15a724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a728: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x15a728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x15a72c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15a72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15a730: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x15a730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a734: 0xc040c12  jal         func_103048
    ctx->pc = 0x15A734u;
    SET_GPR_U32(ctx, 31, 0x15A73Cu);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x15A73Cu;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A73Cu) { return; }
    ctx->pc = 0x15A73Cu;
label_15a73c:
    // 0x15a73c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15a740: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15a740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15a744: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a748: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x15a748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x15a74c: 0x24460060  addiu       $a2, $v0, 0x60
    ctx->pc = 0x15a74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x15a750: 0xc040c80  jal         func_103200
    ctx->pc = 0x15A750u;
    SET_GPR_U32(ctx, 31, 0x15A758u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x15A758u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A758u) { return; }
    ctx->pc = 0x15A758u;
label_15a758:
    // 0x15a758: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15a758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15a75c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15a760: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15a760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a764: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x15a764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x15a768: 0x24460060  addiu       $a2, $v0, 0x60
    ctx->pc = 0x15a768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x15a76c: 0xc040c80  jal         func_103200
    ctx->pc = 0x15A76Cu;
    SET_GPR_U32(ctx, 31, 0x15A774u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x15A774u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A774u) { return; }
    ctx->pc = 0x15A774u;
label_15a774:
    // 0x15a774: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15a774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15a778: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15a778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15a77c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15a780: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x15a780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x15a784: 0x24460060  addiu       $a2, $v0, 0x60
    ctx->pc = 0x15a784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x15a788: 0xc040c80  jal         func_103200
    ctx->pc = 0x15A788u;
    SET_GPR_U32(ctx, 31, 0x15A790u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x15A790u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A790u) { return; }
    ctx->pc = 0x15A790u;
label_15a790:
    // 0x15a790: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15a790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a794: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x15a794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x15a798: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15a798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a79c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x15a79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a7a0: 0xc040c12  jal         func_103048
    ctx->pc = 0x15A7A0u;
    SET_GPR_U32(ctx, 31, 0x15A7A8u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x15A7A8u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A7A8u) { return; }
    ctx->pc = 0x15A7A8u;
label_15a7a8:
    // 0x15a7a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a7ac: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x15a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x15a7b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15a7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a7b4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15a7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15a7b8: 0xc040c12  jal         func_103048
    ctx->pc = 0x15A7B8u;
    SET_GPR_U32(ctx, 31, 0x15A7C0u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x15A7C0u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A7C0u) { return; }
    ctx->pc = 0x15A7C0u;
label_15a7c0:
    // 0x15a7c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a7c4: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x15a7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x15a7c8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15a7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15a7cc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x15a7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a7d0: 0xc040c12  jal         func_103048
    ctx->pc = 0x15A7D0u;
    SET_GPR_U32(ctx, 31, 0x15A7D8u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x15A7D8u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A7D8u) { return; }
    ctx->pc = 0x15A7D8u;
label_15a7d8:
    // 0x15a7d8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x15a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a7dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a7e0: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x15a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x15a7e4: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x15a7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x15a7e8: 0xc040c24  jal         func_103090
    ctx->pc = 0x15A7E8u;
    SET_GPR_U32(ctx, 31, 0x15A7F0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x15A7F0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A7F0u) { return; }
    ctx->pc = 0x15A7F0u;
label_15a7f0:
    // 0x15a7f0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x15a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a7f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a7f8: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x15a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x15a7fc: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x15a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15a800: 0xc040c24  jal         func_103090
    ctx->pc = 0x15A800u;
    SET_GPR_U32(ctx, 31, 0x15A808u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x15A808u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A808u) { return; }
    ctx->pc = 0x15A808u;
label_15a808:
    // 0x15a808: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x15a808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a80c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a810: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x15a810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x15a814: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x15a814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x15a818: 0xc040c24  jal         func_103090
    ctx->pc = 0x15A818u;
    SET_GPR_U32(ctx, 31, 0x15A820u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x15A820u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A820u) { return; }
    ctx->pc = 0x15A820u;
label_15a820:
    // 0x15a820: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x15a820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a824: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a828: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x15a828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x15a82c: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x15a82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x15a830: 0xc040c24  jal         func_103090
    ctx->pc = 0x15A830u;
    SET_GPR_U32(ctx, 31, 0x15A838u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x15A838u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A838u) { return; }
    ctx->pc = 0x15A838u;
label_15a838:
    // 0x15a838: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x15a838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a83c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a840: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x15a840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x15a844: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x15a844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x15a848: 0xc040c24  jal         func_103090
    ctx->pc = 0x15A848u;
    SET_GPR_U32(ctx, 31, 0x15A850u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x15A850u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A850u) { return; }
    ctx->pc = 0x15A850u;
label_15a850:
    // 0x15a850: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x15a850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a854: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15a854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a858: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x15a858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x15a85c: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x15a85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x15a860: 0xc040c24  jal         func_103090
    ctx->pc = 0x15A860u;
    SET_GPR_U32(ctx, 31, 0x15A868u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x15A868u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A868u) { return; }
    ctx->pc = 0x15A868u;
label_15a868:
    // 0x15a868: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15a868u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a86c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15a86cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15a870: 0x3e00008  jr          $ra
    ctx->pc = 0x15A870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A878u;
}
