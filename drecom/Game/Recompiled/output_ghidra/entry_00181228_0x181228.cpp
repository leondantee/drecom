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

// Function: entry_00181228
// Address: 0x181228 - 0x181374
void entry_00181228_0x181228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181228_0x181228");
#endif

    ctx->pc = 0x181228u;

    // 0x181228: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18122c: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x18122cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181230: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181234: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181234u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181238: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18123c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x18123cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181240: 0x63940  sll         $a3, $a2, 5
    ctx->pc = 0x181240u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x181244: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181248: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x181248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x18124c: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x18124cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181250: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x181250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181254: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181258: 0xe420f1f0  swc1        $f0, -0xE10($at)
    ctx->pc = 0x181258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1F0u, _value); } while (0); }
    // 0x18125c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18125cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181260: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181260u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181264: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181264u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181268: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181268u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18126c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18126cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181270: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181274: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181274u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181278: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x18127c: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x18127cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181280: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x181280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181284: 0xc4e00174  lwc1        $f0, 0x174($a3)
    ctx->pc = 0x181284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181288: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18128c: 0xe420f1f8  swc1        $f0, -0xE08($at)
    ctx->pc = 0x18128cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1F8u, _value); } while (0); }
    // 0x181290: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181294: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181294u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181298: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181298u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18129c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x18129cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1812a0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1812a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1812a4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1812a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1812a8: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x1812a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1812ac: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1812acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1812b0: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x1812b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1812b4: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1812b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1812b8: 0xc4c00170  lwc1        $f0, 0x170($a2)
    ctx->pc = 0x1812b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1812bc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1812bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1812c0: 0xe420f200  swc1        $f0, -0xE00($at)
    ctx->pc = 0x1812c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F200u, _value); } while (0); }
    // 0x1812c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1812c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1812c8: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x1812c8u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1812cc: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1812ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x1812d0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1812d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1812d4: 0xc421f1f8  lwc1        $f1, -0xE08($at)
    ctx->pc = 0x1812d4u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1812d8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1812d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1812dc: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x1812dcu;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1812e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1812e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1812e4: 0x0  nop
    ctx->pc = 0x1812e4u;
    // NOP
    // 0x1812e8: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x1812E8u;
    {
        const bool branch_taken_0x1812e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1812e8) {
            ctx->pc = 0x181374u;
            return;
        }
    }
    ctx->pc = 0x1812F0u;
    // 0x1812f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1812f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1812f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1812f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1812f8: 0xac23f1e8  sw          $v1, -0xE18($at)
    ctx->pc = 0x1812f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F1E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E8u, _value); } while (0);
    // 0x1812fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1812fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181300: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181300u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181304: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181308: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181308u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18130c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18130cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181310: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181314: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181314u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181318: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x18131c: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x18131cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181320: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x181320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181324: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x181324u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
    // 0x181328: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x181328u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18132c: 0xc4600178  lwc1        $f0, 0x178($v1)
    ctx->pc = 0x18132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181330: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x181330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181334: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181338: 0xe420f1e0  swc1        $f0, -0xE20($at)
    ctx->pc = 0x181338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E0u, _value); } while (0); }
    // 0x18133c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18133cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181340: 0xc421f1f8  lwc1        $f1, -0xE08($at)
    ctx->pc = 0x181340u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181344: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181348: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x181348u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18134c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18134cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x181350: 0x3c074040  lui         $a3, 0x4040
    ctx->pc = 0x181350u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16448 << 16));
    // 0x181354: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x181354u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181358: 0x0  nop
    ctx->pc = 0x181358u;
    // NOP
    // 0x18135c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18135cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x181360: 0x0  nop
    ctx->pc = 0x181360u;
    // NOP
    // 0x181364: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181368: 0xe420f1d8  swc1        $f0, -0xE28($at)
    ctx->pc = 0x181368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1D8u, _value); } while (0); }
    // 0x18136c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x18136Cu;
    {
        const bool branch_taken_0x18136c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18136c) {
            ctx->pc = 0x1813ECu;
            return;
        }
    }
    ctx->pc = 0x181374u;
}
