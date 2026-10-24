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

// Function: Hcd_Divide
// Address: 0x167210 - 0x167870
void Hcd_Divide_0x167210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Hcd_Divide_0x167210");
#endif

    switch (ctx->pc) {
        case 0x167238u: goto label_167238;
        case 0x16725cu: goto label_16725c;
        case 0x167274u: goto label_167274;
        case 0x167438u: goto label_167438;
        case 0x167458u: goto label_167458;
        case 0x1674dcu: goto label_1674dc;
        case 0x167500u: goto label_167500;
        case 0x167568u: goto label_167568;
        case 0x167588u: goto label_167588;
        case 0x167654u: goto label_167654;
        case 0x167674u: goto label_167674;
        case 0x167738u: goto label_167738;
        case 0x16775cu: goto label_16775c;
        case 0x167800u: goto label_167800;
        case 0x167820u: goto label_167820;
        default: break;
    }

    ctx->pc = 0x167210u;

    // 0x167210: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x167210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x167214: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x167214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x167218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16721c: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x16721cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x167220: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x167220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x167224: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x167224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x167228: 0xafa700a8  sw          $a3, 0xA8($sp)
    ctx->pc = 0x167228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 7));
    // 0x16722c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x16722cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x167230: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x167230u;
    {
        const bool branch_taken_0x167230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167230) {
            ctx->pc = 0x167288u;
            goto label_167288;
        }
    }
    ctx->pc = 0x167238u;
label_167238:
    // 0x167238: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x167238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16723c: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x16723cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x167240: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x167240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x167244: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167248: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x167248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16724c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x16724cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x167250: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x167250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x167254: 0xc040c80  jal         func_103200
    ctx->pc = 0x167254u;
    SET_GPR_U32(ctx, 31, 0x16725Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16725Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16725Cu) { return; }
    ctx->pc = 0x16725Cu;
label_16725c:
    // 0x16725c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x16725cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x167260: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x167260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x167264: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x167264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167268: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x167268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16726c: 0xc040c1a  jal         func_103068
    ctx->pc = 0x16726Cu;
    SET_GPR_U32(ctx, 31, 0x167274u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x167274u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167274u) { return; }
    ctx->pc = 0x167274u;
label_167274:
    // 0x167274: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x167274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x167278: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x167278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16727c: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x16727cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x167280: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x167280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x167284: 0x0  nop
    ctx->pc = 0x167284u;
    // NOP
label_167288:
    // 0x167288: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x167288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x16728c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x16728Cu;
    {
        const bool branch_taken_0x16728c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16728c) {
            ctx->pc = 0x167238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167238;
        }
    }
    ctx->pc = 0x167294u;
    // 0x167294: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x167294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167298: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16729c: 0x0  nop
    ctx->pc = 0x16729cu;
    // NOP
    // 0x1672a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1672a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1672a4: 0x0  nop
    ctx->pc = 0x1672a4u;
    // NOP
    // 0x1672a8: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1672A8u;
    {
        const bool branch_taken_0x1672a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1672a8) {
            ctx->pc = 0x1672F4u;
            goto label_1672f4;
        }
    }
    ctx->pc = 0x1672B0u;
    // 0x1672b0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1672b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1672b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1672b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1672b8: 0x0  nop
    ctx->pc = 0x1672b8u;
    // NOP
    // 0x1672bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1672bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1672c0: 0x0  nop
    ctx->pc = 0x1672c0u;
    // NOP
    // 0x1672c4: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1672C4u;
    {
        const bool branch_taken_0x1672c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1672c4) {
            ctx->pc = 0x1672F4u;
            goto label_1672f4;
        }
    }
    ctx->pc = 0x1672CCu;
    // 0x1672cc: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1672ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1672d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1672d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1672d4: 0x0  nop
    ctx->pc = 0x1672d4u;
    // NOP
    // 0x1672d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1672d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1672dc: 0x0  nop
    ctx->pc = 0x1672dcu;
    // NOP
    // 0x1672e0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1672E0u;
    {
        const bool branch_taken_0x1672e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1672e0) {
            ctx->pc = 0x1672F4u;
            goto label_1672f4;
        }
    }
    ctx->pc = 0x1672E8u;
    // 0x1672e8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1672e8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1672ec: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x1672ECu;
    {
        const bool branch_taken_0x1672ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1672ec) {
            ctx->pc = 0x16785Cu;
            goto label_16785c;
        }
    }
    ctx->pc = 0x1672F4u;
label_1672f4:
    // 0x1672f4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1672f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1672f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1672f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1672fc: 0x0  nop
    ctx->pc = 0x1672fcu;
    // NOP
    // 0x167300: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167304: 0x0  nop
    ctx->pc = 0x167304u;
    // NOP
    // 0x167308: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x167308u;
    {
        const bool branch_taken_0x167308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x167308) {
            ctx->pc = 0x167348u;
            goto label_167348;
        }
    }
    ctx->pc = 0x167310u;
    // 0x167310: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x167310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167314: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167318: 0x0  nop
    ctx->pc = 0x167318u;
    // NOP
    // 0x16731c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16731cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167320: 0x0  nop
    ctx->pc = 0x167320u;
    // NOP
    // 0x167324: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x167324u;
    {
        const bool branch_taken_0x167324 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x167324) {
            ctx->pc = 0x167348u;
            goto label_167348;
        }
    }
    ctx->pc = 0x16732Cu;
    // 0x16732c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x16732cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167334: 0x0  nop
    ctx->pc = 0x167334u;
    // NOP
    // 0x167338: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16733c: 0x0  nop
    ctx->pc = 0x16733cu;
    // NOP
    // 0x167340: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x167340u;
    {
        const bool branch_taken_0x167340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x167340) {
            ctx->pc = 0x167390u;
            goto label_167390;
        }
    }
    ctx->pc = 0x167348u;
label_167348:
    // 0x167348: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x167348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16734c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x16734cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167350: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x167350u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167354: 0x0  nop
    ctx->pc = 0x167354u;
    // NOP
    // 0x167358: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x167358u;
    {
        const bool branch_taken_0x167358 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x167358) {
            ctx->pc = 0x167390u;
            goto label_167390;
        }
    }
    ctx->pc = 0x167360u;
    // 0x167360: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x167360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167364: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x167364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167368: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x167368u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16736c: 0x0  nop
    ctx->pc = 0x16736cu;
    // NOP
    // 0x167370: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x167370u;
    {
        const bool branch_taken_0x167370 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x167370) {
            ctx->pc = 0x167390u;
            goto label_167390;
        }
    }
    ctx->pc = 0x167378u;
    // 0x167378: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x167378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16737c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x16737cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167380: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x167380u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167384: 0x0  nop
    ctx->pc = 0x167384u;
    // NOP
    // 0x167388: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x167388u;
    {
        const bool branch_taken_0x167388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x167388) {
            ctx->pc = 0x1673DCu;
            goto label_1673dc;
        }
    }
    ctx->pc = 0x167390u;
label_167390:
    // 0x167390: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167394: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167394u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167398: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16739c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16739cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1673a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1673a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1673a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1673a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1673a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1673a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1673ac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1673acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1673b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1673b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1673b4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1673b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1673b8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1673b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1673bc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1673bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1673c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1673c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1673c4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1673c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1673c8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1673c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1673cc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1673ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1673d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1673d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1673d4: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x1673D4u;
    {
        const bool branch_taken_0x1673d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1673d4) {
            ctx->pc = 0x16785Cu;
            goto label_16785c;
        }
    }
    ctx->pc = 0x1673DCu;
label_1673dc:
    // 0x1673dc: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1673dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1673e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1673e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1673e4: 0x0  nop
    ctx->pc = 0x1673e4u;
    // NOP
    // 0x1673e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1673e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1673ec: 0x0  nop
    ctx->pc = 0x1673ecu;
    // NOP
    // 0x1673f0: 0x45010088  bc1t        . + 4 + (0x88 << 2)
    ctx->pc = 0x1673F0u;
    {
        const bool branch_taken_0x1673f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1673f0) {
            ctx->pc = 0x167614u;
            goto label_167614;
        }
    }
    ctx->pc = 0x1673F8u;
    // 0x1673f8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1673f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1673fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1673fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167400: 0x0  nop
    ctx->pc = 0x167400u;
    // NOP
    // 0x167404: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x167404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167408: 0x0  nop
    ctx->pc = 0x167408u;
    // NOP
    // 0x16740c: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x16740Cu;
    {
        const bool branch_taken_0x16740c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16740c) {
            ctx->pc = 0x1674A0u;
            goto label_1674a0;
        }
    }
    ctx->pc = 0x167414u;
    // 0x167414: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x167414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167418: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16741c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x16741cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167420: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x167420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x167424: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x167424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167428: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x167428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16742c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x16742cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x167430: 0xc059c4c  jal         func_167130
    ctx->pc = 0x167430u;
    SET_GPR_U32(ctx, 31, 0x167438u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x167430u, 0x167438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167438u;
label_167438:
    // 0x167438: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16743c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x16743cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167440: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x167440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167444: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x167444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167448: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x167448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16744c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x16744cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x167450: 0xc059c4c  jal         func_167130
    ctx->pc = 0x167450u;
    SET_GPR_U32(ctx, 31, 0x167458u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x167450u, 0x167458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167458u;
label_167458:
    // 0x167458: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x167458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16745c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16745cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167460: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167464: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167464u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167468: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x167468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16746c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16746cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167470: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167474: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x167474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x167478: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167478u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x16747c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167480: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x167480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167484: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167484u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167488: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16748c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x16748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167490: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167490u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167498: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x167498u;
    {
        const bool branch_taken_0x167498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167498) {
            ctx->pc = 0x16785Cu;
            goto label_16785c;
        }
    }
    ctx->pc = 0x1674A0u;
label_1674a0:
    // 0x1674a0: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1674a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1674a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1674a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1674a8: 0x0  nop
    ctx->pc = 0x1674a8u;
    // NOP
    // 0x1674ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1674acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1674b0: 0x0  nop
    ctx->pc = 0x1674b0u;
    // NOP
    // 0x1674b4: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x1674B4u;
    {
        const bool branch_taken_0x1674b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1674b4) {
            ctx->pc = 0x167548u;
            goto label_167548;
        }
    }
    ctx->pc = 0x1674BCu;
    // 0x1674bc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1674bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1674c0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1674c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1674c4: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1674c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1674c8: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1674c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1674cc: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x1674ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1674d0: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x1674d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1674d4: 0xc059c4c  jal         func_167130
    ctx->pc = 0x1674D4u;
    SET_GPR_U32(ctx, 31, 0x1674DCu);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x1674D4u, 0x1674DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674DCu;
label_1674dc:
    // 0x1674dc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1674dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1674e0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1674e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1674e4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1674e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1674e8: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x1674e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1674ec: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x1674ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1674f0: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x1674f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1674f4: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x1674f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1674f8: 0xc059c4c  jal         func_167130
    ctx->pc = 0x1674F8u;
    SET_GPR_U32(ctx, 31, 0x167500u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x1674F8u, 0x167500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167500u;
label_167500:
    // 0x167500: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x167500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x167504: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167504u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167508: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16750c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16750cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167510: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167514: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x167514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x167518: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167518u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16751c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16751cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167520: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x167520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x167524: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167524u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167528: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x167528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16752c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16752cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167530: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167534: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x167534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167538: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167538u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x16753c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167540: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x167540u;
    {
        const bool branch_taken_0x167540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167540) {
            ctx->pc = 0x16785Cu;
            goto label_16785c;
        }
    }
    ctx->pc = 0x167548u;
label_167548:
    // 0x167548: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16754c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16754cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x167550: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x167550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167554: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x167554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x167558: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x167558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16755c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x16755cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x167560: 0xc059c4c  jal         func_167130
    ctx->pc = 0x167560u;
    SET_GPR_U32(ctx, 31, 0x167568u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x167560u, 0x167568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167568u;
label_167568:
    // 0x167568: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16756c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x16756cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167570: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x167570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167574: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x167574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167578: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x167578u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16757c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x16757cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x167580: 0xc059c4c  jal         func_167130
    ctx->pc = 0x167580u;
    SET_GPR_U32(ctx, 31, 0x167588u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x167580u, 0x167588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167588u;
label_167588:
    // 0x167588: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x167588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16758c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16758cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167590: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167594: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167594u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167598: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16759c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x16759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1675a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1675a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1675a4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1675a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1675a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1675a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1675ac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1675acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1675b0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1675b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1675b4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1675b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1675b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1675b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1675bc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1675bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1675c0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1675c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1675c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1675c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1675c8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1675c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1675cc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1675ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1675d0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1675d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1675d4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1675d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1675d8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1675d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1675dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1675dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1675e0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1675e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1675e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1675e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1675e8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1675e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1675ec: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1675ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1675f0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1675f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1675f4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1675f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1675f8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1675f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1675fc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1675fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167600: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x167600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x167604: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167604u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167608: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x167608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16760c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x16760Cu;
    {
        const bool branch_taken_0x16760c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16760c) {
            ctx->pc = 0x16785Cu;
            goto label_16785c;
        }
    }
    ctx->pc = 0x167614u;
label_167614:
    // 0x167614: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x167614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167618: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16761c: 0x0  nop
    ctx->pc = 0x16761cu;
    // NOP
    // 0x167620: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167624: 0x0  nop
    ctx->pc = 0x167624u;
    // NOP
    // 0x167628: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x167628u;
    {
        const bool branch_taken_0x167628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x167628) {
            ctx->pc = 0x1676FCu;
            goto label_1676fc;
        }
    }
    ctx->pc = 0x167630u;
    // 0x167630: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x167630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167634: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167638: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x167638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16763c: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x16763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x167640: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x167640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167644: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x167644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x167648: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x167648u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16764c: 0xc059c4c  jal         func_167130
    ctx->pc = 0x16764Cu;
    SET_GPR_U32(ctx, 31, 0x167654u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x16764Cu, 0x167654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167654u;
label_167654:
    // 0x167654: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167658: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x167658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16765c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x16765cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167660: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x167660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167664: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x167664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x167668: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x167668u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16766c: 0xc059c4c  jal         func_167130
    ctx->pc = 0x16766Cu;
    SET_GPR_U32(ctx, 31, 0x167674u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x16766Cu, 0x167674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167674u;
label_167674:
    // 0x167674: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167678: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x167678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x16767c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16767cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167680: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167684: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x167684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167688: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167688u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x16768c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167690: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x167690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x167694: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167694u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167698: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16769c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x16769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1676a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1676a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1676a4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1676a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1676a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1676a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1676ac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1676acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1676b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1676b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1676b4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1676b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1676b8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1676b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1676bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1676bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1676c0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1676c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1676c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1676c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1676c8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1676c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1676cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1676ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1676d0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1676d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1676d4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1676d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1676d8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1676d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1676dc: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1676dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1676e0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1676e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1676e4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1676e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1676e8: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1676e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1676ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1676ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1676f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1676f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1676f4: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1676F4u;
    {
        const bool branch_taken_0x1676f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1676f4) {
            ctx->pc = 0x16785Cu;
            goto label_16785c;
        }
    }
    ctx->pc = 0x1676FCu;
label_1676fc:
    // 0x1676fc: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1676fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167700: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167704: 0x0  nop
    ctx->pc = 0x167704u;
    // NOP
    // 0x167708: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16770c: 0x0  nop
    ctx->pc = 0x16770cu;
    // NOP
    // 0x167710: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x167710u;
    {
        const bool branch_taken_0x167710 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x167710) {
            ctx->pc = 0x1677E0u;
            goto label_1677e0;
        }
    }
    ctx->pc = 0x167718u;
    // 0x167718: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16771c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16771cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x167720: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x167720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167724: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x167724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x167728: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x167728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16772c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x16772cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x167730: 0xc059c4c  jal         func_167130
    ctx->pc = 0x167730u;
    SET_GPR_U32(ctx, 31, 0x167738u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x167730u, 0x167738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167738u;
label_167738:
    // 0x167738: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x167738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16773c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167740: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x167740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167744: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x167744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x167748: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x167748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16774c: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x16774cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x167750: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x167750u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x167754: 0xc059c4c  jal         func_167130
    ctx->pc = 0x167754u;
    SET_GPR_U32(ctx, 31, 0x16775Cu);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x167754u, 0x16775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16775Cu;
label_16775c:
    // 0x16775c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167760: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x167760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167764: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167764u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167768: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16776c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x16776cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x167770: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167770u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167774: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167778: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167778u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16777c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167780: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x167780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167784: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167784u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167788: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16778c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16778cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167790: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167794: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x167794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x167798: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167798u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x16779c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x16779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1677a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1677a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1677a4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1677a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1677a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1677a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1677ac: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1677acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1677b0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1677b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1677b4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1677b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1677b8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1677b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1677bc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1677bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1677c0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1677c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1677c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1677c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1677c8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1677c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1677cc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1677ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1677d0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1677d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1677d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1677d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1677d8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1677D8u;
    {
        const bool branch_taken_0x1677d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1677d8) {
            ctx->pc = 0x16785Cu;
            goto label_16785c;
        }
    }
    ctx->pc = 0x1677E0u;
label_1677e0:
    // 0x1677e0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1677e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1677e4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1677e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1677e8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1677e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1677ec: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1677ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1677f0: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x1677f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1677f4: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x1677f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1677f8: 0xc059c4c  jal         func_167130
    ctx->pc = 0x1677F8u;
    SET_GPR_U32(ctx, 31, 0x167800u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x1677F8u, 0x167800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167800u;
label_167800:
    // 0x167800: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167804: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x167804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167808: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x167808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16780c: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x16780cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167810: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x167810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x167814: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x167814u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x167818: 0xc059c4c  jal         func_167130
    ctx->pc = 0x167818u;
    SET_GPR_U32(ctx, 31, 0x167820u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x167818u, 0x167820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167820u;
label_167820:
    // 0x167820: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167824: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167824u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167828: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16782c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16782cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167830: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x167830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x167834: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x167834u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167838: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x167838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16783c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x16783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x167840: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x167840u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x167844: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x167844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167848: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x167848u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16784c: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x16784cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167850: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x167850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x167854: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x167854u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x167858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16785c:
    // 0x16785c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x16785cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167864: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x167864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x167868: 0x3e00008  jr          $ra
    ctx->pc = 0x167868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167870u;
}
