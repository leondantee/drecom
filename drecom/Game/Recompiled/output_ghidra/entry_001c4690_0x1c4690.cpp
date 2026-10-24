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

// Function: entry_001c4690
// Address: 0x1c4690 - 0x1c46ec
void entry_001c4690_0x1c4690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4690_0x1c4690");
#endif

    ctx->pc = 0x1c4690u;

    // 0x1c4690: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4694: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c4694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c4698: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c4698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c469c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c469cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c46a0: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1C46A0u;
    {
        const bool branch_taken_0x1c46a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c46a0) {
            ctx->pc = 0x1C47ACu;
            return;
        }
    }
    ctx->pc = 0x1C46A8u;
    // 0x1c46a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c46a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c46ac: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x1c46acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1c46b0: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1C46B0u;
    {
        const bool branch_taken_0x1c46b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c46b0) {
            ctx->pc = 0x1C47ACu;
            return;
        }
    }
    ctx->pc = 0x1C46B8u;
    // 0x1c46b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c46b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c46bc: 0x9063156d  lbu         $v1, 0x156D($v1)
    ctx->pc = 0x1c46bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5485)));
    // 0x1c46c0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c46c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c46c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c46c8: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C46C8u;
    {
        const bool branch_taken_0x1c46c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c46c8) {
            ctx->pc = 0x1C4748u;
            return;
        }
    }
    ctx->pc = 0x1C46D0u;
    // 0x1c46d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c46d4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C46D4u;
    {
        const bool branch_taken_0x1c46d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c46d4) {
            ctx->pc = 0x1C46ECu;
            return;
        }
    }
    ctx->pc = 0x1C46DCu;
    // 0x1c46dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C46DCu;
    {
        const bool branch_taken_0x1c46dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c46dc) {
            ctx->pc = 0x1C46ECu;
            return;
        }
    }
    ctx->pc = 0x1C46E4u;
    // 0x1c46e4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1C46E4u;
    {
        const bool branch_taken_0x1c46e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c46e4) {
            ctx->pc = 0x1C47ACu;
            return;
        }
    }
    ctx->pc = 0x1C46ECu;
}
