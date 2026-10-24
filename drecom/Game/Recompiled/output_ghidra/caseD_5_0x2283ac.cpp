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

// Function: caseD_5
// Address: 0x2283ac - 0x22851c
void caseD_5_0x2283ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2283ac");
#endif

    switch (ctx->pc) {
        case 0x2283e4u: goto label_2283e4;
        case 0x228420u: goto label_228420;
        case 0x228428u: goto label_228428;
        default: break;
    }

    ctx->pc = 0x2283acu;

    // 0x2283ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2283acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2283b0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2283b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2283b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2283b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2283b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2283b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2283bc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2283bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2283c0: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x2283c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2283c4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2283c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2283c8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2283c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2283cc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2283ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2283d0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2283d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2283d4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2283d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2283d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2283d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2283dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2283DCu;
    SET_GPR_U32(ctx, 31, 0x2283E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2283DCu, 0x2283E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2283E4u;
label_2283e4:
    // 0x2283e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2283e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2283e8: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x2283e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2283ec: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x2283ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2283f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2283f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2283f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2283f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2283f8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2283f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2283fc: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x2283fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x228400: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228404: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228408: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x228408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22840c: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x22840cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x228410: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228414: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x228414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x228418: 0xc0965d0  jal         func_259740
    ctx->pc = 0x228418u;
    SET_GPR_U32(ctx, 31, 0x228420u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x228418u, 0x228420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228420u;
label_228420:
    // 0x228420: 0xc067694  jal         func_19DA50
    ctx->pc = 0x228420u;
    SET_GPR_U32(ctx, 31, 0x228428u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x228420u, 0x228428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228428u;
label_228428:
    // 0x228428: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x228428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22842c: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x22842cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x228430: 0x24830064  addiu       $v1, $a0, 0x64
    ctx->pc = 0x228430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x228434: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x228434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x228438: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x228438u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x22843c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22843cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228440: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x228440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228444: 0xa485005c  sh          $a1, 0x5C($a0)
    ctx->pc = 0x228444u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 5));
    // 0x228448: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x228448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22844c: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x22844cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x228450: 0x8cd40030  lw          $s4, 0x30($a2)
    ctx->pc = 0x228450u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x228454: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x228454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x228458: 0x2832024  and         $a0, $s4, $v1
    ctx->pc = 0x228458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x22845c: 0xacc40030  sw          $a0, 0x30($a2)
    ctx->pc = 0x22845cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 4));
    // 0x228460: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228464: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x228464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228468: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x228468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x22846c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22846cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228470: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x228470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228474: 0xe4c00184  swc1        $f0, 0x184($a2)
    ctx->pc = 0x228474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 388), bits); }
    // 0x228478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22847c: 0x8fb500a8  lw          $s5, 0xA8($sp)
    ctx->pc = 0x22847cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228480: 0xe6a00188  swc1        $f0, 0x188($s5)
    ctx->pc = 0x228480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 392), bits); }
    // 0x228484: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228488: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x228488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22848c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22848cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x228490: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x228490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x228494: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x228494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x228498: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x228498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    // 0x22849c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22849cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2284a0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2284a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2284a4: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x2284a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2284a8: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x2284a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x2284ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2284acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2284b0: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x2284b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x2284b4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2284b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2284b8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2284b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2284bc: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x2284bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2284c0: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2284c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2284c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2284c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2284c8: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x2284c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x2284cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2284ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2284d0: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2284d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2284d4: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x2284d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x2284d8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2284d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2284dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2284dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2284e0: 0xac241a58  sw          $a0, 0x1A58($at)
    ctx->pc = 0x2284e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x2284e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2284e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2284e8: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x2284e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x2284ec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2284ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2284f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2284f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2284f4: 0xac241a50  sw          $a0, 0x1A50($at)
    ctx->pc = 0x2284f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    // 0x2284f8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2284f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2284fc: 0x247310b0  addiu       $s3, $v1, 0x10B0
    ctx->pc = 0x2284fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x228500: 0x8e6500f0  lw          $a1, 0xF0($s3)
    ctx->pc = 0x228500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x228504: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x228504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x228508: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x228508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x22850c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x22850cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x228510: 0xae6300f0  sw          $v1, 0xF0($s3)
    ctx->pc = 0x228510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 3));
    // 0x228514: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x228514u;
    {
        const bool branch_taken_0x228514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228514) {
            ctx->pc = 0x228630u;
            return;
        }
    }
    ctx->pc = 0x22851Cu;
}
