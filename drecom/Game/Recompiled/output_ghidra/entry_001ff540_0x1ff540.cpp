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

// Function: entry_001ff540
// Address: 0x1ff540 - 0x1ff5c8
void entry_001ff540_0x1ff540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff540_0x1ff540");
#endif

    ctx->pc = 0x1ff540u;

    // 0x1ff540: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff544: 0x906502aa  lbu         $a1, 0x2AA($v1)
    ctx->pc = 0x1ff544u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 682)));
    // 0x1ff548: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ff548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff54c: 0x1060028c  beqz        $v1, . + 4 + (0x28C << 2)
    ctx->pc = 0x1FF54Cu;
    {
        const bool branch_taken_0x1ff54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff54c) {
            ctx->pc = 0x1FFF80u;
            return;
        }
    }
    ctx->pc = 0x1FF554u;
    // 0x1ff554: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff558: 0x90c50346  lbu         $a1, 0x346($a2)
    ctx->pc = 0x1ff558u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 838)));
    // 0x1ff55c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1ff55cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff560: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff564: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x1ff564u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x1ff568: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1ff568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff56c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ff56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff570: 0x58043  sra         $s0, $a1, 1
    ctx->pc = 0x1ff570u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1ff574: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ff574u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ff578: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff57c: 0x90630290  lbu         $v1, 0x290($v1)
    ctx->pc = 0x1ff57cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 656)));
    // 0x1ff580: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ff580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff584: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ff584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ff588: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1ff588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ff58c: 0x14c4027c  bne         $a2, $a0, . + 4 + (0x27C << 2)
    ctx->pc = 0x1FF58Cu;
    {
        const bool branch_taken_0x1ff58c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ff58c) {
            ctx->pc = 0x1FFF80u;
            return;
        }
    }
    ctx->pc = 0x1FF594u;
    // 0x1ff594: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1ff594u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ff598: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1ff598u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ff59c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff5a0: 0x8c650328  lw          $a1, 0x328($v1)
    ctx->pc = 0x1ff5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 808)));
    // 0x1ff5a4: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FF5A4u;
    {
        const bool branch_taken_0x1ff5a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff5a4) {
            ctx->pc = 0x1FF5DCu;
            return;
        }
    }
    ctx->pc = 0x1FF5ACu;
    // 0x1ff5ac: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff5b0: 0x8c83032c  lw          $v1, 0x32C($a0)
    ctx->pc = 0x1ff5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 812)));
    // 0x1ff5b4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF5B4u;
    {
        const bool branch_taken_0x1ff5b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff5b4) {
            ctx->pc = 0x1FF5C8u;
            return;
        }
    }
    ctx->pc = 0x1FF5BCu;
    // 0x1ff5bc: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1ff5bcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ff5c0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1FF5C0u;
    {
        const bool branch_taken_0x1ff5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff5c0) {
            ctx->pc = 0x1FF618u;
            return;
        }
    }
    ctx->pc = 0x1FF5C8u;
}
