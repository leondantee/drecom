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

// Function: Em07_R1_wait_to_wait
// Address: 0x2d6030 - 0x2d61f4
void Em07_R1_wait_to_wait_0x2d6030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_R1_wait_to_wait_0x2d6030");
#endif

    switch (ctx->pc) {
        case 0x2d60b8u: goto label_2d60b8;
        case 0x2d60e0u: goto label_2d60e0;
        case 0x2d60fcu: goto label_2d60fc;
        default: break;
    }

    ctx->pc = 0x2d6030u;

    // 0x2d6030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d6034: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d6034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d6038: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d6038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d603c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d603cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6040: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d6040u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d6044: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d6044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d6048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d604c: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D604Cu;
    {
        const bool branch_taken_0x2d604c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d604c) {
            ctx->pc = 0x2D60F0u;
            goto label_2d60f0;
        }
    }
    ctx->pc = 0x2D6054u;
    // 0x2d6054: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6054u;
    {
        const bool branch_taken_0x2d6054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6054) {
            ctx->pc = 0x2D6064u;
            goto label_2d6064;
        }
    }
    ctx->pc = 0x2D605Cu;
    // 0x2d605c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2D605Cu;
    {
        const bool branch_taken_0x2d605c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d605c) {
            ctx->pc = 0x2D61E4u;
            goto label_2d61e4;
        }
    }
    ctx->pc = 0x2D6064u;
label_2d6064:
    // 0x2d6064: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d6064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6068: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d606c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d606cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6070: 0x8c621334  lw          $v0, 0x1334($v1)
    ctx->pc = 0x2d6070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d6074: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2d6074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2d6078: 0xac621334  sw          $v0, 0x1334($v1)
    ctx->pc = 0x2d6078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4916), GPR_U32(ctx, 2));
    // 0x2d607c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6080: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6084: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6088: 0x8c421334  lw          $v0, 0x1334($v0)
    ctx->pc = 0x2d6088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4916)));
    // 0x2d608c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d608cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d6090: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D6090u;
    {
        const bool branch_taken_0x2d6090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6090) {
            ctx->pc = 0x2D60C0u;
            goto label_2d60c0;
        }
    }
    ctx->pc = 0x2D6098u;
    // 0x2d6098: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d6098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d609c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d609cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d60a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d60a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d60a4: 0x24063c03  addiu       $a2, $zero, 0x3C03
    ctx->pc = 0x2d60a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15363));
    // 0x2d60a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d60a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d60ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d60acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d60b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D60B0u;
    SET_GPR_U32(ctx, 31, 0x2D60B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D60B0u, 0x2D60B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D60B8u;
label_2d60b8:
    // 0x2d60b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D60B8u;
    {
        const bool branch_taken_0x2d60b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d60b8) {
            ctx->pc = 0x2D60E0u;
            goto label_2d60e0;
        }
    }
    ctx->pc = 0x2D60C0u;
label_2d60c0:
    // 0x2d60c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d60c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d60c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d60c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d60c8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d60c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d60cc: 0x24063c02  addiu       $a2, $zero, 0x3C02
    ctx->pc = 0x2d60ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15362));
    // 0x2d60d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d60d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d60d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d60d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d60d8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D60D8u;
    SET_GPR_U32(ctx, 31, 0x2D60E0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D60D8u, 0x2D60E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D60E0u;
label_2d60e0:
    // 0x2d60e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d60e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d60e4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d60e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d60e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d60ec: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d60ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d60f0:
    // 0x2d60f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d60f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d60f4: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D60F4u;
    SET_GPR_U32(ctx, 31, 0x2D60FCu);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D60F4u, 0x2D60FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D60FCu;
label_2d60fc:
    // 0x2d60fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d60fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6100: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d6100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d6104: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2D6104u;
    {
        const bool branch_taken_0x2d6104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6104) {
            ctx->pc = 0x2D61E4u;
            goto label_2d61e4;
        }
    }
    ctx->pc = 0x2D610Cu;
    // 0x2d610c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6110: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d6110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6114: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d6114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6118: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d6118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d611c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d611cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d6120: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D6120u;
    {
        const bool branch_taken_0x2d6120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6120) {
            ctx->pc = 0x2D6178u;
            goto label_2d6178;
        }
    }
    ctx->pc = 0x2D6128u;
    // 0x2d6128: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d612c: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d612cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6130: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d6130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6134: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d6134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d6138: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x2d6138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x2d613c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d613cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d6140: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d6140u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d6144: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d6144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6148: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d614c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d614cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6150: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6154: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d6154u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6158: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d615c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d615cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6160: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6164: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d6164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6168: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d616c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d616cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d6170: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2D6170u;
    {
        const bool branch_taken_0x2d6170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6170) {
            ctx->pc = 0x2D61E4u;
            goto label_2d61e4;
        }
    }
    ctx->pc = 0x2D6178u;
label_2d6178:
    // 0x2d6178: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d617c: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d617cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6180: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d6180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6184: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d6184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d6188: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2d6188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2d618c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d618cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d6190: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d6190u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d6194: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6198: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d6198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d619c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d619cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d61a0: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d61a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d61a4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2d61a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2d61a8: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d61a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d61ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d61acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d61b0: 0xac601334  sw          $zero, 0x1334($v1)
    ctx->pc = 0x2d61b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4916), GPR_U32(ctx, 0));
    // 0x2d61b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d61b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d61b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d61b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d61bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d61bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d61c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d61c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d61c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d61c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d61c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d61c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d61cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d61ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d61d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d61d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d61d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d61d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d61d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d61d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d61dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d61dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d61e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d61e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d61e4:
    // 0x2d61e4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d61e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d61e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d61e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d61ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D61ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D61ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D61F4u;
}
