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

// Function: entry_001e0440
// Address: 0x1e0440 - 0x1e04bc
void entry_001e0440_0x1e0440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0440_0x1e0440");
#endif

    ctx->pc = 0x1e0440u;

    // 0x1e0440: 0x171102  srl         $v0, $s7, 4
    ctx->pc = 0x1e0440u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 23), 4));
    // 0x1e0444: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e0444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e0448: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e0448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e044c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e044cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e0450: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e0450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e0454: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1e0454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1e0458: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e0458u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e045c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1e045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1e0460: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e0460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e0464: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1e0464u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1e0468: 0xafb200c8  sw          $s2, 0xC8($sp)
    ctx->pc = 0x1e0468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 18));
    // 0x1e046c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0470: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0474: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1e0474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1e0478: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e0478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e047c: 0x1040ff74  beqz        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x1E047Cu;
    {
        const bool branch_taken_0x1e047c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e047c) {
            ctx->pc = 0x1E0250u;
            return;
        }
    }
    ctx->pc = 0x1E0484u;
    // 0x1e0484: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x1e0484u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e0488: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1e0488u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e048c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e048cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e0490: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e0490u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e0494: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e0494u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e0498: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e0498u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e049c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e049cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e04a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e04a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e04a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e04a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e04a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e04a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e04ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e04acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e04b0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1e04b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e04b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E04B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E04B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E04BCu;
}
