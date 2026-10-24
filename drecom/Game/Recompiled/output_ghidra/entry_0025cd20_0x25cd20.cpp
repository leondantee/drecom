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

// Function: entry_0025cd20
// Address: 0x25cd20 - 0x25ce2c
void entry_0025cd20_0x25cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025cd20_0x25cd20");
#endif

    switch (ctx->pc) {
        case 0x25cd5cu: goto label_25cd5c;
        case 0x25cd70u: goto label_25cd70;
        case 0x25cd84u: goto label_25cd84;
        case 0x25cd98u: goto label_25cd98;
        case 0x25cdacu: goto label_25cdac;
        case 0x25cdc0u: goto label_25cdc0;
        case 0x25cdd0u: goto label_25cdd0;
        case 0x25cdf0u: goto label_25cdf0;
        case 0x25ce00u: goto label_25ce00;
        case 0x25ce20u: goto label_25ce20;
        default: break;
    }

    ctx->pc = 0x25cd20u;

    // 0x25cd20: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25cd20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25cd24: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x25cd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x25cd28: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25cd28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x25cd2c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25cd2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25cd30: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25cd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25cd34: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25cd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25cd38: 0x146000c3  bnez        $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x25CD38u;
    {
        const bool branch_taken_0x25cd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cd38) {
            ctx->pc = 0x25D048u;
            return;
        }
    }
    ctx->pc = 0x25CD40u;
    // 0x25cd40: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cd44: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x25cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25cd48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25cd48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25cd4c: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x25cd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25cd50: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x25cd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25cd54: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x25CD54u;
    SET_GPR_U32(ctx, 31, 0x25CD5Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x25CD5Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CD5Cu) { return; }
    ctx->pc = 0x25CD5Cu;
label_25cd5c:
    // 0x25cd5c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25cd5cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25cd60: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x25cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25cd64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25cd64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25cd68: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25CD68u;
    SET_GPR_U32(ctx, 31, 0x25CD70u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25CD70u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CD70u) { return; }
    ctx->pc = 0x25CD70u;
label_25cd70:
    // 0x25cd70: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25cd74: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x25cd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25cd78: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x25cd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25cd7c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x25CD7Cu;
    SET_GPR_U32(ctx, 31, 0x25CD84u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x25CD84u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CD84u) { return; }
    ctx->pc = 0x25CD84u;
label_25cd84:
    // 0x25cd84: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25cd88: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x25cd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25cd8c: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x25cd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25cd90: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x25CD90u;
    SET_GPR_U32(ctx, 31, 0x25CD98u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x25CD98u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CD98u) { return; }
    ctx->pc = 0x25CD98u;
label_25cd98:
    // 0x25cd98: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25cd9c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x25cd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25cda0: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x25cda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25cda4: 0xc040ce4  jal         func_103390
    ctx->pc = 0x25CDA4u;
    SET_GPR_U32(ctx, 31, 0x25CDACu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x25CDACu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CDACu) { return; }
    ctx->pc = 0x25CDACu;
label_25cdac:
    // 0x25cdac: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25cdb0: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25cdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x25cdb4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x25cdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25cdb8: 0xc040c00  jal         func_103000
    ctx->pc = 0x25CDB8u;
    SET_GPR_U32(ctx, 31, 0x25CDC0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25CDC0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CDC0u) { return; }
    ctx->pc = 0x25CDC0u;
label_25cdc0:
    // 0x25cdc0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x25cdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x25cdc4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x25cdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25cdc8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25CDC8u;
    SET_GPR_U32(ctx, 31, 0x25CDD0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25CDD0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CDD0u) { return; }
    ctx->pc = 0x25CDD0u;
label_25cdd0:
    // 0x25cdd0: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25cdd4: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x25cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x25cdd8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x25cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x25cddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25cde0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25cde0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25cde4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x25cde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25cde8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x25CDE8u;
    SET_GPR_U32(ctx, 31, 0x25CDF0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25CDF0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CDF0u) { return; }
    ctx->pc = 0x25CDF0u;
label_25cdf0:
    // 0x25cdf0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25cdf4: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25cdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x25cdf8: 0xc040c44  jal         func_103110
    ctx->pc = 0x25CDF8u;
    SET_GPR_U32(ctx, 31, 0x25CE00u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x25CE00u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CE00u) { return; }
    ctx->pc = 0x25CE00u;
label_25ce00:
    // 0x25ce00: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25ce04: 0x152180  sll         $a0, $s5, 6
    ctx->pc = 0x25ce04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x25ce08: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x25ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x25ce0c: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x25ce0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25ce10: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25ce10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25ce14: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x25ce14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25ce18: 0xc040c00  jal         func_103000
    ctx->pc = 0x25CE18u;
    SET_GPR_U32(ctx, 31, 0x25CE20u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25CE20u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CE20u) { return; }
    ctx->pc = 0x25CE20u;
label_25ce20:
    // 0x25ce20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25ce20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25ce24: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x25CE24u;
    {
        const bool branch_taken_0x25ce24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ce24) {
            ctx->pc = 0x25D048u;
            return;
        }
    }
    ctx->pc = 0x25CE2Cu;
}
