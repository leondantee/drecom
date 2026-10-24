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

// Function: Set_ecd
// Address: 0x378160 - 0x3781bc
void Set_ecd_0x378160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_ecd_0x378160");
#endif

    ctx->pc = 0x378160u;

    // 0x378160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x378160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x378164: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x378164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x378168: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x378168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x37816c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x37816cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x378170: 0xac2095ac  sw          $zero, -0x6A54($at)
    ctx->pc = 0x378170u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6195ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195ACu, _value); } while (0);
    // 0x378174: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x378174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x378178: 0x245095a0  addiu       $s0, $v0, -0x6A60
    ctx->pc = 0x378178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940064));
    // 0x37817c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37817cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x378180: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x378180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6195A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195A8u, _value); } while (0);
    // 0x378184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x378184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378188: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x378188u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6195A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6195A0u, _value); } while (0);
    // 0x37818c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x37818cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6195A1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6195A1u, _value); } while (0);
    // 0x378190: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x378190u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6195A2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6195A2u, _value); } while (0);
    // 0x378194: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x378194u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195A8u));
    // 0x378198: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x378198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37819c: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x37819cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6195A4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6195A4u, _value); } while (0);
    // 0x3781a0: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x3781a0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x6195A4u));
    // 0x3781a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3781a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3781a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3781a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3781ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3781acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3781b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3781b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3781b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3781B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3781B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3781BCu;
}
