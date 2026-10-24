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

// Function: entry_0034d548
// Address: 0x34d548 - 0x34d6c0
void entry_0034d548_0x34d548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034d548_0x34d548");
#endif

    switch (ctx->pc) {
        case 0x34d558u: goto label_34d558;
        case 0x34d564u: goto label_34d564;
        case 0x34d590u: goto label_34d590;
        case 0x34d59cu: goto label_34d59c;
        case 0x34d630u: goto label_34d630;
        default: break;
    }

    ctx->pc = 0x34d548u;

    // 0x34d548: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34d548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d54c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x34d54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34d550: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34D550u;
    SET_GPR_U32(ctx, 31, 0x34D558u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34D550u, 0x34D558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D558u;
label_34d558:
    // 0x34d558: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34d558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d55c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34D55Cu;
    SET_GPR_U32(ctx, 31, 0x34D564u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34D55Cu, 0x34D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D564u;
label_34d564:
    // 0x34d564: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34d564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d568: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x34d568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x34d56c: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x34d56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x34d570: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34d570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d574: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x34d574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d578: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34d578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34d57c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x34d57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x34d580: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34d580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d584: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34d584u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34d588: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34D588u;
    SET_GPR_U32(ctx, 31, 0x34D590u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34D588u, 0x34D590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D590u;
label_34d590:
    // 0x34d590: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34d590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d594: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34D594u;
    SET_GPR_U32(ctx, 31, 0x34D59Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34D594u, 0x34D59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D59Cu;
label_34d59c:
    // 0x34d59c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x34d59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d5a0: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x34d5a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x34d5a4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x34d5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x34d5a8: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x34d5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x34d5ac: 0x148000bd  bnez        $a0, . + 4 + (0xBD << 2)
    ctx->pc = 0x34D5ACu;
    {
        const bool branch_taken_0x34d5ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d5ac) {
            ctx->pc = 0x34D8A4u;
            return;
        }
    }
    ctx->pc = 0x34D5B4u;
    // 0x34d5b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34d5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d5b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d5bc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34d5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d5c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d5c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d5c8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x34d5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d5cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d5d0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x34d5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d5d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d5d8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x34d5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d5dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d5e0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34d5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34d5e4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x34d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34d5e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d5ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d5f0: 0xa4430068  sh          $v1, 0x68($v0)
    ctx->pc = 0x34d5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x34d5f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d5f8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34d5fc: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34d5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34d600: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34d600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34d604: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34d604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34d608: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34d608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34d60c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34d60cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34d610: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d614: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34d614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d618: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34d618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34d61c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34d620: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34d620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34d624: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34d624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34d628: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34D628u;
    SET_GPR_U32(ctx, 31, 0x34D630u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34D628u, 0x34D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D630u;
label_34d630:
    // 0x34d630: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34d630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34d634: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x34d634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x34d638: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x34d638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x34d63c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x34d63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x34d640: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34d640u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x34d644: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d648: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d64c: 0xa4430034  sh          $v1, 0x34($v0)
    ctx->pc = 0x34d64cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x34d650: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d654: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34d654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d658: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34d658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34d65c: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x34d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x34d660: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34d660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34d664: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34d664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34d668: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x34d668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34d66c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d670: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x34d670u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d674: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d678: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d67c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x34d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x34d680: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x34d680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x34d684: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x34D684u;
    {
        const bool branch_taken_0x34d684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d684) {
            ctx->pc = 0x34D6C0u;
            return;
        }
    }
    ctx->pc = 0x34D68Cu;
    // 0x34d68c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d690: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d694: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x34d694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d698: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34d698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d69c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d6a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d6a4: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x34d6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d6a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34d6ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d6b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d6b4: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x34d6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d6b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34D6B8u;
    {
        const bool branch_taken_0x34d6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d6b8) {
            ctx->pc = 0x34D6E8u;
            return;
        }
    }
    ctx->pc = 0x34D6C0u;
}
