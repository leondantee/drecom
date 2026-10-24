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

// Function: Em0b_R1_mv01
// Address: 0x1ed560 - 0x1edacc
void Em0b_R1_mv01_0x1ed560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_mv01_0x1ed560");
#endif

    switch (ctx->pc) {
        case 0x1ed694u: goto label_1ed694;
        case 0x1ed69cu: goto label_1ed69c;
        case 0x1ed7a4u: goto label_1ed7a4;
        case 0x1ed7f0u: goto label_1ed7f0;
        case 0x1ed80cu: goto label_1ed80c;
        case 0x1ed824u: goto label_1ed824;
        case 0x1ed830u: goto label_1ed830;
        case 0x1ed860u: goto label_1ed860;
        case 0x1ed8b8u: goto label_1ed8b8;
        case 0x1ed904u: goto label_1ed904;
        case 0x1ed920u: goto label_1ed920;
        case 0x1ed938u: goto label_1ed938;
        case 0x1ed944u: goto label_1ed944;
        case 0x1eda64u: goto label_1eda64;
        case 0x1eda88u: goto label_1eda88;
        case 0x1edabcu: goto label_1edabc;
        default: break;
    }

    ctx->pc = 0x1ed560u;

    // 0x1ed560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ed560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ed564: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1ed564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ed568: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1ed568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1ed56c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ed56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed570: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1ed570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ed574: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ed574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ed578: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ed578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ed57c: 0x108300bd  beq         $a0, $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x1ED57Cu;
    {
        const bool branch_taken_0x1ed57c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ed57c) {
            ctx->pc = 0x1ED874u;
            goto label_1ed874;
        }
    }
    ctx->pc = 0x1ED584u;
    // 0x1ed584: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed588: 0x10830075  beq         $a0, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x1ED588u;
    {
        const bool branch_taken_0x1ed588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ed588) {
            ctx->pc = 0x1ED760u;
            goto label_1ed760;
        }
    }
    ctx->pc = 0x1ED590u;
    // 0x1ed590: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED590u;
    {
        const bool branch_taken_0x1ed590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed590) {
            ctx->pc = 0x1ED5A0u;
            goto label_1ed5a0;
        }
    }
    ctx->pc = 0x1ED598u;
    // 0x1ed598: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1ED598u;
    {
        const bool branch_taken_0x1ed598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed598) {
            ctx->pc = 0x1ED944u;
            goto label_1ed944;
        }
    }
    ctx->pc = 0x1ED5A0u;
label_1ed5a0:
    // 0x1ed5a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed5a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed5a8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1ed5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ed5ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed5acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed5b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed5b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed5b8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1ed5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1ed5bc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1ed5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1ed5c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed5c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed5c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed5cc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ed5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1ed5d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ed5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ed5d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed5d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed5dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed5e0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ed5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ed5e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ed5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ed5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed5ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed5f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed5f4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ed5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1ed5f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed5fc: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed600: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ed600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed604: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ed604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ed608: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1ED608u;
    {
        const bool branch_taken_0x1ed608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed608) {
            ctx->pc = 0x1ED644u;
            goto label_1ed644;
        }
    }
    ctx->pc = 0x1ED610u;
    // 0x1ed610: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed614: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed618: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1ed618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed61c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1ed61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1ed620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed624: 0x0  nop
    ctx->pc = 0x1ed624u;
    // NOP
    // 0x1ed628: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ed628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ed62c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1ed62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1ed630: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1ed630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1ed634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed638: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed63c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed640: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ed640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1ed644:
    // 0x1ed644: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x1ed644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x1ed648: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ed64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed650: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed654: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed658: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ed658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1ed65c: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x1ed65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x1ed660: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ed664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed668: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed66c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed670: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1ed670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1ed674: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed678: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed67c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ed67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ed680: 0x24067804  addiu       $a2, $zero, 0x7804
    ctx->pc = 0x1ed680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30724));
    // 0x1ed684: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ed684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed688: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ed688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ed68c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1ED68Cu;
    SET_GPR_U32(ctx, 31, 0x1ED694u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1ED68Cu, 0x1ED694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED694u;
label_1ed694:
    // 0x1ed694: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ED694u;
    SET_GPR_U32(ctx, 31, 0x1ED69Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ED694u, 0x1ED69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED69Cu;
label_1ed69c:
    // 0x1ed69c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ed69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ed6a0: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x1ed6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x1ed6a4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1ed6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1ed6a8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1ed6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ed6ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ed6acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ed6b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed6b4: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1ed6b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ed6b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed6bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed6c0: 0x944200aa  lhu         $v0, 0xAA($v0)
    ctx->pc = 0x1ed6c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
    // 0x1ed6c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ed6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ed6c8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ed6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ed6cc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1ED6CCu;
    {
        const bool branch_taken_0x1ed6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed6cc) {
            ctx->pc = 0x1ED760u;
            goto label_1ed760;
        }
    }
    ctx->pc = 0x1ED6D4u;
    // 0x1ed6d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed6d8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed6dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ed6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ed6e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ed6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed6e4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1ed6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed6e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed6ec: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1ed6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1ed6f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed6f4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed6f8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ed6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ed6fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ed6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed700: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1ed700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed704: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed708: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1ed708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1ed70c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed710: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed714: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1ed714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1ed718: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ed718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed71c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1ed71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed720: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed724: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1ed724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1ed728: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed72c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed730: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1ed730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1ed734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ed734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed738: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x1ed738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed73c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed73cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed740: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1ed740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1ed744: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed748: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed74c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ed74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ed750: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ed750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed754: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1ed754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed758: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed75c: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1ed75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_1ed760:
    // 0x1ed760: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed764: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed768: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ed768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ed76c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ed76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ed770: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ED770u;
    {
        const bool branch_taken_0x1ed770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed770) {
            ctx->pc = 0x1ED7B0u;
            goto label_1ed7b0;
        }
    }
    ctx->pc = 0x1ED778u;
    // 0x1ed778: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed77c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ed77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed780: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed784: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed788: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ed788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ed78c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1ed78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ed790: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ed790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ed794: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ed794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ed798: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ed798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ed79c: 0xc05c848  jal         func_172120
    ctx->pc = 0x1ED79Cu;
    SET_GPR_U32(ctx, 31, 0x1ED7A4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1ED79Cu, 0x1ED7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED7A4u;
label_1ed7a4:
    // 0x1ed7a4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ed7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1ed7a8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1ED7A8u;
    {
        const bool branch_taken_0x1ed7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed7a8) {
            ctx->pc = 0x1ED7F4u;
            goto label_1ed7f4;
        }
    }
    ctx->pc = 0x1ED7B0u;
label_1ed7b0:
    // 0x1ed7b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed7b4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ed7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed7b8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ed7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ed7bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ed7c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed7c4: 0x0  nop
    ctx->pc = 0x1ed7c4u;
    // NOP
    // 0x1ed7c8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1ed7c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ed7cc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed7d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed7d4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed7d8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ed7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ed7dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ed7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ed7e0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ed7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ed7e4: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ed7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ed7e8: 0xc05c848  jal         func_172120
    ctx->pc = 0x1ED7E8u;
    SET_GPR_U32(ctx, 31, 0x1ED7F0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1ED7E8u, 0x1ED7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED7F0u;
label_1ed7f0:
    // 0x1ed7f0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ed7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1ed7f4:
    // 0x1ed7f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed7f8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ed7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed7fc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ed7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed800: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1ed800u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ed804: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1ED804u;
    SET_GPR_U32(ctx, 31, 0x1ED80Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1ED804u, 0x1ED80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED80Cu;
label_1ed80c:
    // 0x1ed80c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed810: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ed810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ed814: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed818: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ed818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed81c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1ED81Cu;
    SET_GPR_U32(ctx, 31, 0x1ED824u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1ED81Cu, 0x1ED824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED824u;
label_1ed824:
    // 0x1ed824: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed828: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1ED828u;
    SET_GPR_U32(ctx, 31, 0x1ED830u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1ED828u, 0x1ED830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED830u;
label_1ed830:
    // 0x1ed830: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ed830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed834: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1ed834u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1ed838: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1ED838u;
    {
        const bool branch_taken_0x1ed838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed838) {
            ctx->pc = 0x1ED944u;
            goto label_1ed944;
        }
    }
    ctx->pc = 0x1ED840u;
    // 0x1ed840: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed844: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed848: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ed848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ed84c: 0x24067805  addiu       $a2, $zero, 0x7805
    ctx->pc = 0x1ed84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30725));
    // 0x1ed850: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ed850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed854: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ed854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ed858: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1ED858u;
    SET_GPR_U32(ctx, 31, 0x1ED860u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1ED858u, 0x1ED860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED860u;
label_1ed860:
    // 0x1ed860: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ed860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ed864: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ed864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed868: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ed868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ed86c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1ED86Cu;
    {
        const bool branch_taken_0x1ed86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed86c) {
            ctx->pc = 0x1ED944u;
            goto label_1ed944;
        }
    }
    ctx->pc = 0x1ED874u;
label_1ed874:
    // 0x1ed874: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed878: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed87c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ed87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ed880: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ed880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ed884: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ED884u;
    {
        const bool branch_taken_0x1ed884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed884) {
            ctx->pc = 0x1ED8C4u;
            goto label_1ed8c4;
        }
    }
    ctx->pc = 0x1ED88Cu;
    // 0x1ed88c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed890: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ed890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed894: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed898: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed89c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ed89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ed8a0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1ed8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ed8a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ed8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ed8a8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ed8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ed8ac: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ed8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ed8b0: 0xc05c848  jal         func_172120
    ctx->pc = 0x1ED8B0u;
    SET_GPR_U32(ctx, 31, 0x1ED8B8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1ED8B0u, 0x1ED8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED8B8u;
label_1ed8b8:
    // 0x1ed8b8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ed8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1ed8bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1ED8BCu;
    {
        const bool branch_taken_0x1ed8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed8bc) {
            ctx->pc = 0x1ED908u;
            goto label_1ed908;
        }
    }
    ctx->pc = 0x1ED8C4u;
label_1ed8c4:
    // 0x1ed8c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed8c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed8cc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ed8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed8d0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ed8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ed8d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ed8d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed8dc: 0x0  nop
    ctx->pc = 0x1ed8dcu;
    // NOP
    // 0x1ed8e0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1ed8e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ed8e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed8e8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed8ec: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ed8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ed8f0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ed8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ed8f4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ed8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ed8f8: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ed8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ed8fc: 0xc05c848  jal         func_172120
    ctx->pc = 0x1ED8FCu;
    SET_GPR_U32(ctx, 31, 0x1ED904u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1ED8FCu, 0x1ED904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED904u;
label_1ed904:
    // 0x1ed904: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ed904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1ed908:
    // 0x1ed908: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed90c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ed90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed910: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ed910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed914: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1ed914u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ed918: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1ED918u;
    SET_GPR_U32(ctx, 31, 0x1ED920u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1ED918u, 0x1ED920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED920u;
label_1ed920:
    // 0x1ed920: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed924: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ed924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ed928: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed92c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ed92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed930: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1ED930u;
    SET_GPR_U32(ctx, 31, 0x1ED938u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1ED930u, 0x1ED938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED938u;
label_1ed938:
    // 0x1ed938: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed93c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1ED93Cu;
    SET_GPR_U32(ctx, 31, 0x1ED944u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1ED93Cu, 0x1ED944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED944u;
label_1ed944:
    // 0x1ed944: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ed944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed948: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed94c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1ed94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed954: 0x0  nop
    ctx->pc = 0x1ed954u;
    // NOP
    // 0x1ed958: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ed958u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed95c: 0x0  nop
    ctx->pc = 0x1ed95cu;
    // NOP
    // 0x1ed960: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1ED960u;
    {
        const bool branch_taken_0x1ed960 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed960) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED968u;
    // 0x1ed968: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ed968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed96c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed970: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1ed970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed974: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed978: 0x0  nop
    ctx->pc = 0x1ed978u;
    // NOP
    // 0x1ed97c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ed97cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed980: 0x0  nop
    ctx->pc = 0x1ed980u;
    // NOP
    // 0x1ed984: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1ED984u;
    {
        const bool branch_taken_0x1ed984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed984) {
            ctx->pc = 0x1ED9ECu;
            goto label_1ed9ec;
        }
    }
    ctx->pc = 0x1ED98Cu;
    // 0x1ed98c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ed98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed990: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ed990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed994: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1ed994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed998: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1ed998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1ed99c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1ed99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1ed9a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed9a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed9a4: 0x0  nop
    ctx->pc = 0x1ed9a4u;
    // NOP
    // 0x1ed9a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ed9a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ed9ac: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1ed9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1ed9b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ed9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed9b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed9b8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1ed9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed9bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed9bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed9c0: 0x0  nop
    ctx->pc = 0x1ed9c0u;
    // NOP
    // 0x1ed9c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ed9c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed9c8: 0x0  nop
    ctx->pc = 0x1ed9c8u;
    // NOP
    // 0x1ed9cc: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1ED9CCu;
    {
        const bool branch_taken_0x1ed9cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed9cc) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED9D4u;
    // 0x1ed9d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed9d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ed9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed9dc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed9e0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1ed9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1ed9e4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1ED9E4u;
    {
        const bool branch_taken_0x1ed9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed9e4) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED9ECu;
label_1ed9ec:
    // 0x1ed9ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ed9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed9f0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ed9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed9f4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1ed9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed9f8: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1ed9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1ed9fc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1ed9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1eda00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eda00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eda04: 0x0  nop
    ctx->pc = 0x1eda04u;
    // NOP
    // 0x1eda08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eda08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eda0c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1eda0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1eda10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eda10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eda14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eda14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eda18: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1eda18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eda1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eda1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eda20: 0x0  nop
    ctx->pc = 0x1eda20u;
    // NOP
    // 0x1eda24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1eda24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eda28: 0x0  nop
    ctx->pc = 0x1eda28u;
    // NOP
    // 0x1eda2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EDA2Cu;
    {
        const bool branch_taken_0x1eda2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eda2c) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1EDA34u;
    // 0x1eda34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eda34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eda38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eda38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eda3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eda3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eda40: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1eda40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1eda44:
    // 0x1eda44: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1eda44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eda48: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x1eda48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x1eda4c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1eda4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1eda50: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x1eda50u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eda54: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EDA54u;
    {
        const bool branch_taken_0x1eda54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eda54) {
            ctx->pc = 0x1EDABCu;
            goto label_1edabc;
        }
    }
    ctx->pc = 0x1EDA5Cu;
    // 0x1eda5c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDA5Cu;
    SET_GPR_U32(ctx, 31, 0x1EDA64u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDA5Cu, 0x1EDA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDA64u;
label_1eda64:
    // 0x1eda64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eda64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eda68: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x1eda68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
    // 0x1eda6c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1eda6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1eda70: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1eda70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1eda74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1eda74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1eda78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eda78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eda7c: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1eda7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eda80: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDA80u;
    SET_GPR_U32(ctx, 31, 0x1EDA88u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDA80u, 0x1EDA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDA88u;
label_1eda88:
    // 0x1eda88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1eda88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eda8c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1eda8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1eda90: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EDA90u;
    {
        const bool branch_taken_0x1eda90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eda90) {
            ctx->pc = 0x1EDABCu;
            goto label_1edabc;
        }
    }
    ctx->pc = 0x1EDA98u;
    // 0x1eda98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eda98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eda9c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x1eda9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x1edaa0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1edaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1edaa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1edaa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1edaa8: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x1edaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x1edaac: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1edaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1edab0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1edab0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1edab4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1EDAB4u;
    SET_GPR_U32(ctx, 31, 0x1EDABCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1EDAB4u, 0x1EDABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDABCu;
label_1edabc:
    // 0x1edabc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1edabcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edac0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1edac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1edac4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDACCu;
}
