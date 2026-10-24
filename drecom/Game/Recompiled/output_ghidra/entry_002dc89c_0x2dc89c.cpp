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

// Function: entry_002dc89c
// Address: 0x2dc89c - 0x2dc9cc
void entry_002dc89c_0x2dc89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dc89c_0x2dc89c");
#endif

    switch (ctx->pc) {
        case 0x2dc908u: goto label_2dc908;
        case 0x2dc930u: goto label_2dc930;
        case 0x2dc954u: goto label_2dc954;
        case 0x2dc968u: goto label_2dc968;
        default: break;
    }

    ctx->pc = 0x2dc89cu;

    // 0x2dc89c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dc89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc8a0: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dc8a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dc8a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dc8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dc8a8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2dc8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2dc8ac: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2DC8ACu;
    {
        const bool branch_taken_0x2dc8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc8ac) {
            ctx->pc = 0x2DCA04u;
            return;
        }
    }
    ctx->pc = 0x2DC8B4u;
    // 0x2dc8b4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2dc8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2dc8b8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc8bc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2dc8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dc8c0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc8c4: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x2dc8c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc8c8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2dc8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2dc8cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dc8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc8d0: 0x0  nop
    ctx->pc = 0x2dc8d0u;
    // NOP
    // 0x2dc8d4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2dc8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2dc8d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dc8d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc8dc: 0x0  nop
    ctx->pc = 0x2dc8dcu;
    // NOP
    // 0x2dc8e0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2dc8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2dc8e4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc8e8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2dc8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc8ec: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2dc8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2dc8f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dc8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dc8f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dc8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc8f8: 0x0  nop
    ctx->pc = 0x2dc8f8u;
    // NOP
    // 0x2dc8fc: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2dc8fcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2dc900: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2DC900u;
    SET_GPR_U32(ctx, 31, 0x2DC908u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2DC900u, 0x2DC908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC908u;
label_2dc908:
    // 0x2dc908: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2dc908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2dc90c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2dc90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2dc910: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2dc910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2dc914: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc918: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dc918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dc91c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dc91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dc920: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x2dc920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2dc924: 0x244607b0  addiu       $a2, $v0, 0x7B0
    ctx->pc = 0x2dc924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1968));
    // 0x2dc928: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2DC928u;
    SET_GPR_U32(ctx, 31, 0x2DC930u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2DC928u, 0x2DC930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC930u;
label_2dc930:
    // 0x2dc930: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2dc930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc934: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2dc934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc938: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2dc938u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dc93c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2dc93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc940: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2dc940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc944: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dc944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dc948: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2dc948u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2dc94c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x2DC94Cu;
    SET_GPR_U32(ctx, 31, 0x2DC954u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x2DC94Cu, 0x2DC954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC954u;
label_2dc954:
    // 0x2dc954: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2dc954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2dc958: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2dc958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dc95c: 0xc7ad00f4  lwc1        $f13, 0xF4($sp)
    ctx->pc = 0x2dc95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dc960: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2DC960u;
    SET_GPR_U32(ctx, 31, 0x2DC968u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2DC960u, 0x2DC968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC968u;
label_2dc968:
    // 0x2dc968: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2dc968u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2dc96c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2dc96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2dc970: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x2dc970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc974: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dc974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc978: 0x0  nop
    ctx->pc = 0x2dc978u;
    // NOP
    // 0x2dc97c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dc97cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc980: 0x0  nop
    ctx->pc = 0x2dc980u;
    // NOP
    // 0x2dc984: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x2DC984u;
    {
        const bool branch_taken_0x2dc984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc984) {
            ctx->pc = 0x2DC9CCu;
            return;
        }
    }
    ctx->pc = 0x2DC98Cu;
    // 0x2dc98c: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x2dc98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc990: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2dc990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2dc994: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2dc994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2dc998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dc998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc99c: 0x0  nop
    ctx->pc = 0x2dc99cu;
    // NOP
    // 0x2dc9a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dc9a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc9a4: 0x0  nop
    ctx->pc = 0x2dc9a4u;
    // NOP
    // 0x2dc9a8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x2DC9A8u;
    {
        const bool branch_taken_0x2dc9a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc9a8) {
            ctx->pc = 0x2DCA04u;
            return;
        }
    }
    ctx->pc = 0x2DC9B0u;
    // 0x2dc9b0: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2dc9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2dc9b4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2dc9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2dc9b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dc9b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc9bc: 0x0  nop
    ctx->pc = 0x2dc9bcu;
    // NOP
    // 0x2dc9c0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2dc9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2dc9c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2DC9C4u;
    {
        const bool branch_taken_0x2dc9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc9c4) {
            ctx->pc = 0x2DCA04u;
            return;
        }
    }
    ctx->pc = 0x2DC9CCu;
}
