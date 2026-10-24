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

// Function: R10f_event_end
// Address: 0x27ab30 - 0x27abc0
void R10f_event_end_0x27ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10f_event_end_0x27ab30");
#endif

    switch (ctx->pc) {
        case 0x27ab50u: goto label_27ab50;
        default: break;
    }

    ctx->pc = 0x27ab30u;

    // 0x27ab30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27ab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27ab34: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x27ab34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x27ab38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27ab38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27ab3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27ab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27ab40: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27ab44: 0x24511ac0  addiu       $s1, $v0, 0x1AC0
    ctx->pc = 0x27ab44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    // 0x27ab48: 0xc0a128c  jal         func_284A30
    ctx->pc = 0x27AB48u;
    SET_GPR_U32(ctx, 31, 0x27AB50u);
    ctx->pc = 0x284A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284A30u, 0x27AB48u, 0x27AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AB50u;
label_27ab50:
    // 0x27ab50: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x27ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x27ab54: 0x247095a0  addiu       $s0, $v1, -0x6A60
    ctx->pc = 0x27ab54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940064));
    // 0x27ab58: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x27ab58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6195A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6195A0u, _value); } while (0);
    // 0x27ab5c: 0x3c0345bd  lui         $v1, 0x45BD
    ctx->pc = 0x27ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17853 << 16));
    // 0x27ab60: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x27ab60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x27ab64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27ab64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ab68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27ab68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27ab6c: 0xe420dce0  swc1        $f0, -0x2320($at)
    ctx->pc = 0x27ab6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE0u, _value); } while (0); }
    // 0x27ab70: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x27ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x27ab74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27ab74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ab78: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27ab78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27ab7c: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x27ab7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x27ab80: 0x3c03c5a2  lui         $v1, 0xC5A2
    ctx->pc = 0x27ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50594 << 16));
    // 0x27ab84: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x27ab84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x27ab88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27ab88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ab8c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27ab8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27ab90: 0xe420dce8  swc1        $f0, -0x2318($at)
    ctx->pc = 0x27ab90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE8u, _value); } while (0); }
    // 0x27ab94: 0x3c033fae  lui         $v1, 0x3FAE
    ctx->pc = 0x27ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16302 << 16));
    // 0x27ab98: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x27ab98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x27ab9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27ab9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aba0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27aba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27aba4: 0xe420dc94  swc1        $f0, -0x236C($at)
    ctx->pc = 0x27aba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDC94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC94u, _value); } while (0); }
    // 0x27aba8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x27aba8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27abac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27abacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27abb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27abb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27abb4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27abb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27abb8: 0x3e00008  jr          $ra
    ctx->pc = 0x27ABB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ABB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27ABC0u;
}
