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

// Function: entry_00166a00
// Address: 0x166a00 - 0x166b50
void entry_00166a00_0x166a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166a00_0x166a00");
#endif

    switch (ctx->pc) {
        case 0x166a18u: goto label_166a18;
        case 0x166a30u: goto label_166a30;
        case 0x166a48u: goto label_166a48;
        case 0x166a60u: goto label_166a60;
        case 0x166a78u: goto label_166a78;
        case 0x166a90u: goto label_166a90;
        case 0x166aa8u: goto label_166aa8;
        case 0x166ac0u: goto label_166ac0;
        case 0x166ad8u: goto label_166ad8;
        case 0x166af0u: goto label_166af0;
        case 0x166b08u: goto label_166b08;
        case 0x166b20u: goto label_166b20;
        default: break;
    }

    ctx->pc = 0x166a00u;

    // 0x166a00: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166a04: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x166a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x166a08: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x166a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x166a0c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x166a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x166a10: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166A10u;
    SET_GPR_U32(ctx, 31, 0x166A18u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166A18u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166A18u) { return; }
    ctx->pc = 0x166A18u;
label_166a18:
    // 0x166a18: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166a1c: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x166a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x166a20: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x166a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x166a24: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x166a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x166a28: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166A28u;
    SET_GPR_U32(ctx, 31, 0x166A30u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166A30u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166A30u) { return; }
    ctx->pc = 0x166A30u;
label_166a30:
    // 0x166a30: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166a34: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x166a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x166a38: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x166a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x166a3c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x166a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x166a40: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166A40u;
    SET_GPR_U32(ctx, 31, 0x166A48u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166A48u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166A48u) { return; }
    ctx->pc = 0x166A48u;
label_166a48:
    // 0x166a48: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166a4c: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x166a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x166a50: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x166a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x166a54: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x166a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x166a58: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166A58u;
    SET_GPR_U32(ctx, 31, 0x166A60u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166A60u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166A60u) { return; }
    ctx->pc = 0x166A60u;
label_166a60:
    // 0x166a60: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166a64: 0x244401e0  addiu       $a0, $v0, 0x1E0
    ctx->pc = 0x166a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x166a68: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x166a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x166a6c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x166a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x166a70: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166A70u;
    SET_GPR_U32(ctx, 31, 0x166A78u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166A78u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166A78u) { return; }
    ctx->pc = 0x166A78u;
label_166a78:
    // 0x166a78: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166a7c: 0x244401f0  addiu       $a0, $v0, 0x1F0
    ctx->pc = 0x166a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    // 0x166a80: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x166a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x166a84: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x166a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x166a88: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166A88u;
    SET_GPR_U32(ctx, 31, 0x166A90u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166A90u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166A90u) { return; }
    ctx->pc = 0x166A90u;
label_166a90:
    // 0x166a90: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166a94: 0x24440270  addiu       $a0, $v0, 0x270
    ctx->pc = 0x166a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x166a98: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x166a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x166a9c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x166a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x166aa0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166AA0u;
    SET_GPR_U32(ctx, 31, 0x166AA8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166AA8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166AA8u) { return; }
    ctx->pc = 0x166AA8u;
label_166aa8:
    // 0x166aa8: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166aac: 0x244402f0  addiu       $a0, $v0, 0x2F0
    ctx->pc = 0x166aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x166ab0: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x166ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x166ab4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x166ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x166ab8: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166AB8u;
    SET_GPR_U32(ctx, 31, 0x166AC0u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166AC0u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166AC0u) { return; }
    ctx->pc = 0x166AC0u;
label_166ac0:
    // 0x166ac0: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166ac4: 0x24440350  addiu       $a0, $v0, 0x350
    ctx->pc = 0x166ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    // 0x166ac8: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x166ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x166acc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x166accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x166ad0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166AD0u;
    SET_GPR_U32(ctx, 31, 0x166AD8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166AD8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166AD8u) { return; }
    ctx->pc = 0x166AD8u;
label_166ad8:
    // 0x166ad8: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166adc: 0x24440360  addiu       $a0, $v0, 0x360
    ctx->pc = 0x166adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x166ae0: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x166ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x166ae4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x166ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x166ae8: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166AE8u;
    SET_GPR_U32(ctx, 31, 0x166AF0u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166AF0u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166AF0u) { return; }
    ctx->pc = 0x166AF0u;
label_166af0:
    // 0x166af0: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166af4: 0x244403e0  addiu       $a0, $v0, 0x3E0
    ctx->pc = 0x166af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
    // 0x166af8: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x166af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x166afc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x166afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x166b00: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166B00u;
    SET_GPR_U32(ctx, 31, 0x166B08u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166B08u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166B08u) { return; }
    ctx->pc = 0x166B08u;
label_166b08:
    // 0x166b08: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x166b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166b0c: 0x24440460  addiu       $a0, $v0, 0x460
    ctx->pc = 0x166b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1120));
    // 0x166b10: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x166b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x166b14: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x166b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x166b18: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x166B18u;
    SET_GPR_U32(ctx, 31, 0x166B20u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x166B20u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x166B20u) { return; }
    ctx->pc = 0x166B20u;
label_166b20:
    // 0x166b20: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x166b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x166b24: 0x346400a0  ori         $a0, $v1, 0xA0
    ctx->pc = 0x166b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x166b28: 0x8fa30340  lw          $v1, 0x340($sp)
    ctx->pc = 0x166b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166b2c: 0x246303e0  addiu       $v1, $v1, 0x3E0
    ctx->pc = 0x166b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 992));
    // 0x166b30: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x166b30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x166b34: 0x8fa30340  lw          $v1, 0x340($sp)
    ctx->pc = 0x166b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x166b38: 0x24630360  addiu       $v1, $v1, 0x360
    ctx->pc = 0x166b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 864));
    // 0x166b3c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x166b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x166b40: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x166b40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166b44: 0x27bd0380  addiu       $sp, $sp, 0x380
    ctx->pc = 0x166b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x166b48: 0x3e00008  jr          $ra
    ctx->pc = 0x166B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166B50u;
}
