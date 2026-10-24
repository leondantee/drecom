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

// Function: entry_001d1188
// Address: 0x1d1188 - 0x1d11e0
void entry_001d1188_0x1d1188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1188_0x1d1188");
#endif

    ctx->pc = 0x1d1188u;

    // 0x1d1188: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x1d1188u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d118c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1D118Cu;
    {
        const bool branch_taken_0x1d118c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d118c) {
            ctx->pc = 0x1D1130u;
            return;
        }
    }
    ctx->pc = 0x1D1194u;
    // 0x1d1194: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d1194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1d1198: 0x2472b978  addiu       $s2, $v1, -0x4688
    ctx->pc = 0x1d1198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949240));
    // 0x1d119c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d119cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d11a0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1d11a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FB978u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB978u, _value); } while (0);
    // 0x1d11a4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1d11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1d11a8: 0x34631043  ori         $v1, $v1, 0x1043
    ctx->pc = 0x1d11a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x1d11ac: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1d11acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FB97Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB97Cu, _value); } while (0);
    // 0x1d11b0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1d11b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d11b4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d11b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d11b8: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1d11b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1d11bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d11bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d11c0: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x1d11c0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x1d11c4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1d11c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d11c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d11c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d11cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d11ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d11d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d11d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d11d4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d11d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d11d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D11D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D11D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D11E0u;
}
