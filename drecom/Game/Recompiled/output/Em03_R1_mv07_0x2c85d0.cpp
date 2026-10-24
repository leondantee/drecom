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

// Function: Em03_R1_mv07
// Address: 0x2c85d0 - 0x2c8ac0
void Em03_R1_mv07_0x2c85d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_mv07_0x2c85d0");
#endif

    switch (ctx->pc) {
        case 0x2c8658u: goto label_2c8658;
        case 0x2c8660u: goto label_2c8660;
        case 0x2c8684u: goto label_2c8684;
        case 0x2c870cu: goto label_2c870c;
        case 0x2c8748u: goto label_2c8748;
        case 0x2c8770u: goto label_2c8770;
        case 0x2c87b4u: goto label_2c87b4;
        case 0x2c8828u: goto label_2c8828;
        case 0x2c8844u: goto label_2c8844;
        case 0x2c885cu: goto label_2c885c;
        case 0x2c8890u: goto label_2c8890;
        case 0x2c88a0u: goto label_2c88a0;
        case 0x2c88acu: goto label_2c88ac;
        case 0x2c8994u: goto label_2c8994;
        case 0x2c89a8u: goto label_2c89a8;
        case 0x2c89f0u: goto label_2c89f0;
        case 0x2c8a00u: goto label_2c8a00;
        case 0x2c8a30u: goto label_2c8a30;
        case 0x2c8a48u: goto label_2c8a48;
        default: break;
    }

    ctx->pc = 0x2c85d0u;

    // 0x2c85d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c85d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c85d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2c85d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2c85d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c85d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c85dc: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2c85dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x2c85e0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c85e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c85e4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x2c85e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2c85e8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2c85e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2c85ec: 0x24638140  addiu       $v1, $v1, -0x7EC0
    ctx->pc = 0x2c85ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934848));
    // 0x2c85f0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c85f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c85f4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2c85f4u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x398140u));
    // 0x2c85f8: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x2c85f8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x398150u));
    // 0x2c85fc: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2c85fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2c8600: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x2c8600u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x2c8604: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8608: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2c8608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2c860c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2c860cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c8610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c8610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8614: 0x10830079  beq         $a0, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x2C8614u;
    {
        const bool branch_taken_0x2c8614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c8614) {
            ctx->pc = 0x2C87FCu;
            goto label_2c87fc;
        }
    }
    ctx->pc = 0x2C861Cu;
    // 0x2c861c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C861Cu;
    {
        const bool branch_taken_0x2c861c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c861c) {
            ctx->pc = 0x2C862Cu;
            goto label_2c862c;
        }
    }
    ctx->pc = 0x2C8624u;
    // 0x2c8624: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x2C8624u;
    {
        const bool branch_taken_0x2c8624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8624) {
            ctx->pc = 0x2C8AACu;
            goto label_2c8aac;
        }
    }
    ctx->pc = 0x2C862Cu;
label_2c862c:
    // 0x2c862c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8630: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8634: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c8634u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c8638: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c863c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c863cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8640: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c8640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c8644: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2c8644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2c8648: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c8648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c864c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c864cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c8650: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C8650u;
    SET_GPR_U32(ctx, 31, 0x2C8658u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C8650u, 0x2C8658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8658u;
label_2c8658:
    // 0x2c8658: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C8658u;
    SET_GPR_U32(ctx, 31, 0x2C8660u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C8658u, 0x2C8660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8660u;
label_2c8660:
    // 0x2c8660: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c8660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c8664: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2c8664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2c8668: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2c8668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x2c866c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c866cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c8670: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c8670u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c8674: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8678: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2c8678u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c867c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C867Cu;
    SET_GPR_U32(ctx, 31, 0x2C8684u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C867Cu, 0x2C8684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8684u;
label_2c8684:
    // 0x2c8684: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2c8684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2c8688: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c8688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c868c: 0x0  nop
    ctx->pc = 0x2c868cu;
    // NOP
    // 0x2c8690: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c8690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c8694: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2c8694u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2c8698: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2c8698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2c869c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c869cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c86a0: 0x0  nop
    ctx->pc = 0x2c86a0u;
    // NOP
    // 0x2c86a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c86a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c86a8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c86ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c86acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c86b0: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c86b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c86b4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2c86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2c86b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2c86b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2c86bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c86bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c86c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c86c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c86c8: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c86c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c86cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c86ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c86d0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c86d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c86d4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c86d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c86d8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c86dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c86dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c86e0: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c86e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c86e4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c86e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c86ec: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2c86ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2c86f0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2c86f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c86f4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2c86f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2c86f8: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2c86f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c86fc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C86FCu;
    {
        const bool branch_taken_0x2c86fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c86fc) {
            ctx->pc = 0x2C8750u;
            goto label_2c8750;
        }
    }
    ctx->pc = 0x2C8704u;
    // 0x2c8704: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C8704u;
    SET_GPR_U32(ctx, 31, 0x2C870Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C8704u, 0x2C870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C870Cu;
label_2c870c:
    // 0x2c870c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2c870cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2c8710: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c8710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c8714: 0x0  nop
    ctx->pc = 0x2c8714u;
    // NOP
    // 0x2c8718: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c871c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8720: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8724: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c8724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c8728: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c872c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c872cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8730: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c8730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c8734: 0x24061e0a  addiu       $a2, $zero, 0x1E0A
    ctx->pc = 0x2c8734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7690));
    // 0x2c8738: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c8738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c873c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c873cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c8740: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C8740u;
    SET_GPR_U32(ctx, 31, 0x2C8748u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C8740u, 0x2C8748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8748u;
label_2c8748:
    // 0x2c8748: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8748u;
    {
        const bool branch_taken_0x2c8748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8748) {
            ctx->pc = 0x2C8770u;
            goto label_2c8770;
        }
    }
    ctx->pc = 0x2C8750u;
label_2c8750:
    // 0x2c8750: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8754: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c8754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8758: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c8758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c875c: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2c875cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2c8760: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c8760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8764: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c8764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c8768: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C8768u;
    SET_GPR_U32(ctx, 31, 0x2C8770u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C8768u, 0x2C8770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8770u;
label_2c8770:
    // 0x2c8770: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8774: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8778: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x2c8778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c877c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c877cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c8780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8784: 0x0  nop
    ctx->pc = 0x2c8784u;
    // NOP
    // 0x2c8788: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c8788u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c878c: 0x0  nop
    ctx->pc = 0x2c878cu;
    // NOP
    // 0x2c8790: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8790u;
    {
        const bool branch_taken_0x2c8790 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8790) {
            ctx->pc = 0x2C87ACu;
            goto label_2c87ac;
        }
    }
    ctx->pc = 0x2C8798u;
    // 0x2c8798: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c8798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c879c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c879cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c87a0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c87a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c87a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c87a8: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c87a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_2c87ac:
    // 0x2c87ac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C87ACu;
    SET_GPR_U32(ctx, 31, 0x2C87B4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C87ACu, 0x2C87B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87B4u;
label_2c87b4:
    // 0x2c87b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c87b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c87b8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c87b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c87bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c87c0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c87c4: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c87c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c87c8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c87cc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c87ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c87d0: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2c87d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2c87d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c87d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c87d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c87dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c87e0: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2c87e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x2c87e4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2c87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2c87e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2c87e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2c87ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c87ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c87f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c87f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c87f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c87f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c87f8: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2c87f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
label_2c87fc:
    // 0x2c87fc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c87fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8800: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8804: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2c8804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2c8808: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c8808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c880c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c880cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c8810: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c8810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c8814: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c8814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8818: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c8818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c881c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c881cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c8820: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C8820u;
    SET_GPR_U32(ctx, 31, 0x2C8828u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C8820u, 0x2C8828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8828u;
label_2c8828:
    // 0x2c8828: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2c8828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2c882c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8830: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c8830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8834: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2c8834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8838: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c8838u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c883c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C883Cu;
    SET_GPR_U32(ctx, 31, 0x2C8844u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C883Cu, 0x2C8844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8844u;
label_2c8844:
    // 0x2c8844: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8848: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c8848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c884c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c884cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8850: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c8850u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8854: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C8854u;
    SET_GPR_U32(ctx, 31, 0x2C885Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C8854u, 0x2C885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C885Cu;
label_2c885c:
    // 0x2c885c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8860: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8864: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c8864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8868: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c886c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c886cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c8870: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8874: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8878: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c8878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c887c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c887cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8880: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2c8880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2c8884: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c8884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8888: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2C8888u;
    SET_GPR_U32(ctx, 31, 0x2C8890u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2C8888u, 0x2C8890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8890u;
label_2c8890:
    // 0x2c8890: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c8890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8894: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c8894u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8898: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C8898u;
    SET_GPR_U32(ctx, 31, 0x2C88A0u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C8898u, 0x2C88A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C88A0u;
label_2c88a0:
    // 0x2c88a0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c88a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c88a4: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2C88A4u;
    SET_GPR_U32(ctx, 31, 0x2C88ACu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2C88A4u, 0x2C88ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C88ACu;
label_2c88ac:
    // 0x2c88ac: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2c88acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c88b0: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x2c88b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x2c88b4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2c88b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c88b8: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x2c88b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c88bc: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C88BCu;
    {
        const bool branch_taken_0x2c88bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c88bc) {
            ctx->pc = 0x2C88F0u;
            goto label_2c88f0;
        }
    }
    ctx->pc = 0x2C88C4u;
    // 0x2c88c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c88c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c88c8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c88c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c88cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c88ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c88d0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c88d4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2c88d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c88d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c88dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c88dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c88e0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c88e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c88e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c88e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c88e8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c88e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c88ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2c88f0:
    // 0x2c88f0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c88f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c88f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c88f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c88f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c88fc: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x2C88FCu;
    {
        const bool branch_taken_0x2c88fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c88fc) {
            ctx->pc = 0x2C8AACu;
            goto label_2c8aac;
        }
    }
    ctx->pc = 0x2C8904u;
    // 0x2c8904: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8908: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c890c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8910: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2c8910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8914: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c8914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c8918: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c891c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8920: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c8920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8924: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2c8924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8928: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2c8928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c892c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8930: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8934: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c8934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8938: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2c8938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c893c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2c893cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c8940: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c8940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8948: 0x0  nop
    ctx->pc = 0x2c8948u;
    // NOP
    // 0x2c894c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c894cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c8950: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8954: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2c8954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8958: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2c8958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c895c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8960: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2c8960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8964: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2c8964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c8968: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c896c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2c896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8970: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2c8970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c8974: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c8974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c897c: 0x0  nop
    ctx->pc = 0x2c897cu;
    // NOP
    // 0x2c8980: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2c8980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2c8984: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c8984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8988: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2c8988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c898c: 0xc040c24  jal         func_103090
    ctx->pc = 0x2C898Cu;
    SET_GPR_U32(ctx, 31, 0x2C8994u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2C8994u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C8994u) { return; }
    ctx->pc = 0x2C8994u;
label_2c8994:
    // 0x2c8994: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c8994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8998: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c8998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c899c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2c899cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c89a0: 0xc040c86  jal         func_103218
    ctx->pc = 0x2C89A0u;
    SET_GPR_U32(ctx, 31, 0x2C89A8u);
    ctx->pc = 0x103218u;
    {
        ctx->pc = 0x2C89A8u;
        ps2_stubs::sceVu0MulVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C89A8u) { return; }
    ctx->pc = 0x2C89A8u;
label_2c89a8:
    // 0x2c89a8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2c89a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c89ac: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2c89acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c89b0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2c89b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c89b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c89b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c89b8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2c89b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c89bc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2c89bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2c89c0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c89c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c89c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c89c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c89c8: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x2c89c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c89cc: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2C89CCu;
    {
        const bool branch_taken_0x2c89cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c89cc) {
            ctx->pc = 0x2C8AACu;
            goto label_2c8aac;
        }
    }
    ctx->pc = 0x2C89D4u;
    // 0x2c89d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c89d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c89d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c89dc: 0x0  nop
    ctx->pc = 0x2c89dcu;
    // NOP
    // 0x2c89e0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2c89e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2c89e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c89e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c89e8: 0xc067588  jal         func_19D620
    ctx->pc = 0x2C89E8u;
    SET_GPR_U32(ctx, 31, 0x2C89F0u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x2C89E8u, 0x2C89F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C89F0u;
label_2c89f0:
    // 0x2c89f0: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2c89f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c89f4: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x2c89f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c89f8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2C89F8u;
    SET_GPR_U32(ctx, 31, 0x2C8A00u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2C89F8u, 0x2C8A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A00u;
label_2c8a00:
    // 0x2c8a00: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a04: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8a08: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2c8a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2c8a0c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2c8a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8a10: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2c8a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8a14: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2c8a14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c8a18: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2c8a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8a1c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c8a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8a20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c8a20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c8a24: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2c8a24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c8a28: 0xc045630  jal         func_1158C0
    ctx->pc = 0x2C8A28u;
    SET_GPR_U32(ctx, 31, 0x2C8A30u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x2C8A28u, 0x2C8A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A30u;
label_2c8a30:
    // 0x2c8a30: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2c8a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2c8a34: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2c8a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8a38: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2c8a38u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2c8a3c: 0xc7ad006c  lwc1        $f13, 0x6C($sp)
    ctx->pc = 0x2c8a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c8a40: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2C8A40u;
    SET_GPR_U32(ctx, 31, 0x2C8A48u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2C8A40u, 0x2C8A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A48u;
label_2c8a48:
    // 0x2c8a48: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a4c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8a50: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2c8a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2c8a54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c8a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8a58: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a5c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c8a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c8a60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c8a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8a64: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a68: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c8a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c8a6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a70: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c8a70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8a74: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a78: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c8a78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8a7c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a80: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c8a84: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c8a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c8a88: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a8c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8a90: 0xa0640038  sb          $a0, 0x38($v1)
    ctx->pc = 0x2c8a90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c8a94: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8a98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8a9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c8a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c8aa0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8aa4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c8aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8aa8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2c8aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_2c8aac:
    // 0x2c8aac: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2c8aacu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8ab4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2c8ab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c8ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8AC0u;
}
