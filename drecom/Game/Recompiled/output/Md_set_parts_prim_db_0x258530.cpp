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

// Function: Md_set_parts_prim_db
// Address: 0x258530 - 0x258620
void Md_set_parts_prim_db_0x258530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_parts_prim_db_0x258530");
#endif

    switch (ctx->pc) {
        case 0x25857cu: goto label_25857c;
        case 0x258598u: goto label_258598;
        default: break;
    }

    ctx->pc = 0x258530u;

    // 0x258530: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x258530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x258534: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x258534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x258538: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x258538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25853c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25853cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x258540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x258540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x258544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258548: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x258548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x25854c: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x25854cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x258550: 0xa3a60060  sb          $a2, 0x60($sp)
    ctx->pc = 0x258550u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 6));
    // 0x258554: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x258554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
    // 0x258558: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x258558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25855c: 0x8c730058  lw          $s3, 0x58($v1)
    ctx->pc = 0x25855cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x258560: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x258560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x258564: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x258564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x258568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x258568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25856c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x25856cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x258570: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x258570u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x258574: 0x8e720034  lw          $s2, 0x34($s3)
    ctx->pc = 0x258574u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x258578: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x258578u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_25857c:
    // 0x25857c: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x25857cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x258580: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x258580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258584: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x258588: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x258588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25858c: 0x8c700018  lw          $s0, 0x18($v1)
    ctx->pc = 0x25858cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x258590: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x258590u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x258594: 0x0  nop
    ctx->pc = 0x258594u;
    // NOP
label_258598:
    // 0x258598: 0xdfa30058  ld          $v1, 0x58($sp)
    ctx->pc = 0x258598u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x25859c: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x25859cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2585a0: 0xdce60000  ld          $a2, 0x0($a3)
    ctx->pc = 0x2585a0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2585a4: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x2585a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x2585a8: 0x32bfc  dsll32      $a1, $v1, 15
    ctx->pc = 0x2585a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 15));
    // 0x2585ac: 0x3c03fc00  lui         $v1, 0xFC00
    ctx->pc = 0x2585acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64512 << 16));
    // 0x2585b0: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x2585b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x2585b4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2585b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2585b8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2585b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2585bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2585bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2585c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2585c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2585c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2585c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2585c8: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2585c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2585cc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2585ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2585d0: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x2585d0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x2585d4: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x2585d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2585d8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2585d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2585dc: 0x1620ffee  bnez        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2585DCu;
    {
        const bool branch_taken_0x2585dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2585dc) {
            ctx->pc = 0x258598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258598;
        }
    }
    ctx->pc = 0x2585E4u;
    // 0x2585e4: 0x265200c0  addiu       $s2, $s2, 0xC0
    ctx->pc = 0x2585e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x2585e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2585e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2585ec: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x2585ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x2585f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2585f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2585f4: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x2585f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2585f8: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2585F8u;
    {
        const bool branch_taken_0x2585f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2585f8) {
            ctx->pc = 0x25857Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25857c;
        }
    }
    ctx->pc = 0x258600u;
    // 0x258600: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x258600u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258604: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x258604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258608: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x258608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25860c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25860cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258614: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x258614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x258618: 0x3e00008  jr          $ra
    ctx->pc = 0x258618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258620u;
}
