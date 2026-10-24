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

// Function: entry_001bb7c4
// Address: 0x1bb7c4 - 0x1bb84c
void entry_001bb7c4_0x1bb7c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb7c4_0x1bb7c4");
#endif

    switch (ctx->pc) {
        case 0x1bb7d4u: goto label_1bb7d4;
        default: break;
    }

    ctx->pc = 0x1bb7c4u;

    // 0x1bb7c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bb7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb7c8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1bb7c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1bb7cc: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BB7CCu;
    SET_GPR_U32(ctx, 31, 0x1BB7D4u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BB7CCu, 0x1BB7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7D4u;
label_1bb7d4:
    // 0x1bb7d4: 0x104000ce  beqz        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x1BB7D4u;
    {
        const bool branch_taken_0x1bb7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb7d4) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB7DCu;
    // 0x1bb7dc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb7e0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1bb7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bb7e4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bb7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1bb7e8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1bb7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1bb7ec: 0x106000c8  beqz        $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x1BB7ECu;
    {
        const bool branch_taken_0x1bb7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb7ec) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB7F4u;
    // 0x1bb7f4: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1bb7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb7f8: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1bb7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1bb7fc: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1bb7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1bb800: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1bb800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bb804: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1bb804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1bb808: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1bb808u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1bb80c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb810: 0x908513a6  lbu         $a1, 0x13A6($a0)
    ctx->pc = 0x1bb810u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
    // 0x1bb814: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bb814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb818: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bb818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb81c: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BB81Cu;
    {
        const bool branch_taken_0x1bb81c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bb81c) {
            ctx->pc = 0x1BB84Cu;
            return;
        }
    }
    ctx->pc = 0x1BB824u;
    // 0x1bb824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb828: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB828u;
    {
        const bool branch_taken_0x1bb828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb828) {
            ctx->pc = 0x1BB84Cu;
            return;
        }
    }
    ctx->pc = 0x1BB830u;
    // 0x1bb830: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bb830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb834: 0x10a400b6  beq         $a1, $a0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1BB834u;
    {
        const bool branch_taken_0x1bb834 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bb834) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB83Cu;
    // 0x1bb83c: 0x10a000b4  beqz        $a1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1BB83Cu;
    {
        const bool branch_taken_0x1bb83c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb83c) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB844u;
    // 0x1bb844: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x1BB844u;
    {
        const bool branch_taken_0x1bb844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb844) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB84Cu;
}
