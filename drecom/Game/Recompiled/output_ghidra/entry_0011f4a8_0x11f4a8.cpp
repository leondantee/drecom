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

// Function: entry_0011f4a8
// Address: 0x11f4a8 - 0x11f4f4
void entry_0011f4a8_0x11f4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f4a8_0x11f4a8");
#endif

    ctx->pc = 0x11f4a8u;

    // 0x11f4a8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x11f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x11f4ac: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x11f4acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x11f4b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11f4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11f4b4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x11f4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x11f4b8: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x11f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x11f4bc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x11f4bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x11f4c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11f4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11f4c4: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x11f4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x11f4c8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x11f4c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x11f4cc: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x11f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x11f4d0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11f4d4: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x11f4d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x11f4d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11f4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11f4dc: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x11f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x11f4e0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x11f4e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11f4e4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x11f4e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x11f4e8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x11f4e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x11F4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F4F4u;
}
