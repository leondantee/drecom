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

// Function: caseD_8
// Address: 0x29677c - 0x2967d4
void caseD_8_0x29677c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x29677c");
#endif

    ctx->pc = 0x29677cu;

    // 0x29677c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29677cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296780: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296784: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296788: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x29678c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x29678cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296790: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x296790u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x296794: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296798: 0x8c6469b4  lw          $a0, 0x69B4($v1)
    ctx->pc = 0x296798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x29679c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29679cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2967a0: 0xac6469b8  sw          $a0, 0x69B8($v1)
    ctx->pc = 0x2967a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27064), GPR_U32(ctx, 4));
    // 0x2967a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2967a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2967a8: 0x8c8369b8  lw          $v1, 0x69B8($a0)
    ctx->pc = 0x2967a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27064)));
    // 0x2967ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2967acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2967b0: 0xac8369b8  sw          $v1, 0x69B8($a0)
    ctx->pc = 0x2967b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27064), GPR_U32(ctx, 3));
    // 0x2967b4: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x2967b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2967b8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2967b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2967bc: 0x24636330  addiu       $v1, $v1, 0x6330
    ctx->pc = 0x2967bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25392));
    // 0x2967c0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2967c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2967c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2967c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2967c8: 0xac6469b4  sw          $a0, 0x69B4($v1)
    ctx->pc = 0x2967c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27060), GPR_U32(ctx, 4));
    // 0x2967cc: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2967CCu;
    {
        const bool branch_taken_0x2967cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2967cc) {
            ctx->pc = 0x296978u;
            return;
        }
    }
    ctx->pc = 0x2967D4u;
}
