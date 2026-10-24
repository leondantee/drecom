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

// Function: Movie_loadimage
// Address: 0x35cbb0 - 0x35cbf8
void Movie_loadimage_0x35cbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Movie_loadimage_0x35cbb0");
#endif

    ctx->pc = 0x35cbb0u;

    // 0x35cbb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35cbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35cbb4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x35cbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x35cbb8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x35cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35cbbc: 0x3213c  dsll32      $a0, $v1, 4
    ctx->pc = 0x35cbbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 4));
    // 0x35cbc0: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x35cbc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x35cbc4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35cbc8: 0x3463a030  ori         $v1, $v1, 0xA030
    ctx->pc = 0x35cbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41008);
    // 0x35cbcc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35cbccu;
    runtime->Store32(rdram, ctx, 0x1000A030u, GPR_U32(ctx, 4)); // MMIO: 0x1000a030
    // 0x35cbd0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35cbd4: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x35cbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
    // 0x35cbd8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x35cbd8u;
    runtime->Store32(rdram, ctx, 0x1000A020u, GPR_U32(ctx, 0)); // MMIO: 0x1000a020
    // 0x35cbdc: 0x24040105  addiu       $a0, $zero, 0x105
    ctx->pc = 0x35cbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x35cbe0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35cbe4: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x35cbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x35cbe8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35cbe8u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 4)); // MMIO: 0x1000a000
    // 0x35cbec: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35cbecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35cbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x35CBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CBF8u;
}
