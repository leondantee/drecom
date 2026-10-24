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

// Function: Em00_R1_fall_down
// Address: 0x2d5470 - 0x2d55ac
void Em00_R1_fall_down_0x2d5470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_fall_down_0x2d5470");
#endif

    switch (ctx->pc) {
        case 0x2d54d0u: goto label_2d54d0;
        case 0x2d5508u: goto label_2d5508;
        case 0x2d555cu: goto label_2d555c;
        default: break;
    }

    ctx->pc = 0x2d5470u;

    // 0x2d5470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d5470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d5474: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d5474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d5478: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d5478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d547c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d547cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5480: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d5480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d5484: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d5484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d5488: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d5488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d548c: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D548Cu;
    {
        const bool branch_taken_0x2d548c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d548c) {
            ctx->pc = 0x2D5520u;
            goto label_2d5520;
        }
    }
    ctx->pc = 0x2D5494u;
    // 0x2d5494: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d5494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5498: 0x10830040  beq         $a0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x2D5498u;
    {
        const bool branch_taken_0x2d5498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d5498) {
            ctx->pc = 0x2D559Cu;
            goto label_2d559c;
        }
    }
    ctx->pc = 0x2D54A0u;
    // 0x2d54a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D54A0u;
    {
        const bool branch_taken_0x2d54a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d54a0) {
            ctx->pc = 0x2D54B0u;
            goto label_2d54b0;
        }
    }
    ctx->pc = 0x2D54A8u;
    // 0x2d54a8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2D54A8u;
    {
        const bool branch_taken_0x2d54a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d54a8) {
            ctx->pc = 0x2D559Cu;
            goto label_2d559c;
        }
    }
    ctx->pc = 0x2D54B0u;
label_2d54b0:
    // 0x2d54b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d54b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d54b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d54b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d54b8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d54b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d54bc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2d54bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d54c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d54c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d54c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d54c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d54c8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D54C8u;
    SET_GPR_U32(ctx, 31, 0x2D54D0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D54C8u, 0x2D54D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D54D0u;
label_2d54d0:
    // 0x2d54d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d54d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d54d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d54d8: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x2d54d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x2d54dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d54dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d54e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d54e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d54e4: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2d54e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2d54e8: 0x3c023fae  lui         $v0, 0x3FAE
    ctx->pc = 0x2d54e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16302 << 16));
    // 0x2d54ec: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x2d54ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x2d54f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d54f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d54f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d54f8: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2d54f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x2d54fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d54fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5500: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D5500u;
    SET_GPR_U32(ctx, 31, 0x2D5508u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D5500u, 0x2D5508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5508u;
label_2d5508:
    // 0x2d5508: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d5508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d550c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2d550cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2d5510: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d5510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d5514: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2d5514u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d5518: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2D5518u;
    {
        const bool branch_taken_0x2d5518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5518) {
            ctx->pc = 0x2D559Cu;
            goto label_2d559c;
        }
    }
    ctx->pc = 0x2D5520u;
label_2d5520:
    // 0x2d5520: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d5520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5524: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2d5524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5528: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d5528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d552c: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2d552cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5530: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d5530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d5534: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2d5534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2d5538: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d5538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d553c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2d553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5540: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d5540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5544: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2d5544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5548: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d5548u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d554c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2d554cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2d5550: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d5550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5554: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D5554u;
    SET_GPR_U32(ctx, 31, 0x2D555Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D5554u, 0x2D555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D555Cu;
label_2d555c:
    // 0x2d555c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5560: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d5560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d5564: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D5564u;
    {
        const bool branch_taken_0x2d5564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5564) {
            ctx->pc = 0x2D559Cu;
            goto label_2d559c;
        }
    }
    ctx->pc = 0x2D556Cu;
    // 0x2d556c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d556cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5570: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5574: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d5574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d5578: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d5578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d557c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5580: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d5580u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d5584: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5588: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d5588u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d558c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d558cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5590: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d5590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5594: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5598: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d5598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d559c:
    // 0x2d559c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d559cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d55a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d55a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d55a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D55A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D55A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D55ACu;
}
