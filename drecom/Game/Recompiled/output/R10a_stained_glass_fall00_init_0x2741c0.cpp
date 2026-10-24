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

// Function: R10a_stained_glass_fall00_init
// Address: 0x2741c0 - 0x275208
void R10a_stained_glass_fall00_init_0x2741c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10a_stained_glass_fall00_init_0x2741c0");
#endif

    switch (ctx->pc) {
        case 0x274204u: goto label_274204;
        case 0x274228u: goto label_274228;
        case 0x274238u: goto label_274238;
        case 0x274674u: goto label_274674;
        case 0x2747acu: goto label_2747ac;
        case 0x2748e4u: goto label_2748e4;
        case 0x274924u: goto label_274924;
        case 0x27493cu: goto label_27493c;
        case 0x274964u: goto label_274964;
        case 0x274a88u: goto label_274a88;
        case 0x274a90u: goto label_274a90;
        case 0x274ac4u: goto label_274ac4;
        case 0x274ad0u: goto label_274ad0;
        case 0x274b68u: goto label_274b68;
        case 0x274b88u: goto label_274b88;
        case 0x274bc0u: goto label_274bc0;
        case 0x274bc8u: goto label_274bc8;
        case 0x274bfcu: goto label_274bfc;
        case 0x274c08u: goto label_274c08;
        case 0x274ca0u: goto label_274ca0;
        case 0x274cc0u: goto label_274cc0;
        case 0x274cf8u: goto label_274cf8;
        case 0x274d00u: goto label_274d00;
        case 0x274d2cu: goto label_274d2c;
        case 0x274d54u: goto label_274d54;
        case 0x274da0u: goto label_274da0;
        case 0x274e44u: goto label_274e44;
        case 0x274ee4u: goto label_274ee4;
        case 0x274ef0u: goto label_274ef0;
        case 0x274f58u: goto label_274f58;
        case 0x274f60u: goto label_274f60;
        case 0x274f8cu: goto label_274f8c;
        case 0x274fb4u: goto label_274fb4;
        case 0x275000u: goto label_275000;
        case 0x2750a4u: goto label_2750a4;
        case 0x275140u: goto label_275140;
        case 0x27515cu: goto label_27515c;
        case 0x275178u: goto label_275178;
        default: break;
    }

    ctx->pc = 0x2741c0u;

    // 0x2741c0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2741c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2741c4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x2741c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2741c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2741c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2741cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2741ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2741d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2741d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2741d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2741d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2741d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2741d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2741dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2741dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2741e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2741e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2741e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2741e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2741e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2741e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2741ec: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2741ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2741f0: 0x2485fe00  addiu       $a1, $a0, -0x200
    ctx->pc = 0x2741f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966784));
    // 0x2741f4: 0x70a09628  paddub      $s2, $a1, $zero
    ctx->pc = 0x2741f4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2741f8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2741f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2741fc: 0x1000021c  b           . + 4 + (0x21C << 2)
    ctx->pc = 0x2741FCu;
    {
        const bool branch_taken_0x2741fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2741fc) {
            ctx->pc = 0x274A70u;
            goto label_274a70;
        }
    }
    ctx->pc = 0x274204u;
label_274204:
    // 0x274204: 0x113880  sll         $a3, $s1, 2
    ctx->pc = 0x274204u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x274208: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x274208u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x27420c: 0x24c3e650  addiu       $v1, $a2, -0x19B0
    ctx->pc = 0x27420cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960720));
    // 0x274210: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x274210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x274214: 0x8c641390  lw          $a0, 0x1390($v1)
    ctx->pc = 0x274214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x274218: 0x7080a628  paddub      $s4, $a0, $zero
    ctx->pc = 0x274218u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x27421c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27421cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274220: 0x10000201  b           . + 4 + (0x201 << 2)
    ctx->pc = 0x274220u;
    {
        const bool branch_taken_0x274220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274220) {
            ctx->pc = 0x274A28u;
            goto label_274a28;
        }
    }
    ctx->pc = 0x274228u;
label_274228:
    // 0x274228: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x274228u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x27422c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x27422cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x274230: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x274230u;
    SET_GPR_U32(ctx, 31, 0x274238u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x274230u, 0x274238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274238u;
label_274238:
    // 0x274238: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x274238u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27423c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x27423cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x274240: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x274240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x274244: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x274244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x274248: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27424c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x27424cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x274250: 0x8e8302d0  lw          $v1, 0x2D0($s4)
    ctx->pc = 0x274250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
    // 0x274254: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x274258: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x274258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27425c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x27425cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274260: 0xc420d2c0  lwc1        $f0, -0x2D40($at)
    ctx->pc = 0x274260u;
    { uint32_t bits = FAST_READ32(0x38D2C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274264: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x274264u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x274268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x274268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27426c: 0x0  nop
    ctx->pc = 0x27426cu;
    // NOP
    // 0x274270: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x274270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274274: 0x0  nop
    ctx->pc = 0x274274u;
    // NOP
    // 0x274278: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x274278u;
    {
        const bool branch_taken_0x274278 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x274278) {
            ctx->pc = 0x274298u;
            goto label_274298;
        }
    }
    ctx->pc = 0x274280u;
    // 0x274280: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x274280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x274284: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274288: 0x0  nop
    ctx->pc = 0x274288u;
    // NOP
    // 0x27428c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x27428cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x274290: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x274290u;
    {
        const bool branch_taken_0x274290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274290) {
            ctx->pc = 0x2742A8u;
            goto label_2742a8;
        }
    }
    ctx->pc = 0x274298u;
label_274298:
    // 0x274298: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x274298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x27429c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27429cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2742a0: 0x0  nop
    ctx->pc = 0x2742a0u;
    // NOP
    // 0x2742a4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2742a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2742a8:
    // 0x2742a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2742a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2742ac: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2742acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2742b0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2742b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2742b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2742b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2742b8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2742b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2742bc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2742bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2742c0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2742c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2742c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2742c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2742c8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2742c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2742cc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2742ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2742d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2742d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2742d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2742d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2742d8: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x2742d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x2742dc: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x2742dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2742e0: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2742e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2742e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2742e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2742e8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2742e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2742ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2742ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2742f0: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x2742f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2742f4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2742F4u;
    {
        const bool branch_taken_0x2742f4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2742f4) {
            ctx->pc = 0x274310u;
            goto label_274310;
        }
    }
    ctx->pc = 0x2742FCu;
    // 0x2742fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2742fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274300: 0x0  nop
    ctx->pc = 0x274300u;
    // NOP
    // 0x274304: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x274304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x274308: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x274308u;
    {
        const bool branch_taken_0x274308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274308) {
            ctx->pc = 0x27432Cu;
            goto label_27432c;
        }
    }
    ctx->pc = 0x274310u;
label_274310:
    // 0x274310: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x274310u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x274314: 0x30950001  andi        $s5, $a0, 0x1
    ctx->pc = 0x274314u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x274318: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x274318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x27431c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27431cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274320: 0x0  nop
    ctx->pc = 0x274320u;
    // NOP
    // 0x274324: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x274324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x274328: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x274328u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27432c:
    // 0x27432c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x27432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274330: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x274330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274334: 0x11aa40  sll         $s5, $s1, 9
    ctx->pc = 0x274334u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x274338: 0x2552021  addu        $a0, $s2, $s5
    ctx->pc = 0x274338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x27433c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27433cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x274340: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x274340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x274344: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x274344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x274348: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27434c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27434cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x274350: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x274350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x274354: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x274354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x274358: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x274358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27435c: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x27435cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x274360: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x274360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x274364: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274368: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x274368u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x27436c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x27436cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x274370: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x274370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x274374: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x274378: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x274378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x27437c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x27437cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x274380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274384: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274388: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x274388u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27438c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27438cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274390: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x274390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x274394: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274394u;
    {
        const bool branch_taken_0x274394 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x274394) {
            ctx->pc = 0x2743B0u;
            goto label_2743b0;
        }
    }
    ctx->pc = 0x27439Cu;
    // 0x27439c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27439cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2743a0: 0x0  nop
    ctx->pc = 0x2743a0u;
    // NOP
    // 0x2743a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2743a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2743a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2743A8u;
    {
        const bool branch_taken_0x2743a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2743a8) {
            ctx->pc = 0x2743CCu;
            goto label_2743cc;
        }
    }
    ctx->pc = 0x2743B0u;
label_2743b0:
    // 0x2743b0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2743b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2743b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2743b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2743b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2743b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2743bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2743bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2743c0: 0x0  nop
    ctx->pc = 0x2743c0u;
    // NOP
    // 0x2743c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2743c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2743c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2743c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2743cc:
    // 0x2743cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2743ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2743d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2743d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2743d4: 0x0  nop
    ctx->pc = 0x2743d4u;
    // NOP
    // 0x2743d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2743d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2743dc: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x2743dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x2743e0: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x2743e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2743e4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2743e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2743e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2743e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2743ec: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2743ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2743f0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2743f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2743f4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2743f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2743f8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2743f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2743fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2743fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x274400: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x274400u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x274404: 0x8e8202d0  lw          $v0, 0x2D0($s4)
    ctx->pc = 0x274404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
    // 0x274408: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x274408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27440c: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x27440cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274410: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274414: 0xc420d2c8  lwc1        $f0, -0x2D38($at)
    ctx->pc = 0x274414u;
    { uint32_t bits = FAST_READ32(0x38D2C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274418: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x274418u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27441c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27441cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274420: 0x0  nop
    ctx->pc = 0x274420u;
    // NOP
    // 0x274424: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x274424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274428: 0x0  nop
    ctx->pc = 0x274428u;
    // NOP
    // 0x27442c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x27442Cu;
    {
        const bool branch_taken_0x27442c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27442c) {
            ctx->pc = 0x27444Cu;
            goto label_27444c;
        }
    }
    ctx->pc = 0x274434u;
    // 0x274434: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x274434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x274438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27443c: 0x0  nop
    ctx->pc = 0x27443cu;
    // NOP
    // 0x274440: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x274440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x274444: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x274444u;
    {
        const bool branch_taken_0x274444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274444) {
            ctx->pc = 0x274460u;
            goto label_274460;
        }
    }
    ctx->pc = 0x27444Cu;
label_27444c:
    // 0x27444c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x27444cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x274450: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274454: 0x0  nop
    ctx->pc = 0x274454u;
    // NOP
    // 0x274458: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x274458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x27445c: 0x0  nop
    ctx->pc = 0x27445cu;
    // NOP
label_274460:
    // 0x274460: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274464: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x274464u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x274468: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x274468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27446c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27446cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x274470: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274474: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x274474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274478: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x274478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27447c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27447cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274480: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x274480u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x274484: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x274484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x274488: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x274488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27448c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27448cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274490: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x274490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x274494: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x274494u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x274498: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x274498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27449c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27449cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2744a0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2744a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2744a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2744a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2744a8: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x2744a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2744ac: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2744ACu;
    {
        const bool branch_taken_0x2744ac = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2744ac) {
            ctx->pc = 0x2744C8u;
            goto label_2744c8;
        }
    }
    ctx->pc = 0x2744B4u;
    // 0x2744b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2744b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2744b8: 0x0  nop
    ctx->pc = 0x2744b8u;
    // NOP
    // 0x2744bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2744bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2744c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2744C0u;
    {
        const bool branch_taken_0x2744c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2744c0) {
            ctx->pc = 0x2744E4u;
            goto label_2744e4;
        }
    }
    ctx->pc = 0x2744C8u;
label_2744c8:
    // 0x2744c8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2744c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2744cc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2744ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2744d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2744d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2744d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2744d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2744d8: 0x0  nop
    ctx->pc = 0x2744d8u;
    // NOP
    // 0x2744dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2744dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2744e0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2744e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2744e4:
    // 0x2744e4: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2744e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2744e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2744e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2744ec: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x2744ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x2744f0: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x2744f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2744f4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2744f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2744f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2744f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2744fc: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2744fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x274500: 0x112240  sll         $a0, $s1, 9
    ctx->pc = 0x274500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x274504: 0x2443021  addu        $a2, $s2, $a0
    ctx->pc = 0x274504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x274508: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x274508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27450c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x27450cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x274510: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x274510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274514: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x274514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x274518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27451c: 0x0  nop
    ctx->pc = 0x27451cu;
    // NOP
    // 0x274520: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x274520u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x274524: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x274524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x274528: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x274528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x27452c: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x27452cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x274530: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x274530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x274534: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x274534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274538: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x274538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27453c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27453cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x274540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274544: 0x0  nop
    ctx->pc = 0x274544u;
    // NOP
    // 0x274548: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x274548u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27454c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x27454cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x274550: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274554: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x274554u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x274558: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x274558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27455c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27455cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x274560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274564: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x274564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274568: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x274568u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27456c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27456cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274570: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x274570u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x274574: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x274574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x274578: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x274578u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27457c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x274580: 0x3044ff00  andi        $a0, $v0, 0xFF00
    ctx->pc = 0x274580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x274584: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x274584u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x274588: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x274588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27458c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27458cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274590: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x274590u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x274594: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x274594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x274598: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x274598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27459c: 0x309e0001  andi        $fp, $a0, 0x1
    ctx->pc = 0x27459cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2745a0: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2745A0u;
    {
        const bool branch_taken_0x2745a0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2745a0) {
            ctx->pc = 0x2745C0u;
            goto label_2745c0;
        }
    }
    ctx->pc = 0x2745A8u;
    // 0x2745a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2745a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2745ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2745acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2745b0: 0x0  nop
    ctx->pc = 0x2745b0u;
    // NOP
    // 0x2745b4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2745b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2745b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2745B8u;
    {
        const bool branch_taken_0x2745b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2745b8) {
            ctx->pc = 0x2745D0u;
            goto label_2745d0;
        }
    }
    ctx->pc = 0x2745C0u;
label_2745c0:
    // 0x2745c0: 0x3c16bf80  lui         $s6, 0xBF80
    ctx->pc = 0x2745c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)49024 << 16));
    // 0x2745c4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2745c4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2745c8: 0x0  nop
    ctx->pc = 0x2745c8u;
    // NOP
    // 0x2745cc: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2745ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2745d0:
    // 0x2745d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2745d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2745d4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2745d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2745d8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2745d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2745dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2745dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2745e0: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x2745e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2745e4: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2745e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2745e8: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x2745e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2745ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2745ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2745f0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2745f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2745f4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2745f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2745f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2745f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2745fc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2745fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274600: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x274600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x274604: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x274604u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x274608: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x274608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27460c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27460cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274610: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x274610u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x274614: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x274614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x274618: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274618u;
    {
        const bool branch_taken_0x274618 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x274618) {
            ctx->pc = 0x274634u;
            goto label_274634;
        }
    }
    ctx->pc = 0x274620u;
    // 0x274620: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x274620u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274624: 0x0  nop
    ctx->pc = 0x274624u;
    // NOP
    // 0x274628: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x274628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27462c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27462Cu;
    {
        const bool branch_taken_0x27462c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27462c) {
            ctx->pc = 0x274650u;
            goto label_274650;
        }
    }
    ctx->pc = 0x274634u;
label_274634:
    // 0x274634: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x274634u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x274638: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x274638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x27463c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27463cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x274640: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274644: 0x0  nop
    ctx->pc = 0x274644u;
    // NOP
    // 0x274648: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x274648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27464c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27464cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_274650:
    // 0x274650: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x274650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274654: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x274654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274658: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x274658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x27465c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x27465cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x274660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274664: 0x0  nop
    ctx->pc = 0x274664u;
    // NOP
    // 0x274668: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x274668u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27466c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x27466Cu;
    SET_GPR_U32(ctx, 31, 0x274674u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x27466Cu, 0x274674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274674u;
label_274674:
    // 0x274674: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x274674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x274678: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x274678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x27467c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x27467cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x274680: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x274680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274684: 0xe4800c30  swc1        $f0, 0xC30($a0)
    ctx->pc = 0x274684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3120), bits); }
    // 0x274688: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27468c: 0x8c267508  lw          $a2, 0x7508($at)
    ctx->pc = 0x27468cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x387508u));
    // 0x274690: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x274690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x274694: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x274694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x274698: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x274698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27469c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27469cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2746a0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2746a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2746a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2746a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2746a8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2746a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2746ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2746acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2746b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2746b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2746b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2746b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2746b8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2746b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2746bc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2746bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2746c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2746c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2746c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2746c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2746c8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2746c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2746cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2746ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2746d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2746d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2746d4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2746d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2746d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2746D8u;
    {
        const bool branch_taken_0x2746d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2746d8) {
            ctx->pc = 0x2746F8u;
            goto label_2746f8;
        }
    }
    ctx->pc = 0x2746E0u;
    // 0x2746e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2746e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2746e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2746e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2746e8: 0x0  nop
    ctx->pc = 0x2746e8u;
    // NOP
    // 0x2746ec: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2746ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2746f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2746F0u;
    {
        const bool branch_taken_0x2746f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2746f0) {
            ctx->pc = 0x274708u;
            goto label_274708;
        }
    }
    ctx->pc = 0x2746F8u;
label_2746f8:
    // 0x2746f8: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x2746f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x2746fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2746fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274700: 0x0  nop
    ctx->pc = 0x274700u;
    // NOP
    // 0x274704: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x274704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_274708:
    // 0x274708: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27470c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27470cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x274710: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x274710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x274714: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x274714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x274718: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27471c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x27471cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x274720: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x274720u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x274724: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274728: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x274728u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x27472c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x27472cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x274730: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x274730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x274734: 0x64b821  addu        $s7, $v1, $a0
    ctx->pc = 0x274734u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x274738: 0x32e3ff00  andi        $v1, $s7, 0xFF00
    ctx->pc = 0x274738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65280);
    // 0x27473c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x27473cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x274740: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x274740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x274744: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274748: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x274748u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27474c: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x27474cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x274750: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x274750u;
    {
        const bool branch_taken_0x274750 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x274750) {
            ctx->pc = 0x27476Cu;
            goto label_27476c;
        }
    }
    ctx->pc = 0x274758u;
    // 0x274758: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x274758u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27475c: 0x0  nop
    ctx->pc = 0x27475cu;
    // NOP
    // 0x274760: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x274760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x274764: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x274764u;
    {
        const bool branch_taken_0x274764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274764) {
            ctx->pc = 0x274788u;
            goto label_274788;
        }
    }
    ctx->pc = 0x27476Cu;
label_27476c:
    // 0x27476c: 0x132042  srl         $a0, $s3, 1
    ctx->pc = 0x27476cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x274770: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x274770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x274774: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x274774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x274778: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x274778u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27477c: 0x0  nop
    ctx->pc = 0x27477cu;
    // NOP
    // 0x274780: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x274780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x274784: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x274784u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_274788:
    // 0x274788: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x274788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27478c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27478cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274790: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x274790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x274794: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x274794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x274798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27479c: 0x0  nop
    ctx->pc = 0x27479cu;
    // NOP
    // 0x2747a0: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2747a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2747a4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2747A4u;
    SET_GPR_U32(ctx, 31, 0x2747ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2747A4u, 0x2747ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2747ACu;
label_2747ac:
    // 0x2747ac: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x2747acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x2747b0: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x2747b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2747b4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2747b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2747b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2747b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2747bc: 0xe4600c34  swc1        $f0, 0xC34($v1)
    ctx->pc = 0x2747bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3124), bits); }
    // 0x2747c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2747c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2747c4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2747c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2747c8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2747c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2747cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2747ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2747d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2747d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2747d4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2747d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2747d8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2747d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2747dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2747dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2747e0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2747e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2747e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2747e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2747e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2747e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2747ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2747ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2747f0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2747f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2747f4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2747f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2747f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2747f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2747fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2747fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274800: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x274800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x274804: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x274804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274808: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x274808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27480c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x27480cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x274810: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274810u;
    {
        const bool branch_taken_0x274810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274810) {
            ctx->pc = 0x274830u;
            goto label_274830;
        }
    }
    ctx->pc = 0x274818u;
    // 0x274818: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x274818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27481c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27481cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274820: 0x0  nop
    ctx->pc = 0x274820u;
    // NOP
    // 0x274824: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x274824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x274828: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x274828u;
    {
        const bool branch_taken_0x274828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274828) {
            ctx->pc = 0x274840u;
            goto label_274840;
        }
    }
    ctx->pc = 0x274830u;
label_274830:
    // 0x274830: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x274830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x274834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274838: 0x0  nop
    ctx->pc = 0x274838u;
    // NOP
    // 0x27483c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x27483cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_274840:
    // 0x274840: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274844: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x274844u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x274848: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x274848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27484c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27484cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x274850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274854: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x274854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274858: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x274858u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27485c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27485cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274860: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x274860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x274864: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x274864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x274868: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x274868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27486c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274870: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x274870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x274874: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x274874u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x274878: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x274878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27487c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27487cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274880: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x274880u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x274884: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x274884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274888: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274888u;
    {
        const bool branch_taken_0x274888 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x274888) {
            ctx->pc = 0x2748A4u;
            goto label_2748a4;
        }
    }
    ctx->pc = 0x274890u;
    // 0x274890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274894: 0x0  nop
    ctx->pc = 0x274894u;
    // NOP
    // 0x274898: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x274898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27489c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27489Cu;
    {
        const bool branch_taken_0x27489c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27489c) {
            ctx->pc = 0x2748C0u;
            goto label_2748c0;
        }
    }
    ctx->pc = 0x2748A4u;
label_2748a4:
    // 0x2748a4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2748a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2748a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2748a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2748ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2748acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2748b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2748b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2748b4: 0x0  nop
    ctx->pc = 0x2748b4u;
    // NOP
    // 0x2748b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2748b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2748bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2748bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2748c0:
    // 0x2748c0: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2748c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2748c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2748c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2748c8: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x2748c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x2748cc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2748ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2748d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2748d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2748d4: 0x0  nop
    ctx->pc = 0x2748d4u;
    // NOP
    // 0x2748d8: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2748d8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2748dc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2748DCu;
    SET_GPR_U32(ctx, 31, 0x2748E4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2748DCu, 0x2748E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2748E4u;
label_2748e4:
    // 0x2748e4: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x2748e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x2748e8: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x2748e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2748ec: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2748ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2748f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2748f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2748f4: 0xe4400c38  swc1        $f0, 0xC38($v0)
    ctx->pc = 0x2748f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3128), bits); }
    // 0x2748f8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2748f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2748fc: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2748fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x274900: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x274900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x274904: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x274904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274908: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x274908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27490c: 0x8e8202d0  lw          $v0, 0x2D0($s4)
    ctx->pc = 0x27490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
    // 0x274910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274914: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x274914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x274918: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x274918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x27491c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x27491Cu;
    SET_GPR_U32(ctx, 31, 0x274924u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x274924u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x274924u) { return; }
    ctx->pc = 0x274924u;
label_274924:
    // 0x274924: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x274924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x274928: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x274928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27492c: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x27492cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x274930: 0x24e6d2c0  addiu       $a2, $a3, -0x2D40
    ctx->pc = 0x274930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955712));
    // 0x274934: 0xc040c80  jal         func_103200
    ctx->pc = 0x274934u;
    SET_GPR_U32(ctx, 31, 0x27493Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x27493Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27493Cu) { return; }
    ctx->pc = 0x27493Cu;
label_27493c:
    // 0x27493c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x27493cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x274940: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x274940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274944: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x274944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274948: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x274948u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27494c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x27494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274950: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x274950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274954: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x274954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274958: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x274958u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27495c: 0xc045630  jal         func_1158C0
    ctx->pc = 0x27495Cu;
    SET_GPR_U32(ctx, 31, 0x274964u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x27495Cu, 0x274964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274964u;
label_274964:
    // 0x274964: 0x1119c0  sll         $v1, $s1, 7
    ctx->pc = 0x274964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x274968: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x274968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x27496c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x27496cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x274970: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x274970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x274974: 0xe4601830  swc1        $f0, 0x1830($v1)
    ctx->pc = 0x274974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6192), bits); }
    // 0x274978: 0x1119c0  sll         $v1, $s1, 7
    ctx->pc = 0x274978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x27497c: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x27497cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x274980: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x274980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x274984: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x274984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x274988: 0xc4811830  lwc1        $f1, 0x1830($a0)
    ctx->pc = 0x274988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27498c: 0x3c034498  lui         $v1, 0x4498
    ctx->pc = 0x27498cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17560 << 16));
    // 0x274990: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x274990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x274994: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274998: 0x0  nop
    ctx->pc = 0x274998u;
    // NOP
    // 0x27499c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27499cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2749a0: 0x0  nop
    ctx->pc = 0x2749a0u;
    // NOP
    // 0x2749a4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2749A4u;
    {
        const bool branch_taken_0x2749a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2749a4) {
            ctx->pc = 0x2749C8u;
            goto label_2749c8;
        }
    }
    ctx->pc = 0x2749ACu;
    // 0x2749ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2749acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2749b0: 0x111a40  sll         $v1, $s1, 9
    ctx->pc = 0x2749b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x2749b4: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2749b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2749b8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2749b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2749bc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2749bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2749c0: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x2749c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x2749c4: 0x0  nop
    ctx->pc = 0x2749c4u;
    // NOP
label_2749c8:
    // 0x2749c8: 0x1119c0  sll         $v1, $s1, 7
    ctx->pc = 0x2749c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x2749cc: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2749ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2749d0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2749d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2749d4: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x2749d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2749d8: 0xc4a11830  lwc1        $f1, 0x1830($a1)
    ctx->pc = 0x2749d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2749dc: 0x3c0443ad  lui         $a0, 0x43AD
    ctx->pc = 0x2749dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17325 << 16));
    // 0x2749e0: 0x3483c000  ori         $v1, $a0, 0xC000
    ctx->pc = 0x2749e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x2749e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2749e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2749e8: 0x0  nop
    ctx->pc = 0x2749e8u;
    // NOP
    // 0x2749ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2749ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2749f0: 0x0  nop
    ctx->pc = 0x2749f0u;
    // NOP
    // 0x2749f4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2749F4u;
    {
        const bool branch_taken_0x2749f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2749f4) {
            ctx->pc = 0x274A20u;
            goto label_274a20;
        }
    }
    ctx->pc = 0x2749FCu;
    // 0x2749fc: 0x111a40  sll         $v1, $s1, 9
    ctx->pc = 0x2749fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x274a00: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x274a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x274a04: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x274a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x274a08: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x274a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x274a0c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x274a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x274a10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x274a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274a14: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x274a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274a18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x274a18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x274a1c: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x274a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
label_274a20:
    // 0x274a20: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x274a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x274a24: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x274a24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_274a28:
    // 0x274a28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x274a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274a2c: 0x224001a  div         $zero, $s1, $a0
    ctx->pc = 0x274a2cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x274a30: 0x0  nop
    ctx->pc = 0x274a30u;
    // NOP
    // 0x274a34: 0x0  nop
    ctx->pc = 0x274a34u;
    // NOP
    // 0x274a38: 0x1810  mfhi        $v1
    ctx->pc = 0x274a38u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x274a3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x274A3Cu;
    {
        const bool branch_taken_0x274a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a3c) {
            ctx->pc = 0x274A50u;
            goto label_274a50;
        }
    }
    ctx->pc = 0x274A44u;
    // 0x274a44: 0x2415001e  addiu       $s5, $zero, 0x1E
    ctx->pc = 0x274a44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x274a48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x274A48u;
    {
        const bool branch_taken_0x274a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a48) {
            ctx->pc = 0x274A58u;
            goto label_274a58;
        }
    }
    ctx->pc = 0x274A50u;
label_274a50:
    // 0x274a50: 0x2415001d  addiu       $s5, $zero, 0x1D
    ctx->pc = 0x274a50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x274a54: 0x0  nop
    ctx->pc = 0x274a54u;
    // NOP
label_274a58:
    // 0x274a58: 0x215202a  slt         $a0, $s0, $s5
    ctx->pc = 0x274a58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x274a5c: 0x1480fdf2  bnez        $a0, . + 4 + (-0x20E << 2)
    ctx->pc = 0x274A5Cu;
    {
        const bool branch_taken_0x274a5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x274a5c) {
            ctx->pc = 0x274228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274228;
        }
    }
    ctx->pc = 0x274A64u;
    // 0x274a64: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x274a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x274a68: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x274a68u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x274a6c: 0x0  nop
    ctx->pc = 0x274a6cu;
    // NOP
label_274a70:
    // 0x274a70: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x274a70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x274a74: 0x1460fde3  bnez        $v1, . + 4 + (-0x21D << 2)
    ctx->pc = 0x274A74u;
    {
        const bool branch_taken_0x274a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274a74) {
            ctx->pc = 0x274204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274204;
        }
    }
    ctx->pc = 0x274A7Cu;
    // 0x274a7c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x274a7cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274a80: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x274A80u;
    {
        const bool branch_taken_0x274a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a80) {
            ctx->pc = 0x274BA8u;
            goto label_274ba8;
        }
    }
    ctx->pc = 0x274A88u;
label_274a88:
    // 0x274a88: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x274A88u;
    SET_GPR_U32(ctx, 31, 0x274A90u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x274A88u, 0x274A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A90u;
label_274a90:
    // 0x274a90: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x274a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x274a94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x274a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274a98: 0x0  nop
    ctx->pc = 0x274a98u;
    // NOP
    // 0x274a9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x274a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274aa0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274aa4: 0xe420d2cc  swc1        $f0, -0x2D34($at)
    ctx->pc = 0x274aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38D2CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38D2CCu, _value); } while (0); }
    // 0x274aa8: 0x24042c06  addiu       $a0, $zero, 0x2C06
    ctx->pc = 0x274aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11270));
    // 0x274aac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x274aacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274ab0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x274ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x274ab4: 0x2446d2c0  addiu       $a2, $v0, -0x2D40
    ctx->pc = 0x274ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955712));
    // 0x274ab8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x274ab8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274abc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x274ABCu;
    SET_GPR_U32(ctx, 31, 0x274AC4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x274ABCu, 0x274AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274AC4u;
label_274ac4:
    // 0x274ac4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x274ac4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x274ac8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x274AC8u;
    SET_GPR_U32(ctx, 31, 0x274AD0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x274AC8u, 0x274AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274AD0u;
label_274ad0:
    // 0x274ad0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x274ad0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x274ad4: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x274ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x274ad8: 0x34830011  ori         $v1, $a0, 0x11
    ctx->pc = 0x274ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x274adc: 0x12630030  beq         $s3, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x274ADCu;
    {
        const bool branch_taken_0x274adc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x274adc) {
            ctx->pc = 0x274BA0u;
            goto label_274ba0;
        }
    }
    ctx->pc = 0x274AE4u;
    // 0x274ae4: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x274ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x274ae8: 0xae630100  sw          $v1, 0x100($s3)
    ctx->pc = 0x274ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 3));
    // 0x274aec: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x274aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x274af0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274af0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274af4: 0x0  nop
    ctx->pc = 0x274af4u;
    // NOP
    // 0x274af8: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x274af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x274afc: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x274afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
    // 0x274b00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274b00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274b04: 0x0  nop
    ctx->pc = 0x274b04u;
    // NOP
    // 0x274b08: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x274b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x274b0c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x274b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x274b10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274b10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274b14: 0x0  nop
    ctx->pc = 0x274b14u;
    // NOP
    // 0x274b18: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x274b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x274b1c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x274b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x274b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274b24: 0x0  nop
    ctx->pc = 0x274b24u;
    // NOP
    // 0x274b28: 0xe6600060  swc1        $f0, 0x60($s3)
    ctx->pc = 0x274b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
    // 0x274b2c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x274b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x274b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274b34: 0x0  nop
    ctx->pc = 0x274b34u;
    // NOP
    // 0x274b38: 0xe6600064  swc1        $f0, 0x64($s3)
    ctx->pc = 0x274b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 100), bits); }
    // 0x274b3c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x274b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x274b40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274b44: 0x0  nop
    ctx->pc = 0x274b44u;
    // NOP
    // 0x274b48: 0xe6600068  swc1        $f0, 0x68($s3)
    ctx->pc = 0x274b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
    // 0x274b4c: 0x3c02bfae  lui         $v0, 0xBFAE
    ctx->pc = 0x274b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49070 << 16));
    // 0x274b50: 0x34435727  ori         $v1, $v0, 0x5727
    ctx->pc = 0x274b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22311);
    // 0x274b54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274b58: 0x0  nop
    ctx->pc = 0x274b58u;
    // NOP
    // 0x274b5c: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x274b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x274b60: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274B60u;
    SET_GPR_U32(ctx, 31, 0x274B68u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274B60u, 0x274B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B68u;
label_274b68:
    // 0x274b68: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x274b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x274b6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x274b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x274b70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x274b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274b74: 0x0  nop
    ctx->pc = 0x274b74u;
    // NOP
    // 0x274b78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x274b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274b7c: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x274b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x274b80: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274B80u;
    SET_GPR_U32(ctx, 31, 0x274B88u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274B80u, 0x274B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B88u;
label_274b88:
    // 0x274b88: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x274b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x274b8c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x274b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x274b90: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x274b90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274b94: 0x0  nop
    ctx->pc = 0x274b94u;
    // NOP
    // 0x274b98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x274b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274b9c: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x274b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
label_274ba0:
    // 0x274ba0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x274ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x274ba4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x274ba4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_274ba8:
    // 0x274ba8: 0x2a030038  slti        $v1, $s0, 0x38
    ctx->pc = 0x274ba8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)56) ? 1 : 0);
    // 0x274bac: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
    ctx->pc = 0x274BACu;
    {
        const bool branch_taken_0x274bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274bac) {
            ctx->pc = 0x274A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274a88;
        }
    }
    ctx->pc = 0x274BB4u;
    // 0x274bb4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x274bb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274bb8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x274BB8u;
    {
        const bool branch_taken_0x274bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274bb8) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274BC0u;
label_274bc0:
    // 0x274bc0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x274BC0u;
    SET_GPR_U32(ctx, 31, 0x274BC8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x274BC0u, 0x274BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274BC8u;
label_274bc8:
    // 0x274bc8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x274bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x274bcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x274bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274bd0: 0x0  nop
    ctx->pc = 0x274bd0u;
    // NOP
    // 0x274bd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x274bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274bd8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274bdc: 0xe420d2cc  swc1        $f0, -0x2D34($at)
    ctx->pc = 0x274bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38D2CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38D2CCu, _value); } while (0); }
    // 0x274be0: 0x24042c26  addiu       $a0, $zero, 0x2C26
    ctx->pc = 0x274be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11302));
    // 0x274be4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x274be4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274be8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x274be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x274bec: 0x2446d2c0  addiu       $a2, $v0, -0x2D40
    ctx->pc = 0x274becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955712));
    // 0x274bf0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x274bf0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274bf4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x274BF4u;
    SET_GPR_U32(ctx, 31, 0x274BFCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x274BF4u, 0x274BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274BFCu;
label_274bfc:
    // 0x274bfc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x274bfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x274c00: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x274C00u;
    SET_GPR_U32(ctx, 31, 0x274C08u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x274C00u, 0x274C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C08u;
label_274c08:
    // 0x274c08: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x274c08u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x274c0c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x274c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x274c10: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x274c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x274c14: 0x12630030  beq         $s3, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x274C14u;
    {
        const bool branch_taken_0x274c14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x274c14) {
            ctx->pc = 0x274CD8u;
            goto label_274cd8;
        }
    }
    ctx->pc = 0x274C1Cu;
    // 0x274c1c: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x274c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x274c20: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x274c20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
    // 0x274c24: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x274c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x274c28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274c28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274c2c: 0x0  nop
    ctx->pc = 0x274c2cu;
    // NOP
    // 0x274c30: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x274c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x274c34: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x274c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x274c38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274c3c: 0x0  nop
    ctx->pc = 0x274c3cu;
    // NOP
    // 0x274c40: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x274c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x274c44: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x274c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x274c48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274c4c: 0x0  nop
    ctx->pc = 0x274c4cu;
    // NOP
    // 0x274c50: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x274c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x274c54: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x274c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x274c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274c5c: 0x0  nop
    ctx->pc = 0x274c5cu;
    // NOP
    // 0x274c60: 0xe6600060  swc1        $f0, 0x60($s3)
    ctx->pc = 0x274c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
    // 0x274c64: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x274c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x274c68: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x274c68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274c6c: 0x0  nop
    ctx->pc = 0x274c6cu;
    // NOP
    // 0x274c70: 0xe6600064  swc1        $f0, 0x64($s3)
    ctx->pc = 0x274c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 100), bits); }
    // 0x274c74: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x274c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x274c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274c7c: 0x0  nop
    ctx->pc = 0x274c7cu;
    // NOP
    // 0x274c80: 0xe6600068  swc1        $f0, 0x68($s3)
    ctx->pc = 0x274c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
    // 0x274c84: 0x3c02bfae  lui         $v0, 0xBFAE
    ctx->pc = 0x274c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49070 << 16));
    // 0x274c88: 0x34435727  ori         $v1, $v0, 0x5727
    ctx->pc = 0x274c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22311);
    // 0x274c8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274c90: 0x0  nop
    ctx->pc = 0x274c90u;
    // NOP
    // 0x274c94: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x274c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x274c98: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274C98u;
    SET_GPR_U32(ctx, 31, 0x274CA0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274C98u, 0x274CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274CA0u;
label_274ca0:
    // 0x274ca0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x274ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x274ca4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x274ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x274ca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x274ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274cac: 0x0  nop
    ctx->pc = 0x274cacu;
    // NOP
    // 0x274cb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x274cb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274cb4: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x274cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x274cb8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274CB8u;
    SET_GPR_U32(ctx, 31, 0x274CC0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274CB8u, 0x274CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274CC0u;
label_274cc0:
    // 0x274cc0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x274cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x274cc4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x274cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x274cc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x274cc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274ccc: 0x0  nop
    ctx->pc = 0x274cccu;
    // NOP
    // 0x274cd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x274cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274cd4: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x274cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
label_274cd8:
    // 0x274cd8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x274cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x274cdc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x274cdcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_274ce0:
    // 0x274ce0: 0x2a040038  slti        $a0, $s0, 0x38
    ctx->pc = 0x274ce0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)56) ? 1 : 0);
    // 0x274ce4: 0x1480ffb6  bnez        $a0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x274CE4u;
    {
        const bool branch_taken_0x274ce4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x274ce4) {
            ctx->pc = 0x274BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274bc0;
        }
    }
    ctx->pc = 0x274CECu;
    // 0x274cec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x274cecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274cf0: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x274CF0u;
    {
        const bool branch_taken_0x274cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274cf0) {
            ctx->pc = 0x274F40u;
            goto label_274f40;
        }
    }
    ctx->pc = 0x274CF8u;
label_274cf8:
    // 0x274cf8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274CF8u;
    SET_GPR_U32(ctx, 31, 0x274D00u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274CF8u, 0x274D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D00u;
label_274d00:
    // 0x274d00: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x274d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x274d04: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x274d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x274d08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x274d08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274d0c: 0x0  nop
    ctx->pc = 0x274d0cu;
    // NOP
    // 0x274d10: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x274d10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274d14: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274d18: 0xc420d2c0  lwc1        $f0, -0x2D40($at)
    ctx->pc = 0x274d18u;
    { uint32_t bits = FAST_READ32(0x38D2C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274d1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x274d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x274d20: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x274d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x274d24: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274D24u;
    SET_GPR_U32(ctx, 31, 0x274D2Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274D24u, 0x274D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D2Cu;
label_274d2c:
    // 0x274d2c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x274d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x274d30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x274d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274d34: 0x0  nop
    ctx->pc = 0x274d34u;
    // NOP
    // 0x274d38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x274d38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274d3c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274d40: 0xc420d2c4  lwc1        $f0, -0x2D3C($at)
    ctx->pc = 0x274d40u;
    { uint32_t bits = FAST_READ32(0x38D2C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274d44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x274d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x274d48: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x274d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x274d4c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274D4Cu;
    SET_GPR_U32(ctx, 31, 0x274D54u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274D4Cu, 0x274D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D54u;
label_274d54:
    // 0x274d54: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x274d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x274d58: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x274d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x274d5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x274d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274d60: 0x0  nop
    ctx->pc = 0x274d60u;
    // NOP
    // 0x274d64: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x274d64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274d68: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274d6c: 0xc420d2c8  lwc1        $f0, -0x2D38($at)
    ctx->pc = 0x274d6cu;
    { uint32_t bits = FAST_READ32(0x38D2C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274d70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x274d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x274d74: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x274d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x274d78: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x274d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x274d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274d80: 0x0  nop
    ctx->pc = 0x274d80u;
    // NOP
    // 0x274d84: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x274d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x274d88: 0x24040b05  addiu       $a0, $zero, 0xB05
    ctx->pc = 0x274d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2821));
    // 0x274d8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x274d8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274d90: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x274d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x274d94: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x274d94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274d98: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x274D98u;
    SET_GPR_U32(ctx, 31, 0x274DA0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x274D98u, 0x274DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274DA0u;
label_274da0:
    // 0x274da0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274da4: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x274da4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x274da8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x274da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274dac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274db0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x274db0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x274db4: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x274db4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x274db8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274dbc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x274dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x274dc0: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x274dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x274dc4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x274dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x274dc8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x274dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x274dcc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x274dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x274dd0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x274dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274dd4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274dd8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x274dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x274ddc: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x274ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x274de0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274de4: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x274de4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x274de8: 0xa060011b  sb          $zero, 0x11B($v1)
    ctx->pc = 0x274de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x274dec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274df0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x274df0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x274df4: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x274df4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x274df8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274dfc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x274dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x274e00: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x274e00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x274e04: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e08: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x274e08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x274e0c: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x274e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x274e10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e14: 0x8c25a618  lw          $a1, -0x59E8($at)
    ctx->pc = 0x274e14u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x53A618u));
    // 0x274e18: 0xa0a0013d  sb          $zero, 0x13D($a1)
    ctx->pc = 0x274e18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x274e1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e20: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x274e20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x274e24: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x274e24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x274e28: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e2c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x274e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x274e30: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x274e30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x274e34: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e38: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x274e38u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x274e3c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x274E3Cu;
    SET_GPR_U32(ctx, 31, 0x274E44u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x274E3Cu, 0x274E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274E44u;
label_274e44:
    // 0x274e44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e48: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x274e48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x274e4c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e50: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x274e50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x274e54: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x274e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x274e58: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x274e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x274e5c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x274E5Cu;
    {
        const bool branch_taken_0x274e5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x274e5c) {
            ctx->pc = 0x274E70u;
            goto label_274e70;
        }
    }
    ctx->pc = 0x274E64u;
    // 0x274e64: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x274e64u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274e68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x274E68u;
    {
        const bool branch_taken_0x274e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274e68) {
            ctx->pc = 0x274E90u;
            goto label_274e90;
        }
    }
    ctx->pc = 0x274E70u;
label_274e70:
    // 0x274e70: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e74: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x274e74u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x274e78: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x274e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x274e7c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x274e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x274e80: 0x247e0118  addiu       $fp, $v1, 0x118
    ctx->pc = 0x274e80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x274e84: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x274e84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x274e88: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x274e88u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x274e8c: 0x0  nop
    ctx->pc = 0x274e8cu;
    // NOP
label_274e90:
    // 0x274e90: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x274e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x274e94: 0x2464a610  addiu       $a0, $v1, -0x59F0
    ctx->pc = 0x274e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x274e98: 0xafa400d4  sw          $a0, 0xD4($sp)
    ctx->pc = 0x274e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
    // 0x274e9c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x274e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x274ea0: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x274ea0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274ea4: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x274ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x274ea8: 0x34830011  ori         $v1, $a0, 0x11
    ctx->pc = 0x274ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x274eac: 0x12630022  beq         $s3, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x274EACu;
    {
        const bool branch_taken_0x274eac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x274eac) {
            ctx->pc = 0x274F38u;
            goto label_274f38;
        }
    }
    ctx->pc = 0x274EB4u;
    // 0x274eb4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x274eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x274eb8: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x274eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
    // 0x274ebc: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x274ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x274ec0: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x274ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x274ec4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274ec8: 0x0  nop
    ctx->pc = 0x274ec8u;
    // NOP
    // 0x274ecc: 0xe66000ac  swc1        $f0, 0xAC($s3)
    ctx->pc = 0x274eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 172), bits); }
    // 0x274ed0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x274ed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274ed4: 0x0  nop
    ctx->pc = 0x274ed4u;
    // NOP
    // 0x274ed8: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x274ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x274edc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274EDCu;
    SET_GPR_U32(ctx, 31, 0x274EE4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274EDCu, 0x274EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274EE4u;
label_274ee4:
    // 0x274ee4: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x274ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x274ee8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274EE8u;
    SET_GPR_U32(ctx, 31, 0x274EF0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274EE8u, 0x274EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274EF0u;
label_274ef0:
    // 0x274ef0: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x274ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x274ef4: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x274ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274ef8: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x274ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x274efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274f00: 0x0  nop
    ctx->pc = 0x274f00u;
    // NOP
    // 0x274f04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x274f04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x274f08: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x274f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x274f0c: 0xc6610058  lwc1        $f1, 0x58($s3)
    ctx->pc = 0x274f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274f10: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x274f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x274f14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274f18: 0x0  nop
    ctx->pc = 0x274f18u;
    // NOP
    // 0x274f1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x274f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x274f20: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x274f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x274f24: 0x3c03bfae  lui         $v1, 0xBFAE
    ctx->pc = 0x274f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49070 << 16));
    // 0x274f28: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x274f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x274f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274f30: 0x0  nop
    ctx->pc = 0x274f30u;
    // NOP
    // 0x274f34: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x274f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
label_274f38:
    // 0x274f38: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x274f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x274f3c: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x274f3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_274f40:
    // 0x274f40: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x274f40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x274f44: 0x1460ff6c  bnez        $v1, . + 4 + (-0x94 << 2)
    ctx->pc = 0x274F44u;
    {
        const bool branch_taken_0x274f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274f44) {
            ctx->pc = 0x274CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274cf8;
        }
    }
    ctx->pc = 0x274F4Cu;
    // 0x274f4c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x274f4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274f50: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x274F50u;
    {
        const bool branch_taken_0x274f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274f50) {
            ctx->pc = 0x2751C8u;
            goto label_2751c8;
        }
    }
    ctx->pc = 0x274F58u;
label_274f58:
    // 0x274f58: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274F58u;
    SET_GPR_U32(ctx, 31, 0x274F60u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274F58u, 0x274F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F60u;
label_274f60:
    // 0x274f60: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x274f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x274f64: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x274f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x274f68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x274f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274f6c: 0x0  nop
    ctx->pc = 0x274f6cu;
    // NOP
    // 0x274f70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x274f70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274f74: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274f78: 0xc420d2c0  lwc1        $f0, -0x2D40($at)
    ctx->pc = 0x274f78u;
    { uint32_t bits = FAST_READ32(0x38D2C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274f7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x274f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x274f80: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x274f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x274f84: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274F84u;
    SET_GPR_U32(ctx, 31, 0x274F8Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274F84u, 0x274F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F8Cu;
label_274f8c:
    // 0x274f8c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x274f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x274f90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x274f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274f94: 0x0  nop
    ctx->pc = 0x274f94u;
    // NOP
    // 0x274f98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x274f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274f9c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274fa0: 0xc420d2c4  lwc1        $f0, -0x2D3C($at)
    ctx->pc = 0x274fa0u;
    { uint32_t bits = FAST_READ32(0x38D2C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274fa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x274fa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x274fa8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x274fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x274fac: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274FACu;
    SET_GPR_U32(ctx, 31, 0x274FB4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274FACu, 0x274FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274FB4u;
label_274fb4:
    // 0x274fb4: 0x3c0344d4  lui         $v1, 0x44D4
    ctx->pc = 0x274fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17620 << 16));
    // 0x274fb8: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x274fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x274fbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x274fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274fc0: 0x0  nop
    ctx->pc = 0x274fc0u;
    // NOP
    // 0x274fc4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x274fc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274fc8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x274fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274fcc: 0xc420d2c8  lwc1        $f0, -0x2D38($at)
    ctx->pc = 0x274fccu;
    { uint32_t bits = FAST_READ32(0x38D2C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274fd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x274fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x274fd4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x274fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x274fd8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x274fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x274fdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274fe0: 0x0  nop
    ctx->pc = 0x274fe0u;
    // NOP
    // 0x274fe4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x274fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x274fe8: 0x24040b05  addiu       $a0, $zero, 0xB05
    ctx->pc = 0x274fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2821));
    // 0x274fec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x274fecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274ff0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x274ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x274ff4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x274ff4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x274ff8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x274FF8u;
    SET_GPR_U32(ctx, 31, 0x275000u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x274FF8u, 0x275000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275000u;
label_275000:
    // 0x275000: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275004: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x275004u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x275008: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x275008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27500c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x27500cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275010: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x275010u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x275014: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x275014u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x275018: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x27501c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x27501cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x275020: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x275020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x275024: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x275024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x275028: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x275028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x27502c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x27502cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x275030: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x275030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x275034: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275038: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x275038u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x27503c: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x27503cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x275040: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275044: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x275044u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x275048: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x275048u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x27504c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x27504cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275050: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x275050u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x275054: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x275054u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x275058: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x27505c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x27505cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x275060: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x275060u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x275064: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275068: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x275068u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x27506c: 0xa060013c  sb          $zero, 0x13C($v1)
    ctx->pc = 0x27506cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x275070: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275074: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x275074u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x275078: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x275078u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x27507c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x27507cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275080: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x275080u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x275084: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x275084u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x275088: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x27508c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x27508cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x275090: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x275090u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x275094: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x275094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x275098: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x275098u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x27509c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27509Cu;
    SET_GPR_U32(ctx, 31, 0x2750A4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27509Cu, 0x2750A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2750A4u;
label_2750a4:
    // 0x2750a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2750a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2750a8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2750a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2750ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2750acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2750b0: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2750b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2750b4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2750b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2750b8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2750b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2750bc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2750BCu;
    {
        const bool branch_taken_0x2750bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2750bc) {
            ctx->pc = 0x2750D0u;
            goto label_2750d0;
        }
    }
    ctx->pc = 0x2750C4u;
    // 0x2750c4: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x2750c4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2750c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2750C8u;
    {
        const bool branch_taken_0x2750c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2750c8) {
            ctx->pc = 0x2750F8u;
            goto label_2750f8;
        }
    }
    ctx->pc = 0x2750D0u;
label_2750d0:
    // 0x2750d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2750d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2750d4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2750d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2750d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2750d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2750dc: 0x8c25a610  lw          $a1, -0x59F0($at)
    ctx->pc = 0x2750dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x53A610u));
    // 0x2750e0: 0x24a30118  addiu       $v1, $a1, 0x118
    ctx->pc = 0x2750e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 280));
    // 0x2750e4: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x2750e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x2750e8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x2750e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2750ec: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2750ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2750f0: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x2750f0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2750f4: 0x0  nop
    ctx->pc = 0x2750f4u;
    // NOP
label_2750f8:
    // 0x2750f8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2750f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2750fc: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2750fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x275100: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x275100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x275104: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x275104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x275108: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x275108u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27510c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x27510cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x275110: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x275110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x275114: 0x1264002a  beq         $s3, $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x275114u;
    {
        const bool branch_taken_0x275114 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        if (branch_taken_0x275114) {
            ctx->pc = 0x2751C0u;
            goto label_2751c0;
        }
    }
    ctx->pc = 0x27511Cu;
    // 0x27511c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x27511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x275120: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x275120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
    // 0x275124: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x275124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x275128: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x275128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x27512c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27512cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275130: 0x0  nop
    ctx->pc = 0x275130u;
    // NOP
    // 0x275134: 0xe66000ac  swc1        $f0, 0xAC($s3)
    ctx->pc = 0x275134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 172), bits); }
    // 0x275138: 0xc06765c  jal         func_19D970
    ctx->pc = 0x275138u;
    SET_GPR_U32(ctx, 31, 0x275140u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x275138u, 0x275140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275140u;
label_275140:
    // 0x275140: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x275140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x275144: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x275144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x275148: 0x0  nop
    ctx->pc = 0x275148u;
    // NOP
    // 0x27514c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27514cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x275150: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x275150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x275154: 0xc06765c  jal         func_19D970
    ctx->pc = 0x275154u;
    SET_GPR_U32(ctx, 31, 0x27515Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x275154u, 0x27515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27515Cu;
label_27515c:
    // 0x27515c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x27515cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x275160: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x275160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x275164: 0x0  nop
    ctx->pc = 0x275164u;
    // NOP
    // 0x275168: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x275168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27516c: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x27516cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x275170: 0xc06765c  jal         func_19D970
    ctx->pc = 0x275170u;
    SET_GPR_U32(ctx, 31, 0x275178u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x275170u, 0x275178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275178u;
label_275178:
    // 0x275178: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x275178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x27517c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27517cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x275180: 0x0  nop
    ctx->pc = 0x275180u;
    // NOP
    // 0x275184: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x275184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x275188: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x275188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x27518c: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x27518cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275190: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x275190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x275194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275198: 0x0  nop
    ctx->pc = 0x275198u;
    // NOP
    // 0x27519c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27519cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2751a0: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x2751a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x2751a4: 0xc6610058  lwc1        $f1, 0x58($s3)
    ctx->pc = 0x2751a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2751a8: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x2751a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x2751ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2751acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2751b0: 0x0  nop
    ctx->pc = 0x2751b0u;
    // NOP
    // 0x2751b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2751b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2751b8: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x2751b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x2751bc: 0x0  nop
    ctx->pc = 0x2751bcu;
    // NOP
label_2751c0:
    // 0x2751c0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2751c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2751c4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2751c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2751c8:
    // 0x2751c8: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x2751c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2751cc: 0x1460ff62  bnez        $v1, . + 4 + (-0x9E << 2)
    ctx->pc = 0x2751CCu;
    {
        const bool branch_taken_0x2751cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2751cc) {
            ctx->pc = 0x274F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274f58;
        }
    }
    ctx->pc = 0x2751D4u;
    // 0x2751d4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x2751d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2751d8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2751d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2751dc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2751dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2751e0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2751e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2751e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2751e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2751e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2751e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2751ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2751ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2751f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2751f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2751f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2751f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2751f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2751f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2751fc: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2751fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x275200: 0x3e00008  jr          $ra
    ctx->pc = 0x275200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275208u;
}
