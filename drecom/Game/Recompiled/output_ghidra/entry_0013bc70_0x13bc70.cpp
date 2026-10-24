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

// Function: entry_0013bc70
// Address: 0x13bc70 - 0x13bcc0
void entry_0013bc70_0x13bc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bc70_0x13bc70");
#endif

    ctx->pc = 0x13bc70u;

    // 0x13bc70: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x13bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13bc74: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x13bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x13bc78: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x13bc78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x13bc7c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x13bc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x13bc80: 0x8c23b7d0  lw          $v1, -0x4830($at)
    ctx->pc = 0x13bc80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38B7D0u));
    // 0x13bc84: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x13bc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x13bc88: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x13bc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x13bc8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13bc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13bc90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13bc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13bc94: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x13bc94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13bc98: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x13bc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x13bc9c: 0x8c23b7d4  lw          $v1, -0x482C($at)
    ctx->pc = 0x13bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38B7D4u));
    // 0x13bca0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x13bca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13bca4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x13bca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x13bca8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x13bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x13bcac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13bcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13bcb0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x13bcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x13bcb4: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x13bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x13bcb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13BCB8u;
    {
        const bool branch_taken_0x13bcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bcb8) {
            ctx->pc = 0x13BCE8u;
            return;
        }
    }
    ctx->pc = 0x13BCC0u;
}
