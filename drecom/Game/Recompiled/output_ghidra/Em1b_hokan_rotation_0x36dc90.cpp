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

// Function: Em1b_hokan_rotation
// Address: 0x36dc90 - 0x36dd98
void Em1b_hokan_rotation_0x36dc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_hokan_rotation_0x36dc90");
#endif

    switch (ctx->pc) {
        case 0x36dcb0u: goto label_36dcb0;
        case 0x36dcc0u: goto label_36dcc0;
        case 0x36dcd8u: goto label_36dcd8;
        case 0x36dcecu: goto label_36dcec;
        case 0x36dd10u: goto label_36dd10;
        case 0x36dd38u: goto label_36dd38;
        case 0x36dd50u: goto label_36dd50;
        case 0x36dd64u: goto label_36dd64;
        case 0x36dd88u: goto label_36dd88;
        default: break;
    }

    ctx->pc = 0x36dc90u;

    // 0x36dc90: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x36dc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x36dc94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36dc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36dc98: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x36dc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x36dc9c: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x36dc9cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x36dca0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x36dca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36dca4: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x36dca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36dca8: 0xc067844  jal         func_19E110
    ctx->pc = 0x36DCA8u;
    SET_GPR_U32(ctx, 31, 0x36DCB0u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x36DCA8u, 0x36DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DCB0u;
label_36dcb0:
    // 0x36dcb0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x36dcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36dcb4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x36dcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36dcb8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x36DCB8u;
    SET_GPR_U32(ctx, 31, 0x36DCC0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x36DCC0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36DCC0u) { return; }
    ctx->pc = 0x36DCC0u;
label_36dcc0:
    // 0x36dcc0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x36dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36dcc4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x36dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x36dcc8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x36dcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36dccc: 0x24450240  addiu       $a1, $v0, 0x240
    ctx->pc = 0x36dcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x36dcd0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x36DCD0u;
    SET_GPR_U32(ctx, 31, 0x36DCD8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x36DCD8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36DCD8u) { return; }
    ctx->pc = 0x36DCD8u;
label_36dcd8:
    // 0x36dcd8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x36dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36dcdc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x36dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x36dce0: 0x24440240  addiu       $a0, $v0, 0x240
    ctx->pc = 0x36dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x36dce4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36DCE4u;
    SET_GPR_U32(ctx, 31, 0x36DCECu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36DCE4u, 0x36DCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DCECu;
label_36dcec:
    // 0x36dcec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x36dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36dcf0: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x36dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x36dcf4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x36dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36dcf8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x36dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x36dcfc: 0x24640210  addiu       $a0, $v1, 0x210
    ctx->pc = 0x36dcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x36dd00: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x36dd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36dd04: 0x24460210  addiu       $a2, $v0, 0x210
    ctx->pc = 0x36dd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x36dd08: 0xc040c00  jal         func_103000
    ctx->pc = 0x36DD08u;
    SET_GPR_U32(ctx, 31, 0x36DD10u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x36DD10u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36DD10u) { return; }
    ctx->pc = 0x36DD10u;
label_36dd10:
    // 0x36dd10: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x36dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36dd14: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x36dd14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x36dd18: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36dd18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36dd1c: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x36dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x36dd20: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x36DD20u;
    {
        const bool branch_taken_0x36dd20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x36dd20) {
            ctx->pc = 0x36DD88u;
            goto label_36dd88;
        }
    }
    ctx->pc = 0x36DD28u;
    // 0x36dd28: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x36dd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36dd2c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x36dd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36dd30: 0xc040ca2  jal         func_103288
    ctx->pc = 0x36DD30u;
    SET_GPR_U32(ctx, 31, 0x36DD38u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x36DD38u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36DD38u) { return; }
    ctx->pc = 0x36DD38u;
label_36dd38:
    // 0x36dd38: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x36dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36dd3c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x36dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x36dd40: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x36dd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36dd44: 0x244524a0  addiu       $a1, $v0, 0x24A0
    ctx->pc = 0x36dd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x36dd48: 0xc040c9e  jal         func_103278
    ctx->pc = 0x36DD48u;
    SET_GPR_U32(ctx, 31, 0x36DD50u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x36DD50u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36DD50u) { return; }
    ctx->pc = 0x36DD50u;
label_36dd50:
    // 0x36dd50: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x36dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36dd54: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x36dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x36dd58: 0x244424a0  addiu       $a0, $v0, 0x24A0
    ctx->pc = 0x36dd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x36dd5c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36DD5Cu;
    SET_GPR_U32(ctx, 31, 0x36DD64u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36DD5Cu, 0x36DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DD64u;
label_36dd64:
    // 0x36dd64: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x36dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36dd68: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x36dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x36dd6c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x36dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36dd70: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x36dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x36dd74: 0x24642470  addiu       $a0, $v1, 0x2470
    ctx->pc = 0x36dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 9328));
    // 0x36dd78: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x36dd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36dd7c: 0x24462470  addiu       $a2, $v0, 0x2470
    ctx->pc = 0x36dd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
    // 0x36dd80: 0xc040c00  jal         func_103000
    ctx->pc = 0x36DD80u;
    SET_GPR_U32(ctx, 31, 0x36DD88u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x36DD88u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36DD88u) { return; }
    ctx->pc = 0x36DD88u;
label_36dd88:
    // 0x36dd88: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36dd88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dd8c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x36dd8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x36dd90: 0x3e00008  jr          $ra
    ctx->pc = 0x36DD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DD98u;
}
