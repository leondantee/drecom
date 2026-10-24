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

// Function: Em08_R1_mv01
// Address: 0x375630 - 0x37590c
void Em08_R1_mv01_0x375630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_R1_mv01_0x375630");
#endif

    switch (ctx->pc) {
        case 0x37569cu: goto label_37569c;
        case 0x375724u: goto label_375724;
        case 0x37575cu: goto label_37575c;
        case 0x37577cu: goto label_37577c;
        case 0x37580cu: goto label_37580c;
        case 0x375818u: goto label_375818;
        case 0x375828u: goto label_375828;
        case 0x375834u: goto label_375834;
        case 0x375898u: goto label_375898;
        case 0x3758a4u: goto label_3758a4;
        default: break;
    }

    ctx->pc = 0x375630u;

    // 0x375630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x375630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x375634: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x375634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x375638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x375638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37563c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x37563cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x375640: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375644: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x375644u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x375648: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37564c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x37564cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x375650: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x375650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x375654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375658: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x375658u;
    {
        const bool branch_taken_0x375658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x375658) {
            ctx->pc = 0x3756B8u;
            goto label_3756b8;
        }
    }
    ctx->pc = 0x375660u;
    // 0x375660: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x375660u;
    {
        const bool branch_taken_0x375660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x375660) {
            ctx->pc = 0x375670u;
            goto label_375670;
        }
    }
    ctx->pc = 0x375668u;
    // 0x375668: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x375668u;
    {
        const bool branch_taken_0x375668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375668) {
            ctx->pc = 0x3758F8u;
            goto label_3758f8;
        }
    }
    ctx->pc = 0x375670u;
label_375670:
    // 0x375670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375674: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375678: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x375678u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x37567c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375680: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375684: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x375684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x375688: 0x24063c07  addiu       $a2, $zero, 0x3C07
    ctx->pc = 0x375688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15367));
    // 0x37568c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37568cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375690: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x375690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x375694: 0xc0965d0  jal         func_259740
    ctx->pc = 0x375694u;
    SET_GPR_U32(ctx, 31, 0x37569Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x375694u, 0x37569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37569Cu;
label_37569c:
    // 0x37569c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37569cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3756a0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x3756a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x3756a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3756a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3756a8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x3756a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3756ac: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x3756acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x3756b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3756b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3756b4: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x3756b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_3756b8:
    // 0x3756b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3756b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3756bc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x3756bcu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3756c0: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x3756c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x3756c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3756c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3756c8: 0x0  nop
    ctx->pc = 0x3756c8u;
    // NOP
    // 0x3756cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3756ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3756d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3756d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3756d4: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x3756d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x3756d8: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x3756d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x3756dc: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x3756dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x3756e0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3756e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3756e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3756e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3756e8: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3756e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3756ec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x3756ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3756f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3756f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3756f4: 0x3c023bab  lui         $v0, 0x3BAB
    ctx->pc = 0x3756f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15275 << 16));
    // 0x3756f8: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x3756f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
    // 0x3756fc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x3756fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x375700: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x375700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x375704: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x375704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x375708: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x375708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x37570c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x37570cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x375710: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x375710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x375714: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x375714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x375718: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x375718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x37571c: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x37571Cu;
    SET_GPR_U32(ctx, 31, 0x375724u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x37571Cu, 0x375724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375724u;
label_375724:
    // 0x375724: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375728: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x375728u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37572c: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x37572cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x375730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375734: 0x0  nop
    ctx->pc = 0x375734u;
    // NOP
    // 0x375738: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x375738u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37573c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37573cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375740: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x375740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x375744: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375748: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x375748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37574c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x37574cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375750: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x375750u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375754: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x375754u;
    SET_GPR_U32(ctx, 31, 0x37575Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x375754u, 0x37575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37575Cu;
label_37575c:
    // 0x37575c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375760: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x375760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x375764: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375768: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37576c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x37576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375770: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x375770u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375774: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x375774u;
    SET_GPR_U32(ctx, 31, 0x37577Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x375774u, 0x37577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37577Cu;
label_37577c:
    // 0x37577c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375780: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x375784: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375788: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37578c: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x37578cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x375790: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375798: 0x0  nop
    ctx->pc = 0x375798u;
    // NOP
    // 0x37579c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37579cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3757a0: 0x0  nop
    ctx->pc = 0x3757a0u;
    // NOP
    // 0x3757a4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3757A4u;
    {
        const bool branch_taken_0x3757a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3757a4) {
            ctx->pc = 0x3757C0u;
            goto label_3757c0;
        }
    }
    ctx->pc = 0x3757ACu;
    // 0x3757ac: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x3757acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x3757b0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3757b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3757b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3757b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3757b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3757b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3757bc: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3757bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_3757c0:
    // 0x3757c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3757c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3757c4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x3757c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3757c8: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x3757c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x3757cc: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3757ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3757d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3757d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3757d4: 0x0  nop
    ctx->pc = 0x3757d4u;
    // NOP
    // 0x3757d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3757d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3757dc: 0x0  nop
    ctx->pc = 0x3757dcu;
    // NOP
    // 0x3757e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3757E0u;
    {
        const bool branch_taken_0x3757e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3757e0) {
            ctx->pc = 0x3757FCu;
            goto label_3757fc;
        }
    }
    ctx->pc = 0x3757E8u;
    // 0x3757e8: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x3757e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x3757ec: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3757ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3757f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3757f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3757f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3757f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3757f8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3757f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_3757fc:
    // 0x3757fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3757fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375800: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x375800u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375804: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x375804u;
    SET_GPR_U32(ctx, 31, 0x37580Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x375804u, 0x37580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37580Cu;
label_37580c:
    // 0x37580c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x37580cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375810: 0xc05cd10  jal         func_173440
    ctx->pc = 0x375810u;
    SET_GPR_U32(ctx, 31, 0x375818u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x375810u, 0x375818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375818u;
label_375818:
    // 0x375818: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37581c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37581cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375820: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x375820u;
    SET_GPR_U32(ctx, 31, 0x375828u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x375820u, 0x375828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375828u;
label_375828:
    // 0x375828: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37582c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x37582Cu;
    SET_GPR_U32(ctx, 31, 0x375834u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x37582Cu, 0x375834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375834u;
label_375834:
    // 0x375834: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375838: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x375838u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x37583c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37583cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x375840: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x375840u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x375844: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375848: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x375848u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x37584c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x37584cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x375850: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x375850u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x375854: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x375854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x375858: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x375858u;
    {
        const bool branch_taken_0x375858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x375858) {
            ctx->pc = 0x3758A4u;
            goto label_3758a4;
        }
    }
    ctx->pc = 0x375860u;
    // 0x375860: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375864: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x375864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x375868: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x375868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x37586c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x37586cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x375870: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x375870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x375874: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x375874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x375878: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x375878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x37587c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x37587cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x375880: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x375880u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x375884: 0x3404a506  ori         $a0, $zero, 0xA506
    ctx->pc = 0x375884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42246);
    // 0x375888: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x375888u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37588c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37588cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375890: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x375890u;
    SET_GPR_U32(ctx, 31, 0x375898u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x375890u, 0x375898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375898u;
label_375898:
    // 0x375898: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x375898u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37589c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x37589Cu;
    SET_GPR_U32(ctx, 31, 0x3758A4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x37589Cu, 0x3758A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3758A4u;
label_3758a4:
    // 0x3758a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3758a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3758a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3758a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3758ac: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3758ACu;
    {
        const bool branch_taken_0x3758ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3758ac) {
            ctx->pc = 0x3758F8u;
            goto label_3758f8;
        }
    }
    ctx->pc = 0x3758B4u;
    // 0x3758b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3758b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3758b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3758b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3758bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3758bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3758c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3758c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3758c4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3758c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3758c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3758c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3758cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3758ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3758d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3758d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3758d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3758d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3758d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3758d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3758dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3758dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3758e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3758e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3758e4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x3758e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3758e8: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x3758e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x3758ec: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3758ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3758f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3758f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3758f4: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x3758f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
label_3758f8:
    // 0x3758f8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3758f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3758fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3758fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375900: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x375900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x375904: 0x3e00008  jr          $ra
    ctx->pc = 0x375904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37590Cu;
}
