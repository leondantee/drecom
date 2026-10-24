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

// Function: Em_rset_all_clr
// Address: 0x33b0d0 - 0x33b314
void Em_rset_all_clr_0x33b0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_rset_all_clr_0x33b0d0");
#endif

    switch (ctx->pc) {
        case 0x33b0fcu: goto label_33b0fc;
        case 0x33b110u: goto label_33b110;
        case 0x33b158u: goto label_33b158;
        case 0x33b1a0u: goto label_33b1a0;
        case 0x33b1e8u: goto label_33b1e8;
        case 0x33b230u: goto label_33b230;
        case 0x33b278u: goto label_33b278;
        case 0x33b2c0u: goto label_33b2c0;
        default: break;
    }

    ctx->pc = 0x33b0d0u;

    // 0x33b0d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33b0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33b0d4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x33b0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x33b0d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33b0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33b0dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33b0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33b0e0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33b0e4: 0x24515450  addiu       $s1, $v0, 0x5450
    ctx->pc = 0x33b0e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21584));
    // 0x33b0e8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x33b0e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x33b0ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33b0ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b0f0: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x33b0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x33b0f4: 0xc046314  jal         func_118C50
    ctx->pc = 0x33B0F4u;
    SET_GPR_U32(ctx, 31, 0x33B0FCu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x33B0FCu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33B0FCu) { return; }
    ctx->pc = 0x33B0FCu;
label_33b0fc:
    // 0x33b0fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b100: 0xae230138  sw          $v1, 0x138($s1)
    ctx->pc = 0x33b100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 3));
    // 0x33b104: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x33b104u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b108: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33B108u;
    {
        const bool branch_taken_0x33b108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b108) {
            ctx->pc = 0x33B140u;
            goto label_33b140;
        }
    }
    ctx->pc = 0x33B110u;
label_33b110:
    // 0x33b110: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b110u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b114: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b118: 0x8c239a20  lw          $v1, -0x65E0($at)
    ctx->pc = 0x33b118u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A20u));
    // 0x33b11c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b120: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x33b120u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b124: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33b124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b128: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b128u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b12c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b130: 0x8c239a20  lw          $v1, -0x65E0($at)
    ctx->pc = 0x33b130u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A20u));
    // 0x33b134: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b138: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b13c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33b13cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33b140:
    // 0x33b140: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x33b140u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x33b144: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x33B144u;
    {
        const bool branch_taken_0x33b144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b144) {
            ctx->pc = 0x33B110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b110;
        }
    }
    ctx->pc = 0x33B14Cu;
    // 0x33b14c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x33b14cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b150: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33B150u;
    {
        const bool branch_taken_0x33b150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b150) {
            ctx->pc = 0x33B188u;
            goto label_33b188;
        }
    }
    ctx->pc = 0x33B158u;
label_33b158:
    // 0x33b158: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b15c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b160: 0x8c239a24  lw          $v1, -0x65DC($at)
    ctx->pc = 0x33b160u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A24u));
    // 0x33b164: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b168: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x33b168u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b16c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33b16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b170: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b174: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b178: 0x8c239a24  lw          $v1, -0x65DC($at)
    ctx->pc = 0x33b178u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A24u));
    // 0x33b17c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b180: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b184: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33b184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33b188:
    // 0x33b188: 0x2e030022  sltiu       $v1, $s0, 0x22
    ctx->pc = 0x33b188u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x33b18c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x33B18Cu;
    {
        const bool branch_taken_0x33b18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b18c) {
            ctx->pc = 0x33B158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b158;
        }
    }
    ctx->pc = 0x33B194u;
    // 0x33b194: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x33b194u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b198: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33B198u;
    {
        const bool branch_taken_0x33b198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b198) {
            ctx->pc = 0x33B1D0u;
            goto label_33b1d0;
        }
    }
    ctx->pc = 0x33B1A0u;
label_33b1a0:
    // 0x33b1a0: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b1a4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b1a8: 0x8c239a28  lw          $v1, -0x65D8($at)
    ctx->pc = 0x33b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A28u));
    // 0x33b1ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b1b0: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x33b1b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b1b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33b1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b1b8: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b1bc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b1c0: 0x8c239a28  lw          $v1, -0x65D8($at)
    ctx->pc = 0x33b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A28u));
    // 0x33b1c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b1c8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b1cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33b1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33b1d0:
    // 0x33b1d0: 0x2e03001d  sltiu       $v1, $s0, 0x1D
    ctx->pc = 0x33b1d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x33b1d4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x33B1D4u;
    {
        const bool branch_taken_0x33b1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b1d4) {
            ctx->pc = 0x33B1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b1a0;
        }
    }
    ctx->pc = 0x33B1DCu;
    // 0x33b1dc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x33b1dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b1e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33B1E0u;
    {
        const bool branch_taken_0x33b1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b1e0) {
            ctx->pc = 0x33B218u;
            goto label_33b218;
        }
    }
    ctx->pc = 0x33B1E8u;
label_33b1e8:
    // 0x33b1e8: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b1ec: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b1f0: 0x8c239a2c  lw          $v1, -0x65D4($at)
    ctx->pc = 0x33b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A2Cu));
    // 0x33b1f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b1f8: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x33b1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b1fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33b1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b200: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b204: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b208: 0x8c239a2c  lw          $v1, -0x65D4($at)
    ctx->pc = 0x33b208u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A2Cu));
    // 0x33b20c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b210: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b214: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33b214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33b218:
    // 0x33b218: 0x2e030031  sltiu       $v1, $s0, 0x31
    ctx->pc = 0x33b218u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
    // 0x33b21c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x33B21Cu;
    {
        const bool branch_taken_0x33b21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b21c) {
            ctx->pc = 0x33B1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b1e8;
        }
    }
    ctx->pc = 0x33B224u;
    // 0x33b224: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x33b224u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b228: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33B228u;
    {
        const bool branch_taken_0x33b228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b228) {
            ctx->pc = 0x33B260u;
            goto label_33b260;
        }
    }
    ctx->pc = 0x33B230u;
label_33b230:
    // 0x33b230: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b230u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b234: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b238: 0x8c239a30  lw          $v1, -0x65D0($at)
    ctx->pc = 0x33b238u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A30u));
    // 0x33b23c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b240: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x33b240u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b244: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33b244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b248: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b24c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b250: 0x8c239a30  lw          $v1, -0x65D0($at)
    ctx->pc = 0x33b250u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A30u));
    // 0x33b254: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b258: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b25c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33b25cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33b260:
    // 0x33b260: 0x2e03000b  sltiu       $v1, $s0, 0xB
    ctx->pc = 0x33b260u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x33b264: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x33B264u;
    {
        const bool branch_taken_0x33b264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b264) {
            ctx->pc = 0x33B230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b230;
        }
    }
    ctx->pc = 0x33B26Cu;
    // 0x33b26c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x33b26cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b270: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33B270u;
    {
        const bool branch_taken_0x33b270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b270) {
            ctx->pc = 0x33B2A8u;
            goto label_33b2a8;
        }
    }
    ctx->pc = 0x33B278u;
label_33b278:
    // 0x33b278: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b278u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b27c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b280: 0x8c239a34  lw          $v1, -0x65CC($at)
    ctx->pc = 0x33b280u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A34u));
    // 0x33b284: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b288: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x33b288u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b28c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33b28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b290: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b290u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b294: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b298: 0x8c239a34  lw          $v1, -0x65CC($at)
    ctx->pc = 0x33b298u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A34u));
    // 0x33b29c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b2a0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b2a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33b2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33b2a8:
    // 0x33b2a8: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x33b2a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x33b2ac: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x33B2ACu;
    {
        const bool branch_taken_0x33b2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b2ac) {
            ctx->pc = 0x33B278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b278;
        }
    }
    ctx->pc = 0x33B2B4u;
    // 0x33b2b4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x33b2b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b2b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33B2B8u;
    {
        const bool branch_taken_0x33b2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b2b8) {
            ctx->pc = 0x33B2F0u;
            goto label_33b2f0;
        }
    }
    ctx->pc = 0x33B2C0u;
label_33b2c0:
    // 0x33b2c0: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b2c4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b2c8: 0x8c239a38  lw          $v1, -0x65C8($at)
    ctx->pc = 0x33b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A38u));
    // 0x33b2cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b2d0: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x33b2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b2d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33b2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b2d8: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b2dc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b2e0: 0x8c239a38  lw          $v1, -0x65C8($at)
    ctx->pc = 0x33b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A38u));
    // 0x33b2e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b2e8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b2ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33b2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33b2f0:
    // 0x33b2f0: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x33b2f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x33b2f4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x33B2F4u;
    {
        const bool branch_taken_0x33b2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b2f4) {
            ctx->pc = 0x33B2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b2c0;
        }
    }
    ctx->pc = 0x33B2FCu;
    // 0x33b2fc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x33b2fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33b300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33b304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b308: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33b308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33b30c: 0x3e00008  jr          $ra
    ctx->pc = 0x33B30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B314u;
}
