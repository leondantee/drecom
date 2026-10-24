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

// Function: entry_001694c4
// Address: 0x1694c4 - 0x169590
void entry_001694c4_0x1694c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001694c4_0x1694c4");
#endif

    ctx->pc = 0x1694c4u;

    // 0x1694c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1694c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1694c8: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x1694c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x1694cc: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x1694ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1694d0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1694d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1694d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1694d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1694d8: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1694d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1694dc: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1694dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1694e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1694e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1694e4: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x1694e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x1694e8: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x1694e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1694ec: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1694ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1694f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1694f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1694f4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x1694f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1694f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1694f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1694fc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1694fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x169500: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x169500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x169504: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x169504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169508: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x169508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16950c: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16950cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x169510: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x169510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169514: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x169514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169518: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x169518u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16951c: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x16951cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x169520: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x169520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169524: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x169524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169528: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x169528u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16952c: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x16952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169530: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x169530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169534: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x169534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x169538: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x169538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16953c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x16953cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x169540: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x169540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x169544: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x169544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169548: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x169548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16954c: 0x0  nop
    ctx->pc = 0x16954cu;
    // NOP
    // 0x169550: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x169550u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169554: 0x0  nop
    ctx->pc = 0x169554u;
    // NOP
    // 0x169558: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x169558u;
    {
        const bool branch_taken_0x169558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x169558) {
            ctx->pc = 0x169590u;
            return;
        }
    }
    ctx->pc = 0x169560u;
    // 0x169560: 0xc60111e0  lwc1        $f1, 0x11E0($s0)
    ctx->pc = 0x169560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169564: 0xc60011e0  lwc1        $f0, 0x11E0($s0)
    ctx->pc = 0x169564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169568: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x169568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16956c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x16956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169570: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x169570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169574: 0x0  nop
    ctx->pc = 0x169574u;
    // NOP
    // 0x169578: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x169578u;
    {
        const bool branch_taken_0x169578 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x169578) {
            ctx->pc = 0x169590u;
            return;
        }
    }
    ctx->pc = 0x169580u;
    // 0x169580: 0xc6001314  lwc1        $f0, 0x1314($s0)
    ctx->pc = 0x169580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169584: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x169584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x169588: 0xc6001318  lwc1        $f0, 0x1318($s0)
    ctx->pc = 0x169588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16958c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x16958cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    ctx->pc = 0x169590u;
}
