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

// Function: entry_00258120
// Address: 0x258120 - 0x258158
void entry_00258120_0x258120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258120_0x258120");
#endif

    ctx->pc = 0x258120u;

    // 0x258120: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x258120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x258124: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x258124u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x258128: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x258128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25812c: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x25812cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x258130: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x258130u;
    {
        const bool branch_taken_0x258130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x258130) {
            ctx->pc = 0x258158u;
            return;
        }
    }
    ctx->pc = 0x258138u;
    // 0x258138: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x258138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x25813c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x25813cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x258140: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x258140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x258144: 0x3463c00a  ori         $v1, $v1, 0xC00A
    ctx->pc = 0x258144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49162);
    // 0x258148: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x258148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x25814c: 0xfea30010  sd          $v1, 0x10($s5)
    ctx->pc = 0x25814cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 3));
    // 0x258150: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x258150u;
    {
        const bool branch_taken_0x258150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258150) {
            ctx->pc = 0x258160u;
            return;
        }
    }
    ctx->pc = 0x258158u;
}
