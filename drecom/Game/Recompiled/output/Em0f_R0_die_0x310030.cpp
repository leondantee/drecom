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

// Function: Em0f_R0_die
// Address: 0x310030 - 0x310734
void Em0f_R0_die_0x310030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R0_die_0x310030");
#endif

    switch (ctx->pc) {
        case 0x3100acu: goto label_3100ac;
        case 0x3100e4u: goto label_3100e4;
        case 0x31011cu: goto label_31011c;
        case 0x310128u: goto label_310128;
        case 0x310138u: goto label_310138;
        case 0x310144u: goto label_310144;
        case 0x31016cu: goto label_31016c;
        case 0x310188u: goto label_310188;
        case 0x3101d0u: goto label_3101d0;
        case 0x3101dcu: goto label_3101dc;
        case 0x310204u: goto label_310204;
        case 0x310460u: goto label_310460;
        case 0x3104fcu: goto label_3104fc;
        case 0x310518u: goto label_310518;
        case 0x310560u: goto label_310560;
        case 0x31056cu: goto label_31056c;
        default: break;
    }

    ctx->pc = 0x310030u;

    // 0x310030: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x310030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x310034: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x310034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x310038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x310038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31003c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31003cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x310040: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x310040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x310044: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x310044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x310048: 0x24639ab0  addiu       $v1, $v1, -0x6550
    ctx->pc = 0x310048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941360));
    // 0x31004c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x31004cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x310050: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x310050u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399AB0u));
    // 0x310054: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x310054u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x310058: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x310058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31005c: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x31005cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x310060: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x310060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x310064: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x310064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x310068: 0x1083007c  beq         $a0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x310068u;
    {
        const bool branch_taken_0x310068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x310068) {
            ctx->pc = 0x31025Cu;
            goto label_31025c;
        }
    }
    ctx->pc = 0x310070u;
    // 0x310070: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x310070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310074: 0x1083005b  beq         $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x310074u;
    {
        const bool branch_taken_0x310074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x310074) {
            ctx->pc = 0x3101E4u;
            goto label_3101e4;
        }
    }
    ctx->pc = 0x31007Cu;
    // 0x31007c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x31007cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310080: 0x1090001e  beq         $a0, $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x310080u;
    {
        const bool branch_taken_0x310080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x310080) {
            ctx->pc = 0x3100FCu;
            goto label_3100fc;
        }
    }
    ctx->pc = 0x310088u;
    // 0x310088: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310088u;
    {
        const bool branch_taken_0x310088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x310088) {
            ctx->pc = 0x310098u;
            goto label_310098;
        }
    }
    ctx->pc = 0x310090u;
    // 0x310090: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x310090u;
    {
        const bool branch_taken_0x310090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310090) {
            ctx->pc = 0x31056Cu;
            goto label_31056c;
        }
    }
    ctx->pc = 0x310098u;
label_310098:
    // 0x310098: 0x8fb10048  lw          $s1, 0x48($sp)
    ctx->pc = 0x310098u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31009c: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x31009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x3100a0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3100a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3100a4: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x3100A4u;
    SET_GPR_U32(ctx, 31, 0x3100ACu);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x3100A4u, 0x3100ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3100ACu;
label_3100ac:
    // 0x3100ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3100acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3100b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3100b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3100b4: 0x8c7011a0  lw          $s0, 0x11A0($v1)
    ctx->pc = 0x3100b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4512)));
    // 0x3100b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3100b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3100bc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x3100bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3100c0: 0xac6211a0  sw          $v0, 0x11A0($v1)
    ctx->pc = 0x3100c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4512), GPR_U32(ctx, 2));
    // 0x3100c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3100c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3100c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3100c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3100cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3100ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3100d0: 0x24065a22  addiu       $a2, $zero, 0x5A22
    ctx->pc = 0x3100d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23074));
    // 0x3100d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3100d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3100d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3100d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3100dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3100DCu;
    SET_GPR_U32(ctx, 31, 0x3100E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3100DCu, 0x3100E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3100E4u;
label_3100e4:
    // 0x3100e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3100e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3100e8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x3100e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x3100ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3100ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3100f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3100f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3100f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3100f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3100f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3100f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3100fc:
    // 0x3100fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3100fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310100: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x310100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x310104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x310104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x310108: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x310108u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x31010c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31010cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310110: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x310110u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x310114: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x310114u;
    SET_GPR_U32(ctx, 31, 0x31011Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x310114u, 0x31011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31011Cu;
label_31011c:
    // 0x31011c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31011cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310120: 0xc05cd10  jal         func_173440
    ctx->pc = 0x310120u;
    SET_GPR_U32(ctx, 31, 0x310128u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x310120u, 0x310128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310128u;
label_310128:
    // 0x310128: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x310128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31012c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31012cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x310130: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x310130u;
    SET_GPR_U32(ctx, 31, 0x310138u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x310130u, 0x310138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310138u;
label_310138:
    // 0x310138: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x310138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31013c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x31013Cu;
    SET_GPR_U32(ctx, 31, 0x310144u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x31013Cu, 0x310144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310144u;
label_310144:
    // 0x310144: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310148: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x310148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x31014c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31014Cu;
    {
        const bool branch_taken_0x31014c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31014c) {
            ctx->pc = 0x310164u;
            goto label_310164;
        }
    }
    ctx->pc = 0x310154u;
    // 0x310154: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x310154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310158: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x310158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31015c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31015cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x310160: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x310160u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_310164:
    // 0x310164: 0xc06765c  jal         func_19D970
    ctx->pc = 0x310164u;
    SET_GPR_U32(ctx, 31, 0x31016Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x310164u, 0x31016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31016Cu;
label_31016c:
    // 0x31016c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x31016cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x310170: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x310170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310174: 0x0  nop
    ctx->pc = 0x310174u;
    // NOP
    // 0x310178: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x310178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31017c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x31017cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x310180: 0xc06765c  jal         func_19D970
    ctx->pc = 0x310180u;
    SET_GPR_U32(ctx, 31, 0x310188u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x310180u, 0x310188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310188u;
label_310188:
    // 0x310188: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x310188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x31018c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31018cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310190: 0x0  nop
    ctx->pc = 0x310190u;
    // NOP
    // 0x310194: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x310194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x310198: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x310198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x31019c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3101a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3101a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3101a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3101a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3101a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3101a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3101ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3101acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3101b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3101b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3101b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3101b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3101b8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3101b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3101bc: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x3101bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x3101c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3101c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3101c4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3101c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3101c8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3101C8u;
    SET_GPR_U32(ctx, 31, 0x3101D0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3101C8u, 0x3101D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3101D0u;
label_3101d0:
    // 0x3101d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3101d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3101d4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3101D4u;
    SET_GPR_U32(ctx, 31, 0x3101DCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3101D4u, 0x3101DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3101DCu;
label_3101dc:
    // 0x3101dc: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x3101DCu;
    {
        const bool branch_taken_0x3101dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3101dc) {
            ctx->pc = 0x31056Cu;
            goto label_31056c;
        }
    }
    ctx->pc = 0x3101E4u;
label_3101e4:
    // 0x3101e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3101e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3101e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3101e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3101ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3101ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3101f0: 0x24065a23  addiu       $a2, $zero, 0x5A23
    ctx->pc = 0x3101f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23075));
    // 0x3101f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3101f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3101f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3101f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3101fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3101FCu;
    SET_GPR_U32(ctx, 31, 0x310204u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3101FCu, 0x310204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310204u;
label_310204:
    // 0x310204: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310208: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x310208u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x31020c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31020cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x310210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310214: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310218: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x310218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x31021c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31021cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x310220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310224: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310228: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x310228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x31022c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x310230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310234: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310238: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x310238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x31023c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31023cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310240: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x310240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x310244: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x310244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x310248: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x310248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x31024c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31024cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310250: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x310250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x310254: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x310254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x310258: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x310258u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_31025c:
    // 0x31025c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310260: 0x2443135c  addiu       $v1, $v0, 0x135C
    ctx->pc = 0x310260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4956));
    // 0x310264: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x310264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310268: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x310268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x31026c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x31026cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x310270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310274: 0x0  nop
    ctx->pc = 0x310274u;
    // NOP
    // 0x310278: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x310278u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31027c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x31027cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x310280: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310284: 0x2442135c  addiu       $v0, $v0, 0x135C
    ctx->pc = 0x310284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4956));
    // 0x310288: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x310288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31028c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31028cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310290: 0x0  nop
    ctx->pc = 0x310290u;
    // NOP
    // 0x310294: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x310294u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310298: 0x0  nop
    ctx->pc = 0x310298u;
    // NOP
    // 0x31029c: 0x4500006d  bc1f        . + 4 + (0x6D << 2)
    ctx->pc = 0x31029Cu;
    {
        const bool branch_taken_0x31029c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31029c) {
            ctx->pc = 0x310454u;
            goto label_310454;
        }
    }
    ctx->pc = 0x3102A4u;
    // 0x3102a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3102a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3102a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3102a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3102ac: 0x2442135c  addiu       $v0, $v0, 0x135C
    ctx->pc = 0x3102acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4956));
    // 0x3102b0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3102b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3102b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3102b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3102b8: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x3102b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x3102bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3102bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3102c0: 0xc4610104  lwc1        $f1, 0x104($v1)
    ctx->pc = 0x3102c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3102c4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3102c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x3102c8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3102c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3102cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3102ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3102d0: 0x0  nop
    ctx->pc = 0x3102d0u;
    // NOP
    // 0x3102d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3102d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3102d8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x3102d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x3102dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3102dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3102e0: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x3102e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x3102e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3102e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3102e8: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x3102e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3102ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3102ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3102f0: 0x0  nop
    ctx->pc = 0x3102f0u;
    // NOP
    // 0x3102f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3102f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3102f8: 0x0  nop
    ctx->pc = 0x3102f8u;
    // NOP
    // 0x3102fc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3102FCu;
    {
        const bool branch_taken_0x3102fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3102fc) {
            ctx->pc = 0x310328u;
            goto label_310328;
        }
    }
    ctx->pc = 0x310304u;
    // 0x310304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310308: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31030c: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x31030cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x310310: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x310310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310314: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x310314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x310318: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x310318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31031c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x31031cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x310320: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x310320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x310324: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x310324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_310328:
    // 0x310328: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31032c: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x31032cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x310330: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x310330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310334: 0xc4610104  lwc1        $f1, 0x104($v1)
    ctx->pc = 0x310334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310338: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x310338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31033c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31033cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x310340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310344: 0x0  nop
    ctx->pc = 0x310344u;
    // NOP
    // 0x310348: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x310348u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31034c: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x31034cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x310350: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310354: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x310354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x310358: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x310358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31035c: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x31035cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310360: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310364: 0x0  nop
    ctx->pc = 0x310364u;
    // NOP
    // 0x310368: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x310368u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31036c: 0x0  nop
    ctx->pc = 0x31036cu;
    // NOP
    // 0x310370: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x310370u;
    {
        const bool branch_taken_0x310370 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310370) {
            ctx->pc = 0x31038Cu;
            goto label_31038c;
        }
    }
    ctx->pc = 0x310378u;
    // 0x310378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31037c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310380: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x310380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x310384: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x310384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310388: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x310388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_31038c:
    // 0x31038c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31038cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310390: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x310390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x310394: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x310394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310398: 0xc4610104  lwc1        $f1, 0x104($v1)
    ctx->pc = 0x310398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31039c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31039cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x3103a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3103a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3103a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3103a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3103a8: 0x0  nop
    ctx->pc = 0x3103a8u;
    // NOP
    // 0x3103ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3103acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3103b0: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x3103b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x3103b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3103b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3103b8: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x3103b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x3103bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3103bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3103c0: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x3103c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3103c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3103c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3103c8: 0x0  nop
    ctx->pc = 0x3103c8u;
    // NOP
    // 0x3103cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3103ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3103d0: 0x0  nop
    ctx->pc = 0x3103d0u;
    // NOP
    // 0x3103d4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3103D4u;
    {
        const bool branch_taken_0x3103d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3103d4) {
            ctx->pc = 0x3103F0u;
            goto label_3103f0;
        }
    }
    ctx->pc = 0x3103DCu;
    // 0x3103dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3103dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3103e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3103e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3103e4: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x3103e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x3103e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3103e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3103ec: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x3103ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_3103f0:
    // 0x3103f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3103f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3103f4: 0x24421354  addiu       $v0, $v0, 0x1354
    ctx->pc = 0x3103f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4948));
    // 0x3103f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3103f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3103fc: 0xc4610104  lwc1        $f1, 0x104($v1)
    ctx->pc = 0x3103fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310400: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x310400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x310404: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x310404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x310408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31040c: 0x0  nop
    ctx->pc = 0x31040cu;
    // NOP
    // 0x310410: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x310410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x310414: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x310414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x310418: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31041c: 0x24421354  addiu       $v0, $v0, 0x1354
    ctx->pc = 0x31041cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4948));
    // 0x310420: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x310420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310424: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x310424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310428: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31042c: 0x0  nop
    ctx->pc = 0x31042cu;
    // NOP
    // 0x310430: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x310430u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310434: 0x0  nop
    ctx->pc = 0x310434u;
    // NOP
    // 0x310438: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x310438u;
    {
        const bool branch_taken_0x310438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310438) {
            ctx->pc = 0x310454u;
            goto label_310454;
        }
    }
    ctx->pc = 0x310440u;
    // 0x310440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310444: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310448: 0x24421354  addiu       $v0, $v0, 0x1354
    ctx->pc = 0x310448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4948));
    // 0x31044c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310450: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x310450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_310454:
    // 0x310454: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x310454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310458: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x310458u;
    SET_GPR_U32(ctx, 31, 0x310460u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x310458u, 0x310460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310460u;
label_310460:
    // 0x310460: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x310460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310464: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x310464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310468: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x310468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x31046c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x31046cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x310470: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x310470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310474: 0x0  nop
    ctx->pc = 0x310474u;
    // NOP
    // 0x310478: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x310478u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31047c: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x31047cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x310480: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x310480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310484: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x310484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31048c: 0x0  nop
    ctx->pc = 0x31048cu;
    // NOP
    // 0x310490: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x310490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310494: 0x0  nop
    ctx->pc = 0x310494u;
    // NOP
    // 0x310498: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x310498u;
    {
        const bool branch_taken_0x310498 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310498) {
            ctx->pc = 0x3104D4u;
            goto label_3104d4;
        }
    }
    ctx->pc = 0x3104A0u;
    // 0x3104a0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3104a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3104a4: 0x8ca41368  lw          $a0, 0x1368($a1)
    ctx->pc = 0x3104a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4968)));
    // 0x3104a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3104a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3104ac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3104acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3104b0: 0xaca31368  sw          $v1, 0x1368($a1)
    ctx->pc = 0x3104b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4968), GPR_U32(ctx, 3));
    // 0x3104b4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3104b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3104b8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x3104b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3104bc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3104bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3104c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3104c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3104c4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3104c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x3104c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3104c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3104cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3104ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3104d0: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x3104d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_3104d4:
    // 0x3104d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3104d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3104d8: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x3104d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3104dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3104dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3104e0: 0x0  nop
    ctx->pc = 0x3104e0u;
    // NOP
    // 0x3104e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3104e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3104e8: 0x0  nop
    ctx->pc = 0x3104e8u;
    // NOP
    // 0x3104ec: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x3104ECu;
    {
        const bool branch_taken_0x3104ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3104ec) {
            ctx->pc = 0x31056Cu;
            goto label_31056c;
        }
    }
    ctx->pc = 0x3104F4u;
    // 0x3104f4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3104F4u;
    SET_GPR_U32(ctx, 31, 0x3104FCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3104F4u, 0x3104FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3104FCu;
label_3104fc:
    // 0x3104fc: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x3104fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x310500: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x310500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310504: 0x0  nop
    ctx->pc = 0x310504u;
    // NOP
    // 0x310508: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x310508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31050c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x31050cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x310510: 0xc06765c  jal         func_19D970
    ctx->pc = 0x310510u;
    SET_GPR_U32(ctx, 31, 0x310518u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x310510u, 0x310518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310518u;
label_310518:
    // 0x310518: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x310518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x31051c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31051cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310520: 0x0  nop
    ctx->pc = 0x310520u;
    // NOP
    // 0x310524: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x310524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x310528: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x310528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x31052c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310530: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x310530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x310534: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x310534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x310538: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x310538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31053c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31053cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x310540: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x310540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x310544: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x310544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x310548: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x310548u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31054c: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x31054cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x310550: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x310550u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x310554: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x310554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x310558: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x310558u;
    SET_GPR_U32(ctx, 31, 0x310560u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x310558u, 0x310560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310560u;
label_310560:
    // 0x310560: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x310560u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x310564: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x310564u;
    SET_GPR_U32(ctx, 31, 0x31056Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x310564u, 0x31056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31056Cu;
label_31056c:
    // 0x31056c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310570: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x310570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x310574: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x310574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x310578: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x310578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x31057c: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x31057Cu;
    {
        const bool branch_taken_0x31057c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31057c) {
            ctx->pc = 0x310614u;
            goto label_310614;
        }
    }
    ctx->pc = 0x310584u;
    // 0x310584: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x310584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310588: 0x8c831368  lw          $v1, 0x1368($a0)
    ctx->pc = 0x310588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4968)));
    // 0x31058c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x31058cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x310590: 0xac831368  sw          $v1, 0x1368($a0)
    ctx->pc = 0x310590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4968), GPR_U32(ctx, 3));
    // 0x310594: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x310594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310598: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x31059c: 0x24700cf0  addiu       $s0, $v1, 0xCF0
    ctx->pc = 0x31059cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
    // 0x3105a0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3105a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3105a4: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x3105a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3105a8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3105a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3105ac: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3105acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3105b0: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x3105b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x3105b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3105b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3105b8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3105b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3105bc: 0x24700c60  addiu       $s0, $v1, 0xC60
    ctx->pc = 0x3105bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3168));
    // 0x3105c0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3105c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3105c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3105c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3105c8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3105c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3105cc: 0x24700480  addiu       $s0, $v1, 0x480
    ctx->pc = 0x3105ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x3105d0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3105d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3105d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3105d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3105d8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3105d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3105dc: 0x24700510  addiu       $s0, $v1, 0x510
    ctx->pc = 0x3105dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x3105e0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3105e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3105e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3105e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3105e8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3105e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3105ec: 0x247005a0  addiu       $s0, $v1, 0x5A0
    ctx->pc = 0x3105ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1440));
    // 0x3105f0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3105f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3105f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3105f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3105f8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3105f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3105fc: 0x24700750  addiu       $s0, $v1, 0x750
    ctx->pc = 0x3105fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1872));
    // 0x310600: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x310600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x310604: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x310604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310608: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x31060c: 0x24700900  addiu       $s0, $v1, 0x900
    ctx->pc = 0x31060cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2304));
    // 0x310610: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x310610u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_310614:
    // 0x310614: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x310614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310618: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x310618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x31061c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31061cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x310620: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x310620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x310624: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x310624u;
    {
        const bool branch_taken_0x310624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x310624) {
            ctx->pc = 0x31066Cu;
            goto label_31066c;
        }
    }
    ctx->pc = 0x31062Cu;
    // 0x31062c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31062cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310630: 0x8c831368  lw          $v1, 0x1368($a0)
    ctx->pc = 0x310630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4968)));
    // 0x310634: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x310634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x310638: 0xac831368  sw          $v1, 0x1368($a0)
    ctx->pc = 0x310638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4968), GPR_U32(ctx, 3));
    // 0x31063c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310640: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x310644: 0x24701440  addiu       $s0, $v1, 0x1440
    ctx->pc = 0x310644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5184));
    // 0x310648: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x310648u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x31064c: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x31064cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x310650: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x310650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x310654: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x310654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x310658: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x310658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x31065c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310660: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x310664: 0x24700630  addiu       $s0, $v1, 0x630
    ctx->pc = 0x310664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1584));
    // 0x310668: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x310668u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_31066c:
    // 0x31066c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310670: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x310670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x310674: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x310674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x310678: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x310678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x31067c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x31067Cu;
    {
        const bool branch_taken_0x31067c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31067c) {
            ctx->pc = 0x3106C4u;
            goto label_3106c4;
        }
    }
    ctx->pc = 0x310684u;
    // 0x310684: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x310684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310688: 0x8c831368  lw          $v1, 0x1368($a0)
    ctx->pc = 0x310688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4968)));
    // 0x31068c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x31068cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x310690: 0xac831368  sw          $v1, 0x1368($a0)
    ctx->pc = 0x310690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4968), GPR_U32(ctx, 3));
    // 0x310694: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x310694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310698: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x31069c: 0x247013b0  addiu       $s0, $v1, 0x13B0
    ctx->pc = 0x31069cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5040));
    // 0x3106a0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3106a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3106a4: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x3106a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3106a8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3106a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3106ac: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3106acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3106b0: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x3106b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x3106b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3106b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3106b8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3106b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3106bc: 0x247003f0  addiu       $s0, $v1, 0x3F0
    ctx->pc = 0x3106bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1008));
    // 0x3106c0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3106c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_3106c4:
    // 0x3106c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3106c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3106c8: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x3106c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x3106cc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3106ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3106d0: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x3106d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x3106d4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3106D4u;
    {
        const bool branch_taken_0x3106d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3106d4) {
            ctx->pc = 0x31071Cu;
            goto label_31071c;
        }
    }
    ctx->pc = 0x3106DCu;
    // 0x3106dc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3106dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3106e0: 0x8ca31368  lw          $v1, 0x1368($a1)
    ctx->pc = 0x3106e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4968)));
    // 0x3106e4: 0x34640008  ori         $a0, $v1, 0x8
    ctx->pc = 0x3106e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3106e8: 0xaca41368  sw          $a0, 0x1368($a1)
    ctx->pc = 0x3106e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4968), GPR_U32(ctx, 4));
    // 0x3106ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3106ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3106f0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3106f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3106f4: 0x24701320  addiu       $s0, $v1, 0x1320
    ctx->pc = 0x3106f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4896));
    // 0x3106f8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3106f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3106fc: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x3106fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x310700: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x310700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x310704: 0x34850002  ori         $a1, $a0, 0x2
    ctx->pc = 0x310704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x310708: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x310708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
    // 0x31070c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310710: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x310710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x310714: 0x247007e0  addiu       $s0, $v1, 0x7E0
    ctx->pc = 0x310714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x310718: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x310718u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_31071c:
    // 0x31071c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x31071cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x310720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x310720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x310724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310728: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x310728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31072c: 0x3e00008  jr          $ra
    ctx->pc = 0x31072Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31072Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310734u;
}
