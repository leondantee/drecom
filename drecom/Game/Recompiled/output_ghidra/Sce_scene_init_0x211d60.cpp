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

// Function: Sce_scene_init
// Address: 0x211d60 - 0x211dcc
void Sce_scene_init_0x211d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_scene_init_0x211d60");
#endif

    switch (ctx->pc) {
        case 0x211dbcu: goto label_211dbc;
        default: break;
    }

    ctx->pc = 0x211d60u;

    // 0x211d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211d64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x211d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x211d68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x211d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x211d6c: 0xa0204f11  sb          $zero, 0x4F11($at)
    ctx->pc = 0x211d6cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x211d70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x211d74: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x211d74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x211d78: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x211d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x211d7c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x211d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x211d80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x211d84: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x211d84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x211d88: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x211d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x211d8c: 0xa020f001  sb          $zero, -0xFFF($at)
    ctx->pc = 0x211d8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5EF001u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5EF001u, _value); } while (0);
    // 0x211d90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x211d94: 0xac201a9c  sw          $zero, 0x1A9C($at)
    ctx->pc = 0x211d94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x211d98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x211d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211d9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x211da0: 0xac221a8c  sw          $v0, 0x1A8C($at)
    ctx->pc = 0x211da0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A8Cu, _value); } while (0);
    // 0x211da4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x211da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x211da8: 0x24441a6c  addiu       $a0, $v0, 0x1A6C
    ctx->pc = 0x211da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6764));
    // 0x211dac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x211dacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x211db0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x211db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x211db4: 0xc046314  jal         func_118C50
    ctx->pc = 0x211DB4u;
    SET_GPR_U32(ctx, 31, 0x211DBCu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x211DBCu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x211DBCu) { return; }
    ctx->pc = 0x211DBCu;
label_211dbc:
    // 0x211dbc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x211dbcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211dc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x211dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x211dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x211DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211DCCu;
}
