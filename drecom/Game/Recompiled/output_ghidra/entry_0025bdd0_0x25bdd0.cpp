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

// Function: entry_0025bdd0
// Address: 0x25bdd0 - 0x25befc
void entry_0025bdd0_0x25bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025bdd0_0x25bdd0");
#endif

    switch (ctx->pc) {
        case 0x25be08u: goto label_25be08;
        case 0x25be1cu: goto label_25be1c;
        case 0x25be34u: goto label_25be34;
        case 0x25be4cu: goto label_25be4c;
        case 0x25be68u: goto label_25be68;
        case 0x25be80u: goto label_25be80;
        case 0x25be94u: goto label_25be94;
        case 0x25beb8u: goto label_25beb8;
        case 0x25beccu: goto label_25becc;
        case 0x25bef0u: goto label_25bef0;
        default: break;
    }

    ctx->pc = 0x25bdd0u;

    // 0x25bdd0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25bdd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25bdd4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x25bdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x25bdd8: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25bdd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x25bddc: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x25bddcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25bde0: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x25bde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x25bde4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25bde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25bde8: 0x1460012f  bnez        $v1, . + 4 + (0x12F << 2)
    ctx->pc = 0x25BDE8u;
    {
        const bool branch_taken_0x25bde8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bde8) {
            ctx->pc = 0x25C2A8u;
            return;
        }
    }
    ctx->pc = 0x25BDF0u;
    // 0x25bdf0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bdf4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x25bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25bdf8: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x25bdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25bdfc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x25bdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25be00: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x25BE00u;
    SET_GPR_U32(ctx, 31, 0x25BE08u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x25BE08u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BE08u) { return; }
    ctx->pc = 0x25BE08u;
label_25be08:
    // 0x25be08: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25be08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25be0c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25be0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25be10: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25be10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x25be14: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25BE14u;
    SET_GPR_U32(ctx, 31, 0x25BE1Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25BE1Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BE1Cu) { return; }
    ctx->pc = 0x25BE1Cu;
label_25be1c:
    // 0x25be1c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25be1cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25be20: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25be20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25be24: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25be24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25be28: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x25be28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25be2c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x25BE2Cu;
    SET_GPR_U32(ctx, 31, 0x25BE34u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x25BE34u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BE34u) { return; }
    ctx->pc = 0x25BE34u;
label_25be34:
    // 0x25be34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25be34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25be38: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25be38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25be3c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25be3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25be40: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x25be40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25be44: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x25BE44u;
    SET_GPR_U32(ctx, 31, 0x25BE4Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x25BE4Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BE4Cu) { return; }
    ctx->pc = 0x25BE4Cu;
label_25be4c:
    // 0x25be4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25be4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25be50: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25be50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25be54: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25be54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x25be58: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25be58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25be5c: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x25be5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25be60: 0xc040ce4  jal         func_103390
    ctx->pc = 0x25BE60u;
    SET_GPR_U32(ctx, 31, 0x25BE68u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x25BE68u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BE68u) { return; }
    ctx->pc = 0x25BE68u;
label_25be68:
    // 0x25be68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25be68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25be6c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25be6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25be70: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25be70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x25be74: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x25be74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25be78: 0xc040c00  jal         func_103000
    ctx->pc = 0x25BE78u;
    SET_GPR_U32(ctx, 31, 0x25BE80u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25BE80u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BE80u) { return; }
    ctx->pc = 0x25BE80u;
label_25be80:
    // 0x25be80: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25be80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25be84: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25be84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25be88: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x25be88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25be8c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25BE8Cu;
    SET_GPR_U32(ctx, 31, 0x25BE94u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25BE94u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BE94u) { return; }
    ctx->pc = 0x25BE94u;
label_25be94:
    // 0x25be94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25be94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25be98: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25be98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25be9c: 0x14a980  sll         $s5, $s4, 6
    ctx->pc = 0x25be9cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25bea0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x25bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x25bea4: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x25bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x25bea8: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x25bea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25beac: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x25beacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25beb0: 0xc040ca2  jal         func_103288
    ctx->pc = 0x25BEB0u;
    SET_GPR_U32(ctx, 31, 0x25BEB8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25BEB8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BEB8u) { return; }
    ctx->pc = 0x25BEB8u;
label_25beb8:
    // 0x25beb8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25beb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25bebc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25bec0: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25bec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x25bec4: 0xc040c44  jal         func_103110
    ctx->pc = 0x25BEC4u;
    SET_GPR_U32(ctx, 31, 0x25BECCu);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x25BECCu;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BECCu) { return; }
    ctx->pc = 0x25BECCu;
label_25becc:
    // 0x25becc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25beccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25bed0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bed4: 0x142180  sll         $a0, $s4, 6
    ctx->pc = 0x25bed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25bed8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x25bed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x25bedc: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x25bedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25bee0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25bee0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25bee4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25bee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25bee8: 0xc040c00  jal         func_103000
    ctx->pc = 0x25BEE8u;
    SET_GPR_U32(ctx, 31, 0x25BEF0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25BEF0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BEF0u) { return; }
    ctx->pc = 0x25BEF0u;
label_25bef0:
    // 0x25bef0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25bef0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25bef4: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x25BEF4u;
    {
        const bool branch_taken_0x25bef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bef4) {
            ctx->pc = 0x25C2A8u;
            return;
        }
    }
    ctx->pc = 0x25BEFCu;
}
