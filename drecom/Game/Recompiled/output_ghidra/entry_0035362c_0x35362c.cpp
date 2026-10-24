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

// Function: entry_0035362c
// Address: 0x35362c - 0x3536d4
void entry_0035362c_0x35362c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035362c_0x35362c");
#endif

    ctx->pc = 0x35362cu;

    // 0x35362c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35362cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353630: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353634: 0x90630071  lbu         $v1, 0x71($v1)
    ctx->pc = 0x353634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 113)));
    // 0x353638: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35363c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x35363cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x353640: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353644: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x353644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x353648: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x353648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x35364c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35364cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x353650: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x353650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x353654: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x353654u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x353658: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35365c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35365cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353660: 0x90630073  lbu         $v1, 0x73($v1)
    ctx->pc = 0x353660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 115)));
    // 0x353664: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353668: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x353668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x35366c: 0x34630064  ori         $v1, $v1, 0x64
    ctx->pc = 0x35366cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x353670: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x353670u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x353674: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353678: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35367c: 0x90630070  lbu         $v1, 0x70($v1)
    ctx->pc = 0x35367cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x353680: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353684: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x353684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x353688: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35368c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x35368cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x353690: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x353690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x353694: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x353694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x353698: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x353698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35369c: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x35369cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x3536a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3536a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3536a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3536a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3536a8: 0x90630074  lbu         $v1, 0x74($v1)
    ctx->pc = 0x3536a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x3536ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3536acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3536b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3536b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3536b4: 0x34630064  ori         $v1, $v1, 0x64
    ctx->pc = 0x3536b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x3536b8: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x3536b8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x3536bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3536bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3536c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3536c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3536c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3536c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3536c8: 0xa064006e  sb          $a0, 0x6E($v1)
    ctx->pc = 0x3536c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 4));
    // 0x3536cc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x3536CCu;
    {
        const bool branch_taken_0x3536cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3536cc) {
            ctx->pc = 0x353870u;
            return;
        }
    }
    ctx->pc = 0x3536D4u;
}
