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

// Function: entry_001e7678
// Address: 0x1e7678 - 0x1e774c
void entry_001e7678_0x1e7678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7678_0x1e7678");
#endif

    switch (ctx->pc) {
        case 0x1e769cu: goto label_1e769c;
        case 0x1e76b8u: goto label_1e76b8;
        case 0x1e76d4u: goto label_1e76d4;
        case 0x1e76e8u: goto label_1e76e8;
        case 0x1e76fcu: goto label_1e76fc;
        case 0x1e7710u: goto label_1e7710;
        case 0x1e7720u: goto label_1e7720;
        default: break;
    }

    ctx->pc = 0x1e7678u;

    // 0x1e7678: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1e7678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e767c: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x1e767cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e7680: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1e7680u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7684: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e7684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7688: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1e7688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e768c: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x1e768cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e7690: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e7690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e7694: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7694u;
    SET_GPR_U32(ctx, 31, 0x1E769Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E769Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E769Cu) { return; }
    ctx->pc = 0x1E769Cu;
label_1e769c:
    // 0x1e769c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1e769cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e76a0: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x1e76a0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e76a4: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x1e76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1e76a8: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x1e76a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e76ac: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1e76acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e76b0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E76B0u;
    SET_GPR_U32(ctx, 31, 0x1E76B8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E76B8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E76B8u) { return; }
    ctx->pc = 0x1E76B8u;
label_1e76b8:
    // 0x1e76b8: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x1e76b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e76bc: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x1e76bcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e76c0: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x1e76c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1e76c4: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x1e76c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e76c8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1e76c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e76cc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E76CCu;
    SET_GPR_U32(ctx, 31, 0x1E76D4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E76D4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E76D4u) { return; }
    ctx->pc = 0x1E76D4u;
label_1e76d4:
    // 0x1e76d4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e76d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e76d8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1e76d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e76dc: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1e76dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e76e0: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E76E0u;
    SET_GPR_U32(ctx, 31, 0x1E76E8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E76E8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E76E8u) { return; }
    ctx->pc = 0x1E76E8u;
label_1e76e8:
    // 0x1e76e8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1e76e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1e76ec: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1e76ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e76f0: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1e76f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e76f4: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E76F4u;
    SET_GPR_U32(ctx, 31, 0x1E76FCu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E76FCu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E76FCu) { return; }
    ctx->pc = 0x1E76FCu;
label_1e76fc:
    // 0x1e76fc: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1e76fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e7700: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1e7700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1e7704: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e7704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e7708: 0xc040c12  jal         func_103048
    ctx->pc = 0x1E7708u;
    SET_GPR_U32(ctx, 31, 0x1E7710u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x1E7710u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7710u) { return; }
    ctx->pc = 0x1E7710u;
label_1e7710:
    // 0x1e7710: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1e7710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e7714: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1e7714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e7718: 0xc040c1a  jal         func_103068
    ctx->pc = 0x1E7718u;
    SET_GPR_U32(ctx, 31, 0x1E7720u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x1E7720u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7720u) { return; }
    ctx->pc = 0x1E7720u;
label_1e7720:
    // 0x1e7720: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e7720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7724: 0x0  nop
    ctx->pc = 0x1e7724u;
    // NOP
    // 0x1e7728: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e7728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e772c: 0x0  nop
    ctx->pc = 0x1e772cu;
    // NOP
    // 0x1e7730: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7730u;
    {
        const bool branch_taken_0x1e7730 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7730) {
            ctx->pc = 0x1E774Cu;
            return;
        }
    }
    ctx->pc = 0x1E7738u;
    // 0x1e7738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e773c: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1e773cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1e7740: 0xa0620220  sb          $v0, 0x220($v1)
    ctx->pc = 0x1e7740u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 544), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e7744: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7744u;
    {
        const bool branch_taken_0x1e7744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7744) {
            ctx->pc = 0x1E7764u;
            return;
        }
    }
    ctx->pc = 0x1E774Cu;
}
