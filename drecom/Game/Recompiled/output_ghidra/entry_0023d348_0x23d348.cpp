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

// Function: entry_0023d348
// Address: 0x23d348 - 0x23d4b4
void entry_0023d348_0x23d348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d348_0x23d348");
#endif

    switch (ctx->pc) {
        case 0x23d3b0u: goto label_23d3b0;
        case 0x23d3e8u: goto label_23d3e8;
        case 0x23d408u: goto label_23d408;
        case 0x23d420u: goto label_23d420;
        case 0x23d42cu: goto label_23d42c;
        case 0x23d484u: goto label_23d484;
        default: break;
    }

    ctx->pc = 0x23d348u;

    // 0x23d348: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d34c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x23d34cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d350: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x23d350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
    // 0x23d354: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x23d354u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d358: 0x0  nop
    ctx->pc = 0x23d358u;
    // NOP
    // 0x23d35c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23d35cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23d360: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d364: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x23d364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x23d368: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x23d368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x23d36c: 0x34460fdb  ori         $a2, $v0, 0xFDB
    ctx->pc = 0x23d36cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23d370: 0x44867800  mtc1        $a2, $f15
    ctx->pc = 0x23d370u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x23d374: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d378: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d37c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d380: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x23d380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x23d384: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23d384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23d388: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x23d388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x23d38c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23d38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23d390: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23d390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23d394: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x23d394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23d398: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23d398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23d39c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23d39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23d3a0: 0x27a600a4  addiu       $a2, $sp, 0xA4
    ctx->pc = 0x23d3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x23d3a4: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x23d3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x23d3a8: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x23D3A8u;
    SET_GPR_U32(ctx, 31, 0x23D3B0u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x23D3A8u, 0x23D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D3B0u;
label_23d3b0:
    // 0x23d3b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d3b4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x23d3b4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d3b8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x23d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x23d3bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d3c0: 0x0  nop
    ctx->pc = 0x23d3c0u;
    // NOP
    // 0x23d3c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23d3c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23d3c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d3cc: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x23d3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x23d3d0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d3d4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23d3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d3d8: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x23d3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d3dc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23d3dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23d3e0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23D3E0u;
    SET_GPR_U32(ctx, 31, 0x23D3E8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23D3E0u, 0x23D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D3E8u;
label_23d3e8:
    // 0x23d3e8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d3ec: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23d3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23d3f0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d3f4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x23d3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d3f8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x23d3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d3fc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23d3fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23d400: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23D400u;
    SET_GPR_U32(ctx, 31, 0x23D408u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23D400u, 0x23D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D408u;
label_23d408:
    // 0x23d408: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d40c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x23d40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x23d410: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d414: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23d414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23d418: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23D418u;
    SET_GPR_U32(ctx, 31, 0x23D420u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23D418u, 0x23D420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D420u;
label_23d420:
    // 0x23d420: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d424: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23D424u;
    SET_GPR_U32(ctx, 31, 0x23D42Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23D424u, 0x23D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D42Cu;
label_23d42c:
    // 0x23d42c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d430: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x23d430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x23d434: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x23d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23d438: 0xa482127a  sh          $v0, 0x127A($a0)
    ctx->pc = 0x23d438u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x23d43c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x23D43Cu;
    {
        const bool branch_taken_0x23d43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d43c) {
            ctx->pc = 0x23D4B4u;
            return;
        }
    }
    ctx->pc = 0x23D444u;
    // 0x23d444: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23d444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23d448: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d44c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23d44cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23d450: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d454: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d458: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x23d458u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x23d45c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23d45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23d460: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23d460u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23d464: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x23d464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x23d468: 0x34463c00  ori         $a2, $v0, 0x3C00
    ctx->pc = 0x23d468u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x23d46c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d470: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x23d470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x23d474: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23d474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d478: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23d478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23d47c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23D47Cu;
    SET_GPR_U32(ctx, 31, 0x23D484u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23D47Cu, 0x23D484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D484u;
label_23d484:
    // 0x23d484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d488: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d48c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d490: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23d490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23d494: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23d494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23d498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d49c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d4a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d4a4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23d4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23d4a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d4a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d4ac: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d4b0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x23d4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x23d4b4u;
}
