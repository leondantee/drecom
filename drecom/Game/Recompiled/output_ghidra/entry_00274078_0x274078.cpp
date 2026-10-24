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

// Function: entry_00274078
// Address: 0x274078 - 0x2740d4
void entry_00274078_0x274078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274078_0x274078");
#endif

    ctx->pc = 0x274078u;

    // 0x274078: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x274078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x27407c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x27407cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x274080: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x274080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x274084: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x274084u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x274088: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x274088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x27408c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x274090: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x274090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x274094: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x274094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x274098: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x274098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x27409c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x27409cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2740a0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2740a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2740a4: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x2740a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2740a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2740a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2740ac: 0xac650064  sw          $a1, 0x64($v1)
    ctx->pc = 0x2740acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 5));
    // 0x2740b0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2740b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2740b4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2740b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2740b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2740b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2740bc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2740bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2740c0: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x2740c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2740c4: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2740c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2740c8: 0xac660068  sw          $a2, 0x68($v1)
    ctx->pc = 0x2740c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 6));
    // 0x2740cc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2740CCu;
    {
        const bool branch_taken_0x2740cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2740cc) {
            ctx->pc = 0x274128u;
            return;
        }
    }
    ctx->pc = 0x2740D4u;
}
