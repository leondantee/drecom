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

// Function: entry_003316b4
// Address: 0x3316b4 - 0x331c48
void entry_003316b4_0x3316b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003316b4_0x3316b4");
#endif

    switch (ctx->pc) {
        case 0x331784u: goto label_331784;
        case 0x3317b8u: goto label_3317b8;
        case 0x331a64u: goto label_331a64;
        case 0x331a84u: goto label_331a84;
        case 0x331ab8u: goto label_331ab8;
        case 0x331ad8u: goto label_331ad8;
        case 0x331b18u: goto label_331b18;
        case 0x331b7cu: goto label_331b7c;
        case 0x331c08u: goto label_331c08;
        case 0x331c40u: goto label_331c40;
        default: break;
    }

    ctx->pc = 0x3316b4u;

    // 0x3316b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3316b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3316b8: 0x244395b4  addiu       $v1, $v0, -0x6A4C
    ctx->pc = 0x3316b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940084));
    // 0x3316bc: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x3316bcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3316c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3316c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3316c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3316c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3316c8: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x3316c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x3316cc: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x3316ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x3316d0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3316d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3316d4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3316d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3316d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3316d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3316dc: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x3316dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x3316e0: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x3316e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3316e4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3316e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3316e8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3316e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3316ec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3316ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3316f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3316f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3316f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3316f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3316f8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3316f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3316fc: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3316fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x331700: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x331700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x331704: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x331704u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x331708: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x331708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x33170c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x33170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x331710: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x331710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x331714: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x331714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x331718: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x331718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33171c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x33171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x331720: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x331720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x331724: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x331724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x331728: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x331728u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x33172c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x33172cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x331730: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x331730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x331734: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x331734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x331738: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x331738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x33173c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x33173cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x331740: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x331740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x331744: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x331744u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x331748: 0xafa3026c  sw          $v1, 0x26C($sp)
    ctx->pc = 0x331748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
    // 0x33174c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x33174cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x331750: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x331750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x331754: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x331754u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x331758: 0xafa30270  sw          $v1, 0x270($sp)
    ctx->pc = 0x331758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 3));
    // 0x33175c: 0x8fa6026c  lw          $a2, 0x26C($sp)
    ctx->pc = 0x33175cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x331760: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x331760u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331764: 0x0  nop
    ctx->pc = 0x331764u;
    // NOP
    // 0x331768: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33176c: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x33176cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x331770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331774: 0x0  nop
    ctx->pc = 0x331774u;
    // NOP
    // 0x331778: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x331778u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33177c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x33177Cu;
    SET_GPR_U32(ctx, 31, 0x331784u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x33177Cu, 0x331784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331784u;
label_331784:
    // 0x331784: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x331784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
    // 0x331788: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x331788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x33178c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33178cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331790: 0x0  nop
    ctx->pc = 0x331790u;
    // NOP
    // 0x331794: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x331798: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x331798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x33179c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x33179cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x3317a0: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x3317a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3317a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3317a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3317a8: 0x0  nop
    ctx->pc = 0x3317a8u;
    // NOP
    // 0x3317ac: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x3317acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3317b0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3317B0u;
    SET_GPR_U32(ctx, 31, 0x3317B8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3317B0u, 0x3317B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3317B8u;
label_3317b8:
    // 0x3317b8: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x3317b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
    // 0x3317bc: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x3317bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3317c0: 0xafa30220  sw          $v1, 0x220($sp)
    ctx->pc = 0x3317c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 3));
    // 0x3317c4: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x3317c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x3317c8: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x3317c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x3317cc: 0x240600a2  addiu       $a2, $zero, 0xA2
    ctx->pc = 0x3317ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x3317d0: 0xafa60228  sw          $a2, 0x228($sp)
    ctx->pc = 0x3317d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 6));
    // 0x3317d4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3317d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3317d8: 0xafa3022c  sw          $v1, 0x22C($sp)
    ctx->pc = 0x3317d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 3));
    // 0x3317dc: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x3317dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x3317e0: 0x23c00  sll         $a3, $v0, 16
    ctx->pc = 0x3317e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3317e4: 0x8fa60224  lw          $a2, 0x224($sp)
    ctx->pc = 0x3317e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x3317e8: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x3317e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x3317ec: 0x8fa30220  lw          $v1, 0x220($sp)
    ctx->pc = 0x3317ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x3317f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3317f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3317f4: 0xe21825  or          $v1, $a3, $v0
    ctx->pc = 0x3317f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3317f8: 0x8fa6022c  lw          $a2, 0x22C($sp)
    ctx->pc = 0x3317f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x3317fc: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x3317fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x331800: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x331800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x331804: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x331804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x331808: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x331808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33180c: 0xc7a00284  lwc1        $f0, 0x284($sp)
    ctx->pc = 0x33180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331810: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x331810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
    // 0x331814: 0xc7a00288  lwc1        $f0, 0x288($sp)
    ctx->pc = 0x331814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331818: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x331818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x33181c: 0x8faa026c  lw          $t2, 0x26C($sp)
    ctx->pc = 0x33181cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x331820: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x331820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x331824: 0xa1043  sra         $v0, $t2, 1
    ctx->pc = 0x331824u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), 1));
    // 0x331828: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x331828u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33182c: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x33182cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x331830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331834: 0x0  nop
    ctx->pc = 0x331834u;
    // NOP
    // 0x331838: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33183c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x33183cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x331840: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x331840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x331844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331848: 0x0  nop
    ctx->pc = 0x331848u;
    // NOP
    // 0x33184c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x33184cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x331850: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x331850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x331854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331858: 0x0  nop
    ctx->pc = 0x331858u;
    // NOP
    // 0x33185c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x33185cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x331860: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x331860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x331864: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x331864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x331868: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x331868u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x33186c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33186cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331870: 0x0  nop
    ctx->pc = 0x331870u;
    // NOP
    // 0x331874: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x331874u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x331878: 0xc7a10274  lwc1        $f1, 0x274($sp)
    ctx->pc = 0x331878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33187c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33187cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x331880: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x331880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
    // 0x331884: 0x8fab0270  lw          $t3, 0x270($sp)
    ctx->pc = 0x331884u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x331888: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x331888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33188c: 0xb3843  sra         $a3, $t3, 1
    ctx->pc = 0x33188cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 11), 1));
    // 0x331890: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x331890u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x331894: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x331894u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331898: 0x0  nop
    ctx->pc = 0x331898u;
    // NOP
    // 0x33189c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33189cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3318a0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x3318a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x3318a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3318a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3318a8: 0x0  nop
    ctx->pc = 0x3318a8u;
    // NOP
    // 0x3318ac: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3318acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3318b0: 0x3c0840c0  lui         $t0, 0x40C0
    ctx->pc = 0x3318b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16576 << 16));
    // 0x3318b4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3318b4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3318b8: 0x0  nop
    ctx->pc = 0x3318b8u;
    // NOP
    // 0x3318bc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3318bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3318c0: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x3318c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3318c4: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x3318c4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x3318c8: 0xe7ac0278  swc1        $f12, 0x278($sp)
    ctx->pc = 0x3318c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x3318cc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3318ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3318d0: 0x3449cccd  ori         $t1, $v0, 0xCCCD
    ctx->pc = 0x3318d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3318d4: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x3318d4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3318d8: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x3318d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x3318dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3318dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3318e0: 0x0  nop
    ctx->pc = 0x3318e0u;
    // NOP
    // 0x3318e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3318e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3318e8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x3318e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3318ec: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x3318ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x3318f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3318f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3318f4: 0x0  nop
    ctx->pc = 0x3318f4u;
    // NOP
    // 0x3318f8: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x3318f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x3318fc: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x3318fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x331900: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x331900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x331904: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x331904u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x331908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33190c: 0x0  nop
    ctx->pc = 0x33190cu;
    // NOP
    // 0x331910: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x331910u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x331914: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x331914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331918: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x331918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33191c: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x33191cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
    // 0x331920: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x331920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x331924: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x331924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x331928: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x331928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x33192c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33192cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331930: 0x0  nop
    ctx->pc = 0x331930u;
    // NOP
    // 0x331934: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x331934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x331938: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x331938u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x33193c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x33193cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x331940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331944: 0x0  nop
    ctx->pc = 0x331944u;
    // NOP
    // 0x331948: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x331948u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x33194c: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x33194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331950: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x331950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x331954: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x331954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x331958: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x331958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x33195c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x33195cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x331960: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x331960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x331964: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x331964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331968: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x331968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33196c: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x33196cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
    // 0x331970: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x331970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x331974: 0x3466d70a  ori         $a2, $v1, 0xD70A
    ctx->pc = 0x331974u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x331978: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x331978u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33197c: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x33197cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331980: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x331980u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x331984: 0xe7a20278  swc1        $f2, 0x278($sp)
    ctx->pc = 0x331984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x331988: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x331988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x33198c: 0x3466d70a  ori         $a2, $v1, 0xD70A
    ctx->pc = 0x33198cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x331990: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x331990u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x331994: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x331994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331998: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x331998u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33199c: 0xe7a1027c  swc1        $f1, 0x27C($sp)
    ctx->pc = 0x33199cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
    // 0x3319a0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x3319a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x3319a4: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x3319a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3319a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3319a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3319ac: 0xc7a10280  lwc1        $f1, 0x280($sp)
    ctx->pc = 0x3319acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3319b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3319b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3319b4: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x3319b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x3319b8: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x3319b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x3319bc: 0x34c2cccd  ori         $v0, $a2, 0xCCCD
    ctx->pc = 0x3319bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x3319c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3319c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3319c4: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x3319c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3319c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3319c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3319cc: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x3319ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
    // 0x3319d0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3319d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3319d4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3319d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3319d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3319d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3319dc: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x3319dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3319e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3319e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3319e4: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x3319e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
    // 0x3319e8: 0x8e626610  lw          $v0, 0x6610($s3)
    ctx->pc = 0x3319e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
    // 0x3319ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3319ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3319f0: 0x0  nop
    ctx->pc = 0x3319f0u;
    // NOP
    // 0x3319f4: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x3319f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3319f8: 0xc7a10274  lwc1        $f1, 0x274($sp)
    ctx->pc = 0x3319f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3319fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3319fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x331a00: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x331a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
    // 0x331a04: 0x8e626614  lw          $v0, 0x6614($s3)
    ctx->pc = 0x331a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
    // 0x331a08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331a0c: 0x0  nop
    ctx->pc = 0x331a0cu;
    // NOP
    // 0x331a10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331a10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x331a14: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x331a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331a18: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x331a18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x331a1c: 0xe7a10278  swc1        $f1, 0x278($sp)
    ctx->pc = 0x331a1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x331a20: 0x8e666610  lw          $a2, 0x6610($s3)
    ctx->pc = 0x331a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
    // 0x331a24: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x331a24u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331a28: 0x0  nop
    ctx->pc = 0x331a28u;
    // NOP
    // 0x331a2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x331a2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x331a30: 0xc7a1027c  lwc1        $f1, 0x27C($sp)
    ctx->pc = 0x331a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331a34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x331a34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x331a38: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x331a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
    // 0x331a3c: 0x8e626614  lw          $v0, 0x6614($s3)
    ctx->pc = 0x331a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
    // 0x331a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331a44: 0x0  nop
    ctx->pc = 0x331a44u;
    // NOP
    // 0x331a48: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x331a4c: 0xc7a00280  lwc1        $f0, 0x280($sp)
    ctx->pc = 0x331a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331a50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x331a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x331a54: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x331a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x331a58: 0xc7ac0274  lwc1        $f12, 0x274($sp)
    ctx->pc = 0x331a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x331a5c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x331A5Cu;
    SET_GPR_U32(ctx, 31, 0x331A64u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x331A5Cu, 0x331A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A64u;
label_331a64:
    // 0x331a64: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x331a64u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x331a68: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x331a68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x331a6c: 0x24e67000  addiu       $a2, $a3, 0x7000
    ctx->pc = 0x331a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 28672));
    // 0x331a70: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x331a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x331a74: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x331a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x331a78: 0xc7ac0278  lwc1        $f12, 0x278($sp)
    ctx->pc = 0x331a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x331a7c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x331A7Cu;
    SET_GPR_U32(ctx, 31, 0x331A84u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x331A7Cu, 0x331A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A84u;
label_331a84:
    // 0x331a84: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x331a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x331a88: 0x24667900  addiu       $a2, $v1, 0x7900
    ctx->pc = 0x331a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x331a8c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x331a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x331a90: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x331a90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x331a94: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x331a94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x331a98: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x331a98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x331a9c: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x331a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x331aa0: 0x3406fffa  ori         $a2, $zero, 0xFFFA
    ctx->pc = 0x331aa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x331aa4: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x331aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x331aa8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x331aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x331aac: 0xc7ac027c  lwc1        $f12, 0x27C($sp)
    ctx->pc = 0x331aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x331ab0: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x331AB0u;
    SET_GPR_U32(ctx, 31, 0x331AB8u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x331AB0u, 0x331AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331AB8u;
label_331ab8:
    // 0x331ab8: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x331ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x331abc: 0x24e67000  addiu       $a2, $a3, 0x7000
    ctx->pc = 0x331abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 28672));
    // 0x331ac0: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x331ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x331ac4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x331ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x331ac8: 0xc7a00280  lwc1        $f0, 0x280($sp)
    ctx->pc = 0x331ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331acc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x331accu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x331ad0: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x331AD0u;
    SET_GPR_U32(ctx, 31, 0x331AD8u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x331AD0u, 0x331AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331AD8u;
label_331ad8:
    // 0x331ad8: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x331ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x331adc: 0x24827900  addiu       $v0, $a0, 0x7900
    ctx->pc = 0x331adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x331ae0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x331ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x331ae4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x331ae4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x331ae8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x331ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x331aec: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x331aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x331af0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x331af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x331af4: 0x3402fffa  ori         $v0, $zero, 0xFFFA
    ctx->pc = 0x331af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x331af8: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x331af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x331afc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x331afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x331b00: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x331b00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x331b04: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x331b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x331b08: 0x2445e7a8  addiu       $a1, $v0, -0x1858
    ctx->pc = 0x331b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961064));
    // 0x331b0c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x331b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x331b10: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x331B10u;
    SET_GPR_U32(ctx, 31, 0x331B18u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x331B18u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x331B18u) { return; }
    ctx->pc = 0x331B18u;
label_331b18:
    // 0x331b18: 0xae150008  sw          $s5, 0x8($s0)
    ctx->pc = 0x331b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
    // 0x331b1c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x331b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x331b20: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x331b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x331b24: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x331b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x331b28: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x331b28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x331b2c: 0x31378  dsll        $v0, $v1, 13
    ctx->pc = 0x331b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 13);
    // 0x331b30: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x331b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x331b34: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x331b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x331b38: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x331b38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x331b3c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x331b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x331b40: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x331b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x331b44: 0x3c05fff8  lui         $a1, 0xFFF8
    ctx->pc = 0x331b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65528 << 16));
    // 0x331b48: 0x34a5001f  ori         $a1, $a1, 0x1F
    ctx->pc = 0x331b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
    // 0x331b4c: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x331b4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x331b50: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x331b50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x331b54: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x331b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x331b58: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x331b58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x331b5c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x331b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x331b60: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x331b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x331b64: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x331b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x331b68: 0xfc820018  sd          $v0, 0x18($a0)
    ctx->pc = 0x331b68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
    // 0x331b6c: 0x26640018  addiu       $a0, $s3, 0x18
    ctx->pc = 0x331b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x331b70: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x331b70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x331b74: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x331B74u;
    SET_GPR_U32(ctx, 31, 0x331B7Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x331B74u, 0x331B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331B7Cu;
label_331b7c:
    // 0x331b7c: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x331b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x331b80: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x331b80u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x331b84: 0x26a40028  addiu       $a0, $s5, 0x28
    ctx->pc = 0x331b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    // 0x331b88: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x331b88u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x331b8c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x331b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x331b90: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x331b90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x331b94: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x331b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x331b98: 0x34821009  ori         $v0, $a0, 0x1009
    ctx->pc = 0x331b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4105);
    // 0x331b9c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x331b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x331ba0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x331ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x331ba4: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x331ba4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x331ba8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x331ba8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x331bac: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x331bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x331bb0: 0x3444000a  ori         $a0, $v0, 0xA
    ctx->pc = 0x331bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x331bb4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x331bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x331bb8: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x331bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x331bbc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x331bbcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x331bc0: 0x513b8  dsll        $v0, $a1, 14
    ctx->pc = 0x331bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 14);
    // 0x331bc4: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x331bc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x331bc8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x331bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x331bcc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x331bccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x331bd0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x331bd0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x331bd4: 0x61638  dsll        $v0, $a2, 24
    ctx->pc = 0x331bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 24);
    // 0x331bd8: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x331bd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x331bdc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x331bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x331be0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x331be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x331be4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x331be4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x331be8: 0x330bc  dsll32      $a2, $v1, 2
    ctx->pc = 0x331be8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 2));
    // 0x331bec: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x331becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x331bf0: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x331bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x331bf4: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x331bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x331bf8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x331bf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x331bfc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x331bfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x331c00: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x331C00u;
    SET_GPR_U32(ctx, 31, 0x331C08u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x331C00u, 0x331C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331C08u;
label_331c08:
    // 0x331c08: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x331c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x331c0c: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x331c0cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x331c10: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x331c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x331c14: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x331c14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x331c18: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x331c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x331c1c: 0x34571043  ori         $s7, $v0, 0x1043
    ctx->pc = 0x331c1cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x331c20: 0xae970004  sw          $s7, 0x4($s4)
    ctx->pc = 0x331c20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 23));
    // 0x331c24: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x331c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x331c28: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x331c28u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x331c2c: 0x26670018  addiu       $a3, $s3, 0x18
    ctx->pc = 0x331c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x331c30: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x331c30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x331c34: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x331c34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x331c38: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x331C38u;
    SET_GPR_U32(ctx, 31, 0x331C40u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x331C38u, 0x331C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331C40u;
label_331c40:
    // 0x331c40: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x331c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x331c44: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x331c44u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x331c48u;
}
