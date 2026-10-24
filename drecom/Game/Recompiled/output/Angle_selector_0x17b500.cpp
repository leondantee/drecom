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

// Function: Angle_selector
// Address: 0x17b500 - 0x17bce0
void Angle_selector_0x17b500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Angle_selector_0x17b500");
#endif

    switch (ctx->pc) {
        case 0x17b720u: goto label_17b720;
        case 0x17b838u: goto label_17b838;
        case 0x17bb60u: goto label_17bb60;
        case 0x17bc88u: goto label_17bc88;
        default: break;
    }

    ctx->pc = 0x17b500u;

    // 0x17b500: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17b500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17b504: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x17b504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x17b508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b50c: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x17b50cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17b510: 0xe7ad0038  swc1        $f13, 0x38($sp)
    ctx->pc = 0x17b510u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x17b514: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x17b514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x17b518: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x17b518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x17b51c: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x17b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x17b520: 0xe7ae0058  swc1        $f14, 0x58($sp)
    ctx->pc = 0x17b520u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x17b524: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b524u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b528: 0x0  nop
    ctx->pc = 0x17b528u;
    // NOP
    // 0x17b52c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17b52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17b530: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x17b530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b534: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x17b534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b538: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17b538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b53c: 0x0  nop
    ctx->pc = 0x17b53cu;
    // NOP
    // 0x17b540: 0x450000d8  bc1f        . + 4 + (0xD8 << 2)
    ctx->pc = 0x17B540u;
    {
        const bool branch_taken_0x17b540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b540) {
            ctx->pc = 0x17B8A4u;
            goto label_17b8a4;
        }
    }
    ctx->pc = 0x17B548u;
    // 0x17b548: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x17b548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17b54c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17b550: 0x10620085  beq         $v1, $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x17B550u;
    {
        const bool branch_taken_0x17b550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b550) {
            ctx->pc = 0x17B768u;
            goto label_17b768;
        }
    }
    ctx->pc = 0x17B558u;
    // 0x17b558: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17b558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b55c: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x17B55Cu;
    {
        const bool branch_taken_0x17b55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b55c) {
            ctx->pc = 0x17B650u;
            goto label_17b650;
        }
    }
    ctx->pc = 0x17B564u;
    // 0x17b564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b568: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B568u;
    {
        const bool branch_taken_0x17b568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b568) {
            ctx->pc = 0x17B590u;
            goto label_17b590;
        }
    }
    ctx->pc = 0x17B570u;
    // 0x17b570: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B570u;
    {
        const bool branch_taken_0x17b570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b570) {
            ctx->pc = 0x17B580u;
            goto label_17b580;
        }
    }
    ctx->pc = 0x17B578u;
    // 0x17b578: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x17B578u;
    {
        const bool branch_taken_0x17b578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b578) {
            ctx->pc = 0x17B580u;
            goto label_17b580;
        }
    }
    ctx->pc = 0x17B580u;
label_17b580:
    // 0x17b580: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17b580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b584: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17b584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17b588: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x17B588u;
    {
        const bool branch_taken_0x17b588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b588) {
            ctx->pc = 0x17B888u;
            goto label_17b888;
        }
    }
    ctx->pc = 0x17B590u;
label_17b590:
    // 0x17b590: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b594: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17b594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b598: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B598u;
    {
        const bool branch_taken_0x17b598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b598) {
            ctx->pc = 0x17B5ACu;
            goto label_17b5ac;
        }
    }
    ctx->pc = 0x17B5A0u;
    // 0x17b5a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b5a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b5a4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b5a8: 0xe420ef10  swc1        $f0, -0x10F0($at)
    ctx->pc = 0x17b5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47EF10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47EF10u, _value); } while (0); }
label_17b5ac:
    // 0x17b5ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b5b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b5b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b5b8: 0x628018  mult        $s0, $v1, $v0
    ctx->pc = 0x17b5b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x17b5bc: 0x2e01005b  sltiu       $at, $s0, 0x5B
    ctx->pc = 0x17b5bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)91) ? 1 : 0);
    // 0x17b5c0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17B5C0u;
    {
        const bool branch_taken_0x17b5c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b5c0) {
            ctx->pc = 0x17B5CCu;
            goto label_17b5cc;
        }
    }
    ctx->pc = 0x17B5C8u;
    // 0x17b5c8: 0x2410005a  addiu       $s0, $zero, 0x5A
    ctx->pc = 0x17b5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_17b5cc:
    // 0x17b5cc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B5CCu;
    {
        const bool branch_taken_0x17b5cc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x17b5cc) {
            ctx->pc = 0x17B5E8u;
            goto label_17b5e8;
        }
    }
    ctx->pc = 0x17B5D4u;
    // 0x17b5d4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x17b5d4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b5d8: 0x0  nop
    ctx->pc = 0x17b5d8u;
    // NOP
    // 0x17b5dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17b5dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17b5e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17B5E0u;
    {
        const bool branch_taken_0x17b5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b5e0) {
            ctx->pc = 0x17B604u;
            goto label_17b604;
        }
    }
    ctx->pc = 0x17B5E8u;
label_17b5e8:
    // 0x17b5e8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x17b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x17b5ec: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x17b5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x17b5f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17b5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17b5f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17b5f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b5f8: 0x0  nop
    ctx->pc = 0x17b5f8u;
    // NOP
    // 0x17b5fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17b5fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17b600: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17b600u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17b604:
    // 0x17b604: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17b604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b608: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x17b608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17b60c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17b610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b614: 0x0  nop
    ctx->pc = 0x17b614u;
    // NOP
    // 0x17b618: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17b618u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17b61c: 0x0  nop
    ctx->pc = 0x17b61cu;
    // NOP
    // 0x17b620: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17b620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17b624: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x17b624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x17b628: 0x12020097  beq         $s0, $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x17B628u;
    {
        const bool branch_taken_0x17b628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b628) {
            ctx->pc = 0x17B888u;
            goto label_17b888;
        }
    }
    ctx->pc = 0x17B630u;
    // 0x17b630: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b634: 0xc421ef10  lwc1        $f1, -0x10F0($at)
    ctx->pc = 0x17b634u;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b638: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x17b638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b63c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17b63cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17b640: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b644: 0xe420ef10  swc1        $f0, -0x10F0($at)
    ctx->pc = 0x17b644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47EF10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47EF10u, _value); } while (0); }
    // 0x17b648: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x17B648u;
    {
        const bool branch_taken_0x17b648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b648) {
            ctx->pc = 0x17B888u;
            goto label_17b888;
        }
    }
    ctx->pc = 0x17B650u;
label_17b650:
    // 0x17b650: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b654: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b658: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B658u;
    {
        const bool branch_taken_0x17b658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b658) {
            ctx->pc = 0x17B66Cu;
            goto label_17b66c;
        }
    }
    ctx->pc = 0x17B660u;
    // 0x17b660: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b664: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b668: 0xe420ef10  swc1        $f0, -0x10F0($at)
    ctx->pc = 0x17b668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47EF10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47EF10u, _value); } while (0); }
label_17b66c:
    // 0x17b66c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b670: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17b670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b674: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17b674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b678: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x17b678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17b67c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B67Cu;
    {
        const bool branch_taken_0x17b67c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17b67c) {
            ctx->pc = 0x17B698u;
            goto label_17b698;
        }
    }
    ctx->pc = 0x17B684u;
    // 0x17b684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b688: 0x0  nop
    ctx->pc = 0x17b688u;
    // NOP
    // 0x17b68c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17b68cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17b690: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17B690u;
    {
        const bool branch_taken_0x17b690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b690) {
            ctx->pc = 0x17B6B4u;
            goto label_17b6b4;
        }
    }
    ctx->pc = 0x17B698u;
label_17b698:
    // 0x17b698: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17b698u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17b69c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17b69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17b6a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17b6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17b6a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17b6a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b6a8: 0x0  nop
    ctx->pc = 0x17b6a8u;
    // NOP
    // 0x17b6ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17b6acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17b6b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17b6b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17b6b4:
    // 0x17b6b4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17b6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17b6b8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x17b6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b6bc: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17b6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b6c4: 0x0  nop
    ctx->pc = 0x17b6c4u;
    // NOP
    // 0x17b6c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17b6c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b6cc: 0x0  nop
    ctx->pc = 0x17b6ccu;
    // NOP
    // 0x17b6d0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17B6D0u;
    {
        const bool branch_taken_0x17b6d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b6d0) {
            ctx->pc = 0x17B6E8u;
            goto label_17b6e8;
        }
    }
    ctx->pc = 0x17B6D8u;
    // 0x17b6d8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17b6dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b6e0: 0x0  nop
    ctx->pc = 0x17b6e0u;
    // NOP
    // 0x17b6e4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17b6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_17b6e8:
    // 0x17b6e8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x17b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x17b6ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17b6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x17b6f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b6f4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x17b6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b6f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17b6f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17b6fc: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x17b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x17b700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b704: 0x0  nop
    ctx->pc = 0x17b704u;
    // NOP
    // 0x17b708: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x17b708u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17b70c: 0x0  nop
    ctx->pc = 0x17b70cu;
    // NOP
    // 0x17b710: 0x0  nop
    ctx->pc = 0x17b710u;
    // NOP
    // 0x17b714: 0x0  nop
    ctx->pc = 0x17b714u;
    // NOP
    // 0x17b718: 0xc0454c4  jal         func_115310
    ctx->pc = 0x17B718u;
    SET_GPR_U32(ctx, 31, 0x17B720u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x17B718u, 0x17B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B720u;
label_17b720:
    // 0x17b720: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x17b720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b724: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17b724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17b728: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17b728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17b72c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17b730: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b734: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x17b734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b738: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17b738u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b73c: 0x0  nop
    ctx->pc = 0x17b73cu;
    // NOP
    // 0x17b740: 0x45010051  bc1t        . + 4 + (0x51 << 2)
    ctx->pc = 0x17B740u;
    {
        const bool branch_taken_0x17b740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b740) {
            ctx->pc = 0x17B888u;
            goto label_17b888;
        }
    }
    ctx->pc = 0x17B748u;
    // 0x17b748: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b74c: 0xc421ef10  lwc1        $f1, -0x10F0($at)
    ctx->pc = 0x17b74cu;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b750: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x17b750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b754: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17b754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17b758: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b75c: 0xe420ef10  swc1        $f0, -0x10F0($at)
    ctx->pc = 0x17b75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47EF10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47EF10u, _value); } while (0); }
    // 0x17b760: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x17B760u;
    {
        const bool branch_taken_0x17b760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b760) {
            ctx->pc = 0x17B888u;
            goto label_17b888;
        }
    }
    ctx->pc = 0x17B768u;
label_17b768:
    // 0x17b768: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b76c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b770: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B770u;
    {
        const bool branch_taken_0x17b770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b770) {
            ctx->pc = 0x17B784u;
            goto label_17b784;
        }
    }
    ctx->pc = 0x17B778u;
    // 0x17b778: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b77c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b780: 0xe420ef10  swc1        $f0, -0x10F0($at)
    ctx->pc = 0x17b780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47EF10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47EF10u, _value); } while (0); }
label_17b784:
    // 0x17b784: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b788: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17b788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b78c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b790: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x17b790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17b794: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B794u;
    {
        const bool branch_taken_0x17b794 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17b794) {
            ctx->pc = 0x17B7B0u;
            goto label_17b7b0;
        }
    }
    ctx->pc = 0x17B79Cu;
    // 0x17b79c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b7a0: 0x0  nop
    ctx->pc = 0x17b7a0u;
    // NOP
    // 0x17b7a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17b7a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17b7a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17B7A8u;
    {
        const bool branch_taken_0x17b7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b7a8) {
            ctx->pc = 0x17B7CCu;
            goto label_17b7cc;
        }
    }
    ctx->pc = 0x17B7B0u;
label_17b7b0:
    // 0x17b7b0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17b7b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17b7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17b7b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17b7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17b7bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17b7bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b7c0: 0x0  nop
    ctx->pc = 0x17b7c0u;
    // NOP
    // 0x17b7c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17b7c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17b7c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17b7c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17b7cc:
    // 0x17b7cc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17b7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17b7d0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x17b7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b7d4: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17b7d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b7dc: 0x0  nop
    ctx->pc = 0x17b7dcu;
    // NOP
    // 0x17b7e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17b7e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b7e4: 0x0  nop
    ctx->pc = 0x17b7e4u;
    // NOP
    // 0x17b7e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17B7E8u;
    {
        const bool branch_taken_0x17b7e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b7e8) {
            ctx->pc = 0x17B800u;
            goto label_17b800;
        }
    }
    ctx->pc = 0x17B7F0u;
    // 0x17b7f0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17b7f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b7f8: 0x0  nop
    ctx->pc = 0x17b7f8u;
    // NOP
    // 0x17b7fc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17b7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_17b800:
    // 0x17b800: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x17b800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x17b804: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17b804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x17b808: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b80c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x17b80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b810: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17b810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17b814: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x17b814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x17b818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b81c: 0x0  nop
    ctx->pc = 0x17b81cu;
    // NOP
    // 0x17b820: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x17b820u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17b824: 0x0  nop
    ctx->pc = 0x17b824u;
    // NOP
    // 0x17b828: 0x0  nop
    ctx->pc = 0x17b828u;
    // NOP
    // 0x17b82c: 0x0  nop
    ctx->pc = 0x17b82cu;
    // NOP
    // 0x17b830: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x17B830u;
    SET_GPR_U32(ctx, 31, 0x17B838u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x17B830u, 0x17B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B838u;
label_17b838:
    // 0x17b838: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17b838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17b83c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b840: 0x0  nop
    ctx->pc = 0x17b840u;
    // NOP
    // 0x17b844: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17b844u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17b848: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17b848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b84c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17b84cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17b850: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17b850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17b854: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17b854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17b858: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b85c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x17b85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b860: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17b860u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b864: 0x0  nop
    ctx->pc = 0x17b864u;
    // NOP
    // 0x17b868: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x17B868u;
    {
        const bool branch_taken_0x17b868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b868) {
            ctx->pc = 0x17B888u;
            goto label_17b888;
        }
    }
    ctx->pc = 0x17B870u;
    // 0x17b870: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b874: 0xc421ef10  lwc1        $f1, -0x10F0($at)
    ctx->pc = 0x17b874u;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b878: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x17b878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b87c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17b87cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17b880: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b884: 0xe420ef10  swc1        $f0, -0x10F0($at)
    ctx->pc = 0x17b884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47EF10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47EF10u, _value); } while (0); }
label_17b888:
    // 0x17b888: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b88c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b890: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17b890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17b894: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b898: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17b898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17b89c: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x17B89Cu;
    {
        const bool branch_taken_0x17b89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b89c) {
            ctx->pc = 0x17BCC8u;
            goto label_17bcc8;
        }
    }
    ctx->pc = 0x17B8A4u;
label_17b8a4:
    // 0x17b8a4: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x17b8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17b8a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x17b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x17b8ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b8b0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x17b8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b8b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17b8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17b8b8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x17b8b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b8bc: 0x0  nop
    ctx->pc = 0x17b8bcu;
    // NOP
    // 0x17b8c0: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x17B8C0u;
    {
        const bool branch_taken_0x17b8c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b8c0) {
            ctx->pc = 0x17B950u;
            goto label_17b950;
        }
    }
    ctx->pc = 0x17B8C8u;
    // 0x17b8c8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17b8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b8cc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17b8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17b8d0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b8d4: 0xc421ef10  lwc1        $f1, -0x10F0($at)
    ctx->pc = 0x17b8d4u;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b8d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b8d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b8dc: 0x0  nop
    ctx->pc = 0x17b8dcu;
    // NOP
    // 0x17b8e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17b8e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b8e4: 0x0  nop
    ctx->pc = 0x17b8e4u;
    // NOP
    // 0x17b8e8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x17B8E8u;
    {
        const bool branch_taken_0x17b8e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b8e8) {
            ctx->pc = 0x17B940u;
            goto label_17b940;
        }
    }
    ctx->pc = 0x17B8F0u;
    // 0x17b8f0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b8f4: 0xc421ef10  lwc1        $f1, -0x10F0($at)
    ctx->pc = 0x17b8f4u;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b8f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b8f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b8fc: 0x0  nop
    ctx->pc = 0x17b8fcu;
    // NOP
    // 0x17b900: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17b900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b904: 0x0  nop
    ctx->pc = 0x17b904u;
    // NOP
    // 0x17b908: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x17B908u;
    {
        const bool branch_taken_0x17b908 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b908) {
            ctx->pc = 0x17B928u;
            goto label_17b928;
        }
    }
    ctx->pc = 0x17B910u;
    // 0x17b910: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b914: 0xc420ef10  lwc1        $f0, -0x10F0($at)
    ctx->pc = 0x17b914u;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b918: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17b918u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17b91c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x17b91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x17b920: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17B920u;
    {
        const bool branch_taken_0x17b920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b920) {
            ctx->pc = 0x17B934u;
            goto label_17b934;
        }
    }
    ctx->pc = 0x17B928u;
label_17b928:
    // 0x17b928: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b92c: 0xc420ef10  lwc1        $f0, -0x10F0($at)
    ctx->pc = 0x17b92cu;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b930: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x17b930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_17b934:
    // 0x17b934: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x17b934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b938: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b93c: 0xe420ef10  swc1        $f0, -0x10F0($at)
    ctx->pc = 0x17b93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47EF10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47EF10u, _value); } while (0); }
label_17b940:
    // 0x17b940: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b944: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17b944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17b948: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x17B948u;
    {
        const bool branch_taken_0x17b948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b948) {
            ctx->pc = 0x17BCC8u;
            goto label_17bcc8;
        }
    }
    ctx->pc = 0x17B950u;
label_17b950:
    // 0x17b950: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x17b950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17b954: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17b954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17b958: 0x1062008f  beq         $v1, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x17B958u;
    {
        const bool branch_taken_0x17b958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b958) {
            ctx->pc = 0x17BB98u;
            goto label_17bb98;
        }
    }
    ctx->pc = 0x17B960u;
    // 0x17b960: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17b960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b964: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x17B964u;
    {
        const bool branch_taken_0x17b964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b964) {
            ctx->pc = 0x17BA70u;
            goto label_17ba70;
        }
    }
    ctx->pc = 0x17B96Cu;
    // 0x17b96c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b970: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B970u;
    {
        const bool branch_taken_0x17b970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b970) {
            ctx->pc = 0x17B998u;
            goto label_17b998;
        }
    }
    ctx->pc = 0x17B978u;
    // 0x17b978: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B978u;
    {
        const bool branch_taken_0x17b978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b978) {
            ctx->pc = 0x17B988u;
            goto label_17b988;
        }
    }
    ctx->pc = 0x17B980u;
    // 0x17b980: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x17B980u;
    {
        const bool branch_taken_0x17b980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b980) {
            ctx->pc = 0x17BCC8u;
            goto label_17bcc8;
        }
    }
    ctx->pc = 0x17B988u;
label_17b988:
    // 0x17b988: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17b988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b98c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17b98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17b990: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x17B990u;
    {
        const bool branch_taken_0x17b990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b990) {
            ctx->pc = 0x17BCC8u;
            goto label_17bcc8;
        }
    }
    ctx->pc = 0x17B998u;
label_17b998:
    // 0x17b998: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x17b998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x17b99c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b9a0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x17b9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b9a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17b9a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17b9a8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x17b9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b9ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17b9acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17b9b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b9b4: 0xc420ef10  lwc1        $f0, -0x10F0($at)
    ctx->pc = 0x17b9b4u;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b9b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17b9b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b9bc: 0x0  nop
    ctx->pc = 0x17b9bcu;
    // NOP
    // 0x17b9c0: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x17B9C0u;
    {
        const bool branch_taken_0x17b9c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b9c0) {
            ctx->pc = 0x17BA60u;
            goto label_17ba60;
        }
    }
    ctx->pc = 0x17B9C8u;
    // 0x17b9c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b9cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b9d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b9d4: 0x628018  mult        $s0, $v1, $v0
    ctx->pc = 0x17b9d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x17b9d8: 0x2e01005b  sltiu       $at, $s0, 0x5B
    ctx->pc = 0x17b9d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)91) ? 1 : 0);
    // 0x17b9dc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17B9DCu;
    {
        const bool branch_taken_0x17b9dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b9dc) {
            ctx->pc = 0x17B9E8u;
            goto label_17b9e8;
        }
    }
    ctx->pc = 0x17B9E4u;
    // 0x17b9e4: 0x2410005a  addiu       $s0, $zero, 0x5A
    ctx->pc = 0x17b9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_17b9e8:
    // 0x17b9e8: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x17b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x17b9ec: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x17b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17b9f0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B9F0u;
    {
        const bool branch_taken_0x17b9f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17b9f0) {
            ctx->pc = 0x17BA0Cu;
            goto label_17ba0c;
        }
    }
    ctx->pc = 0x17B9F8u;
    // 0x17b9f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b9fc: 0x0  nop
    ctx->pc = 0x17b9fcu;
    // NOP
    // 0x17ba00: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17ba00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17ba04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17BA04u;
    {
        const bool branch_taken_0x17ba04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ba04) {
            ctx->pc = 0x17BA28u;
            goto label_17ba28;
        }
    }
    ctx->pc = 0x17BA0Cu;
label_17ba0c:
    // 0x17ba0c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17ba10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17ba10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17ba14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17ba14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17ba18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17ba18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ba1c: 0x0  nop
    ctx->pc = 0x17ba1cu;
    // NOP
    // 0x17ba20: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17ba20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17ba24: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17ba24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17ba28:
    // 0x17ba28: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17ba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ba2c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x17ba2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17ba30: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17ba34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ba34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ba38: 0x0  nop
    ctx->pc = 0x17ba38u;
    // NOP
    // 0x17ba3c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17ba3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17ba40: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17ba40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17ba44: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17ba48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ba4c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17ba50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17ba54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17ba54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17ba58: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x17BA58u;
    {
        const bool branch_taken_0x17ba58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ba58) {
            ctx->pc = 0x17BCC8u;
            goto label_17bcc8;
        }
    }
    ctx->pc = 0x17BA60u;
label_17ba60:
    // 0x17ba60: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17ba60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ba64: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17ba64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17ba68: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x17BA68u;
    {
        const bool branch_taken_0x17ba68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ba68) {
            ctx->pc = 0x17BCC8u;
            goto label_17bcc8;
        }
    }
    ctx->pc = 0x17BA70u;
label_17ba70:
    // 0x17ba70: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x17ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x17ba74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17ba74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17ba78: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x17ba78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ba7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17ba7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17ba80: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x17ba80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ba84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17ba84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17ba88: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17ba88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17ba8c: 0xc420ef10  lwc1        $f0, -0x10F0($at)
    ctx->pc = 0x17ba8cu;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ba90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17ba90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ba94: 0x0  nop
    ctx->pc = 0x17ba94u;
    // NOP
    // 0x17ba98: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x17BA98u;
    {
        const bool branch_taken_0x17ba98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ba98) {
            ctx->pc = 0x17BB88u;
            goto label_17bb88;
        }
    }
    ctx->pc = 0x17BAA0u;
    // 0x17baa0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17baa4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17baa8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17baac: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x17baacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17bab0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17BAB0u;
    {
        const bool branch_taken_0x17bab0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17bab0) {
            ctx->pc = 0x17BACCu;
            goto label_17bacc;
        }
    }
    ctx->pc = 0x17BAB8u;
    // 0x17bab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17babc: 0x0  nop
    ctx->pc = 0x17babcu;
    // NOP
    // 0x17bac0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17bac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17bac4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17BAC4u;
    {
        const bool branch_taken_0x17bac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bac4) {
            ctx->pc = 0x17BAE8u;
            goto label_17bae8;
        }
    }
    ctx->pc = 0x17BACCu;
label_17bacc:
    // 0x17bacc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17baccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17bad0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17bad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17bad4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17bad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17bad8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17bad8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17badc: 0x0  nop
    ctx->pc = 0x17badcu;
    // NOP
    // 0x17bae0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17bae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17bae4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17bae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17bae8:
    // 0x17bae8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17bae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17baec: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x17baecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17baf0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17baf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17baf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17baf8: 0x0  nop
    ctx->pc = 0x17baf8u;
    // NOP
    // 0x17bafc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17bafcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17bb00: 0x0  nop
    ctx->pc = 0x17bb00u;
    // NOP
    // 0x17bb04: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17BB04u;
    {
        const bool branch_taken_0x17bb04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17bb04) {
            ctx->pc = 0x17BB1Cu;
            goto label_17bb1c;
        }
    }
    ctx->pc = 0x17BB0Cu;
    // 0x17bb0c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17bb10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bb14: 0x0  nop
    ctx->pc = 0x17bb14u;
    // NOP
    // 0x17bb18: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17bb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_17bb1c:
    // 0x17bb1c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x17bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x17bb20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17bb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x17bb24: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17bb24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17bb28: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17bb2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17bb2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17bb30: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x17bb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bb34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17bb34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17bb38: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x17bb38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17bb3c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x17bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x17bb40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bb44: 0x0  nop
    ctx->pc = 0x17bb44u;
    // NOP
    // 0x17bb48: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x17bb48u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17bb4c: 0x0  nop
    ctx->pc = 0x17bb4cu;
    // NOP
    // 0x17bb50: 0x0  nop
    ctx->pc = 0x17bb50u;
    // NOP
    // 0x17bb54: 0x0  nop
    ctx->pc = 0x17bb54u;
    // NOP
    // 0x17bb58: 0xc0454c4  jal         func_115310
    ctx->pc = 0x17BB58u;
    SET_GPR_U32(ctx, 31, 0x17BB60u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x17BB58u, 0x17BB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB60u;
label_17bb60:
    // 0x17bb60: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x17bb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17bb64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17bb64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17bb68: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17bb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17bb6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17bb70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bb74: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17bb78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17bb7c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17bb80: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x17BB80u;
    {
        const bool branch_taken_0x17bb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bb80) {
            ctx->pc = 0x17BCC8u;
            goto label_17bcc8;
        }
    }
    ctx->pc = 0x17BB88u;
label_17bb88:
    // 0x17bb88: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17bb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bb8c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17bb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17bb90: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x17BB90u;
    {
        const bool branch_taken_0x17bb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bb90) {
            ctx->pc = 0x17BCC8u;
            goto label_17bcc8;
        }
    }
    ctx->pc = 0x17BB98u;
label_17bb98:
    // 0x17bb98: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x17bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x17bb9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17bb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17bba0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x17bba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bba4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17bba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17bba8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x17bba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bbac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17bbacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17bbb0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17bbb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17bbb4: 0xc420ef10  lwc1        $f0, -0x10F0($at)
    ctx->pc = 0x17bbb4u;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bbb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17bbb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17bbbc: 0x0  nop
    ctx->pc = 0x17bbbcu;
    // NOP
    // 0x17bbc0: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x17BBC0u;
    {
        const bool branch_taken_0x17bbc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17bbc0) {
            ctx->pc = 0x17BCC0u;
            goto label_17bcc0;
        }
    }
    ctx->pc = 0x17BBC8u;
    // 0x17bbc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17bbcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bbd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17bbd4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x17bbd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17bbd8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17BBD8u;
    {
        const bool branch_taken_0x17bbd8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17bbd8) {
            ctx->pc = 0x17BBF4u;
            goto label_17bbf4;
        }
    }
    ctx->pc = 0x17BBE0u;
    // 0x17bbe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bbe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bbe4: 0x0  nop
    ctx->pc = 0x17bbe4u;
    // NOP
    // 0x17bbe8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17bbe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17bbec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17BBECu;
    {
        const bool branch_taken_0x17bbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bbec) {
            ctx->pc = 0x17BC10u;
            goto label_17bc10;
        }
    }
    ctx->pc = 0x17BBF4u;
label_17bbf4:
    // 0x17bbf4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17bbf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17bbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17bbfc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17bbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17bc00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17bc00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bc04: 0x0  nop
    ctx->pc = 0x17bc04u;
    // NOP
    // 0x17bc08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17bc08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17bc0c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17bc0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17bc10:
    // 0x17bc10: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17bc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17bc14: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x17bc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17bc18: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17bc1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bc1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bc20: 0x0  nop
    ctx->pc = 0x17bc20u;
    // NOP
    // 0x17bc24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17bc24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17bc28: 0x0  nop
    ctx->pc = 0x17bc28u;
    // NOP
    // 0x17bc2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17BC2Cu;
    {
        const bool branch_taken_0x17bc2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17bc2c) {
            ctx->pc = 0x17BC44u;
            goto label_17bc44;
        }
    }
    ctx->pc = 0x17BC34u;
    // 0x17bc34: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17bc38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bc38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bc3c: 0x0  nop
    ctx->pc = 0x17bc3cu;
    // NOP
    // 0x17bc40: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17bc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_17bc44:
    // 0x17bc44: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x17bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x17bc48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17bc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x17bc4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17bc4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17bc50: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17bc54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17bc54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17bc58: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x17bc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bc5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17bc5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17bc60: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x17bc60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17bc64: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x17bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x17bc68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bc68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bc6c: 0x0  nop
    ctx->pc = 0x17bc6cu;
    // NOP
    // 0x17bc70: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x17bc70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17bc74: 0x0  nop
    ctx->pc = 0x17bc74u;
    // NOP
    // 0x17bc78: 0x0  nop
    ctx->pc = 0x17bc78u;
    // NOP
    // 0x17bc7c: 0x0  nop
    ctx->pc = 0x17bc7cu;
    // NOP
    // 0x17bc80: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x17BC80u;
    SET_GPR_U32(ctx, 31, 0x17BC88u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x17BC80u, 0x17BC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BC88u;
label_17bc88:
    // 0x17bc88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17bc8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17bc8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17bc90: 0x0  nop
    ctx->pc = 0x17bc90u;
    // NOP
    // 0x17bc94: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17bc94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17bc98: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17bc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bc9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17bc9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17bca0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17bca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17bca4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17bca8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bcac: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17bcb0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17bcb4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17bcb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17BCB8u;
    {
        const bool branch_taken_0x17bcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bcb8) {
            ctx->pc = 0x17BCC8u;
            goto label_17bcc8;
        }
    }
    ctx->pc = 0x17BCC0u;
label_17bcc0:
    // 0x17bcc0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17bcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bcc4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17bcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_17bcc8:
    // 0x17bcc8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x17bcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bccc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x17bcccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bcd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bcd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bcd4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x17bcd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17bcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x17BCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BCE0u;
}
