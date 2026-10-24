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

// Function: Bg_debug
// Address: 0x2011b0 - 0x2014b8
void Bg_debug_0x2011b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Bg_debug_0x2011b0");
#endif

    switch (ctx->pc) {
        case 0x201338u: goto label_201338;
        case 0x2013f0u: goto label_2013f0;
        case 0x201498u: goto label_201498;
        default: break;
    }

    ctx->pc = 0x2011b0u;

    // 0x2011b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2011b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2011b4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x2011b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x2011b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2011b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2011bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2011bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2011c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2011c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2011c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2011c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2011c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2011c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2011cc: 0x24510b10  addiu       $s1, $v0, 0xB10
    ctx->pc = 0x2011ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2832));
    // 0x2011d0: 0x8e3202d0  lw          $s2, 0x2D0($s1)
    ctx->pc = 0x2011d0u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0DE0u));
    // 0x2011d4: 0x8e5300a0  lw          $s3, 0xA0($s2)
    ctx->pc = 0x2011d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x2011d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2011d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2011dc: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x2011dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x2011e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2011e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2011e4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2011e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2011e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2011E8u;
    {
        const bool branch_taken_0x2011e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2011e8) {
            ctx->pc = 0x201204u;
            goto label_201204;
        }
    }
    ctx->pc = 0x2011F0u;
    // 0x2011f0: 0x938280d0  lbu         $v0, -0x7F30($gp)
    ctx->pc = 0x2011f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x2011f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2011f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2011f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2011f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2011fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2011fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x201200: 0xa38280d0  sb          $v0, -0x7F30($gp)
    ctx->pc = 0x201200u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934736), (uint8_t)GPR_U32(ctx, 2));
label_201204:
    // 0x201204: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201208: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x201208u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x20120c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x20120cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x201210: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x201210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x201214: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201214u;
    {
        const bool branch_taken_0x201214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201214) {
            ctx->pc = 0x201230u;
            goto label_201230;
        }
    }
    ctx->pc = 0x20121Cu;
    // 0x20121c: 0x93828010  lbu         $v0, -0x7FF0($gp)
    ctx->pc = 0x20121cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934544)));
    // 0x201220: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x201220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x201224: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x201224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x201228: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x201228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20122c: 0xa3828010  sb          $v0, -0x7FF0($gp)
    ctx->pc = 0x20122cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934544), (uint8_t)GPR_U32(ctx, 2));
label_201230:
    // 0x201230: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201234: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x201234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x201238: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x201238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20123c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x20123cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x201240: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x201240u;
    {
        const bool branch_taken_0x201240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201240) {
            ctx->pc = 0x201294u;
            goto label_201294;
        }
    }
    ctx->pc = 0x201248u;
    // 0x201248: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20124c: 0xc4219fa0  lwc1        $f1, -0x6060($at)
    ctx->pc = 0x20124cu;
    { uint32_t bits = FAST_READ32(0x389FA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201250: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x201250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x201254: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x201254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x201258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20125c: 0x0  nop
    ctx->pc = 0x20125cu;
    // NOP
    // 0x201260: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x201260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x201264: 0x0  nop
    ctx->pc = 0x201264u;
    // NOP
    // 0x201268: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x201268u;
    {
        const bool branch_taken_0x201268 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x201268) {
            ctx->pc = 0x201294u;
            goto label_201294;
        }
    }
    ctx->pc = 0x201270u;
    // 0x201270: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201274: 0xc4219fa0  lwc1        $f1, -0x6060($at)
    ctx->pc = 0x201274u;
    { uint32_t bits = FAST_READ32(0x389FA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x201278: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x201278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x20127c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20127cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x201280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x201280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201284: 0x0  nop
    ctx->pc = 0x201284u;
    // NOP
    // 0x201288: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x201288u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20128c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20128cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201290: 0xe4209fa0  swc1        $f0, -0x6060($at)
    ctx->pc = 0x201290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x389FA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FA0u, _value); } while (0); }
label_201294:
    // 0x201294: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201298: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x201298u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x20129c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x20129cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2012a0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2012a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2012a4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2012A4u;
    {
        const bool branch_taken_0x2012a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2012a4) {
            ctx->pc = 0x2012F4u;
            goto label_2012f4;
        }
    }
    ctx->pc = 0x2012ACu;
    // 0x2012ac: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2012acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2012b0: 0xc4219fa0  lwc1        $f1, -0x6060($at)
    ctx->pc = 0x2012b0u;
    { uint32_t bits = FAST_READ32(0x389FA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2012b4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2012b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2012b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2012b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2012bc: 0x0  nop
    ctx->pc = 0x2012bcu;
    // NOP
    // 0x2012c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2012c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2012c4: 0x0  nop
    ctx->pc = 0x2012c4u;
    // NOP
    // 0x2012c8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2012C8u;
    {
        const bool branch_taken_0x2012c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2012c8) {
            ctx->pc = 0x2012F4u;
            goto label_2012f4;
        }
    }
    ctx->pc = 0x2012D0u;
    // 0x2012d0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2012d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2012d4: 0xc4219fa0  lwc1        $f1, -0x6060($at)
    ctx->pc = 0x2012d4u;
    { uint32_t bits = FAST_READ32(0x389FA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2012d8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2012d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2012dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2012dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2012e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2012e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2012e4: 0x0  nop
    ctx->pc = 0x2012e4u;
    // NOP
    // 0x2012e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2012e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2012ec: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2012ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2012f0: 0xe4209fa0  swc1        $f0, -0x6060($at)
    ctx->pc = 0x2012f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x389FA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FA0u, _value); } while (0); }
label_2012f4:
    // 0x2012f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2012f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2012f8: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x2012f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x2012fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2012fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x201300: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x201300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x201304: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x201304u;
    {
        const bool branch_taken_0x201304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201304) {
            ctx->pc = 0x2013B0u;
            goto label_2013b0;
        }
    }
    ctx->pc = 0x20130Cu;
    // 0x20130c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20130cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201310: 0x8c229fb0  lw          $v0, -0x6050($at)
    ctx->pc = 0x201310u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x389FB0u));
    // 0x201314: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x201314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x201318: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x201318u;
    {
        const bool branch_taken_0x201318 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x201318) {
            ctx->pc = 0x20132Cu;
            goto label_20132c;
        }
    }
    ctx->pc = 0x201320u;
    // 0x201320: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x201320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201324: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201328: 0xac229fb0  sw          $v0, -0x6050($at)
    ctx->pc = 0x201328u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x389FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FB0u, _value); } while (0);
label_20132c:
    // 0x20132c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x20132cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x201330: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x201330u;
    {
        const bool branch_taken_0x201330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201330) {
            ctx->pc = 0x201378u;
            goto label_201378;
        }
    }
    ctx->pc = 0x201338u;
label_201338:
    // 0x201338: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20133c: 0x8c229fb0  lw          $v0, -0x6050($at)
    ctx->pc = 0x20133cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x389FB0u));
    // 0x201340: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x201340u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x201344: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x201344u;
    {
        const bool branch_taken_0x201344 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x201344) {
            ctx->pc = 0x201358u;
            goto label_201358;
        }
    }
    ctx->pc = 0x20134Cu;
    // 0x20134c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201350: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201354: 0xac229fb0  sw          $v0, -0x6050($at)
    ctx->pc = 0x201354u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x389FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FB0u, _value); } while (0);
label_201358:
    // 0x201358: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x201358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20135c: 0x2e010004  sltiu       $at, $s0, 0x4
    ctx->pc = 0x20135cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x201360: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x201360u;
    {
        const bool branch_taken_0x201360 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x201360) {
            ctx->pc = 0x201378u;
            goto label_201378;
        }
    }
    ctx->pc = 0x201368u;
    // 0x201368: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20136c: 0xac209fb0  sw          $zero, -0x6050($at)
    ctx->pc = 0x20136cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x389FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FB0u, _value); } while (0);
    // 0x201370: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x201370u;
    {
        const bool branch_taken_0x201370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201370) {
            ctx->pc = 0x2013B0u;
            goto label_2013b0;
        }
    }
    ctx->pc = 0x201378u;
label_201378:
    // 0x201378: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20137c: 0x8c229fb0  lw          $v0, -0x6050($at)
    ctx->pc = 0x20137cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x389FB0u));
    // 0x201380: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x201380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x201384: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201388: 0xac239fb0  sw          $v1, -0x6050($at)
    ctx->pc = 0x201388u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x389FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FB0u, _value); } while (0);
    // 0x20138c: 0x24024860  addiu       $v0, $zero, 0x4860
    ctx->pc = 0x20138cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x201390: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x201390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x201394: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x201398: 0x244270d0  addiu       $v0, $v0, 0x70D0
    ctx->pc = 0x201398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
    // 0x20139c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2013a0: 0x9042485f  lbu         $v0, 0x485F($v0)
    ctx->pc = 0x2013a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18527)));
    // 0x2013a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2013a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2013a8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2013A8u;
    {
        const bool branch_taken_0x2013a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2013a8) {
            ctx->pc = 0x201338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201338;
        }
    }
    ctx->pc = 0x2013B0u;
label_2013b0:
    // 0x2013b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2013b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2013b4: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x2013b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x2013b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2013b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2013bc: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2013bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2013c0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2013C0u;
    {
        const bool branch_taken_0x2013c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2013c0) {
            ctx->pc = 0x201468u;
            goto label_201468;
        }
    }
    ctx->pc = 0x2013C8u;
    // 0x2013c8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2013c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2013cc: 0x8c229fb0  lw          $v0, -0x6050($at)
    ctx->pc = 0x2013ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x389FB0u));
    // 0x2013d0: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2013D0u;
    {
        const bool branch_taken_0x2013d0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2013d0) {
            ctx->pc = 0x2013E4u;
            goto label_2013e4;
        }
    }
    ctx->pc = 0x2013D8u;
    // 0x2013d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2013d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2013dc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2013dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2013e0: 0xac229fb0  sw          $v0, -0x6050($at)
    ctx->pc = 0x2013e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x389FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FB0u, _value); } while (0);
label_2013e4:
    // 0x2013e4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2013e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2013e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2013E8u;
    {
        const bool branch_taken_0x2013e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2013e8) {
            ctx->pc = 0x201430u;
            goto label_201430;
        }
    }
    ctx->pc = 0x2013F0u;
label_2013f0:
    // 0x2013f0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2013f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2013f4: 0x8c229fb0  lw          $v0, -0x6050($at)
    ctx->pc = 0x2013f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x389FB0u));
    // 0x2013f8: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2013F8u;
    {
        const bool branch_taken_0x2013f8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2013f8) {
            ctx->pc = 0x201410u;
            goto label_201410;
        }
    }
    ctx->pc = 0x201400u;
    // 0x201400: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x201400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x201404: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201408: 0xac229fb0  sw          $v0, -0x6050($at)
    ctx->pc = 0x201408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x389FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FB0u, _value); } while (0);
    // 0x20140c: 0x0  nop
    ctx->pc = 0x20140cu;
    // NOP
label_201410:
    // 0x201410: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x201410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x201414: 0x2e010004  sltiu       $at, $s0, 0x4
    ctx->pc = 0x201414u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x201418: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x201418u;
    {
        const bool branch_taken_0x201418 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x201418) {
            ctx->pc = 0x201430u;
            goto label_201430;
        }
    }
    ctx->pc = 0x201420u;
    // 0x201420: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201424: 0xac209fb0  sw          $zero, -0x6050($at)
    ctx->pc = 0x201424u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x389FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FB0u, _value); } while (0);
    // 0x201428: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x201428u;
    {
        const bool branch_taken_0x201428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201428) {
            ctx->pc = 0x201468u;
            goto label_201468;
        }
    }
    ctx->pc = 0x201430u;
label_201430:
    // 0x201430: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201434: 0x8c229fb0  lw          $v0, -0x6050($at)
    ctx->pc = 0x201434u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x389FB0u));
    // 0x201438: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x201438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20143c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20143cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x201440: 0xac239fb0  sw          $v1, -0x6050($at)
    ctx->pc = 0x201440u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x389FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x389FB0u, _value); } while (0);
    // 0x201444: 0x24024860  addiu       $v0, $zero, 0x4860
    ctx->pc = 0x201444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x201448: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x201448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20144c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20144cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x201450: 0x244270d0  addiu       $v0, $v0, 0x70D0
    ctx->pc = 0x201450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
    // 0x201454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201458: 0x9042485f  lbu         $v0, 0x485F($v0)
    ctx->pc = 0x201458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18527)));
    // 0x20145c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20145cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x201460: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x201460u;
    {
        const bool branch_taken_0x201460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201460) {
            ctx->pc = 0x2013F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2013f0;
        }
    }
    ctx->pc = 0x201468u;
label_201468:
    // 0x201468: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x201468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x20146c: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x20146cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x201470: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x201474: 0x3c021c07  lui         $v0, 0x1C07
    ctx->pc = 0x201474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7175 << 16));
    // 0x201478: 0x34420a16  ori         $v0, $v0, 0xA16
    ctx->pc = 0x201478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2582);
    // 0x20147c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x20147cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201480: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x201480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x201484: 0x24450d20  addiu       $a1, $v0, 0xD20
    ctx->pc = 0x201484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3360));
    // 0x201488: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x201488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20148c: 0x8c269fb0  lw          $a2, -0x6050($at)
    ctx->pc = 0x20148cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x389FB0u));
    // 0x201490: 0xc059b14  jal         func_166C50
    ctx->pc = 0x201490u;
    SET_GPR_U32(ctx, 31, 0x201498u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x201490u, 0x201498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201498u;
label_201498:
    // 0x201498: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x201498u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20149c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20149cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2014a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2014a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2014a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2014a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2014a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2014a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2014ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2014acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2014b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2014B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2014B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2014B8u;
}
