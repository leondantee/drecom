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

// Function: R10a_stained_glass_fall01_init
// Address: 0x275d00 - 0x276d90
void R10a_stained_glass_fall01_init_0x275d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10a_stained_glass_fall01_init_0x275d00");
#endif

    switch (ctx->pc) {
        case 0x275d44u: goto label_275d44;
        case 0x275d68u: goto label_275d68;
        case 0x275d78u: goto label_275d78;
        case 0x276194u: goto label_276194;
        case 0x2762ccu: goto label_2762cc;
        case 0x276404u: goto label_276404;
        case 0x276444u: goto label_276444;
        case 0x27645cu: goto label_27645c;
        case 0x276480u: goto label_276480;
        case 0x2765a0u: goto label_2765a0;
        case 0x2765a8u: goto label_2765a8;
        case 0x2765dcu: goto label_2765dc;
        case 0x2765e8u: goto label_2765e8;
        case 0x2766d4u: goto label_2766d4;
        case 0x2766f4u: goto label_2766f4;
        case 0x276730u: goto label_276730;
        case 0x276738u: goto label_276738;
        case 0x27676cu: goto label_27676c;
        case 0x276778u: goto label_276778;
        case 0x276864u: goto label_276864;
        case 0x276884u: goto label_276884;
        case 0x2768c0u: goto label_2768c0;
        case 0x2768c8u: goto label_2768c8;
        case 0x2768f4u: goto label_2768f4;
        case 0x27691cu: goto label_27691c;
        case 0x276968u: goto label_276968;
        case 0x276a0cu: goto label_276a0c;
        case 0x276a90u: goto label_276a90;
        case 0x276aacu: goto label_276aac;
        case 0x276ac8u: goto label_276ac8;
        case 0x276b10u: goto label_276b10;
        case 0x276b18u: goto label_276b18;
        case 0x276b44u: goto label_276b44;
        case 0x276b6cu: goto label_276b6c;
        case 0x276bb8u: goto label_276bb8;
        case 0x276c5cu: goto label_276c5c;
        case 0x276ce8u: goto label_276ce8;
        case 0x276d04u: goto label_276d04;
        case 0x276d20u: goto label_276d20;
        default: break;
    }

    ctx->pc = 0x275d00u;

    // 0x275d00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x275d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x275d04: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x275d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x275d08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x275d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x275d0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x275d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x275d10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x275d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x275d14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x275d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x275d18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x275d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x275d1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x275d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x275d20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x275d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x275d24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x275d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x275d2c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x275d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x275d30: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x275d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x275d34: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x275d34u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x275d38: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x275d38u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x275d3c: 0x10000212  b           . + 4 + (0x212 << 2)
    ctx->pc = 0x275D3Cu;
    {
        const bool branch_taken_0x275d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275d3c) {
            ctx->pc = 0x276588u;
            goto label_276588;
        }
    }
    ctx->pc = 0x275D44u;
label_275d44:
    // 0x275d44: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x275d44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x275d48: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x275d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x275d4c: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x275d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x275d50: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x275d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275d54: 0x8c831390  lw          $v1, 0x1390($a0)
    ctx->pc = 0x275d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5008)));
    // 0x275d58: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x275d58u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x275d5c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x275d5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x275d60: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x275D60u;
    {
        const bool branch_taken_0x275d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275d60) {
            ctx->pc = 0x276540u;
            goto label_276540;
        }
    }
    ctx->pc = 0x275D68u;
label_275d68:
    // 0x275d68: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x275d68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x275d6c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x275d6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x275d70: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x275D70u;
    SET_GPR_U32(ctx, 31, 0x275D78u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x275D70u, 0x275D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D78u;
label_275d78:
    // 0x275d78: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x275d78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x275d7c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275d80: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x275d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275d84: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275d88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275d8c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275d90: 0x8e8302d0  lw          $v1, 0x2D0($s4)
    ctx->pc = 0x275d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
    // 0x275d94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275d98: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x275d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275d9c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x275d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x275da0: 0xc420d2c0  lwc1        $f0, -0x2D40($at)
    ctx->pc = 0x275da0u;
    { uint32_t bits = FAST_READ32(0x38D2C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275da4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x275da4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x275da8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275dac: 0x0  nop
    ctx->pc = 0x275dacu;
    // NOP
    // 0x275db0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275db0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275db4: 0x0  nop
    ctx->pc = 0x275db4u;
    // NOP
    // 0x275db8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x275DB8u;
    {
        const bool branch_taken_0x275db8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x275db8) {
            ctx->pc = 0x275DD8u;
            goto label_275dd8;
        }
    }
    ctx->pc = 0x275DC0u;
    // 0x275dc0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x275dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x275dc4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x275dc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275dc8: 0x0  nop
    ctx->pc = 0x275dc8u;
    // NOP
    // 0x275dcc: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x275dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x275dd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x275DD0u;
    {
        const bool branch_taken_0x275dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275dd0) {
            ctx->pc = 0x275DE8u;
            goto label_275de8;
        }
    }
    ctx->pc = 0x275DD8u;
label_275dd8:
    // 0x275dd8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x275dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x275ddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275de0: 0x0  nop
    ctx->pc = 0x275de0u;
    // NOP
    // 0x275de4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x275de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_275de8:
    // 0x275de8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x275dec: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x275decu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x275df0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x275df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x275df4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275df8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275dfc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x275dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x275e00: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x275e00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x275e04: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x275e08: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x275e08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x275e0c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x275e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x275e10: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275e14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275e18: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x275e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x275e1c: 0x3aa02  srl         $s5, $v1, 8
    ctx->pc = 0x275e1cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x275e20: 0xb5a821  addu        $s5, $a1, $s5
    ctx->pc = 0x275e20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x275e24: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x275e28: 0xac357508  sw          $s5, 0x7508($at)
    ctx->pc = 0x275e28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x275e2c: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x275e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x275e30: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x275e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x275e34: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x275E34u;
    {
        const bool branch_taken_0x275e34 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x275e34) {
            ctx->pc = 0x275E50u;
            goto label_275e50;
        }
    }
    ctx->pc = 0x275E3Cu;
    // 0x275e3c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x275e3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275e40: 0x0  nop
    ctx->pc = 0x275e40u;
    // NOP
    // 0x275e44: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x275e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x275e48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x275E48u;
    {
        const bool branch_taken_0x275e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275e48) {
            ctx->pc = 0x275E6Cu;
            goto label_275e6c;
        }
    }
    ctx->pc = 0x275E50u;
label_275e50:
    // 0x275e50: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x275e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x275e54: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x275e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x275e58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x275e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x275e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275e60: 0x0  nop
    ctx->pc = 0x275e60u;
    // NOP
    // 0x275e64: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x275e64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x275e68: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x275e68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_275e6c:
    // 0x275e6c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x275e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x275e70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x275e70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275e74: 0x0  nop
    ctx->pc = 0x275e74u;
    // NOP
    // 0x275e78: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x275e78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x275e7c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x275e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275e80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x275e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x275e84: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x275e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x275e88: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x275e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x275e8c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x275e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x275e90: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x275e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x275e94: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x275e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x275e98: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x275e9c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x275e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x275ea0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x275ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x275ea4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x275ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275ea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x275ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275eac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x275eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x275eb0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x275eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x275eb4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x275eb8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x275eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x275ebc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x275ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x275ec0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x275ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275ec4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x275ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275ec8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x275ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x275ecc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x275eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x275ed0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x275ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x275ed4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x275ed8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x275ed8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x275edc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x275edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x275ee0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x275ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x275ee4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x275EE4u;
    {
        const bool branch_taken_0x275ee4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x275ee4) {
            ctx->pc = 0x275F00u;
            goto label_275f00;
        }
    }
    ctx->pc = 0x275EECu;
    // 0x275eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x275eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275ef0: 0x0  nop
    ctx->pc = 0x275ef0u;
    // NOP
    // 0x275ef4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x275ef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x275ef8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x275EF8u;
    {
        const bool branch_taken_0x275ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275ef8) {
            ctx->pc = 0x275F1Cu;
            goto label_275f1c;
        }
    }
    ctx->pc = 0x275F00u;
label_275f00:
    // 0x275f00: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x275f00u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x275f04: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x275f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x275f08: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x275f08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x275f0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x275f0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275f10: 0x0  nop
    ctx->pc = 0x275f10u;
    // NOP
    // 0x275f14: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x275f14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x275f18: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x275f18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_275f1c:
    // 0x275f1c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x275f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x275f20: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x275f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x275f24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275f28: 0x0  nop
    ctx->pc = 0x275f28u;
    // NOP
    // 0x275f2c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x275f2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x275f30: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x275f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x275f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x275f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275f38: 0x0  nop
    ctx->pc = 0x275f38u;
    // NOP
    // 0x275f3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x275f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x275f40: 0x112240  sll         $a0, $s1, 9
    ctx->pc = 0x275f40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x275f44: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x275f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x275f48: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x275f48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x275f4c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x275f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x275f50: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x275f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x275f54: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x275f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275f58: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x275f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x275f5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275f60: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x275f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275f64: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x275f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x275f68: 0x8e8202d0  lw          $v0, 0x2D0($s4)
    ctx->pc = 0x275f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
    // 0x275f6c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x275f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275f70: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x275f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275f74: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x275f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x275f78: 0xc420d2c8  lwc1        $f0, -0x2D38($at)
    ctx->pc = 0x275f78u;
    { uint32_t bits = FAST_READ32(0x38D2C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275f7c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x275f7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x275f80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275f80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275f84: 0x0  nop
    ctx->pc = 0x275f84u;
    // NOP
    // 0x275f88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275f88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275f8c: 0x0  nop
    ctx->pc = 0x275f8cu;
    // NOP
    // 0x275f90: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x275F90u;
    {
        const bool branch_taken_0x275f90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x275f90) {
            ctx->pc = 0x275FB0u;
            goto label_275fb0;
        }
    }
    ctx->pc = 0x275F98u;
    // 0x275f98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x275f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x275f9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x275f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275fa0: 0x0  nop
    ctx->pc = 0x275fa0u;
    // NOP
    // 0x275fa4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x275fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x275fa8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x275FA8u;
    {
        const bool branch_taken_0x275fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275fa8) {
            ctx->pc = 0x275FC0u;
            goto label_275fc0;
        }
    }
    ctx->pc = 0x275FB0u;
label_275fb0:
    // 0x275fb0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x275fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x275fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x275fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275fb8: 0x0  nop
    ctx->pc = 0x275fb8u;
    // NOP
    // 0x275fbc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x275fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_275fc0:
    // 0x275fc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x275fc4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x275fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x275fc8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x275fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x275fcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x275fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275fd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x275fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275fd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x275fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x275fd8: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x275fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x275fdc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x275fe0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x275fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x275fe4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x275fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x275fe8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275fec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275ff0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x275ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x275ff4: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x275ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x275ff8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x275ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x275ffc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276000: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x276000u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x276004: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276008: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x276008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x27600c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27600Cu;
    {
        const bool branch_taken_0x27600c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27600c) {
            ctx->pc = 0x276028u;
            goto label_276028;
        }
    }
    ctx->pc = 0x276014u;
    // 0x276014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276018: 0x0  nop
    ctx->pc = 0x276018u;
    // NOP
    // 0x27601c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27601cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x276020: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x276020u;
    {
        const bool branch_taken_0x276020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276020) {
            ctx->pc = 0x276044u;
            goto label_276044;
        }
    }
    ctx->pc = 0x276028u;
label_276028:
    // 0x276028: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x276028u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x27602c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27602cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x276030: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x276030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x276034: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276038: 0x0  nop
    ctx->pc = 0x276038u;
    // NOP
    // 0x27603c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27603cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x276040: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x276040u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_276044:
    // 0x276044: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x276044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x276048: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x276048u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27604c: 0x0  nop
    ctx->pc = 0x27604cu;
    // NOP
    // 0x276050: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x276050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x276054: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x276054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276058: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27605c: 0x113240  sll         $a2, $s1, 9
    ctx->pc = 0x27605cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x276060: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x276060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x276064: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x276064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27606c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x27606cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x276070: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x276070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276074: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276074u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276078: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x276078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27607c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27607cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x276080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276084: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276088: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x276088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27608c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27608cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276090: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276090u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276094: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x276094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276098: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x276098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27609c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2760a0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2760a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2760a4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2760a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2760a8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2760a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2760ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2760acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2760b0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2760b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2760b4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2760b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2760b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2760b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2760bc: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2760bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2760c0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2760C0u;
    {
        const bool branch_taken_0x2760c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2760c0) {
            ctx->pc = 0x2760E0u;
            goto label_2760e0;
        }
    }
    ctx->pc = 0x2760C8u;
    // 0x2760c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2760c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2760cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2760ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2760d0: 0x0  nop
    ctx->pc = 0x2760d0u;
    // NOP
    // 0x2760d4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2760d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2760d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2760D8u;
    {
        const bool branch_taken_0x2760d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2760d8) {
            ctx->pc = 0x2760F0u;
            goto label_2760f0;
        }
    }
    ctx->pc = 0x2760E0u;
label_2760e0:
    // 0x2760e0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2760e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2760e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2760e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2760e8: 0x0  nop
    ctx->pc = 0x2760e8u;
    // NOP
    // 0x2760ec: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2760ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2760f0:
    // 0x2760f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2760f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2760f4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2760f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2760f8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2760f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2760fc: 0x2f080  sll         $fp, $v0, 2
    ctx->pc = 0x2760fcu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x276100: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x276100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x276104: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x276104u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276108: 0x161a00  sll         $v1, $s6, 8
    ctx->pc = 0x276108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 8));
    // 0x27610c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27610cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276110: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276110u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276114: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x276114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276118: 0x29880  sll         $s3, $v0, 2
    ctx->pc = 0x276118u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27611c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x27611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x276120: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x276120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x276124: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x276124u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x276128: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x276128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27612c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27612cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276130: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x276130u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x276134: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276138: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x276138u;
    {
        const bool branch_taken_0x276138 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x276138) {
            ctx->pc = 0x276154u;
            goto label_276154;
        }
    }
    ctx->pc = 0x276140u;
    // 0x276140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276144: 0x0  nop
    ctx->pc = 0x276144u;
    // NOP
    // 0x276148: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x276148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27614c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27614Cu;
    {
        const bool branch_taken_0x27614c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27614c) {
            ctx->pc = 0x276170u;
            goto label_276170;
        }
    }
    ctx->pc = 0x276154u;
label_276154:
    // 0x276154: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x276154u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x276158: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x276158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27615c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x27615cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x276160: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x276160u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276164: 0x0  nop
    ctx->pc = 0x276164u;
    // NOP
    // 0x276168: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x276168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27616c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27616cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_276170:
    // 0x276170: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x276170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276174: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276178: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x276178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
    // 0x27617c: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x27617cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x276180: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276184: 0x0  nop
    ctx->pc = 0x276184u;
    // NOP
    // 0x276188: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x276188u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27618c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x27618Cu;
    SET_GPR_U32(ctx, 31, 0x276194u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x27618Cu, 0x276194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276194u;
label_276194:
    // 0x276194: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x276194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x276198: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x276198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x27619c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x27619cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2761a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2761a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2761a4: 0xe4400c30  swc1        $f0, 0xC30($v0)
    ctx->pc = 0x2761a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3120), bits); }
    // 0x2761a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2761a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2761ac: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2761acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2761b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2761b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2761b4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2761b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2761b8: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x2761b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2761bc: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2761bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2761c0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2761c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2761c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2761c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2761c8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2761c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2761cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2761ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2761d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2761d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2761d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2761d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2761d8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2761d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2761dc: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x2761dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2761e0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2761e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2761e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2761e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2761e8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2761e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2761ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2761ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2761f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2761f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2761f4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2761f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2761f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2761F8u;
    {
        const bool branch_taken_0x2761f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2761f8) {
            ctx->pc = 0x276218u;
            goto label_276218;
        }
    }
    ctx->pc = 0x276200u;
    // 0x276200: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x276200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x276204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276208: 0x0  nop
    ctx->pc = 0x276208u;
    // NOP
    // 0x27620c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x27620cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x276210: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x276210u;
    {
        const bool branch_taken_0x276210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276210) {
            ctx->pc = 0x276228u;
            goto label_276228;
        }
    }
    ctx->pc = 0x276218u;
label_276218:
    // 0x276218: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x276218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x27621c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27621cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276220: 0x0  nop
    ctx->pc = 0x276220u;
    // NOP
    // 0x276224: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x276224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_276228:
    // 0x276228: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x276228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27622c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27622cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276230: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x276230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276234: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x276234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x276238: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x276238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27623c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27623cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276240: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x276240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x276244: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x276244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276248: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276248u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27624c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27624cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276250: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x276250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x276254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276258: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x276258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x27625c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27625cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x276260: 0x82b821  addu        $s7, $a0, $v0
    ctx->pc = 0x276260u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x276264: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x276264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276268: 0xac377508  sw          $s7, 0x7508($at)
    ctx->pc = 0x276268u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27626c: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x27626cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x276270: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x276270u;
    {
        const bool branch_taken_0x276270 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x276270) {
            ctx->pc = 0x27628Cu;
            goto label_27628c;
        }
    }
    ctx->pc = 0x276278u;
    // 0x276278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27627c: 0x0  nop
    ctx->pc = 0x27627cu;
    // NOP
    // 0x276280: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x276280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x276284: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x276284u;
    {
        const bool branch_taken_0x276284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276284) {
            ctx->pc = 0x2762A8u;
            goto label_2762a8;
        }
    }
    ctx->pc = 0x27628Cu;
label_27628c:
    // 0x27628c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x27628cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x276290: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x276290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x276294: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x276294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x276298: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27629c: 0x0  nop
    ctx->pc = 0x27629cu;
    // NOP
    // 0x2762a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2762a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2762a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2762a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2762a8:
    // 0x2762a8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2762a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2762ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2762acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2762b0: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x2762b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x2762b4: 0x3453126f  ori         $s3, $v0, 0x126F
    ctx->pc = 0x2762b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2762b8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2762b8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2762bc: 0x0  nop
    ctx->pc = 0x2762bcu;
    // NOP
    // 0x2762c0: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2762c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2762c4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2762C4u;
    SET_GPR_U32(ctx, 31, 0x2762CCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2762C4u, 0x2762CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2762CCu;
label_2762cc:
    // 0x2762cc: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x2762ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x2762d0: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x2762d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2762d4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2762d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2762d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2762d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2762dc: 0xe4400c34  swc1        $f0, 0xC34($v0)
    ctx->pc = 0x2762dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3124), bits); }
    // 0x2762e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2762e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2762e4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2762e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2762e8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2762e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2762ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2762ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2762f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2762f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2762f4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2762f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2762f8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2762f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2762fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2762fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276300: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276300u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276304: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x276304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276308: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x276308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27630c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27630cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276310: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x276310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x276314: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x276314u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x276318: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x276318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27631c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27631cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276320: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x276320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x276324: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x276324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276328: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x276328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27632c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x27632cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x276330: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x276330u;
    {
        const bool branch_taken_0x276330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276330) {
            ctx->pc = 0x276350u;
            goto label_276350;
        }
    }
    ctx->pc = 0x276338u;
    // 0x276338: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x276338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27633c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27633cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276340: 0x0  nop
    ctx->pc = 0x276340u;
    // NOP
    // 0x276344: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x276344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x276348: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x276348u;
    {
        const bool branch_taken_0x276348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276348) {
            ctx->pc = 0x276360u;
            goto label_276360;
        }
    }
    ctx->pc = 0x276350u;
label_276350:
    // 0x276350: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x276350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x276354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276358: 0x0  nop
    ctx->pc = 0x276358u;
    // NOP
    // 0x27635c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x27635cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_276360:
    // 0x276360: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x276360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276364: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276364u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276368: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x276368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27636c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27636cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x276370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276374: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276378: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x276378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27637c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27637cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276380: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276380u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276384: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x276384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276388: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x276388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27638c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276390: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x276390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x276394: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x276394u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x276398: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x276398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27639c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27639cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2763a0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2763a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2763a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2763a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2763a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2763A8u;
    {
        const bool branch_taken_0x2763a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2763a8) {
            ctx->pc = 0x2763C4u;
            goto label_2763c4;
        }
    }
    ctx->pc = 0x2763B0u;
    // 0x2763b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2763b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2763b4: 0x0  nop
    ctx->pc = 0x2763b4u;
    // NOP
    // 0x2763b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2763b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2763bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2763BCu;
    {
        const bool branch_taken_0x2763bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2763bc) {
            ctx->pc = 0x2763E0u;
            goto label_2763e0;
        }
    }
    ctx->pc = 0x2763C4u;
label_2763c4:
    // 0x2763c4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2763c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2763c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2763c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2763cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2763ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2763d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2763d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2763d4: 0x0  nop
    ctx->pc = 0x2763d4u;
    // NOP
    // 0x2763d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2763d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2763dc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2763dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2763e0:
    // 0x2763e0: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2763e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2763e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2763e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2763e8: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x2763e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x2763ec: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2763ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2763f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2763f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2763f4: 0x0  nop
    ctx->pc = 0x2763f4u;
    // NOP
    // 0x2763f8: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2763f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2763fc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2763FCu;
    SET_GPR_U32(ctx, 31, 0x276404u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2763FCu, 0x276404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276404u;
label_276404:
    // 0x276404: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x276404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x276408: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x276408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x27640c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x27640cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276410: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x276410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x276414: 0xe4400c38  swc1        $f0, 0xC38($v0)
    ctx->pc = 0x276414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3128), bits); }
    // 0x276418: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x276418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27641c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x27641cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x276420: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x276420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x276424: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x276424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x276428: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x276428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27642c: 0x8e8202d0  lw          $v0, 0x2D0($s4)
    ctx->pc = 0x27642cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
    // 0x276430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276434: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x276434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x276438: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x276438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x27643c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x27643Cu;
    SET_GPR_U32(ctx, 31, 0x276444u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x276444u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x276444u) { return; }
    ctx->pc = 0x276444u;
label_276444:
    // 0x276444: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x276444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x276448: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x276448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27644c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27644cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x276450: 0x2446d2c0  addiu       $a2, $v0, -0x2D40
    ctx->pc = 0x276450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955712));
    // 0x276454: 0xc040c80  jal         func_103200
    ctx->pc = 0x276454u;
    SET_GPR_U32(ctx, 31, 0x27645Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x27645Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27645Cu) { return; }
    ctx->pc = 0x27645Cu;
label_27645c:
    // 0x27645c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x27645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276460: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x276460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276464: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x276464u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276468: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x276468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27646c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x27646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276470: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276474: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x276474u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x276478: 0xc045630  jal         func_1158C0
    ctx->pc = 0x276478u;
    SET_GPR_U32(ctx, 31, 0x276480u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x276478u, 0x276480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276480u;
label_276480:
    // 0x276480: 0x1119c0  sll         $v1, $s1, 7
    ctx->pc = 0x276480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x276484: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x276484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x276488: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x276488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27648c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27648cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x276490: 0xe4601830  swc1        $f0, 0x1830($v1)
    ctx->pc = 0x276490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6192), bits); }
    // 0x276494: 0x1119c0  sll         $v1, $s1, 7
    ctx->pc = 0x276494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x276498: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x276498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x27649c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x27649cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2764a0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2764a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2764a4: 0xc4611830  lwc1        $f1, 0x1830($v1)
    ctx->pc = 0x2764a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2764a8: 0x3c044498  lui         $a0, 0x4498
    ctx->pc = 0x2764a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17560 << 16));
    // 0x2764ac: 0x34830800  ori         $v1, $a0, 0x800
    ctx->pc = 0x2764acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
    // 0x2764b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2764b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2764b4: 0x0  nop
    ctx->pc = 0x2764b4u;
    // NOP
    // 0x2764b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2764b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2764bc: 0x0  nop
    ctx->pc = 0x2764bcu;
    // NOP
    // 0x2764c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2764C0u;
    {
        const bool branch_taken_0x2764c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2764c0) {
            ctx->pc = 0x2764E0u;
            goto label_2764e0;
        }
    }
    ctx->pc = 0x2764C8u;
    // 0x2764c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2764c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2764cc: 0x111a40  sll         $v1, $s1, 9
    ctx->pc = 0x2764ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x2764d0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2764d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2764d4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x2764d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2764d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2764d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2764dc: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2764dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_2764e0:
    // 0x2764e0: 0x1119c0  sll         $v1, $s1, 7
    ctx->pc = 0x2764e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x2764e4: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2764e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2764e8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2764e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2764ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2764ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2764f0: 0xc4611830  lwc1        $f1, 0x1830($v1)
    ctx->pc = 0x2764f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2764f4: 0x3c0343ad  lui         $v1, 0x43AD
    ctx->pc = 0x2764f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17325 << 16));
    // 0x2764f8: 0x3464c000  ori         $a0, $v1, 0xC000
    ctx->pc = 0x2764f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x2764fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2764fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276500: 0x0  nop
    ctx->pc = 0x276500u;
    // NOP
    // 0x276504: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x276504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276508: 0x0  nop
    ctx->pc = 0x276508u;
    // NOP
    // 0x27650c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x27650Cu;
    {
        const bool branch_taken_0x27650c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27650c) {
            ctx->pc = 0x276538u;
            goto label_276538;
        }
    }
    ctx->pc = 0x276514u;
    // 0x276514: 0x111a40  sll         $v1, $s1, 9
    ctx->pc = 0x276514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x276518: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x276518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x27651c: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x27651cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276520: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x276520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x276524: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x276524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x276528: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x276528u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27652c: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x27652cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276530: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x276534: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x276534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_276538:
    // 0x276538: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x276538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27653c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x27653cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_276540:
    // 0x276540: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x276540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276544: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x276544u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x276548: 0x0  nop
    ctx->pc = 0x276548u;
    // NOP
    // 0x27654c: 0x0  nop
    ctx->pc = 0x27654cu;
    // NOP
    // 0x276550: 0x1810  mfhi        $v1
    ctx->pc = 0x276550u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x276554: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x276554u;
    {
        const bool branch_taken_0x276554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x276554) {
            ctx->pc = 0x276568u;
            goto label_276568;
        }
    }
    ctx->pc = 0x27655Cu;
    // 0x27655c: 0x2415001e  addiu       $s5, $zero, 0x1E
    ctx->pc = 0x27655cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x276560: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x276560u;
    {
        const bool branch_taken_0x276560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276560) {
            ctx->pc = 0x276570u;
            goto label_276570;
        }
    }
    ctx->pc = 0x276568u;
label_276568:
    // 0x276568: 0x2415001d  addiu       $s5, $zero, 0x1D
    ctx->pc = 0x276568u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x27656c: 0x0  nop
    ctx->pc = 0x27656cu;
    // NOP
label_276570:
    // 0x276570: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x276570u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x276574: 0x1460fdfc  bnez        $v1, . + 4 + (-0x204 << 2)
    ctx->pc = 0x276574u;
    {
        const bool branch_taken_0x276574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x276574) {
            ctx->pc = 0x275D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275d68;
        }
    }
    ctx->pc = 0x27657Cu;
    // 0x27657c: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x27657cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x276580: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x276580u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x276584: 0x0  nop
    ctx->pc = 0x276584u;
    // NOP
label_276588:
    // 0x276588: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x276588u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x27658c: 0x1460fded  bnez        $v1, . + 4 + (-0x213 << 2)
    ctx->pc = 0x27658Cu;
    {
        const bool branch_taken_0x27658c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27658c) {
            ctx->pc = 0x275D44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275d44;
        }
    }
    ctx->pc = 0x276594u;
    // 0x276594: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x276594u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276598: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x276598u;
    {
        const bool branch_taken_0x276598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276598) {
            ctx->pc = 0x276718u;
            goto label_276718;
        }
    }
    ctx->pc = 0x2765A0u;
label_2765a0:
    // 0x2765a0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2765A0u;
    SET_GPR_U32(ctx, 31, 0x2765A8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2765A0u, 0x2765A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2765A8u;
label_2765a8:
    // 0x2765a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2765a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2765ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2765acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2765b0: 0x0  nop
    ctx->pc = 0x2765b0u;
    // NOP
    // 0x2765b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2765b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2765b8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2765b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2765bc: 0xe420d2cc  swc1        $f0, -0x2D34($at)
    ctx->pc = 0x2765bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38D2CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38D2CCu, _value); } while (0); }
    // 0x2765c0: 0x24042c06  addiu       $a0, $zero, 0x2C06
    ctx->pc = 0x2765c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11270));
    // 0x2765c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2765c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2765c8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2765c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2765cc: 0x2446d2c0  addiu       $a2, $v0, -0x2D40
    ctx->pc = 0x2765ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955712));
    // 0x2765d0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2765d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2765d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2765D4u;
    SET_GPR_U32(ctx, 31, 0x2765DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2765D4u, 0x2765DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2765DCu;
label_2765dc:
    // 0x2765dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2765dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2765e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2765E0u;
    SET_GPR_U32(ctx, 31, 0x2765E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2765E0u, 0x2765E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2765E8u;
label_2765e8:
    // 0x2765e8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2765e8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2765ec: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2765ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2765f0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2765f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2765f4: 0x12630046  beq         $s3, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2765F4u;
    {
        const bool branch_taken_0x2765f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2765f4) {
            ctx->pc = 0x276710u;
            goto label_276710;
        }
    }
    ctx->pc = 0x2765FCu;
    // 0x2765fc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2765fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x276600: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x276600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
    // 0x276604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x276604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276608: 0x0  nop
    ctx->pc = 0x276608u;
    // NOP
    // 0x27660c: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x27660cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x276610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x276610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276614: 0x0  nop
    ctx->pc = 0x276614u;
    // NOP
    // 0x276618: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x276618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x27661c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27661cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276620: 0x0  nop
    ctx->pc = 0x276620u;
    // NOP
    // 0x276624: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x276624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x276628: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x276628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x27662c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27662cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276630: 0x0  nop
    ctx->pc = 0x276630u;
    // NOP
    // 0x276634: 0xe6600060  swc1        $f0, 0x60($s3)
    ctx->pc = 0x276634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
    // 0x276638: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x276638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x27663c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27663cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276640: 0x0  nop
    ctx->pc = 0x276640u;
    // NOP
    // 0x276644: 0xe6600068  swc1        $f0, 0x68($s3)
    ctx->pc = 0x276644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
    // 0x276648: 0x32040003  andi        $a0, $s0, 0x3
    ctx->pc = 0x276648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x27664c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27664cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x276650: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x276650u;
    {
        const bool branch_taken_0x276650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x276650) {
            ctx->pc = 0x2766A4u;
            goto label_2766a4;
        }
    }
    ctx->pc = 0x276658u;
    // 0x276658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x276658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27665c: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27665Cu;
    {
        const bool branch_taken_0x27665c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27665c) {
            ctx->pc = 0x27668Cu;
            goto label_27668c;
        }
    }
    ctx->pc = 0x276664u;
    // 0x276664: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276664u;
    {
        const bool branch_taken_0x276664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x276664) {
            ctx->pc = 0x276674u;
            goto label_276674;
        }
    }
    ctx->pc = 0x27666Cu;
    // 0x27666c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x27666Cu;
    {
        const bool branch_taken_0x27666c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27666c) {
            ctx->pc = 0x2766B8u;
            goto label_2766b8;
        }
    }
    ctx->pc = 0x276674u;
label_276674:
    // 0x276674: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x276674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x276678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27667c: 0x0  nop
    ctx->pc = 0x27667cu;
    // NOP
    // 0x276680: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x276680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x276684: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x276684u;
    {
        const bool branch_taken_0x276684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276684) {
            ctx->pc = 0x2766B8u;
            goto label_2766b8;
        }
    }
    ctx->pc = 0x27668Cu;
label_27668c:
    // 0x27668c: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x27668cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x276690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276694: 0x0  nop
    ctx->pc = 0x276694u;
    // NOP
    // 0x276698: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x276698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x27669c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27669Cu;
    {
        const bool branch_taken_0x27669c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27669c) {
            ctx->pc = 0x2766B8u;
            goto label_2766b8;
        }
    }
    ctx->pc = 0x2766A4u;
label_2766a4:
    // 0x2766a4: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2766a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2766a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2766a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2766ac: 0x0  nop
    ctx->pc = 0x2766acu;
    // NOP
    // 0x2766b0: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x2766b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x2766b4: 0x0  nop
    ctx->pc = 0x2766b4u;
    // NOP
label_2766b8:
    // 0x2766b8: 0x3c02bfae  lui         $v0, 0xBFAE
    ctx->pc = 0x2766b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49070 << 16));
    // 0x2766bc: 0x34425727  ori         $v0, $v0, 0x5727
    ctx->pc = 0x2766bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22311);
    // 0x2766c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2766c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2766c4: 0x0  nop
    ctx->pc = 0x2766c4u;
    // NOP
    // 0x2766c8: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x2766c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x2766cc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2766CCu;
    SET_GPR_U32(ctx, 31, 0x2766D4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2766CCu, 0x2766D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2766D4u;
label_2766d4:
    // 0x2766d4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2766d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2766d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2766d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2766dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2766dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2766e0: 0x0  nop
    ctx->pc = 0x2766e0u;
    // NOP
    // 0x2766e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2766e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2766e8: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x2766e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x2766ec: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2766ECu;
    SET_GPR_U32(ctx, 31, 0x2766F4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2766ECu, 0x2766F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2766F4u;
label_2766f4:
    // 0x2766f4: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2766f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2766f8: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x2766f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2766fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2766fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276700: 0x0  nop
    ctx->pc = 0x276700u;
    // NOP
    // 0x276704: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276708: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x276708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x27670c: 0x0  nop
    ctx->pc = 0x27670cu;
    // NOP
label_276710:
    // 0x276710: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x276710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x276714: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x276714u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_276718:
    // 0x276718: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x276718u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x27671c: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
    ctx->pc = 0x27671Cu;
    {
        const bool branch_taken_0x27671c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27671c) {
            ctx->pc = 0x2765A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2765a0;
        }
    }
    ctx->pc = 0x276724u;
    // 0x276724: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x276724u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276728: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x276728u;
    {
        const bool branch_taken_0x276728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276728) {
            ctx->pc = 0x2768A8u;
            goto label_2768a8;
        }
    }
    ctx->pc = 0x276730u;
label_276730:
    // 0x276730: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x276730u;
    SET_GPR_U32(ctx, 31, 0x276738u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x276730u, 0x276738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276738u;
label_276738:
    // 0x276738: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x276738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27673c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27673cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276740: 0x0  nop
    ctx->pc = 0x276740u;
    // NOP
    // 0x276744: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276748: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x276748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x27674c: 0xe420d2cc  swc1        $f0, -0x2D34($at)
    ctx->pc = 0x27674cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38D2CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38D2CCu, _value); } while (0); }
    // 0x276750: 0x24042c26  addiu       $a0, $zero, 0x2C26
    ctx->pc = 0x276750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11302));
    // 0x276754: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x276754u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276758: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x276758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27675c: 0x2446d2c0  addiu       $a2, $v0, -0x2D40
    ctx->pc = 0x27675cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955712));
    // 0x276760: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x276760u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276764: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x276764u;
    SET_GPR_U32(ctx, 31, 0x27676Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x276764u, 0x27676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27676Cu;
label_27676c:
    // 0x27676c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27676cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x276770: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x276770u;
    SET_GPR_U32(ctx, 31, 0x276778u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x276770u, 0x276778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276778u;
label_276778:
    // 0x276778: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x276778u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27677c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x27677cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x276780: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x276780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x276784: 0x12640046  beq         $s3, $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x276784u;
    {
        const bool branch_taken_0x276784 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        if (branch_taken_0x276784) {
            ctx->pc = 0x2768A0u;
            goto label_2768a0;
        }
    }
    ctx->pc = 0x27678Cu;
    // 0x27678c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x27678cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x276790: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x276790u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
    // 0x276794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x276794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276798: 0x0  nop
    ctx->pc = 0x276798u;
    // NOP
    // 0x27679c: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x27679cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x2767a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2767a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2767a4: 0x0  nop
    ctx->pc = 0x2767a4u;
    // NOP
    // 0x2767a8: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x2767a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x2767ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2767acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2767b0: 0x0  nop
    ctx->pc = 0x2767b0u;
    // NOP
    // 0x2767b4: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x2767b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x2767b8: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2767b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2767bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2767bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2767c0: 0x0  nop
    ctx->pc = 0x2767c0u;
    // NOP
    // 0x2767c4: 0xe6600060  swc1        $f0, 0x60($s3)
    ctx->pc = 0x2767c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
    // 0x2767c8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2767c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2767cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2767ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2767d0: 0x0  nop
    ctx->pc = 0x2767d0u;
    // NOP
    // 0x2767d4: 0xe6600068  swc1        $f0, 0x68($s3)
    ctx->pc = 0x2767d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
    // 0x2767d8: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x2767d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x2767dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2767dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2767e0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2767E0u;
    {
        const bool branch_taken_0x2767e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2767e0) {
            ctx->pc = 0x276834u;
            goto label_276834;
        }
    }
    ctx->pc = 0x2767E8u;
    // 0x2767e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2767e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2767ec: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2767ECu;
    {
        const bool branch_taken_0x2767ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2767ec) {
            ctx->pc = 0x27681Cu;
            goto label_27681c;
        }
    }
    ctx->pc = 0x2767F4u;
    // 0x2767f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2767F4u;
    {
        const bool branch_taken_0x2767f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2767f4) {
            ctx->pc = 0x276804u;
            goto label_276804;
        }
    }
    ctx->pc = 0x2767FCu;
    // 0x2767fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2767FCu;
    {
        const bool branch_taken_0x2767fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2767fc) {
            ctx->pc = 0x276848u;
            goto label_276848;
        }
    }
    ctx->pc = 0x276804u;
label_276804:
    // 0x276804: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x276804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x276808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27680c: 0x0  nop
    ctx->pc = 0x27680cu;
    // NOP
    // 0x276810: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x276810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x276814: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x276814u;
    {
        const bool branch_taken_0x276814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276814) {
            ctx->pc = 0x276848u;
            goto label_276848;
        }
    }
    ctx->pc = 0x27681Cu;
label_27681c:
    // 0x27681c: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x27681cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
    // 0x276820: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276824: 0x0  nop
    ctx->pc = 0x276824u;
    // NOP
    // 0x276828: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x276828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x27682c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27682Cu;
    {
        const bool branch_taken_0x27682c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27682c) {
            ctx->pc = 0x276848u;
            goto label_276848;
        }
    }
    ctx->pc = 0x276834u;
label_276834:
    // 0x276834: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x276834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x276838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27683c: 0x0  nop
    ctx->pc = 0x27683cu;
    // NOP
    // 0x276840: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x276840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x276844: 0x0  nop
    ctx->pc = 0x276844u;
    // NOP
label_276848:
    // 0x276848: 0x3c02bfae  lui         $v0, 0xBFAE
    ctx->pc = 0x276848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49070 << 16));
    // 0x27684c: 0x34425727  ori         $v0, $v0, 0x5727
    ctx->pc = 0x27684cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22311);
    // 0x276850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276854: 0x0  nop
    ctx->pc = 0x276854u;
    // NOP
    // 0x276858: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x276858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x27685c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27685Cu;
    SET_GPR_U32(ctx, 31, 0x276864u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27685Cu, 0x276864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276864u;
label_276864:
    // 0x276864: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x276864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x276868: 0x34450fdb  ori         $a1, $v0, 0xFDB
    ctx->pc = 0x276868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x27686c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x27686cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276870: 0x0  nop
    ctx->pc = 0x276870u;
    // NOP
    // 0x276874: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276878: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x276878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x27687c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27687Cu;
    SET_GPR_U32(ctx, 31, 0x276884u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27687Cu, 0x276884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276884u;
label_276884:
    // 0x276884: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x276884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x276888: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x276888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x27688c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x27688cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276890: 0x0  nop
    ctx->pc = 0x276890u;
    // NOP
    // 0x276894: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276898: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x276898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x27689c: 0x0  nop
    ctx->pc = 0x27689cu;
    // NOP
label_2768a0:
    // 0x2768a0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2768a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2768a4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2768a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2768a8:
    // 0x2768a8: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x2768a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2768ac: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
    ctx->pc = 0x2768ACu;
    {
        const bool branch_taken_0x2768ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2768ac) {
            ctx->pc = 0x276730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276730;
        }
    }
    ctx->pc = 0x2768B4u;
    // 0x2768b4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2768b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2768b8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x2768B8u;
    {
        const bool branch_taken_0x2768b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2768b8) {
            ctx->pc = 0x276AF8u;
            goto label_276af8;
        }
    }
    ctx->pc = 0x2768C0u;
label_2768c0:
    // 0x2768c0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2768C0u;
    SET_GPR_U32(ctx, 31, 0x2768C8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2768C0u, 0x2768C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2768C8u;
label_2768c8:
    // 0x2768c8: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x2768c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x2768cc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2768ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2768d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2768d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2768d4: 0x0  nop
    ctx->pc = 0x2768d4u;
    // NOP
    // 0x2768d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2768d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2768dc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2768dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2768e0: 0xc420d2c0  lwc1        $f0, -0x2D40($at)
    ctx->pc = 0x2768e0u;
    { uint32_t bits = FAST_READ32(0x38D2C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2768e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2768e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2768e8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2768e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2768ec: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2768ECu;
    SET_GPR_U32(ctx, 31, 0x2768F4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2768ECu, 0x2768F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2768F4u;
label_2768f4:
    // 0x2768f4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2768f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2768f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2768f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2768fc: 0x0  nop
    ctx->pc = 0x2768fcu;
    // NOP
    // 0x276900: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276900u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276904: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x276904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x276908: 0xc420d2c4  lwc1        $f0, -0x2D3C($at)
    ctx->pc = 0x276908u;
    { uint32_t bits = FAST_READ32(0x38D2C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27690c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27690cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x276910: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x276910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x276914: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276914u;
    SET_GPR_U32(ctx, 31, 0x27691Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276914u, 0x27691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27691Cu;
label_27691c:
    // 0x27691c: 0x3c0344d4  lui         $v1, 0x44D4
    ctx->pc = 0x27691cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17620 << 16));
    // 0x276920: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x276920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x276924: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276928: 0x0  nop
    ctx->pc = 0x276928u;
    // NOP
    // 0x27692c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27692cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276930: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x276930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x276934: 0xc420d2c8  lwc1        $f0, -0x2D38($at)
    ctx->pc = 0x276934u;
    { uint32_t bits = FAST_READ32(0x38D2C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276938: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27693c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x27693cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x276940: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x276940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x276944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276948: 0x0  nop
    ctx->pc = 0x276948u;
    // NOP
    // 0x27694c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x27694cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x276950: 0x24040b05  addiu       $a0, $zero, 0xB05
    ctx->pc = 0x276950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2821));
    // 0x276954: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x276954u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276958: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x276958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27695c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27695cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276960: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x276960u;
    SET_GPR_U32(ctx, 31, 0x276968u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x276960u, 0x276968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276968u;
label_276968:
    // 0x276968: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x27696c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x27696cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x276970: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x276970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276974: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276978: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276978u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x27697c: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x27697cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x276980: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276984: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276984u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276988: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x276988u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x27698c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x27698cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x276990: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x276990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x276994: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x276994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x276998: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27699c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x27699cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2769a0: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2769a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2769a4: 0xa082011a  sb          $v0, 0x11A($a0)
    ctx->pc = 0x2769a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 2));
    // 0x2769a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2769a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2769ac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2769acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2769b0: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2769b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2769b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2769b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2769b8: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2769b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2769bc: 0xa060011c  sb          $zero, 0x11C($v1)
    ctx->pc = 0x2769bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2769c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2769c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2769c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2769c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2769c8: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2769c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2769cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2769ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2769d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2769d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2769d4: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2769d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2769d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2769d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2769dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2769dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2769e0: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2769e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2769e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2769e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2769e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2769e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2769ec: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2769ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2769f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2769f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2769f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2769f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2769f8: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2769f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2769fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2769fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276a00: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x276a00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x276a04: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x276A04u;
    SET_GPR_U32(ctx, 31, 0x276A0Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x276A04u, 0x276A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A0Cu;
label_276a0c:
    // 0x276a0c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276a10: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x276a10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x276a14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276a18: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x276a18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x276a1c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x276a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x276a20: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x276a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x276a24: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276A24u;
    {
        const bool branch_taken_0x276a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x276a24) {
            ctx->pc = 0x276A38u;
            goto label_276a38;
        }
    }
    ctx->pc = 0x276A2Cu;
    // 0x276a2c: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x276a2cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276a30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x276A30u;
    {
        const bool branch_taken_0x276a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276a30) {
            ctx->pc = 0x276A58u;
            goto label_276a58;
        }
    }
    ctx->pc = 0x276A38u;
label_276a38:
    // 0x276a38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276a3c: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x276a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x276a40: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276a44: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x276a44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x276a48: 0x245e0118  addiu       $fp, $v0, 0x118
    ctx->pc = 0x276a48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x276a4c: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x276a4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x276a50: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x276a50u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276a54: 0x0  nop
    ctx->pc = 0x276a54u;
    // NOP
label_276a58:
    // 0x276a58: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x276a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x276a5c: 0x2462a610  addiu       $v0, $v1, -0x59F0
    ctx->pc = 0x276a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x276a60: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x276a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x276a64: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x276a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x276a68: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x276a68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276a6c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x276a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x276a70: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x276a70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
    // 0x276a74: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x276a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x276a78: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x276a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x276a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276a80: 0x0  nop
    ctx->pc = 0x276a80u;
    // NOP
    // 0x276a84: 0xe66000ac  swc1        $f0, 0xAC($s3)
    ctx->pc = 0x276a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 172), bits); }
    // 0x276a88: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276A88u;
    SET_GPR_U32(ctx, 31, 0x276A90u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276A88u, 0x276A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A90u;
label_276a90:
    // 0x276a90: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x276a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x276a94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276a98: 0x0  nop
    ctx->pc = 0x276a98u;
    // NOP
    // 0x276a9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276aa0: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x276aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x276aa4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276AA4u;
    SET_GPR_U32(ctx, 31, 0x276AACu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276AA4u, 0x276AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276AACu;
label_276aac:
    // 0x276aac: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x276aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x276ab0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276ab4: 0x0  nop
    ctx->pc = 0x276ab4u;
    // NOP
    // 0x276ab8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276ab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276abc: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x276abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x276ac0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276AC0u;
    SET_GPR_U32(ctx, 31, 0x276AC8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276AC0u, 0x276AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276AC8u;
label_276ac8:
    // 0x276ac8: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x276ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
    // 0x276acc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x276accu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276ad0: 0x0  nop
    ctx->pc = 0x276ad0u;
    // NOP
    // 0x276ad4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276ad8: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x276ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x276adc: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x276adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
    // 0x276ae0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276ae0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276ae4: 0x0  nop
    ctx->pc = 0x276ae4u;
    // NOP
    // 0x276ae8: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x276ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x276aec: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x276aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x276af0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x276af0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x276af4: 0x0  nop
    ctx->pc = 0x276af4u;
    // NOP
label_276af8:
    // 0x276af8: 0x2a030030  slti        $v1, $s0, 0x30
    ctx->pc = 0x276af8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x276afc: 0x1460ff70  bnez        $v1, . + 4 + (-0x90 << 2)
    ctx->pc = 0x276AFCu;
    {
        const bool branch_taken_0x276afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x276afc) {
            ctx->pc = 0x2768C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2768c0;
        }
    }
    ctx->pc = 0x276B04u;
    // 0x276b04: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x276b04u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276b08: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x276B08u;
    {
        const bool branch_taken_0x276b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276b08) {
            ctx->pc = 0x276D50u;
            goto label_276d50;
        }
    }
    ctx->pc = 0x276B10u;
label_276b10:
    // 0x276b10: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276B10u;
    SET_GPR_U32(ctx, 31, 0x276B18u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276B10u, 0x276B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B18u;
label_276b18:
    // 0x276b18: 0x3c0344d4  lui         $v1, 0x44D4
    ctx->pc = 0x276b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17620 << 16));
    // 0x276b1c: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x276b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x276b20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276b24: 0x0  nop
    ctx->pc = 0x276b24u;
    // NOP
    // 0x276b28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276b28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276b2c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x276b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x276b30: 0xc420d2c0  lwc1        $f0, -0x2D40($at)
    ctx->pc = 0x276b30u;
    { uint32_t bits = FAST_READ32(0x38D2C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276b34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276b34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x276b38: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x276b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x276b3c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276B3Cu;
    SET_GPR_U32(ctx, 31, 0x276B44u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276B3Cu, 0x276B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B44u;
label_276b44:
    // 0x276b44: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x276b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x276b48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276b4c: 0x0  nop
    ctx->pc = 0x276b4cu;
    // NOP
    // 0x276b50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276b50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276b54: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x276b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x276b58: 0xc420d2c4  lwc1        $f0, -0x2D3C($at)
    ctx->pc = 0x276b58u;
    { uint32_t bits = FAST_READ32(0x38D2C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276b5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x276b60: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x276b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x276b64: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276B64u;
    SET_GPR_U32(ctx, 31, 0x276B6Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276B64u, 0x276B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B6Cu;
label_276b6c:
    // 0x276b6c: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x276b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x276b70: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x276b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x276b74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276b78: 0x0  nop
    ctx->pc = 0x276b78u;
    // NOP
    // 0x276b7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276b7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276b80: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x276b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x276b84: 0xc420d2c8  lwc1        $f0, -0x2D38($at)
    ctx->pc = 0x276b84u;
    { uint32_t bits = FAST_READ32(0x38D2C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276b88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x276b88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x276b8c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x276b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x276b90: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x276b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x276b94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276b98: 0x0  nop
    ctx->pc = 0x276b98u;
    // NOP
    // 0x276b9c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x276b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x276ba0: 0x24040b05  addiu       $a0, $zero, 0xB05
    ctx->pc = 0x276ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2821));
    // 0x276ba4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x276ba4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276ba8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x276ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x276bac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x276bacu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276bb0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x276BB0u;
    SET_GPR_U32(ctx, 31, 0x276BB8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x276BB0u, 0x276BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276BB8u;
label_276bb8:
    // 0x276bb8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276bbc: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x276bbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x276bc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x276bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276bc4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276bc8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276bcc: 0xa044013a  sb          $a0, 0x13A($v0)
    ctx->pc = 0x276bccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x276bd0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276bd4: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x276bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x276bd8: 0xa060011d  sb          $zero, 0x11D($v1)
    ctx->pc = 0x276bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x276bdc: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x276bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x276be0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276be4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x276be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x276be8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x276be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276bec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276bf0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276bf4: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x276bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x276bf8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276bfc: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x276bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x276c00: 0xa060011b  sb          $zero, 0x11B($v1)
    ctx->pc = 0x276c00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x276c04: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c08: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276c08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276c0c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x276c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x276c10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c14: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276c14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276c18: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x276c18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x276c1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c20: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276c20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276c24: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x276c24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x276c28: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c2c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276c30: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x276c30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x276c34: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c38: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276c38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276c3c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x276c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x276c40: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c44: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x276c44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x276c48: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x276c48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x276c4c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c50: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x276c50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x276c54: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x276C54u;
    SET_GPR_U32(ctx, 31, 0x276C5Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x276C54u, 0x276C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C5Cu;
label_276c5c:
    // 0x276c5c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c60: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x276c60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x276c64: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c68: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x276c68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x276c6c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x276c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x276c70: 0x34440011  ori         $a0, $v0, 0x11
    ctx->pc = 0x276c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x276c74: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276C74u;
    {
        const bool branch_taken_0x276c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x276c74) {
            ctx->pc = 0x276C88u;
            goto label_276c88;
        }
    }
    ctx->pc = 0x276C7Cu;
    // 0x276c7c: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x276c7cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276c80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x276C80u;
    {
        const bool branch_taken_0x276c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276c80) {
            ctx->pc = 0x276CB0u;
            goto label_276cb0;
        }
    }
    ctx->pc = 0x276C88u;
label_276c88:
    // 0x276c88: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c8c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x276c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x276c90: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x276c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x276c94: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x276c94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x276c98: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x276c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x276c9c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x276c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x276ca0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x276ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x276ca4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x276ca4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276ca8: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x276ca8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276cac: 0x0  nop
    ctx->pc = 0x276cacu;
    // NOP
label_276cb0:
    // 0x276cb0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x276cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x276cb4: 0x2443a610  addiu       $v1, $v0, -0x59F0
    ctx->pc = 0x276cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x276cb8: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x276cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x276cbc: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x276cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x276cc0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x276cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276cc4: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x276cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x276cc8: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x276cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
    // 0x276ccc: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x276cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x276cd0: 0x346270a4  ori         $v0, $v1, 0x70A4
    ctx->pc = 0x276cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x276cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276cd8: 0x0  nop
    ctx->pc = 0x276cd8u;
    // NOP
    // 0x276cdc: 0xe66000ac  swc1        $f0, 0xAC($s3)
    ctx->pc = 0x276cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 172), bits); }
    // 0x276ce0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276CE0u;
    SET_GPR_U32(ctx, 31, 0x276CE8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276CE0u, 0x276CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276CE8u;
label_276ce8:
    // 0x276ce8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x276ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x276cec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276cf0: 0x0  nop
    ctx->pc = 0x276cf0u;
    // NOP
    // 0x276cf4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276cf8: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x276cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x276cfc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276CFCu;
    SET_GPR_U32(ctx, 31, 0x276D04u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276CFCu, 0x276D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D04u;
label_276d04:
    // 0x276d04: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x276d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x276d08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276d0c: 0x0  nop
    ctx->pc = 0x276d0cu;
    // NOP
    // 0x276d10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276d14: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x276d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x276d18: 0xc06765c  jal         func_19D970
    ctx->pc = 0x276D18u;
    SET_GPR_U32(ctx, 31, 0x276D20u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x276D18u, 0x276D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D20u;
label_276d20:
    // 0x276d20: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x276d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x276d24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x276d24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276d28: 0x0  nop
    ctx->pc = 0x276d28u;
    // NOP
    // 0x276d2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x276d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276d30: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x276d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x276d34: 0x3c04bfc0  lui         $a0, 0xBFC0
    ctx->pc = 0x276d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49088 << 16));
    // 0x276d38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x276d38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276d3c: 0x0  nop
    ctx->pc = 0x276d3cu;
    // NOP
    // 0x276d40: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x276d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x276d44: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x276d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x276d48: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x276d48u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x276d4c: 0x0  nop
    ctx->pc = 0x276d4cu;
    // NOP
label_276d50:
    // 0x276d50: 0x2a030060  slti        $v1, $s0, 0x60
    ctx->pc = 0x276d50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x276d54: 0x1460ff6e  bnez        $v1, . + 4 + (-0x92 << 2)
    ctx->pc = 0x276D54u;
    {
        const bool branch_taken_0x276d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x276d54) {
            ctx->pc = 0x276B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276b10;
        }
    }
    ctx->pc = 0x276D5Cu;
    // 0x276d5c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x276d5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x276d60: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x276d60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x276d64: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x276d64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x276d68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x276d68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276d6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x276d6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276d70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x276d70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x276d74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x276d74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276d78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x276d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276d7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x276d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276d80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x276d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276d84: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x276d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x276d88: 0x3e00008  jr          $ra
    ctx->pc = 0x276D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276D90u;
}
