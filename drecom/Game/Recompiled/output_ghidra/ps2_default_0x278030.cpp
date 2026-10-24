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

// Function: default
// Address: 0x278030 - 0x2780d0
void ps2_default_0x278030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x278030");
#endif

    switch (ctx->pc) {
        case 0x278040u: goto label_278040;
        case 0x278078u: goto label_278078;
        case 0x27808cu: goto label_27808c;
        case 0x2780a0u: goto label_2780a0;
        default: break;
    }

    ctx->pc = 0x278030u;

    // 0x278030: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x278030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x278034: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x278034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x278038: 0xc040c9e  jal         func_103278
    ctx->pc = 0x278038u;
    SET_GPR_U32(ctx, 31, 0x278040u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x278040u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x278040u) { return; }
    ctx->pc = 0x278040u;
label_278040:
    // 0x278040: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x278040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278044: 0x0  nop
    ctx->pc = 0x278044u;
    // NOP
    // 0x278048: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x278048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x27804c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27804cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278050: 0x0  nop
    ctx->pc = 0x278050u;
    // NOP
    // 0x278054: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x278054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x278058: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x278058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27805c: 0x0  nop
    ctx->pc = 0x27805cu;
    // NOP
    // 0x278060: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x278060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x278064: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x278064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x278068: 0x8e250130  lw          $a1, 0x130($s1)
    ctx->pc = 0x278068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x27806c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x27806cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x278070: 0xc040d62  jal         func_103588
    ctx->pc = 0x278070u;
    SET_GPR_U32(ctx, 31, 0x278078u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x278078u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x278078u) { return; }
    ctx->pc = 0x278078u;
label_278078:
    // 0x278078: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x278078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x27807c: 0x8e250130  lw          $a1, 0x130($s1)
    ctx->pc = 0x27807cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x278080: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x278080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x278084: 0xc040c92  jal         func_103248
    ctx->pc = 0x278084u;
    SET_GPR_U32(ctx, 31, 0x27808Cu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x27808Cu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27808Cu) { return; }
    ctx->pc = 0x27808Cu;
label_27808c:
    // 0x27808c: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x27808cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x278090: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x278090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x278094: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x278094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x278098: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x278098u;
    SET_GPR_U32(ctx, 31, 0x2780A0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x2780A0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2780A0u) { return; }
    ctx->pc = 0x2780A0u;
label_2780a0:
    // 0x2780a0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2780a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2780a4: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x2780a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A40u));
    // 0x2780a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2780a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2780ac: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2780ACu;
    {
        const bool branch_taken_0x2780ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2780ac) {
            ctx->pc = 0x2780D0u;
            return;
        }
    }
    ctx->pc = 0x2780B4u;
    // 0x2780b4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2780b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2780b8: 0x3c023f2e  lui         $v0, 0x3F2E
    ctx->pc = 0x2780b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16174 << 16));
    // 0x2780bc: 0x34425700  ori         $v0, $v0, 0x5700
    ctx->pc = 0x2780bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22272);
    // 0x2780c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2780c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2780c4: 0x0  nop
    ctx->pc = 0x2780c4u;
    // NOP
    // 0x2780c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2780c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2780cc: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2780ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->pc = 0x2780d0u;
}
