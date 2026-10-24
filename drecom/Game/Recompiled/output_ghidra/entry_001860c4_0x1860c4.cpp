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

// Function: entry_001860c4
// Address: 0x1860c4 - 0x186124
void entry_001860c4_0x1860c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001860c4_0x1860c4");
#endif

    switch (ctx->pc) {
        case 0x1860e8u: goto label_1860e8;
        case 0x18610cu: goto label_18610c;
        default: break;
    }

    ctx->pc = 0x1860c4u;

    // 0x1860c4: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1860c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1860c8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1860c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1860cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1860ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1860d0: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x1860d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1860d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1860d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1860d8: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x1860d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x1860dc: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x1860dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1860e0: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x1860E0u;
    SET_GPR_U32(ctx, 31, 0x1860E8u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x1860E8u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1860E8u) { return; }
    ctx->pc = 0x1860E8u;
label_1860e8:
    // 0x1860e8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1860e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1860ec: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1860ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1860f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1860f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1860f4: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x1860f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1860f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1860f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1860fc: 0x244502d0  addiu       $a1, $v0, 0x2D0
    ctx->pc = 0x1860fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x186100: 0x260601a0  addiu       $a2, $s0, 0x1A0
    ctx->pc = 0x186100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x186104: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x186104u;
    SET_GPR_U32(ctx, 31, 0x18610Cu);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x18610Cu;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18610Cu) { return; }
    ctx->pc = 0x18610Cu;
label_18610c:
    // 0x18610c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x18610cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186118: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x186118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18611c: 0x3e00008  jr          $ra
    ctx->pc = 0x18611Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18611Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186124u;
}
