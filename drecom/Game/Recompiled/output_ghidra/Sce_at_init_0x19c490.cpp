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

// Function: Sce_at_init
// Address: 0x19c490 - 0x19c520
void Sce_at_init_0x19c490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_at_init_0x19c490");
#endif

    switch (ctx->pc) {
        case 0x19c4acu: goto label_19c4ac;
        case 0x19c4f8u: goto label_19c4f8;
        default: break;
    }

    ctx->pc = 0x19c490u;

    // 0x19c490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c494: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x19c494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x19c498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c49c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c4a0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x19c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x19c4a4: 0x2471d390  addiu       $s1, $v1, -0x2C70
    ctx->pc = 0x19c4a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955920));
    // 0x19c4a8: 0x24100280  addiu       $s0, $zero, 0x280
    ctx->pc = 0x19c4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_19c4ac:
    // 0x19c4ac: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x19c4acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x19c4b0: 0x24710010  addiu       $s1, $v1, 0x10
    ctx->pc = 0x19c4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x19c4b4: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x19c4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x19c4b8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x19c4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x19c4bc: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x19C4BCu;
    {
        const bool branch_taken_0x19c4bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c4bc) {
            ctx->pc = 0x19C4ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c4ac;
        }
    }
    ctx->pc = 0x19C4C4u;
    // 0x19c4c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19c4c8: 0x8c231a94  lw          $v1, 0x1A94($at)
    ctx->pc = 0x19c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x19c4cc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x19c4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19c4d0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x19C4D0u;
    {
        const bool branch_taken_0x19c4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c4d0) {
            ctx->pc = 0x19C508u;
            goto label_19c508;
        }
    }
    ctx->pc = 0x19C4D8u;
    // 0x19c4d8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19c4dc: 0x2444d390  addiu       $a0, $v0, -0x2C70
    ctx->pc = 0x19c4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
    // 0x19c4e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19c4e4: 0x8c221a94  lw          $v0, 0x1A94($at)
    ctx->pc = 0x19c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x19c4e8: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x19c4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19c4ec: 0x24062800  addiu       $a2, $zero, 0x2800
    ctx->pc = 0x19c4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x19c4f0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x19C4F0u;
    SET_GPR_U32(ctx, 31, 0x19C4F8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x19C4F8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19C4F8u) { return; }
    ctx->pc = 0x19C4F8u;
label_19c4f8:
    // 0x19c4f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19c4fc: 0xac201a5c  sw          $zero, 0x1A5C($at)
    ctx->pc = 0x19c4fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D1A5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A5Cu, _value); } while (0);
    // 0x19c500: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19c500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19c504: 0xac201a60  sw          $zero, 0x1A60($at)
    ctx->pc = 0x19c504u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D1A60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A60u, _value); } while (0);
label_19c508:
    // 0x19c508: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x19c508u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c50c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c50cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c514: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19c514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19c518: 0x3e00008  jr          $ra
    ctx->pc = 0x19C518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C520u;
}
