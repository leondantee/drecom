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

// Function: entry_00262c78
// Address: 0x262c78 - 0x262d68
void entry_00262c78_0x262c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00262c78_0x262c78");
#endif

    switch (ctx->pc) {
        case 0x262c8cu: goto label_262c8c;
        case 0x262ca0u: goto label_262ca0;
        case 0x262cb4u: goto label_262cb4;
        case 0x262cc8u: goto label_262cc8;
        case 0x262cdcu: goto label_262cdc;
        case 0x262cf0u: goto label_262cf0;
        case 0x262d00u: goto label_262d00;
        case 0x262d14u: goto label_262d14;
        case 0x262d24u: goto label_262d24;
        case 0x262d38u: goto label_262d38;
        case 0x262d48u: goto label_262d48;
        case 0x262d58u: goto label_262d58;
        default: break;
    }

    ctx->pc = 0x262c78u;

    // 0x262c78: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262c7c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x262c7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x262c80: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x262c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x262c84: 0xc040c80  jal         func_103200
    ctx->pc = 0x262C84u;
    SET_GPR_U32(ctx, 31, 0x262C8Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x262C8Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262C8Cu) { return; }
    ctx->pc = 0x262C8Cu;
label_262c8c:
    // 0x262c8c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262c90: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x262c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x262c94: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x262c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x262c98: 0xc040c80  jal         func_103200
    ctx->pc = 0x262C98u;
    SET_GPR_U32(ctx, 31, 0x262CA0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x262CA0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262CA0u) { return; }
    ctx->pc = 0x262CA0u;
label_262ca0:
    // 0x262ca0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262ca4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262ca8: 0xc7ac00c8  lwc1        $f12, 0xC8($sp)
    ctx->pc = 0x262ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262cac: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262CACu;
    SET_GPR_U32(ctx, 31, 0x262CB4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262CB4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262CB4u) { return; }
    ctx->pc = 0x262CB4u;
label_262cb4:
    // 0x262cb4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262cb8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262cbc: 0xc7ac00c8  lwc1        $f12, 0xC8($sp)
    ctx->pc = 0x262cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262cc0: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262CC0u;
    SET_GPR_U32(ctx, 31, 0x262CC8u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262CC8u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262CC8u) { return; }
    ctx->pc = 0x262CC8u;
label_262cc8:
    // 0x262cc8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262ccc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262cd0: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x262cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x262cd4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x262CD4u;
    SET_GPR_U32(ctx, 31, 0x262CDCu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x262CDCu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262CDCu) { return; }
    ctx->pc = 0x262CDCu;
label_262cdc:
    // 0x262cdc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262ce0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262ce4: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x262ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x262ce8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x262CE8u;
    SET_GPR_U32(ctx, 31, 0x262CF0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x262CF0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262CF0u) { return; }
    ctx->pc = 0x262CF0u;
label_262cf0:
    // 0x262cf0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x262cf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x262cf4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262cf8: 0xc040c24  jal         func_103090
    ctx->pc = 0x262CF8u;
    SET_GPR_U32(ctx, 31, 0x262D00u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x262D00u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262D00u) { return; }
    ctx->pc = 0x262D00u;
label_262d00:
    // 0x262d00: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x262d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x262d04: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262d08: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x262d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262d0c: 0xc040c12  jal         func_103048
    ctx->pc = 0x262D0Cu;
    SET_GPR_U32(ctx, 31, 0x262D14u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x262D14u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262D14u) { return; }
    ctx->pc = 0x262D14u;
label_262d14:
    // 0x262d14: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x262d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x262d18: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x262d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x262d1c: 0xc040c24  jal         func_103090
    ctx->pc = 0x262D1Cu;
    SET_GPR_U32(ctx, 31, 0x262D24u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x262D24u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262D24u) { return; }
    ctx->pc = 0x262D24u;
label_262d24:
    // 0x262d24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262d28: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x262d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x262d2c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x262d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262d30: 0xc040c12  jal         func_103048
    ctx->pc = 0x262D30u;
    SET_GPR_U32(ctx, 31, 0x262D38u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x262D38u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262D38u) { return; }
    ctx->pc = 0x262D38u;
label_262d38:
    // 0x262d38: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x262d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x262d3c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262d40: 0xc040c24  jal         func_103090
    ctx->pc = 0x262D40u;
    SET_GPR_U32(ctx, 31, 0x262D48u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x262D48u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262D48u) { return; }
    ctx->pc = 0x262D48u;
label_262d48:
    // 0x262d48: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x262d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x262d4c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x262d4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x262d50: 0xc040ca2  jal         func_103288
    ctx->pc = 0x262D50u;
    SET_GPR_U32(ctx, 31, 0x262D58u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x262D58u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262D58u) { return; }
    ctx->pc = 0x262D58u;
label_262d58:
    // 0x262d58: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x262d58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x262d5c: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x262d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x262d60: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x262d60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x262d64: 0x0  nop
    ctx->pc = 0x262d64u;
    // NOP
    ctx->pc = 0x262d68u;
}
