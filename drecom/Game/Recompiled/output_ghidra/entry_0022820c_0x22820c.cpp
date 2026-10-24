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

// Function: entry_0022820c
// Address: 0x22820c - 0x2283ac
void entry_0022820c_0x22820c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022820c_0x22820c");
#endif

    switch (ctx->pc) {
        case 0x228218u: goto label_228218;
        case 0x228274u: goto label_228274;
        case 0x2282b0u: goto label_2282b0;
        case 0x2282b8u: goto label_2282b8;
        default: break;
    }

    ctx->pc = 0x22820cu;

    // 0x22820c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22820cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228210: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x228210u;
    SET_GPR_U32(ctx, 31, 0x228218u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x228210u, 0x228218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228218u;
label_228218:
    // 0x228218: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22821c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22821cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x228220: 0x10600103  beqz        $v1, . + 4 + (0x103 << 2)
    ctx->pc = 0x228220u;
    {
        const bool branch_taken_0x228220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x228220) {
            ctx->pc = 0x228630u;
            return;
        }
    }
    ctx->pc = 0x228228u;
    // 0x228228: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x228228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22822c: 0x9022fe17  lbu         $v0, -0x1E9($at)
    ctx->pc = 0x22822cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5CFE17u));
    // 0x228230: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x228230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228234: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x228234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x228238: 0xa022fe17  sb          $v0, -0x1E9($at)
    ctx->pc = 0x228238u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFE17u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CFE17u, _value); } while (0);
    // 0x22823c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228240: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228244: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x228244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x228248: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x228248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22824c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22824cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228250: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x228250u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x228254: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228258: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x228258u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22825c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x22825cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228260: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x228260u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x228264: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228268: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x228268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22826c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22826Cu;
    SET_GPR_U32(ctx, 31, 0x228274u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22826Cu, 0x228274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228274u;
label_228274:
    // 0x228274: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x228274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x228278: 0x3044001f  andi        $a0, $v0, 0x1F
    ctx->pc = 0x228278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22827c: 0x2485003c  addiu       $a1, $a0, 0x3C
    ctx->pc = 0x22827cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
    // 0x228280: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x228280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x228284: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x228284u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x228288: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22828c: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x22828cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x228290: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228294: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228298: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x228298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22829c: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x22829cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x2282a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2282a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2282a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2282a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2282a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2282A8u;
    SET_GPR_U32(ctx, 31, 0x2282B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2282A8u, 0x2282B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2282B0u;
label_2282b0:
    // 0x2282b0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2282B0u;
    SET_GPR_U32(ctx, 31, 0x2282B8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2282B0u, 0x2282B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2282B8u;
label_2282b8:
    // 0x2282b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2282b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2282bc: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x2282bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2282c0: 0x24830064  addiu       $v1, $a0, 0x64
    ctx->pc = 0x2282c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x2282c4: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x2282c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2282c8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2282c8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2282cc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2282ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2282d0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2282d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2282d4: 0xa485005c  sh          $a1, 0x5C($a0)
    ctx->pc = 0x2282d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 5));
    // 0x2282d8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2282d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2282dc: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2282dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2282e0: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x2282e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2282e4: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x2282e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x2282e8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2282e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2282ec: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x2282ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    // 0x2282f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2282f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2282f4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2282f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2282f8: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2282f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2282fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2282fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228300: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228304: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x228304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x228308: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22830c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22830cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228310: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x228310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x228314: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228318: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x228318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22831c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22831cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x228320: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x228320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x228324: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x228324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x228328: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x228328u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    // 0x22832c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22832cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228330: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x228330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228334: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x228334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x228338: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x228338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x22833c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22833cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x228340: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x228340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x228344: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228348: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x228348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22834c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x22834cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x228350: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x228350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x228354: 0xa63824  and         $a3, $a1, $a2
    ctx->pc = 0x228354u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x228358: 0xac870030  sw          $a3, 0x30($a0)
    ctx->pc = 0x228358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
    // 0x22835c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22835cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x228360: 0x8c281a58  lw          $t0, 0x1A58($at)
    ctx->pc = 0x228360u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x228364: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x228364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x228368: 0x1032024  and         $a0, $t0, $v1
    ctx->pc = 0x228368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x22836c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22836cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x228370: 0xac241a58  sw          $a0, 0x1A58($at)
    ctx->pc = 0x228370u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x228374: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x228374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x228378: 0x8c231a50  lw          $v1, 0x1A50($at)
    ctx->pc = 0x228378u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x22837c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x22837cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x228380: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x228380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x228384: 0xac231a50  sw          $v1, 0x1A50($at)
    ctx->pc = 0x228384u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    // 0x228388: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22838c: 0x249210b0  addiu       $s2, $a0, 0x10B0
    ctx->pc = 0x22838cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4272));
    // 0x228390: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x228390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x228394: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x228394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
    // 0x228398: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x228398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x22839c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x22839cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2283a0: 0xae4300f0  sw          $v1, 0xF0($s2)
    ctx->pc = 0x2283a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 3));
    // 0x2283a4: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2283A4u;
    {
        const bool branch_taken_0x2283a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2283a4) {
            ctx->pc = 0x228630u;
            return;
        }
    }
    ctx->pc = 0x2283ACu;
}
