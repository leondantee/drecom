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

// Function: Em0a_R1_dm_back_mid
// Address: 0x3674f0 - 0x3676f8
void Em0a_R1_dm_back_mid_0x3674f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_dm_back_mid_0x3674f0");
#endif

    switch (ctx->pc) {
        case 0x36755cu: goto label_36755c;
        case 0x367580u: goto label_367580;
        case 0x3675bcu: goto label_3675bc;
        case 0x3675d4u: goto label_3675d4;
        case 0x3675e8u: goto label_3675e8;
        case 0x3675f8u: goto label_3675f8;
        case 0x367604u: goto label_367604;
        case 0x36764cu: goto label_36764c;
        case 0x36767cu: goto label_36767c;
        case 0x367688u: goto label_367688;
        case 0x367698u: goto label_367698;
        case 0x3676a4u: goto label_3676a4;
        default: break;
    }

    ctx->pc = 0x3674f0u;

    // 0x3674f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3674f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3674f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3674f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3674f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3674f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x3674fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3674fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367500: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x367500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x367504: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x367504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x367508: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x367508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36750c: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x36750Cu;
    {
        const bool branch_taken_0x36750c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36750c) {
            ctx->pc = 0x36766Cu;
            goto label_36766c;
        }
    }
    ctx->pc = 0x367514u;
    // 0x367514: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x367514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367518: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x367518u;
    {
        const bool branch_taken_0x367518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x367518) {
            ctx->pc = 0x36762Cu;
            goto label_36762c;
        }
    }
    ctx->pc = 0x367520u;
    // 0x367520: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x367520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367524: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x367524u;
    {
        const bool branch_taken_0x367524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x367524) {
            ctx->pc = 0x367598u;
            goto label_367598;
        }
    }
    ctx->pc = 0x36752Cu;
    // 0x36752c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36752Cu;
    {
        const bool branch_taken_0x36752c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36752c) {
            ctx->pc = 0x36753Cu;
            goto label_36753c;
        }
    }
    ctx->pc = 0x367534u;
    // 0x367534: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x367534u;
    {
        const bool branch_taken_0x367534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367534) {
            ctx->pc = 0x3676E8u;
            goto label_3676e8;
        }
    }
    ctx->pc = 0x36753Cu;
label_36753c:
    // 0x36753c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367540: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367544: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x367544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x367548: 0x24060513  addiu       $a2, $zero, 0x513
    ctx->pc = 0x367548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1299));
    // 0x36754c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36754cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367550: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x367550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x367554: 0xc0965d0  jal         func_259740
    ctx->pc = 0x367554u;
    SET_GPR_U32(ctx, 31, 0x36755Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x367554u, 0x36755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36755Cu;
label_36755c:
    // 0x36755c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36755cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367560: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x367560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367564: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x367564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x367568: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x367568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36756c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36756cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367570: 0x0  nop
    ctx->pc = 0x367570u;
    // NOP
    // 0x367574: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x367574u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x367578: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x367578u;
    SET_GPR_U32(ctx, 31, 0x367580u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x367578u, 0x367580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367580u;
label_367580:
    // 0x367580: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367584: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x367584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x367588: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36758c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36758cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x367590: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x367590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x367594: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x367594u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_367598:
    // 0x367598: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36759c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3675a0: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x3675a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x3675a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3675a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3675a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3675a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3675ac: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x3675acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3675b0: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x3675b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3675b4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x3675B4u;
    SET_GPR_U32(ctx, 31, 0x3675BCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x3675B4u, 0x3675BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675BCu;
label_3675bc:
    // 0x3675bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3675bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3675c0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3675c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3675c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3675c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3675c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3675c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3675cc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3675CCu;
    SET_GPR_U32(ctx, 31, 0x3675D4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3675CCu, 0x3675D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675D4u;
label_3675d4:
    // 0x3675d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3675d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3675d8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3675d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3675dc: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x3675dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3675e0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x3675E0u;
    SET_GPR_U32(ctx, 31, 0x3675E8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x3675E0u, 0x3675E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675E8u;
label_3675e8:
    // 0x3675e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3675e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3675ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3675ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3675f0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3675F0u;
    SET_GPR_U32(ctx, 31, 0x3675F8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3675F0u, 0x3675F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675F8u;
label_3675f8:
    // 0x3675f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3675f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3675fc: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x3675FCu;
    SET_GPR_U32(ctx, 31, 0x367604u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x3675FCu, 0x367604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367604u;
label_367604:
    // 0x367604: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367608: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x367608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36760c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x36760Cu;
    {
        const bool branch_taken_0x36760c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36760c) {
            ctx->pc = 0x3676E8u;
            goto label_3676e8;
        }
    }
    ctx->pc = 0x367614u;
    // 0x367614: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367618: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x367618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x36761c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36761cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x367620: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x367620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x367624: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x367624u;
    {
        const bool branch_taken_0x367624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367624) {
            ctx->pc = 0x3676E8u;
            goto label_3676e8;
        }
    }
    ctx->pc = 0x36762Cu;
label_36762c:
    // 0x36762c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36762cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367630: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367634: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x367634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x367638: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x367638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x36763c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36763cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367640: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x367640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x367644: 0xc0965d0  jal         func_259740
    ctx->pc = 0x367644u;
    SET_GPR_U32(ctx, 31, 0x36764Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x367644u, 0x36764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36764Cu;
label_36764c:
    // 0x36764c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367650: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x367650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367654: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367658: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x367658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x36765c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36765cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367660: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x367660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x367664: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x367664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x367668: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x367668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36766c:
    // 0x36766c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36766cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367670: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367670u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x367674: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x367674u;
    SET_GPR_U32(ctx, 31, 0x36767Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367674u, 0x36767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36767Cu;
label_36767c:
    // 0x36767c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36767cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367680: 0xc05cd10  jal         func_173440
    ctx->pc = 0x367680u;
    SET_GPR_U32(ctx, 31, 0x367688u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x367680u, 0x367688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367688u;
label_367688:
    // 0x367688: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36768c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36768cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x367690: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x367690u;
    SET_GPR_U32(ctx, 31, 0x367698u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x367690u, 0x367698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367698u;
label_367698:
    // 0x367698: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36769c: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x36769Cu;
    SET_GPR_U32(ctx, 31, 0x3676A4u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x36769Cu, 0x3676A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3676A4u;
label_3676a4:
    // 0x3676a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3676a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3676a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3676a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3676ac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3676ACu;
    {
        const bool branch_taken_0x3676ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3676ac) {
            ctx->pc = 0x3676E8u;
            goto label_3676e8;
        }
    }
    ctx->pc = 0x3676B4u;
    // 0x3676b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3676b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3676b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3676b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3676bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3676bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3676c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3676c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3676c4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3676c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3676c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3676c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3676cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3676ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3676d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3676d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3676d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3676d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3676d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3676d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3676dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3676dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3676e0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3676E0u;
    {
        const bool branch_taken_0x3676e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3676e0) {
            ctx->pc = 0x3676E8u;
            goto label_3676e8;
        }
    }
    ctx->pc = 0x3676E8u;
label_3676e8:
    // 0x3676e8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3676e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3676ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3676ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3676f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3676F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3676F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3676F8u;
}
