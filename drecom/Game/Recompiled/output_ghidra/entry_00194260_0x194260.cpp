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

// Function: entry_00194260
// Address: 0x194260 - 0x19429c
void entry_00194260_0x194260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194260_0x194260");
#endif

    ctx->pc = 0x194260u;

    // 0x194260: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x194260u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x194264: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x194264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x194268: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x194268u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x19426c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x19426cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x194270: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x194270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x194274: 0x2f01821  addu        $v1, $s7, $s0
    ctx->pc = 0x194274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x194278: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x194278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19427c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x19427cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x194280: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x194280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x194284: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x194284u;
    {
        const bool branch_taken_0x194284 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x194284) {
            ctx->pc = 0x19429Cu;
            return;
        }
    }
    ctx->pc = 0x19428Cu;
    // 0x19428c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x19428cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x194290: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x194290u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x194294: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x194294u;
    {
        const bool branch_taken_0x194294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194294) {
            ctx->pc = 0x1942A0u;
            return;
        }
    }
    ctx->pc = 0x19429Cu;
}
