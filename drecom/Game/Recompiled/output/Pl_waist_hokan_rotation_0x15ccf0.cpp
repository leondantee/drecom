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

// Function: Pl_waist_hokan_rotation
// Address: 0x15ccf0 - 0x15cdcc
void Pl_waist_hokan_rotation_0x15ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_waist_hokan_rotation_0x15ccf0");
#endif

    switch (ctx->pc) {
        case 0x15cd18u: goto label_15cd18;
        case 0x15cd28u: goto label_15cd28;
        case 0x15cd3cu: goto label_15cd3c;
        case 0x15cd4cu: goto label_15cd4c;
        case 0x15cd68u: goto label_15cd68;
        case 0x15cd78u: goto label_15cd78;
        case 0x15cd8cu: goto label_15cd8c;
        case 0x15cd9cu: goto label_15cd9c;
        case 0x15cdb8u: goto label_15cdb8;
        default: break;
    }

    ctx->pc = 0x15ccf0u;

    // 0x15ccf0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x15ccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x15ccf4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x15ccf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x15ccf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ccf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ccfc: 0xe7ac00a8  swc1        $f12, 0xA8($sp)
    ctx->pc = 0x15ccfcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x15cd00: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15cd04: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x15cd04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15cd08: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15cd0c: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x15cd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15cd10: 0xc067844  jal         func_19E110
    ctx->pc = 0x15CD10u;
    SET_GPR_U32(ctx, 31, 0x15CD18u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x15CD10u, 0x15CD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD18u;
label_15cd18:
    // 0x15cd18: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15cd1c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15cd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15cd20: 0xc040ca2  jal         func_103288
    ctx->pc = 0x15CD20u;
    SET_GPR_U32(ctx, 31, 0x15CD28u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x15CD28u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CD28u) { return; }
    ctx->pc = 0x15CD28u;
label_15cd28:
    // 0x15cd28: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15cd2c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15cd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15cd30: 0x24450240  addiu       $a1, $v0, 0x240
    ctx->pc = 0x15cd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x15cd34: 0xc040c9e  jal         func_103278
    ctx->pc = 0x15CD34u;
    SET_GPR_U32(ctx, 31, 0x15CD3Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x15CD3Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CD3Cu) { return; }
    ctx->pc = 0x15CD3Cu;
label_15cd3c:
    // 0x15cd3c: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15cd40: 0x24440240  addiu       $a0, $v0, 0x240
    ctx->pc = 0x15cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x15cd44: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x15CD44u;
    SET_GPR_U32(ctx, 31, 0x15CD4Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x15CD44u, 0x15CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD4Cu;
label_15cd4c:
    // 0x15cd4c: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x15cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15cd50: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15cd54: 0x24640210  addiu       $a0, $v1, 0x210
    ctx->pc = 0x15cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x15cd58: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15cd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15cd5c: 0x24460210  addiu       $a2, $v0, 0x210
    ctx->pc = 0x15cd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x15cd60: 0xc040c00  jal         func_103000
    ctx->pc = 0x15CD60u;
    SET_GPR_U32(ctx, 31, 0x15CD68u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x15CD68u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CD68u) { return; }
    ctx->pc = 0x15CD68u;
label_15cd68:
    // 0x15cd68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15cd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15cd6c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15cd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15cd70: 0xc040ca2  jal         func_103288
    ctx->pc = 0x15CD70u;
    SET_GPR_U32(ctx, 31, 0x15CD78u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x15CD78u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CD78u) { return; }
    ctx->pc = 0x15CD78u;
label_15cd78:
    // 0x15cd78: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15cd7c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15cd80: 0x24451e60  addiu       $a1, $v0, 0x1E60
    ctx->pc = 0x15cd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7776));
    // 0x15cd84: 0xc040c9e  jal         func_103278
    ctx->pc = 0x15CD84u;
    SET_GPR_U32(ctx, 31, 0x15CD8Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x15CD8Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CD8Cu) { return; }
    ctx->pc = 0x15CD8Cu;
label_15cd8c:
    // 0x15cd8c: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15cd90: 0x24441e60  addiu       $a0, $v0, 0x1E60
    ctx->pc = 0x15cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7776));
    // 0x15cd94: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x15CD94u;
    SET_GPR_U32(ctx, 31, 0x15CD9Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x15CD94u, 0x15CD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD9Cu;
label_15cd9c:
    // 0x15cd9c: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x15cd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15cda0: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15cda4: 0x24641e30  addiu       $a0, $v1, 0x1E30
    ctx->pc = 0x15cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7728));
    // 0x15cda8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15cda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15cdac: 0x24461e30  addiu       $a2, $v0, 0x1E30
    ctx->pc = 0x15cdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 7728));
    // 0x15cdb0: 0xc040c00  jal         func_103000
    ctx->pc = 0x15CDB0u;
    SET_GPR_U32(ctx, 31, 0x15CDB8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x15CDB8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CDB8u) { return; }
    ctx->pc = 0x15CDB8u;
label_15cdb8:
    // 0x15cdb8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15cdb8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cdbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cdbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cdc0: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x15cdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15cdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x15CDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CDCCu;
}
