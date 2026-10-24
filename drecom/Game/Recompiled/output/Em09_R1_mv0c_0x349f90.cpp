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

// Function: Em09_R1_mv0c
// Address: 0x349f90 - 0x34a214
void Em09_R1_mv0c_0x349f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv0c_0x349f90");
#endif

    switch (ctx->pc) {
        case 0x34a06cu: goto label_34a06c;
        case 0x34a0b0u: goto label_34a0b0;
        case 0x34a0fcu: goto label_34a0fc;
        case 0x34a118u: goto label_34a118;
        case 0x34a130u: goto label_34a130;
        case 0x34a178u: goto label_34a178;
        case 0x34a188u: goto label_34a188;
        case 0x34a194u: goto label_34a194;
        default: break;
    }

    ctx->pc = 0x349f90u;

    // 0x349f90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x349f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x349f94: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x349f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x349f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x349f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x349f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x349f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x349fa0: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x349fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x349fa4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x349fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x349fa8: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x349fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x349fac: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x349facu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x349fb0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x349fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x349fb4: 0x2463a500  addiu       $v1, $v1, -0x5B00
    ctx->pc = 0x349fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944000));
    // 0x349fb8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x349fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x349fbc: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x349fbcu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3AA500u));
    // 0x349fc0: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x349fc0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AA510u));
    // 0x349fc4: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x349fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x349fc8: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x349fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x349fcc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x349fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x349fd0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x349fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x349fd4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x349fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x349fd8: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x349fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x349fdc: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x349fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x349fe0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x349fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x349fe4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x349fe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x349fe8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x349fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x349fec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349ff0: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x349FF0u;
    {
        const bool branch_taken_0x349ff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x349ff0) {
            ctx->pc = 0x34A0D0u;
            goto label_34a0d0;
        }
    }
    ctx->pc = 0x349FF8u;
    // 0x349ff8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349FF8u;
    {
        const bool branch_taken_0x349ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x349ff8) {
            ctx->pc = 0x34A008u;
            goto label_34a008;
        }
    }
    ctx->pc = 0x34A000u;
    // 0x34a000: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x34A000u;
    {
        const bool branch_taken_0x34a000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a000) {
            ctx->pc = 0x34A1FCu;
            goto label_34a1fc;
        }
    }
    ctx->pc = 0x34A008u;
label_34a008:
    // 0x34a008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a00c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a010: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34a010u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a014: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a018: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34a018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a01c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x34a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x34a020: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34a020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34a024: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34A024u;
    {
        const bool branch_taken_0x34a024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a024) {
            ctx->pc = 0x34A030u;
            goto label_34a030;
        }
    }
    ctx->pc = 0x34A02Cu;
    // 0x34a02c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x34a02cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34a030:
    // 0x34a030: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a034: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34a034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a038: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34a038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34a03c: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x34a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x34a040: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34a040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34a044: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34a044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34a048: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a04c: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x34a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x34a050: 0x34460f00  ori         $a2, $v0, 0xF00
    ctx->pc = 0x34a050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3840);
    // 0x34a054: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34a054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a058: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x34a058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x34a05c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34a05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a060: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34a060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34a064: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34A064u;
    SET_GPR_U32(ctx, 31, 0x34A06Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34A064u, 0x34A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A06Cu;
label_34a06c:
    // 0x34a06c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a070: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34a070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a074: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34a074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34a078: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34a078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34a07c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34a07cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34a080: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x34a080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34a084: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a088: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x34a088u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a08c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a090: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34a090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34a094: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34a094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34a098: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34a098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34a09c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34a0a0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34a0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34a0a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34a0a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34A0A8u;
    SET_GPR_U32(ctx, 31, 0x34A0B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34A0A8u, 0x34A0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A0B0u;
label_34a0b0:
    // 0x34a0b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34a0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a0b4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x34a0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x34a0b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34a0bc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x34a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x34a0c0: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x34a0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a0c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a0c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a0cc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34a0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_34a0d0:
    // 0x34a0d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34a0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a0d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a0d8: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x34a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x34a0dc: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x34a0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x34a0e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34a0e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34a0e4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34a0e8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34a0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34a0ec: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34a0f0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34a0f4: 0xc05c848  jal         func_172120
    ctx->pc = 0x34A0F4u;
    SET_GPR_U32(ctx, 31, 0x34A0FCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34A0F4u, 0x34A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A0FCu;
label_34a0fc:
    // 0x34a0fc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x34a0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x34a100: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a104: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34a104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a108: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x34a108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a10c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34a10cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34a110: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34A110u;
    SET_GPR_U32(ctx, 31, 0x34A118u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34A110u, 0x34A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A118u;
label_34a118:
    // 0x34a118: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a11c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34a11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34a120: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34a120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a124: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34a124u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34a128: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34A128u;
    SET_GPR_U32(ctx, 31, 0x34A130u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34A128u, 0x34A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A130u;
label_34a130:
    // 0x34a130: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a134: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34a134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a138: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34a138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a13c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a140: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x34a140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a144: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34a144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34a148: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34a148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34a14c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a150: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34a150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a154: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x34a154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x34a158: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x34a158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x34a15c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34a15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34a160: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x34a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a164: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34a164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34a168: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34a168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34a16c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34a16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a170: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34A170u;
    SET_GPR_U32(ctx, 31, 0x34A178u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34A170u, 0x34A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A178u;
label_34a178:
    // 0x34a178: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34a178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a17c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34a17cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34a180: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34A180u;
    SET_GPR_U32(ctx, 31, 0x34A188u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34A180u, 0x34A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A188u;
label_34a188:
    // 0x34a188: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34a188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a18c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34A18Cu;
    SET_GPR_U32(ctx, 31, 0x34A194u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34A18Cu, 0x34A194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A194u;
label_34a194:
    // 0x34a194: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a198: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34a198u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34a19c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x34A19Cu;
    {
        const bool branch_taken_0x34a19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a19c) {
            ctx->pc = 0x34A1FCu;
            goto label_34a1fc;
        }
    }
    ctx->pc = 0x34A1A4u;
    // 0x34a1a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a1a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a1ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a1acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a1b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a1b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a1b8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a1bc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a1c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a1c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a1c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a1cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a1d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34a1d4: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34a1d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a1dc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a1e0: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34a1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x34a1e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a1e8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34a1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a1ec: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34a1f0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34a1f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34a1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34a1f8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_34a1fc:
    // 0x34a1fc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x34a1fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34a200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a208: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x34a208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34a20c: 0x3e00008  jr          $ra
    ctx->pc = 0x34A20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A214u;
}
