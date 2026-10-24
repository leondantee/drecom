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

// Function: caseD_7
// Address: 0x260f34 - 0x261100
void caseD_7_0x260f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x260f34");
#endif

    switch (ctx->pc) {
        case 0x260f50u: goto label_260f50;
        case 0x260f70u: goto label_260f70;
        case 0x260f94u: goto label_260f94;
        case 0x260fc0u: goto label_260fc0;
        case 0x260fdcu: goto label_260fdc;
        case 0x261004u: goto label_261004;
        case 0x261018u: goto label_261018;
        case 0x26104cu: goto label_26104c;
        case 0x261068u: goto label_261068;
        case 0x261090u: goto label_261090;
        case 0x2610a4u: goto label_2610a4;
        case 0x2610c4u: goto label_2610c4;
        default: break;
    }

    ctx->pc = 0x260f34u;

    // 0x260f34: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x260f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260f38: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260f38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x260f3c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260f40: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260f40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260f44: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x260f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x260f48: 0xc040c92  jal         func_103248
    ctx->pc = 0x260F48u;
    SET_GPR_U32(ctx, 31, 0x260F50u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x260F50u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260F50u) { return; }
    ctx->pc = 0x260F50u;
label_260f50:
    // 0x260f50: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260f50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260f54: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260f58: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260f58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260f5c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260f60: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260f64: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260f64u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260f68: 0xc040c00  jal         func_103000
    ctx->pc = 0x260F68u;
    SET_GPR_U32(ctx, 31, 0x260F70u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x260F70u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260F70u) { return; }
    ctx->pc = 0x260F70u;
label_260f70:
    // 0x260f70: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260f70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260f74: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260f78: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260f78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260f7c: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x260f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x260f80: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260f80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260f84: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260f88: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260f88u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260f8c: 0xc040c00  jal         func_103000
    ctx->pc = 0x260F8Cu;
    SET_GPR_U32(ctx, 31, 0x260F94u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x260F94u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260F94u) { return; }
    ctx->pc = 0x260F94u;
label_260f94:
    // 0x260f94: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260f94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260f98: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x260f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x260f9c: 0x93a40268  lbu         $a0, 0x268($sp)
    ctx->pc = 0x260f9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x260fa0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x260fa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x260fa4: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x260fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x260fa8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x260fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x260fac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x260facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x260fb0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260fb4: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x260fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x260fb8: 0xc040c92  jal         func_103248
    ctx->pc = 0x260FB8u;
    SET_GPR_U32(ctx, 31, 0x260FC0u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x260FC0u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260FC0u) { return; }
    ctx->pc = 0x260FC0u;
label_260fc0:
    // 0x260fc0: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x260fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260fc4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x260fc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x260fc8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x260fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x260fcc: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260fd0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260fd0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260fd4: 0xc040c00  jal         func_103000
    ctx->pc = 0x260FD4u;
    SET_GPR_U32(ctx, 31, 0x260FDCu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x260FDCu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260FDCu) { return; }
    ctx->pc = 0x260FDCu;
label_260fdc:
    // 0x260fdc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260fdcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260fe0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x260fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x260fe4: 0x132180  sll         $a0, $s3, 6
    ctx->pc = 0x260fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x260fe8: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x260fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x260fec: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x260fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x260ff0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260ff0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260ff4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260ff8: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x260ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x260ffc: 0xc040c92  jal         func_103248
    ctx->pc = 0x260FFCu;
    SET_GPR_U32(ctx, 31, 0x261004u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x261004u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261004u) { return; }
    ctx->pc = 0x261004u;
label_261004:
    // 0x261004: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x261004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x261008: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x261008u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26100c: 0x8e450100  lw          $a1, 0x100($s2)
    ctx->pc = 0x26100cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x261010: 0xc040c44  jal         func_103110
    ctx->pc = 0x261010u;
    SET_GPR_U32(ctx, 31, 0x261018u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x261018u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261018u) { return; }
    ctx->pc = 0x261018u;
label_261018:
    // 0x261018: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x261018u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26101c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x26101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x261020: 0x93b60268  lbu         $s6, 0x268($sp)
    ctx->pc = 0x261020u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x261024: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x261024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x261028: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x261028u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x26102c: 0x8c460130  lw          $a2, 0x130($v0)
    ctx->pc = 0x26102cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x261030: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x261030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x261034: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x261034u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x261038: 0x27a301f0  addiu       $v1, $sp, 0x1F0
    ctx->pc = 0x261038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x26103c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x26103cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x261040: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x261040u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261044: 0xc040c00  jal         func_103000
    ctx->pc = 0x261044u;
    SET_GPR_U32(ctx, 31, 0x26104Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x26104Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26104Cu) { return; }
    ctx->pc = 0x26104Cu;
label_26104c:
    // 0x26104c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26104cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261050: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x261050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x261054: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x261054u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x261058: 0x8ea20100  lw          $v0, 0x100($s5)
    ctx->pc = 0x261058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 256)));
    // 0x26105c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26105cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261060: 0xc040c44  jal         func_103110
    ctx->pc = 0x261060u;
    SET_GPR_U32(ctx, 31, 0x261068u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x261068u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261068u) { return; }
    ctx->pc = 0x261068u;
label_261068:
    // 0x261068: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x261068u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26106c: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x26106cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x261070: 0x133180  sll         $a2, $s3, 6
    ctx->pc = 0x261070u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x261074: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x261074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x261078: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x261078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x26107c: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x26107cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x261080: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x261080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x261084: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x261084u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261088: 0xc040c00  jal         func_103000
    ctx->pc = 0x261088u;
    SET_GPR_U32(ctx, 31, 0x261090u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x261090u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261090u) { return; }
    ctx->pc = 0x261090u;
label_261090:
    // 0x261090: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x261090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x261094: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x261094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261098: 0x8e250100  lw          $a1, 0x100($s1)
    ctx->pc = 0x261098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x26109c: 0xc040c44  jal         func_103110
    ctx->pc = 0x26109Cu;
    SET_GPR_U32(ctx, 31, 0x2610A4u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x2610A4u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2610A4u) { return; }
    ctx->pc = 0x2610A4u;
label_2610a4:
    // 0x2610a4: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x2610a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2610a8: 0x102980  sll         $a1, $s0, 6
    ctx->pc = 0x2610a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2610ac: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2610acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2610b0: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x2610b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2610b4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2610b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2610b8: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2610b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2610bc: 0xc040c00  jal         func_103000
    ctx->pc = 0x2610BCu;
    SET_GPR_U32(ctx, 31, 0x2610C4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2610C4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2610C4u) { return; }
    ctx->pc = 0x2610C4u;
label_2610c4:
    // 0x2610c4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2610c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2610c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2610c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2610cc: 0x70a01628  paddub      $v0, $a1, $zero
    ctx->pc = 0x2610ccu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2610d0: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x2610d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2610d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2610d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2610d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2610d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2610dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2610dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2610e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2610e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2610e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2610e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2610e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2610e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2610ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2610ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2610f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2610f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2610f4: 0x27bd0270  addiu       $sp, $sp, 0x270
    ctx->pc = 0x2610f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x2610f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2610F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2610F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261100u;
}
