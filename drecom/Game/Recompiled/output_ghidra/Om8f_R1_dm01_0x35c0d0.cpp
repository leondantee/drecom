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

// Function: Om8f_R1_dm01
// Address: 0x35c0d0 - 0x35c254
void Om8f_R1_dm01_0x35c0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8f_R1_dm01_0x35c0d0");
#endif

    switch (ctx->pc) {
        case 0x35c150u: goto label_35c150;
        case 0x35c170u: goto label_35c170;
        case 0x35c1f4u: goto label_35c1f4;
        case 0x35c200u: goto label_35c200;
        default: break;
    }

    ctx->pc = 0x35c0d0u;

    // 0x35c0d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35c0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35c0d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35c0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x35c0d8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x35c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x35c0dc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x35c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x35c0e0: 0x2463aa70  addiu       $v1, $v1, -0x5590
    ctx->pc = 0x35c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945392));
    // 0x35c0e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x35c0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35c0e8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x35c0e8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AAA70u));
    // 0x35c0ec: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x35c0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x35c0f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c0f4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x35c0f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35c0f8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35c0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35c0fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c100: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x35C100u;
    {
        const bool branch_taken_0x35c100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35c100) {
            ctx->pc = 0x35C1BCu;
            goto label_35c1bc;
        }
    }
    ctx->pc = 0x35C108u;
    // 0x35c108: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35C108u;
    {
        const bool branch_taken_0x35c108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c108) {
            ctx->pc = 0x35C118u;
            goto label_35c118;
        }
    }
    ctx->pc = 0x35C110u;
    // 0x35c110: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x35C110u;
    {
        const bool branch_taken_0x35c110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c110) {
            ctx->pc = 0x35C244u;
            goto label_35c244;
        }
    }
    ctx->pc = 0x35C118u;
label_35c118:
    // 0x35c118: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c11c: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35c11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35c120: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35c120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c124: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x35C124u;
    {
        const bool branch_taken_0x35c124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35c124) {
            ctx->pc = 0x35C178u;
            goto label_35c178;
        }
    }
    ctx->pc = 0x35C12Cu;
    // 0x35c12c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c130: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x35c130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x35c134: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x35c134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35c138: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35c138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35c13c: 0x24040429  addiu       $a0, $zero, 0x429
    ctx->pc = 0x35c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1065));
    // 0x35c140: 0x24650110  addiu       $a1, $v1, 0x110
    ctx->pc = 0x35c140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x35c144: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35c144u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35c148: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x35C148u;
    SET_GPR_U32(ctx, 31, 0x35C150u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x35C148u, 0x35C150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C150u;
label_35c150:
    // 0x35c150: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35c150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c154: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35c154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c158: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x35c158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x35c15c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35c15cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35c160: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35c160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c164: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x35c164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35c168: 0xc0965d0  jal         func_259740
    ctx->pc = 0x35C168u;
    SET_GPR_U32(ctx, 31, 0x35C170u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x35C168u, 0x35C170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C170u;
label_35c170:
    // 0x35c170: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x35C170u;
    {
        const bool branch_taken_0x35c170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c170) {
            ctx->pc = 0x35C1ACu;
            goto label_35c1ac;
        }
    }
    ctx->pc = 0x35C178u;
label_35c178:
    // 0x35c178: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35c178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c17c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c180: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35c180u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35c184: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c188: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35c188u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c18c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c190: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35c190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c194: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c198: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35c198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c19c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c1a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35c1a4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x35C1A4u;
    {
        const bool branch_taken_0x35c1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c1a4) {
            ctx->pc = 0x35C244u;
            goto label_35c244;
        }
    }
    ctx->pc = 0x35C1ACu;
label_35c1ac:
    // 0x35c1ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c1b0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x35c1b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35c1b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35c1b8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x35c1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_35c1bc:
    // 0x35c1bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c1c0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x35c1c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x35c1c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35c1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35c1c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35c1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35c1cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35C1CCu;
    {
        const bool branch_taken_0x35c1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c1cc) {
            ctx->pc = 0x35C1E8u;
            goto label_35c1e8;
        }
    }
    ctx->pc = 0x35C1D4u;
    // 0x35c1d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c1d8: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x35c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x35c1dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x35c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x35c1e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35c1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35c1e4: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x35c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
label_35c1e8:
    // 0x35c1e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35c1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c1ec: 0xc05cd10  jal         func_173440
    ctx->pc = 0x35C1ECu;
    SET_GPR_U32(ctx, 31, 0x35C1F4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x35C1ECu, 0x35C1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C1F4u;
label_35c1f4:
    // 0x35c1f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c1f8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x35C1F8u;
    SET_GPR_U32(ctx, 31, 0x35C200u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x35C1F8u, 0x35C200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C200u;
label_35c200:
    // 0x35c200: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c204: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x35c204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x35c208: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35C208u;
    {
        const bool branch_taken_0x35c208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c208) {
            ctx->pc = 0x35C244u;
            goto label_35c244;
        }
    }
    ctx->pc = 0x35C210u;
    // 0x35c210: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c214: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35c214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c218: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35c218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c21c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c220: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35c220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35c224: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c228: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35c228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c22c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c230: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35c230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c234: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c238: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35c238u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c23c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c240: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35c240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_35c244:
    // 0x35c244: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35c244u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c248: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35c248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35c24c: 0x3e00008  jr          $ra
    ctx->pc = 0x35C24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C254u;
}
