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

// Function: entry_001926a0
// Address: 0x1926a0 - 0x1926dc
void entry_001926a0_0x1926a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001926a0_0x1926a0");
#endif

    ctx->pc = 0x1926a0u;

    // 0x1926a0: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x1926a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1926a4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1926a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1926a8: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x1926a8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x1926ac: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1926acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1926b0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1926b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1926b4: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x1926b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1926b8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1926b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1926bc: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1926bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1926c0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1926c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1926c4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1926C4u;
    {
        const bool branch_taken_0x1926c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1926c4) {
            ctx->pc = 0x1926DCu;
            return;
        }
    }
    ctx->pc = 0x1926CCu;
    // 0x1926cc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1926ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1926d0: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1926d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1926d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1926D4u;
    {
        const bool branch_taken_0x1926d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1926d4) {
            ctx->pc = 0x1926E0u;
            return;
        }
    }
    ctx->pc = 0x1926DCu;
}
