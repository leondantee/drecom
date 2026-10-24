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

// Function: entry_0029a138
// Address: 0x29a138 - 0x29a260
void entry_0029a138_0x29a138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a138_0x29a138");
#endif

    switch (ctx->pc) {
        case 0x29a1d4u: goto label_29a1d4;
        case 0x29a1e4u: goto label_29a1e4;
        case 0x29a1f8u: goto label_29a1f8;
        case 0x29a20cu: goto label_29a20c;
        case 0x29a228u: goto label_29a228;
        default: break;
    }

    ctx->pc = 0x29a138u;

    // 0x29a138: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x29a138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a13c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29a13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29a140: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x29a140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29a144: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29a144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a148: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29a14c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a150: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29a150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29a154: 0x111042  srl         $v0, $s1, 1
    ctx->pc = 0x29a154u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x29a158: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29a158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a15c: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x29a15cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a160: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x29a160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a164: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29a164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29a168: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x29a168u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29a16c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a170: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29a170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29a174: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29a174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a178: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29a178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29a17c: 0x111042  srl         $v0, $s1, 1
    ctx->pc = 0x29a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x29a180: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29a180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a184: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a188: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x29a188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x29a18c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x29a18cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a190: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29a190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29a194: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x29a194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29a198: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29a198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a19c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x29a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29a1a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a1a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29a1a8: 0x111042  srl         $v0, $s1, 1
    ctx->pc = 0x29a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x29a1ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a1b0: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x29a1b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a1b4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x29a1b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29a1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a1bc: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x29a1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a1c0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x29a1c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29a1c4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x29a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29a1c8: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x29a1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x29a1cc: 0xc040c8c  jal         func_103230
    ctx->pc = 0x29A1CCu;
    SET_GPR_U32(ctx, 31, 0x29A1D4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x29A1D4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A1D4u) { return; }
    ctx->pc = 0x29A1D4u;
label_29a1d4:
    // 0x29a1d4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x29a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29a1d8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x29a1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a1dc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x29A1DCu;
    SET_GPR_U32(ctx, 31, 0x29A1E4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x29A1E4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A1E4u) { return; }
    ctx->pc = 0x29A1E4u;
label_29a1e4:
    // 0x29a1e4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x29a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29a1e8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x29a1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29a1ec: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29a1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29a1f0: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29A1F0u;
    SET_GPR_U32(ctx, 31, 0x29A1F8u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29A1F8u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A1F8u) { return; }
    ctx->pc = 0x29A1F8u;
label_29a1f8:
    // 0x29a1f8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x29a1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29a1fc: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x29a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x29a200: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x29a200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29a204: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29A204u;
    SET_GPR_U32(ctx, 31, 0x29A20Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29A20Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A20Cu) { return; }
    ctx->pc = 0x29A20Cu;
label_29a20c:
    // 0x29a20c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x29a20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a210: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x29a210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x29a214: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x29a214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29a218: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x29a218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29a21c: 0xc7ac0198  lwc1        $f12, 0x198($sp)
    ctx->pc = 0x29a21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29a220: 0xc040c60  jal         func_103180
    ctx->pc = 0x29A220u;
    SET_GPR_U32(ctx, 31, 0x29A228u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29A228u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A228u) { return; }
    ctx->pc = 0x29A228u;
label_29a228:
    // 0x29a228: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x29a228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x29a22c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29a22cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a230: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x29a230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a234: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29a234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a238: 0x0  nop
    ctx->pc = 0x29a238u;
    // NOP
    // 0x29a23c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x29A23Cu;
    {
        const bool branch_taken_0x29a23c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a23c) {
            ctx->pc = 0x29A260u;
            return;
        }
    }
    ctx->pc = 0x29A244u;
    // 0x29a244: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29a244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29a248: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x29a248u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a24c: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x29a24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a250: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29a250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a254: 0x0  nop
    ctx->pc = 0x29a254u;
    // NOP
    // 0x29a258: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29A258u;
    {
        const bool branch_taken_0x29a258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a258) {
            ctx->pc = 0x29A268u;
            return;
        }
    }
    ctx->pc = 0x29A260u;
}
