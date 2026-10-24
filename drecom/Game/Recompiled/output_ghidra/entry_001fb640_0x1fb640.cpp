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

// Function: entry_001fb640
// Address: 0x1fb640 - 0x1fb6c0
void entry_001fb640_0x1fb640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb640_0x1fb640");
#endif

    ctx->pc = 0x1fb640u;

    // 0x1fb640: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb644: 0x9083034f  lbu         $v1, 0x34F($a0)
    ctx->pc = 0x1fb644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 847)));
    // 0x1fb648: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1fb648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb64c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb650: 0x90640344  lbu         $a0, 0x344($v1)
    ctx->pc = 0x1fb650u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fb654: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fb654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fb658: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1fb658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1fb65c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb660: 0x90830347  lbu         $v1, 0x347($a0)
    ctx->pc = 0x1fb660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 839)));
    // 0x1fb664: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb668: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1fb668u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fb66c: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1FB66Cu;
    {
        const bool branch_taken_0x1fb66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb66c) {
            ctx->pc = 0x1FB720u;
            return;
        }
    }
    ctx->pc = 0x1FB674u;
    // 0x1fb674: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1fb674u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb678: 0x92030348  lbu         $v1, 0x348($s0)
    ctx->pc = 0x1fb678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 840)));
    // 0x1fb67c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fb67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fb680: 0xa2030348  sb          $v1, 0x348($s0)
    ctx->pc = 0x1fb680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb684: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb688: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fb688u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fb68c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fb68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fb690: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1fb690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fb694: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x1fb694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1fb698: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1fb698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fb69c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb6a0: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fb6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fb6a4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fb6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb6a8: 0x90a30345  lbu         $v1, 0x345($a1)
    ctx->pc = 0x1fb6a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 837)));
    // 0x1fb6ac: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1fb6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fb6b0: 0xa0a40345  sb          $a0, 0x345($a1)
    ctx->pc = 0x1fb6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fb6b4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fb6b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb6b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FB6B8u;
    {
        const bool branch_taken_0x1fb6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb6b8) {
            ctx->pc = 0x1FB6F8u;
            return;
        }
    }
    ctx->pc = 0x1FB6C0u;
}
