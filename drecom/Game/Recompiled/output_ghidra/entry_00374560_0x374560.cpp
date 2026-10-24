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

// Function: entry_00374560
// Address: 0x374560 - 0x3745c0
void entry_00374560_0x374560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374560_0x374560");
#endif

    ctx->pc = 0x374560u;

    // 0x374560: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x374560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x374564: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x374564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x374568: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x374568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x37456c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x37456cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x374570: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x374570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x374574: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x374574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x374578: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x374578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x37457c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x37457cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374580: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x374580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x374584: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x374584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x374588: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x374588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37458c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x37458Cu;
    {
        const bool branch_taken_0x37458c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37458c) {
            ctx->pc = 0x3745C0u;
            return;
        }
    }
    ctx->pc = 0x374594u;
    // 0x374594: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x374594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x374598: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x374598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37459c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x37459cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3745a0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3745a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3745a4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3745a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3745a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3745a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3745ac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3745acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3745b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3745b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3745b4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x3745b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3745b8: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x3745b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3745bc: 0x0  nop
    ctx->pc = 0x3745bcu;
    // NOP
    ctx->pc = 0x3745c0u;
}
