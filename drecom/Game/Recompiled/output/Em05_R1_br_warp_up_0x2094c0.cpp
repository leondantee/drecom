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

// Function: Em05_R1_br_warp_up
// Address: 0x2094c0 - 0x209580
void Em05_R1_br_warp_up_0x2094c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_br_warp_up_0x2094c0");
#endif

    switch (ctx->pc) {
        case 0x209570u: goto label_209570;
        default: break;
    }

    ctx->pc = 0x2094c0u;

    // 0x2094c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2094c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2094c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2094c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2094c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2094c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2094cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2094ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2094d0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2094d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2094d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2094d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2094d8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2094d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2094dc: 0x14200024  bnez        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x2094DCu;
    {
        const bool branch_taken_0x2094dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2094dc) {
            ctx->pc = 0x209570u;
            goto label_209570;
        }
    }
    ctx->pc = 0x2094E4u;
    // 0x2094e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2094e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2094e8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2094e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2094ec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2094ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2094f0: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x2094f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6192E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192E0u, _value); } while (0);
    // 0x2094f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2094f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2094f8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2094f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2094fc: 0xe42092f0  swc1        $f0, -0x6D10($at)
    ctx->pc = 0x2094fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F0u, _value); } while (0); }
    // 0x209500: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x209500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x209504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209508: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20950c: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x20950cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F4u, _value); } while (0); }
    // 0x209510: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209514: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209518: 0xe42092f8  swc1        $f0, -0x6D08($at)
    ctx->pc = 0x209518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F8u, _value); } while (0); }
    // 0x20951c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20951cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x209520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209524: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209528: 0xe42092fc  swc1        $f0, -0x6D04($at)
    ctx->pc = 0x209528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192FCu, _value); } while (0); }
    // 0x20952c: 0x3c02455a  lui         $v0, 0x455A
    ctx->pc = 0x20952cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17754 << 16));
    // 0x209530: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x209530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x209534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209538: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20953c: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x20953cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619300u, _value); } while (0); }
    // 0x209540: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x209540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x209544: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209548: 0xa4229304  sh          $v0, -0x6CFC($at)
    ctx->pc = 0x209548u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x619304u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619304u, _value); } while (0);
    // 0x20954c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20954cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209550: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x209550u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619306u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619306u, _value); } while (0);
    // 0x209554: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x209554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x209558: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x209558u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619307u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619307u, _value); } while (0);
    // 0x20955c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20955cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209560: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x209560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x209564: 0x244592e0  addiu       $a1, $v0, -0x6D20
    ctx->pc = 0x209564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x209568: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x209568u;
    SET_GPR_U32(ctx, 31, 0x209570u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x209568u, 0x209570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209570u;
label_209570:
    // 0x209570: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x209570u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209574: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x209574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x209578: 0x3e00008  jr          $ra
    ctx->pc = 0x209578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209580u;
}
