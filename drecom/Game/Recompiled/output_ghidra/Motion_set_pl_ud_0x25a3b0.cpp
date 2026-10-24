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

// Function: Motion_set_pl_ud
// Address: 0x25a3b0 - 0x25a5b0
void Motion_set_pl_ud_0x25a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_set_pl_ud_0x25a3b0");
#endif

    switch (ctx->pc) {
        case 0x25a434u: goto label_25a434;
        case 0x25a468u: goto label_25a468;
        case 0x25a520u: goto label_25a520;
        default: break;
    }

    ctx->pc = 0x25a3b0u;

    // 0x25a3b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x25a3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x25a3b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25a3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25a3b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25a3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25a3bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25a3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25a3c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25a3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25a3c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25a3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25a3c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25a3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25a3cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25a3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25a3d0: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x25a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x25a3d4: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x25a3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x25a3d8: 0xafa60088  sw          $a2, 0x88($sp)
    ctx->pc = 0x25a3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
    // 0x25a3dc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x25a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x25a3e0: 0x2472dbc0  addiu       $s2, $v1, -0x2440
    ctx->pc = 0x25a3e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x25a3e4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x25a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25a3e8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a3ec: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25a3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a3f0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x25a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x25a3f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a3f8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x25a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x25a3fc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x25a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25a400: 0x83a821  addu        $s5, $a0, $v1
    ctx->pc = 0x25a400u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25a404: 0x92a30002  lbu         $v1, 0x2($s5)
    ctx->pc = 0x25a404u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x25a408: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x25a408u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a40c: 0x26b10003  addiu       $s1, $s5, 0x3
    ctx->pc = 0x25a40cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x25a410: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x25a410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x25a414: 0x2239821  addu        $s3, $s1, $v1
    ctx->pc = 0x25a414u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x25a418: 0x26640003  addiu       $a0, $s3, 0x3
    ctx->pc = 0x25a418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x25a41c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x25a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x25a420: 0x839824  and         $s3, $a0, $v1
    ctx->pc = 0x25a420u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x25a424: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x25a424u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x25a428: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x25a428u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25a42c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25A42Cu;
    {
        const bool branch_taken_0x25a42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a42c) {
            ctx->pc = 0x25A450u;
            goto label_25a450;
        }
    }
    ctx->pc = 0x25A434u;
label_25a434:
    // 0x25a434: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25a434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a438: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x25a438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25a43c: 0xac601924  sw          $zero, 0x1924($v1)
    ctx->pc = 0x25a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6436), GPR_U32(ctx, 0));
    // 0x25a440: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25a440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a444: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x25a444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25a448: 0xac601a24  sw          $zero, 0x1A24($v1)
    ctx->pc = 0x25a448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6692), GPR_U32(ctx, 0));
    // 0x25a44c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25a44cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_25a450:
    // 0x25a450: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x25a450u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x25a454: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x25A454u;
    {
        const bool branch_taken_0x25a454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a454) {
            ctx->pc = 0x25A434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a434;
        }
    }
    ctx->pc = 0x25A45Cu;
    // 0x25a45c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x25a45cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25a460: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25A460u;
    {
        const bool branch_taken_0x25a460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a460) {
            ctx->pc = 0x25A4C0u;
            goto label_25a4c0;
        }
    }
    ctx->pc = 0x25A468u;
label_25a468:
    // 0x25a468: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x25a468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x25a46c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25a46cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a470: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a474: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x25a474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x25a478: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a47c: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x25a47cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a480: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x25a480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x25a484: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25a484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a488: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a48c: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x25a48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x25a490: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25A490u;
    {
        const bool branch_taken_0x25a490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a490) {
            ctx->pc = 0x25A4B8u;
            goto label_25a4b8;
        }
    }
    ctx->pc = 0x25A498u;
    // 0x25a498: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25a498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a49c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x25a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x25a4a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a4a4: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x25a4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x25a4a8: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x25a4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25a4ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a4b0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x25a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25a4b4: 0xac641924  sw          $a0, 0x1924($v1)
    ctx->pc = 0x25a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6436), GPR_U32(ctx, 4));
label_25a4b8:
    // 0x25a4b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25a4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25a4bc: 0x0  nop
    ctx->pc = 0x25a4bcu;
    // NOP
label_25a4c0:
    // 0x25a4c0: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x25a4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x25a4c4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x25a4c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25a4c8: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x25A4C8u;
    {
        const bool branch_taken_0x25a4c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a4c8) {
            ctx->pc = 0x25A468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a468;
        }
    }
    ctx->pc = 0x25A4D0u;
    // 0x25a4d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x25a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x25a4d4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a4d8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25a4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a4dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x25a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x25a4e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a4e4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x25a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x25a4e8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x25a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25a4ec: 0x83a821  addu        $s5, $a0, $v1
    ctx->pc = 0x25a4ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25a4f0: 0x92a30002  lbu         $v1, 0x2($s5)
    ctx->pc = 0x25a4f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x25a4f4: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x25a4f4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a4f8: 0x26b10003  addiu       $s1, $s5, 0x3
    ctx->pc = 0x25a4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x25a4fc: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x25a4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x25a500: 0x2239821  addu        $s3, $s1, $v1
    ctx->pc = 0x25a500u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x25a504: 0x26640003  addiu       $a0, $s3, 0x3
    ctx->pc = 0x25a504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x25a508: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x25a508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x25a50c: 0x839824  and         $s3, $a0, $v1
    ctx->pc = 0x25a50cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x25a510: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x25a510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x25a514: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x25a514u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25a518: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25A518u;
    {
        const bool branch_taken_0x25a518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a518) {
            ctx->pc = 0x25A578u;
            goto label_25a578;
        }
    }
    ctx->pc = 0x25A520u;
label_25a520:
    // 0x25a520: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x25a520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x25a524: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25a524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a528: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a52c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x25a52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x25a530: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a534: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x25a534u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a538: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x25a538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x25a53c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25a53cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a540: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a544: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x25a544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x25a548: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25A548u;
    {
        const bool branch_taken_0x25a548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a548) {
            ctx->pc = 0x25A570u;
            goto label_25a570;
        }
    }
    ctx->pc = 0x25A550u;
    // 0x25a550: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25a550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a554: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x25a554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x25a558: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25a558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a55c: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x25a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x25a560: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x25a560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25a564: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25a564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a568: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x25a568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25a56c: 0xac641a24  sw          $a0, 0x1A24($v1)
    ctx->pc = 0x25a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6692), GPR_U32(ctx, 4));
label_25a570:
    // 0x25a570: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25a570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25a574: 0x0  nop
    ctx->pc = 0x25a574u;
    // NOP
label_25a578:
    // 0x25a578: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x25a578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x25a57c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x25a57cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25a580: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x25A580u;
    {
        const bool branch_taken_0x25a580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a580) {
            ctx->pc = 0x25A520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a520;
        }
    }
    ctx->pc = 0x25A588u;
    // 0x25a588: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25a588u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25a58c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25a58cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25a590: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25a590u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a594: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25a594u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a598: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25a598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a59c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25a59cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a5a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a5a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a5a4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x25a5a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25a5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x25A5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A5B0u;
}
