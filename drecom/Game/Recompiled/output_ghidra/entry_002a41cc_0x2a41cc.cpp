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

// Function: entry_002a41cc
// Address: 0x2a41cc - 0x2a4438
void entry_002a41cc_0x2a41cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a41cc_0x2a41cc");
#endif

    switch (ctx->pc) {
        case 0x2a41dcu: goto label_2a41dc;
        case 0x2a4208u: goto label_2a4208;
        case 0x2a4218u: goto label_2a4218;
        case 0x2a4228u: goto label_2a4228;
        case 0x2a4280u: goto label_2a4280;
        case 0x2a429cu: goto label_2a429c;
        case 0x2a42a8u: goto label_2a42a8;
        case 0x2a42b4u: goto label_2a42b4;
        case 0x2a4378u: goto label_2a4378;
        case 0x2a43b0u: goto label_2a43b0;
        case 0x2a43e8u: goto label_2a43e8;
        case 0x2a442cu: goto label_2a442c;
        default: break;
    }

    ctx->pc = 0x2a41ccu;

    // 0x2a41cc: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a41ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a41d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a41d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a41d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A41D4u;
    SET_GPR_U32(ctx, 31, 0x2A41DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A41D4u, 0x2A41DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A41DCu;
label_2a41dc:
    // 0x2a41dc: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a41dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a41e0: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a41e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a41e4: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a41e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a41e8: 0x24870120  addiu       $a3, $a0, 0x120
    ctx->pc = 0x2a41e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a41ec: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a41ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a41f0: 0x24a80120  addiu       $t0, $a1, 0x120
    ctx->pc = 0x2a41f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a41f4: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a41f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a41f8: 0x24c20180  addiu       $v0, $a2, 0x180
    ctx->pc = 0x2a41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x2a41fc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a41fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4200: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A4200u;
    SET_GPR_U32(ctx, 31, 0x2A4208u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A4200u, 0x2A4208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4208u;
label_2a4208:
    // 0x2a4208: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a420c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a420cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4210: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A4210u;
    SET_GPR_U32(ctx, 31, 0x2A4218u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A4210u, 0x2A4218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4218u;
label_2a4218:
    // 0x2a4218: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a421c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2a421cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2a4220: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A4220u;
    SET_GPR_U32(ctx, 31, 0x2A4228u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A4220u, 0x2A4228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4228u;
label_2a4228:
    // 0x2a4228: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a4228u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a422c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4230: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2a4230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a4234: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x2a4234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4238: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a423c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2a423cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4240: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a4240u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4244: 0x0  nop
    ctx->pc = 0x2a4244u;
    // NOP
    // 0x2a4248: 0x45000149  bc1f        . + 4 + (0x149 << 2)
    ctx->pc = 0x2A4248u;
    {
        const bool branch_taken_0x2a4248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4248) {
            ctx->pc = 0x2A4770u;
            return;
        }
    }
    ctx->pc = 0x2A4250u;
    // 0x2a4250: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a4250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a4254: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4258: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a4258u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a425c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4260: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4264: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a4264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a4268: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x2a4268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a426c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4270: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a4270u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4274: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a4274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a4278: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A4278u;
    SET_GPR_U32(ctx, 31, 0x2A4280u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A4278u, 0x2A4280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4280u;
label_2a4280:
    // 0x2a4280: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4284: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2a4284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2a4288: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2A4288u;
    {
        const bool branch_taken_0x2a4288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4288) {
            ctx->pc = 0x2A4438u;
            return;
        }
    }
    ctx->pc = 0x2A4290u;
    // 0x2a4290: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a4290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4294: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A4294u;
    SET_GPR_U32(ctx, 31, 0x2A429Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A4294u, 0x2A429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A429Cu;
label_2a429c:
    // 0x2a429c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a42a0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A42A0u;
    SET_GPR_U32(ctx, 31, 0x2A42A8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A42A0u, 0x2A42A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A42A8u;
label_2a42a8:
    // 0x2a42a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2a42a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a42ac: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A42ACu;
    SET_GPR_U32(ctx, 31, 0x2A42B4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A42ACu, 0x2A42B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A42B4u;
label_2a42b4:
    // 0x2a42b4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2a42b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2a42b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a42b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a42bc: 0x0  nop
    ctx->pc = 0x2a42bcu;
    // NOP
    // 0x2a42c0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2a42c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2a42c4: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2a42c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a42c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a42cc: 0x0  nop
    ctx->pc = 0x2a42ccu;
    // NOP
    // 0x2a42d0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2a42d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2a42d4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2a42d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a42d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a42dc: 0x0  nop
    ctx->pc = 0x2a42dcu;
    // NOP
    // 0x2a42e0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2a42e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2a42e4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a42e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a42e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a42e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a42ec: 0x0  nop
    ctx->pc = 0x2a42ecu;
    // NOP
    // 0x2a42f0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2a42f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2a42f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a42f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a42f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a42fc: 0x0  nop
    ctx->pc = 0x2a42fcu;
    // NOP
    // 0x2a4300: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2a4300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2a4304: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a4304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a430c: 0x0  nop
    ctx->pc = 0x2a430cu;
    // NOP
    // 0x2a4310: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2a4310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2a4314: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a4314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a431c: 0x0  nop
    ctx->pc = 0x2a431cu;
    // NOP
    // 0x2a4320: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2a4320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2a4324: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a4324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a432c: 0x0  nop
    ctx->pc = 0x2a432cu;
    // NOP
    // 0x2a4330: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2a4330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2a4334: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a4334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a4338: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a4338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a433c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a433cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4340: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x2a4340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a4344: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a4344u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4348: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a4348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a434c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a434cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a4350: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a4350u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4354: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2a4354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4358: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2a4358u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a435c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2a435cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a4360: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a4360u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4364: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a4364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a4368: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a4368u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a436c: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a436cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a4370: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4370u;
    SET_GPR_U32(ctx, 31, 0x2A4378u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4370u, 0x2A4378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4378u;
label_2a4378:
    // 0x2a4378: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a4378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2a437c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a437cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4380: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a4380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4384: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a4384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a4388: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a4388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a438c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a438cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4390: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a4390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4394: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a4394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4398: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a4398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a439c: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a439cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a43a0: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a43a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a43a4: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a43a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a43a8: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A43A8u;
    SET_GPR_U32(ctx, 31, 0x2A43B0u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A43A8u, 0x2A43B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43B0u;
label_2a43b0:
    // 0x2a43b0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a43b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a43b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a43b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a43b8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a43bc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a43bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a43c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a43c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a43c4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a43c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a43c8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a43c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a43cc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a43ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a43d0: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a43d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a43d4: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a43d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a43d8: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a43d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a43dc: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a43dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a43e0: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A43E0u;
    SET_GPR_U32(ctx, 31, 0x2A43E8u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A43E0u, 0x2A43E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43E8u;
label_2a43e8:
    // 0x2a43e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a43e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a43ec: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a43f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a43f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a43f4: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x2a43f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
    // 0x2a43f8: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x2a43f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x2a43fc: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x2a43fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4400: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4404: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a4404u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4408: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a4408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a440c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a440cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a4410: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a4410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a4414: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a4414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a4418: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a4418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a441c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2a441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a4420: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a4420u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4424: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4424u;
    SET_GPR_U32(ctx, 31, 0x2A442Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4424u, 0x2A442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A442Cu;
label_2a442c:
    // 0x2a442c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a442cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4430: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x2A4430u;
    {
        const bool branch_taken_0x2a4430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4430) {
            ctx->pc = 0x2A4770u;
            return;
        }
    }
    ctx->pc = 0x2A4438u;
}
