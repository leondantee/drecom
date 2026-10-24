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

// Function: Em18_R1_sleep
// Address: 0x2dfff0 - 0x2e0220
void Em18_R1_sleep_0x2dfff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_sleep_0x2dfff0");
#endif

    switch (ctx->pc) {
        case 0x2e0098u: goto label_2e0098;
        case 0x2e00ccu: goto label_2e00cc;
        case 0x2e00d8u: goto label_2e00d8;
        case 0x2e0184u: goto label_2e0184;
        case 0x2e0198u: goto label_2e0198;
        case 0x2e01acu: goto label_2e01ac;
        default: break;
    }

    ctx->pc = 0x2dfff0u;

    // 0x2dfff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dfff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dfff4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2dfff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2dfff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dfff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dfffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dfffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e0000: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2e0000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2e0004: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e0004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0008: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x2e0008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e000c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e000cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0010: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2e0010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e0014: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e0014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e0018: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e0018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e001c: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E001Cu;
    {
        const bool branch_taken_0x2e001c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e001c) {
            ctx->pc = 0x2E00BCu;
            goto label_2e00bc;
        }
    }
    ctx->pc = 0x2E0024u;
    // 0x2e0024: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0024u;
    {
        const bool branch_taken_0x2e0024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0024) {
            ctx->pc = 0x2E0034u;
            goto label_2e0034;
        }
    }
    ctx->pc = 0x2E002Cu;
    // 0x2e002c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2E002Cu;
    {
        const bool branch_taken_0x2e002c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e002c) {
            ctx->pc = 0x2E0208u;
            goto label_2e0208;
        }
    }
    ctx->pc = 0x2E0034u;
label_2e0034:
    // 0x2e0034: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e0034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0038: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e0038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e003c: 0x2402fff5  addiu       $v0, $zero, -0xB
    ctx->pc = 0x2e003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x2e0040: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e0040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e0044: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e0044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e0048: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e0048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e004c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e004cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e0050: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e0050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e0054: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2e0054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2e0058: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e0058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e005c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e005cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e0060: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2e0060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2e0064: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e0064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e0068: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e0068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e006c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2e006cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e0070: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e0070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0074: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2e0074u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0078: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e0078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e007c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e007cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0080: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e0080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e0084: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2e0084u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0088: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x2e0088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e008c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e008cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e0090: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E0090u;
    SET_GPR_U32(ctx, 31, 0x2E0098u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E0090u, 0x2E0098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0098u;
label_2e0098:
    // 0x2e0098: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e0098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e009c: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x2e009cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x2e00a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e00a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e00a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e00a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e00a8: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x2e00a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    // 0x2e00ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e00acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e00b0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e00b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e00b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e00b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e00b8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e00b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e00bc:
    // 0x2e00bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e00bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e00c0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e00c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e00c4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E00C4u;
    SET_GPR_U32(ctx, 31, 0x2E00CCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E00C4u, 0x2E00CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E00CCu;
label_2e00cc:
    // 0x2e00cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e00ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e00d0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E00D0u;
    SET_GPR_U32(ctx, 31, 0x2E00D8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E00D0u, 0x2E00D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E00D8u;
label_2e00d8:
    // 0x2e00d8: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x2e00d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2e00dc: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x2E00DCu;
    {
        const bool branch_taken_0x2e00dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e00dc) {
            ctx->pc = 0x2E0208u;
            goto label_2e0208;
        }
    }
    ctx->pc = 0x2E00E4u;
    // 0x2e00e4: 0x8e3000ac  lw          $s0, 0xAC($s1)
    ctx->pc = 0x2e00e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2e00e8: 0x860410a6  lh          $a0, 0x10A6($s0)
    ctx->pc = 0x2e00e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x2e00ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e00ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e00f0: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x2e00f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x2e00f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e00f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e00f8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2e00f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e00fc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2e00fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2e0100: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e0100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e0104: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E0104u;
    {
        const bool branch_taken_0x2e0104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0104) {
            ctx->pc = 0x2E0170u;
            goto label_2e0170;
        }
    }
    ctx->pc = 0x2E010Cu;
    // 0x2e010c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2e010cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e0110: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2e0110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2e0114: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e0114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e0118: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E0118u;
    {
        const bool branch_taken_0x2e0118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0118) {
            ctx->pc = 0x2E0168u;
            goto label_2e0168;
        }
    }
    ctx->pc = 0x2E0120u;
    // 0x2e0120: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x2e0120u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x2e0124: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e0124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e0128: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e0128u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e012c: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E012Cu;
    {
        const bool branch_taken_0x2e012c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2e012c) {
            ctx->pc = 0x2E0168u;
            goto label_2e0168;
        }
    }
    ctx->pc = 0x2E0134u;
    // 0x2e0134: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e0134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e0138: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e0138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e013c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e013cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0140: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e0140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0144: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e0144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0148: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e0148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e014c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e014cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0150: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e0150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0154: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e0154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0158: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e0158u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e015c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e015cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0160: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e0160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e0164: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x2e0164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_2e0168:
    // 0x2e0168: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2E0168u;
    {
        const bool branch_taken_0x2e0168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0168) {
            ctx->pc = 0x2E0208u;
            goto label_2e0208;
        }
    }
    ctx->pc = 0x2E0170u;
label_2e0170:
    // 0x2e0170: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e0170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0174: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2e0174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2e0178: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2e0178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2e017c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E017Cu;
    SET_GPR_U32(ctx, 31, 0x2E0184u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E0184u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E0184u) { return; }
    ctx->pc = 0x2E0184u;
label_2e0184:
    // 0x2e0184: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e0184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0188: 0x24440170  addiu       $a0, $v0, 0x170
    ctx->pc = 0x2e0188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x2e018c: 0x26050170  addiu       $a1, $s0, 0x170
    ctx->pc = 0x2e018cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x2e0190: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E0190u;
    SET_GPR_U32(ctx, 31, 0x2E0198u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E0198u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E0198u) { return; }
    ctx->pc = 0x2E0198u;
label_2e0198:
    // 0x2e0198: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e0198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e019c: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x2e019cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2e01a0: 0x260500d0  addiu       $a1, $s0, 0xD0
    ctx->pc = 0x2e01a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2e01a4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E01A4u;
    SET_GPR_U32(ctx, 31, 0x2E01ACu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E01ACu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E01ACu) { return; }
    ctx->pc = 0x2E01ACu;
label_2e01ac:
    // 0x2e01ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e01acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e01b0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e01b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e01b4: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x2e01b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x2e01b8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2e01b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2e01bc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2e01bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e01c0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e01c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e01c4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2e01c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2e01c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e01c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e01cc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2e01ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2e01d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e01d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e01d4: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x2e01d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e01d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e01d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e01dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e01e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e01e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e01e4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2e01e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2e01e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e01ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e01ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e01f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e01f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e01f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e01f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e01f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e01f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e01fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e01fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0200: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e0200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0204: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e0204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2e0208:
    // 0x2e0208: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2e0208u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e020c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e020cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0210: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0214: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e0214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e0218: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0220u;
}
