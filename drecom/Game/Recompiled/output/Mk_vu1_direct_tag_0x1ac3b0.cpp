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

// Function: Mk_vu1_direct_tag
// Address: 0x1ac3b0 - 0x1ac460
void Mk_vu1_direct_tag_0x1ac3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mk_vu1_direct_tag_0x1ac3b0");
#endif

    ctx->pc = 0x1ac3b0u;

    // 0x1ac3b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ac3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ac3b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ac3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ac3b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ac3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ac3bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ac3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ac3c0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1ac3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1ac3c4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1ac3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1ac3c8: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1ac3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1ac3cc: 0x26040a68  addiu       $a0, $s0, 0xA68
    ctx->pc = 0x1ac3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2664));
    // 0x1ac3d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ac3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ac3d4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1ac3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ac3d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ac3d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1ac3dc: 0x26050a68  addiu       $a1, $s0, 0xA68
    ctx->pc = 0x1ac3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2664));
    // 0x1ac3e0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1ac3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1ac3e4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1ac3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1ac3e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ac3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ac3ec: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1ac3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1ac3f0: 0x8e110a68  lw          $s1, 0xA68($s0)
    ctx->pc = 0x1ac3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
    // 0x1ac3f4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ac3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac3f8: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1ac3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1ac3fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ac3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ac400: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ac400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ac404: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x1ac404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1ac408: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ac408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac40c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1ac40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1ac410: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1ac410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1ac414: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ac414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ac418: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ac418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ac41c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ac41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ac420: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1ac420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1ac424: 0xae030a68  sw          $v1, 0xA68($s0)
    ctx->pc = 0x1ac424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2664), GPR_U32(ctx, 3));
    // 0x1ac428: 0x26040a68  addiu       $a0, $s0, 0xA68
    ctx->pc = 0x1ac428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2664));
    // 0x1ac42c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ac42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ac430: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1ac430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ac434: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ac434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1ac438: 0x26050a68  addiu       $a1, $s0, 0xA68
    ctx->pc = 0x1ac438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2664));
    // 0x1ac43c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1ac43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ac440: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1ac440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1ac444: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ac444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ac448: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1ac448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1ac44c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ac44cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ac450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac454: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ac454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ac458: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC460u;
}
