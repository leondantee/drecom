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

// Function: entry_001a70d0
// Address: 0x1a70d0 - 0x1a7398
void entry_001a70d0_0x1a70d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a70d0_0x1a70d0");
#endif

    switch (ctx->pc) {
        case 0x1a7144u: goto label_1a7144;
        case 0x1a7158u: goto label_1a7158;
        case 0x1a717cu: goto label_1a717c;
        case 0x1a718cu: goto label_1a718c;
        case 0x1a719cu: goto label_1a719c;
        case 0x1a7258u: goto label_1a7258;
        case 0x1a726cu: goto label_1a726c;
        case 0x1a7284u: goto label_1a7284;
        case 0x1a7294u: goto label_1a7294;
        case 0x1a72a0u: goto label_1a72a0;
        case 0x1a7360u: goto label_1a7360;
        case 0x1a7394u: goto label_1a7394;
        default: break;
    }

    ctx->pc = 0x1a70d0u;

    // 0x1a70d0: 0x92270314  lbu         $a3, 0x314($s1)
    ctx->pc = 0x1a70d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x1a70d4: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x1a70d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1a70d8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1a70d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1a70dc: 0x106000ae  beqz        $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x1A70DCu;
    {
        const bool branch_taken_0x1a70dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a70dc) {
            ctx->pc = 0x1A7398u;
            return;
        }
    }
    ctx->pc = 0x1A70E4u;
    // 0x1a70e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a70e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a70e8: 0x1040c0  sll         $t0, $s0, 3
    ctx->pc = 0x1a70e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a70ec: 0x1103023  subu        $a2, $t0, $s0
    ctx->pc = 0x1a70ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1a70f0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1a70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a70f4: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1a70f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a70f8: 0xac6400dc  sw          $a0, 0xDC($v1)
    ctx->pc = 0x1a70f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 4));
    // 0x1a70fc: 0x3c035c00  lui         $v1, 0x5C00
    ctx->pc = 0x1a70fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23552 << 16));
    // 0x1a7100: 0x34671a06  ori         $a3, $v1, 0x1A06
    ctx->pc = 0x1a7100u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6662);
    // 0x1a7104: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x1a7104u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a7108: 0xd01823  subu        $v1, $a2, $s0
    ctx->pc = 0x1a7108u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a710c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a710cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7110: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x1a7110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a7114: 0xac8700e0  sw          $a3, 0xE0($a0)
    ctx->pc = 0x1a7114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 7));
    // 0x1a7118: 0x3c02ff40  lui         $v0, 0xFF40
    ctx->pc = 0x1a7118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65344 << 16));
    // 0x1a711c: 0x34434040  ori         $v1, $v0, 0x4040
    ctx->pc = 0x1a711cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x1a7120: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a7120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a7124: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a7124u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a7128: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x1a7128u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a712c: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x1a712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1a7130: 0x244200e4  addiu       $v0, $v0, 0xE4
    ctx->pc = 0x1a7130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 228));
    // 0x1a7134: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a7134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7138: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1a7138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a713c: 0xc040044  jal         func_100110
    ctx->pc = 0x1A713Cu;
    SET_GPR_U32(ctx, 31, 0x1A7144u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A713Cu, 0x1A7144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7144u;
label_1a7144:
    // 0x1a7144: 0x3c034070  lui         $v1, 0x4070
    ctx->pc = 0x1a7144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16496 << 16));
    // 0x1a7148: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a7148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a714c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a714cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7150: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A7150u;
    SET_GPR_U32(ctx, 31, 0x1A7158u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A7150u, 0x1A7158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7158u;
label_1a7158:
    // 0x1a7158: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1a7158u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a715c: 0x8e230300  lw          $v1, 0x300($s1)
    ctx->pc = 0x1a715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x1a7160: 0x73001b  divu        $zero, $v1, $s3
    ctx->pc = 0x1a7160u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a7164: 0x0  nop
    ctx->pc = 0x1a7164u;
    // NOP
    // 0x1a7168: 0x0  nop
    ctx->pc = 0x1a7168u;
    // NOP
    // 0x1a716c: 0x1812  mflo        $v1
    ctx->pc = 0x1a716cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1a7170: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1a7170u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a7174: 0xc040044  jal         func_100110
    ctx->pc = 0x1A7174u;
    SET_GPR_U32(ctx, 31, 0x1A717Cu);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A7174u, 0x1A717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A717Cu;
label_1a717c:
    // 0x1a717c: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1a717cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1a7180: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a7180u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7184: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1A7184u;
    SET_GPR_U32(ctx, 31, 0x1A718Cu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1A7184u, 0x1A718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A718Cu;
label_1a718c:
    // 0x1a718c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1a718cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7190: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1a7190u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1a7194: 0xc047ca2  jal         func_11F288
    ctx->pc = 0x1A7194u;
    SET_GPR_U32(ctx, 31, 0x1A719Cu);
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x1A7194u, 0x1A719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A719Cu;
label_1a719c:
    // 0x1a719c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1a719cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a71a0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1a71a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a71a4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a71a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a71a8: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1a71a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a71ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a71acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a71b0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a71b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a71b4: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1a71b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a71b8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a71b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a71bc: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x1a71bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a71c0: 0x44c00  sll         $t1, $a0, 16
    ctx->pc = 0x1a71c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1a71c4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1a71c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a71c8: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x1a71c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x1a71cc: 0x25078120  addiu       $a3, $t0, -0x7EE0
    ctx->pc = 0x1a71ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934816));
    // 0x1a71d0: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x1a71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a71d4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a71d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a71d8: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x1a71d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a71dc: 0x24837000  addiu       $v1, $a0, 0x7000
    ctx->pc = 0x1a71dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x1a71e0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1a71e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a71e4: 0x492025  or          $a0, $v0, $t1
    ctx->pc = 0x1a71e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1a71e8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a71ec: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x1a71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a71f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a71f4: 0x2425021  addu        $t2, $s2, $v0
    ctx->pc = 0x1a71f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a71f8: 0x254200e8  addiu       $v0, $t2, 0xE8
    ctx->pc = 0x1a71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 232));
    // 0x1a71fc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a71fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a7200: 0x3408fff8  ori         $t0, $zero, 0xFFF8
    ctx->pc = 0x1a7200u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a7204: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a7204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a7208: 0x503823  subu        $a3, $v0, $s0
    ctx->pc = 0x1a7208u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a720c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1a720cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a7210: 0x2443021  addu        $a2, $s2, $a0
    ctx->pc = 0x1a7210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a7214: 0x24c300ec  addiu       $v1, $a2, 0xEC
    ctx->pc = 0x1a7214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 236));
    // 0x1a7218: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1a7218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x1a721c: 0x92220312  lbu         $v0, 0x312($s1)
    ctx->pc = 0x1a721cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 786)));
    // 0x1a7220: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a7220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a7224: 0x24a00  sll         $t1, $v0, 8
    ctx->pc = 0x1a7224u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a7228: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1a7228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a722c: 0x918c3  sra         $v1, $t1, 3
    ctx->pc = 0x1a722cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 9), 3));
    // 0x1a7230: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x1a7230u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a7234: 0x70e01628  paddub      $v0, $a3, $zero
    ctx->pc = 0x1a7234u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1a7238: 0x8e260300  lw          $a2, 0x300($s1)
    ctx->pc = 0x1a7238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x1a723c: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x1a723cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a7240: 0x113001b  divu        $zero, $t0, $s3
    ctx->pc = 0x1a7240u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x1a7244: 0x0  nop
    ctx->pc = 0x1a7244u;
    // NOP
    // 0x1a7248: 0x0  nop
    ctx->pc = 0x1a7248u;
    // NOP
    // 0x1a724c: 0x2012  mflo        $a0
    ctx->pc = 0x1a724cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1a7250: 0xc040044  jal         func_100110
    ctx->pc = 0x1A7250u;
    SET_GPR_U32(ctx, 31, 0x1A7258u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A7250u, 0x1A7258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7258u;
label_1a7258:
    // 0x1a7258: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1a7258u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a725c: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x1a725cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a7260: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1a7260u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1a7264: 0xc040044  jal         func_100110
    ctx->pc = 0x1A7264u;
    SET_GPR_U32(ctx, 31, 0x1A726Cu);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A7264u, 0x1A726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A726Cu;
label_1a726c:
    // 0x1a726c: 0x3c034070  lui         $v1, 0x4070
    ctx->pc = 0x1a726cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16496 << 16));
    // 0x1a7270: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a7270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7274: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1a7274u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a7278: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a7278u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a727c: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A727Cu;
    SET_GPR_U32(ctx, 31, 0x1A7284u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A727Cu, 0x1A7284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7284u;
label_1a7284:
    // 0x1a7284: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a7284u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7288: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1a7288u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1a728c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1A728Cu;
    SET_GPR_U32(ctx, 31, 0x1A7294u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1A728Cu, 0x1A7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7294u;
label_1a7294:
    // 0x1a7294: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a7294u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7298: 0xc047ca2  jal         func_11F288
    ctx->pc = 0x1A7298u;
    SET_GPR_U32(ctx, 31, 0x1A72A0u);
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x1A7298u, 0x1A72A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A72A0u;
label_1a72a0:
    // 0x1a72a0: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x1a72a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a72a4: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1a72a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1a72a8: 0x24a38120  addiu       $v1, $a1, -0x7EE0
    ctx->pc = 0x1a72a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934816));
    // 0x1a72ac: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x1a72acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a72b0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1a72b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a72b4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1a72b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a72b8: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1a72b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a72bc: 0x24e37900  addiu       $v1, $a3, 0x7900
    ctx->pc = 0x1a72bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x1a72c0: 0x34c00  sll         $t1, $v1, 16
    ctx->pc = 0x1a72c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a72c4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a72c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a72c8: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1a72c8u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a72cc: 0x0  nop
    ctx->pc = 0x1a72ccu;
    // NOP
    // 0x1a72d0: 0x0  nop
    ctx->pc = 0x1a72d0u;
    // NOP
    // 0x1a72d4: 0x3012  mflo        $a2
    ctx->pc = 0x1a72d4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1a72d8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1a72d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a72dc: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1a72dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1a72e0: 0x24a28120  addiu       $v0, $a1, -0x7EE0
    ctx->pc = 0x1a72e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934816));
    // 0x1a72e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a72e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a72e8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1a72e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a72ec: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x1a72ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1a72f0: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x1a72f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1a72f4: 0x24837000  addiu       $v1, $a0, 0x7000
    ctx->pc = 0x1a72f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x1a72f8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1a72f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a72fc: 0x493025  or          $a2, $v0, $t1
    ctx->pc = 0x1a72fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1a7300: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x1a7300u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a7304: 0xb02023  subu        $a0, $a1, $s0
    ctx->pc = 0x1a7304u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1a7308: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a7308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a730c: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x1a730cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a7310: 0x24a200f0  addiu       $v0, $a1, 0xF0
    ctx->pc = 0x1a7310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    // 0x1a7314: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a7314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a7318: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a7318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a731c: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x1a731cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a7320: 0xb03823  subu        $a3, $a1, $s0
    ctx->pc = 0x1a7320u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1a7324: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1a7324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a7328: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1a7328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a732c: 0x24a200f4  addiu       $v0, $a1, 0xF4
    ctx->pc = 0x1a732cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 244));
    // 0x1a7330: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a7330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7334: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a7334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a7338: 0x503023  subu        $a2, $v0, $s0
    ctx->pc = 0x1a7338u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a733c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1a733cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a7340: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1a7340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a7344: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1a7344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1a7348: 0x24851614  addiu       $a1, $a0, 0x1614
    ctx->pc = 0x1a7348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5652));
    // 0x1a734c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1a734cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a7350: 0x244200dc  addiu       $v0, $v0, 0xDC
    ctx->pc = 0x1a7350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a7354: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a7354u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7358: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A7358u;
    SET_GPR_U32(ctx, 31, 0x1A7360u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A7358u, 0x1A7360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7360u;
label_1a7360:
    // 0x1a7360: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a7360u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7364: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x1a7364u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a7368: 0xd02021  addu        $a0, $a2, $s0
    ctx->pc = 0x1a7368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a736c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a736cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7370: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1a7370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7374: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a7374u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7378: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x1a7378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a737c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a737cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a7380: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a7380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a7384: 0x24a30184  addiu       $v1, $a1, 0x184
    ctx->pc = 0x1a7384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 388));
    // 0x1a7388: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1a7388u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a738c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A738Cu;
    SET_GPR_U32(ctx, 31, 0x1A7394u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A738Cu, 0x1A7394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7394u;
label_1a7394:
    // 0x1a7394: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a7394u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1a7398u;
}
