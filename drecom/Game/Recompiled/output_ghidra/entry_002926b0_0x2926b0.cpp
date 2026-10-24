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

// Function: entry_002926b0
// Address: 0x2926b0 - 0x2926f8
void entry_002926b0_0x2926b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002926b0_0x2926b0");
#endif

    switch (ctx->pc) {
        case 0x2926b8u: goto label_2926b8;
        default: break;
    }

    ctx->pc = 0x2926b0u;

    // 0x2926b0: 0xc0a4c30  jal         func_2930C0
    ctx->pc = 0x2926B0u;
    SET_GPR_U32(ctx, 31, 0x2926B8u);
    ctx->pc = 0x2930C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930C0u, 0x2926B0u, 0x2926B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2926B8u;
label_2926b8:
    // 0x2926b8: 0x92026608  lbu         $v0, 0x6608($s0)
    ctx->pc = 0x2926b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26120)));
    // 0x2926bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2926bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2926c0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2926C0u;
    {
        const bool branch_taken_0x2926c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2926c0) {
            ctx->pc = 0x292728u;
            return;
        }
    }
    ctx->pc = 0x2926C8u;
    // 0x2926c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2926c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2926cc: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x2926ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x2926d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2926d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2926d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2926d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2926d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2926D8u;
    {
        const bool branch_taken_0x2926d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2926d8) {
            ctx->pc = 0x2926F8u;
            return;
        }
    }
    ctx->pc = 0x2926E0u;
    // 0x2926e0: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x2926e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x2926e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2926e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2926e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2926E8u;
    {
        const bool branch_taken_0x2926e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2926e8) {
            ctx->pc = 0x2926F8u;
            return;
        }
    }
    ctx->pc = 0x2926F0u;
    // 0x2926f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2926f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2926f4: 0xa20265a8  sb          $v0, 0x65A8($s0)
    ctx->pc = 0x2926f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26024), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2926f8u;
}
