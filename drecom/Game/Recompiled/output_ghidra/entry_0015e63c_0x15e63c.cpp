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

// Function: entry_0015e63c
// Address: 0x15e63c - 0x15e6ac
void entry_0015e63c_0x15e63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e63c_0x15e63c");
#endif

    switch (ctx->pc) {
        case 0x15e690u: goto label_15e690;
        case 0x15e6a4u: goto label_15e6a4;
        default: break;
    }

    ctx->pc = 0x15e63cu;

    // 0x15e63c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15e63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15e640: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15e640u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15e644: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x15e644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x15e648: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x15E648u;
    {
        const bool branch_taken_0x15e648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e648) {
            ctx->pc = 0x15E7E0u;
            return;
        }
    }
    ctx->pc = 0x15E650u;
    // 0x15e650: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x15e650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x15e654: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x15e654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x15e658: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x15E658u;
    {
        const bool branch_taken_0x15e658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e658) {
            ctx->pc = 0x15E748u;
            return;
        }
    }
    ctx->pc = 0x15E660u;
    // 0x15e660: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15e660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15e664: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15e664u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15e668: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x15e668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x15e66c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x15E66Cu;
    {
        const bool branch_taken_0x15e66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e66c) {
            ctx->pc = 0x15E6ACu;
            return;
        }
    }
    ctx->pc = 0x15E674u;
    // 0x15e674: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x15e674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15e678: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e67c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x15e67cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x15e680: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x15e680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x15e684: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x15e684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x15e688: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x15E688u;
    SET_GPR_U32(ctx, 31, 0x15E690u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x15E688u, 0x15E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E690u;
label_15e690:
    // 0x15e690: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x15e690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x15e694: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x15e694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x15e698: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x15e698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x15e69c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x15E69Cu;
    SET_GPR_U32(ctx, 31, 0x15E6A4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x15E69Cu, 0x15E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E6A4u;
label_15e6a4:
    // 0x15e6a4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x15E6A4u;
    {
        const bool branch_taken_0x15e6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e6a4) {
            ctx->pc = 0x15E7E0u;
            return;
        }
    }
    ctx->pc = 0x15E6ACu;
}
