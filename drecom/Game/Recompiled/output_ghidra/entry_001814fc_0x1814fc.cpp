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

// Function: entry_001814fc
// Address: 0x1814fc - 0x181648
void entry_001814fc_0x1814fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001814fc_0x1814fc");
#endif

    ctx->pc = 0x1814fcu;

    // 0x1814fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1814fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181500: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181500u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181504: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181508: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181508u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18150c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18150cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181510: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181514: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181514u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181518: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x181518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x18151c: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x18151cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x181520: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x181520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x181524: 0xc4600174  lwc1        $f0, 0x174($v1)
    ctx->pc = 0x181524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181528: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18152c: 0xe420f1f0  swc1        $f0, -0xE10($at)
    ctx->pc = 0x18152cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1F0u, _value); } while (0); }
    // 0x181530: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181534: 0x8427f138  lh          $a3, -0xEC8($at)
    ctx->pc = 0x181534u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x47F138u));
    // 0x181538: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x181538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
    // 0x18153c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18153cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181540: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x181540u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181544: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x181544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181548: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181548u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18154c: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x18154cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x181550: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x181550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x181554: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x181554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x181558: 0xc4c00174  lwc1        $f0, 0x174($a2)
    ctx->pc = 0x181558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18155c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18155cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181560: 0xe420f1f8  swc1        $f0, -0xE08($at)
    ctx->pc = 0x181560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1F8u, _value); } while (0); }
    // 0x181564: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181568: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181568u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x18156c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x18156cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181570: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181570u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181574: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x181574u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181578: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x181578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x18157c: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x18157cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181580: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x181580u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x181584: 0x24e31380  addiu       $v1, $a3, 0x1380
    ctx->pc = 0x181584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4992));
    // 0x181588: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18158c: 0xc4c00170  lwc1        $f0, 0x170($a2)
    ctx->pc = 0x18158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181590: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181594: 0xe420f200  swc1        $f0, -0xE00($at)
    ctx->pc = 0x181594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F200u, _value); } while (0); }
    // 0x181598: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18159c: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x18159cu;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1815a0: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1815a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x1815a4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1815a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1815a8: 0xc421f1f8  lwc1        $f1, -0xE08($at)
    ctx->pc = 0x1815a8u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1815ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1815acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1815b0: 0xc420f200  lwc1        $f0, -0xE00($at)
    ctx->pc = 0x1815b0u;
    { uint32_t bits = FAST_READ32(0x47F200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1815b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1815b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1815b8: 0x0  nop
    ctx->pc = 0x1815b8u;
    // NOP
    // 0x1815bc: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x1815BCu;
    {
        const bool branch_taken_0x1815bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1815bc) {
            ctx->pc = 0x181648u;
            return;
        }
    }
    ctx->pc = 0x1815C4u;
    // 0x1815c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1815c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1815c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1815c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1815cc: 0xac23f1e8  sw          $v1, -0xE18($at)
    ctx->pc = 0x1815ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F1E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E8u, _value); } while (0);
    // 0x1815d0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1815d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1815d4: 0x8426f138  lh          $a2, -0xEC8($at)
    ctx->pc = 0x1815d4u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x47F138u));
    // 0x1815d8: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x1815d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1815dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1815dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1815e0: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x1815e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1815e4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1815e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1815e8: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x1815e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1815ec: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x1815ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x1815f0: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x1815f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x1815f4: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x1815f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1815f8: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x1815f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x1815fc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1815fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181600: 0xc5000178  lwc1        $f0, 0x178($t0)
    ctx->pc = 0x181600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181604: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x181604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181608: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18160c: 0xe420f1e0  swc1        $f0, -0xE20($at)
    ctx->pc = 0x18160cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E0u, _value); } while (0); }
    // 0x181610: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181614: 0xc421f200  lwc1        $f1, -0xE00($at)
    ctx->pc = 0x181614u;
    { uint32_t bits = FAST_READ32(0x47F200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181618: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18161c: 0xc420f1f8  lwc1        $f0, -0xE08($at)
    ctx->pc = 0x18161cu;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181620: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x181620u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x181624: 0x3c064040  lui         $a2, 0x4040
    ctx->pc = 0x181624u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16448 << 16));
    // 0x181628: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x181628u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18162c: 0x0  nop
    ctx->pc = 0x18162cu;
    // NOP
    // 0x181630: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x181630u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x181634: 0x0  nop
    ctx->pc = 0x181634u;
    // NOP
    // 0x181638: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18163c: 0xe420f1d8  swc1        $f0, -0xE28($at)
    ctx->pc = 0x18163cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1D8u, _value); } while (0); }
    // 0x181640: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x181640u;
    {
        const bool branch_taken_0x181640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181640) {
            ctx->pc = 0x1816C0u;
            return;
        }
    }
    ctx->pc = 0x181648u;
}
