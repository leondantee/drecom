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

// Function: entry_00259374
// Address: 0x259374 - 0x2593ac
void entry_00259374_0x259374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259374_0x259374");
#endif

    ctx->pc = 0x259374u;

    // 0x259374: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x259374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x259378: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x259378u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25937c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25937cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x259380: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x259380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x259384: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x259384u;
    {
        const bool branch_taken_0x259384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259384) {
            ctx->pc = 0x2593ACu;
            return;
        }
    }
    ctx->pc = 0x25938Cu;
    // 0x25938c: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x25938cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x259390: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x259390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x259394: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x259394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x259398: 0x3463c00a  ori         $v1, $v1, 0xC00A
    ctx->pc = 0x259398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49162);
    // 0x25939c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x25939cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2593a0: 0xfec30010  sd          $v1, 0x10($s6)
    ctx->pc = 0x2593a0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 16), GPR_U64(ctx, 3));
    // 0x2593a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2593A4u;
    {
        const bool branch_taken_0x2593a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2593a4) {
            ctx->pc = 0x2593B0u;
            return;
        }
    }
    ctx->pc = 0x2593ACu;
}
