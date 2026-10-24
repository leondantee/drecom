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

// Function: Add_speedXYZ2
// Address: 0x1735e0 - 0x173640
void Add_speedXYZ2_0x1735e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Add_speedXYZ2_0x1735e0");
#endif

    switch (ctx->pc) {
        case 0x173600u: goto label_173600;
        case 0x173614u: goto label_173614;
        case 0x173630u: goto label_173630;
        default: break;
    }

    ctx->pc = 0x1735e0u;

    // 0x1735e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1735e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1735e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1735e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1735e8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1735e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1735ec: 0xe7ac0058  swc1        $f12, 0x58($sp)
    ctx->pc = 0x1735ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1735f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1735f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1735f4: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x1735f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1735f8: 0xc067844  jal         func_19E110
    ctx->pc = 0x1735F8u;
    SET_GPR_U32(ctx, 31, 0x173600u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x1735F8u, 0x173600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173600u;
label_173600:
    // 0x173600: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x173600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173604: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x173604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173608: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x173608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x17360c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x17360Cu;
    SET_GPR_U32(ctx, 31, 0x173614u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x173614u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173614u) { return; }
    ctx->pc = 0x173614u;
label_173614:
    // 0x173614: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x173614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173618: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x173618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17361c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x17361cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x173620: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x173620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173624: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x173624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x173628: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x173628u;
    SET_GPR_U32(ctx, 31, 0x173630u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x173630u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173630u) { return; }
    ctx->pc = 0x173630u;
label_173630:
    // 0x173630: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x173630u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173634: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x173634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x173638: 0x3e00008  jr          $ra
    ctx->pc = 0x173638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173640u;
}
