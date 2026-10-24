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

// Function: Set_em_parts_meisai
// Address: 0x1750a0 - 0x175140
void Set_em_parts_meisai_0x1750a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_em_parts_meisai_0x1750a0");
#endif

    switch (ctx->pc) {
        case 0x1750fcu: goto label_1750fc;
        case 0x175110u: goto label_175110;
        case 0x175120u: goto label_175120;
        case 0x175130u: goto label_175130;
        default: break;
    }

    ctx->pc = 0x1750a0u;

    // 0x1750a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1750a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1750a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1750a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1750a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1750a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1750ac: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1750acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1750b0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1750b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1750b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1750b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1750b8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1750b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1750bc: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1750bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1750c0: 0x304200f9  andi        $v0, $v0, 0xF9
    ctx->pc = 0x1750c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)249);
    // 0x1750c4: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1750c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1750c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1750c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1750cc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1750ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1750d0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1750d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1750d4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1750d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1750d8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1750d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1750dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1750dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1750e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1750e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1750e4: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1750e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1750e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1750e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1750ec: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1750ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1750f0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1750f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1750f4: 0xc096450  jal         func_259140
    ctx->pc = 0x1750F4u;
    SET_GPR_U32(ctx, 31, 0x1750FCu);
    ctx->pc = 0x259140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259140u, 0x1750F4u, 0x1750FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1750FCu;
label_1750fc:
    // 0x1750fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1750fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175100: 0x2405021c  addiu       $a1, $zero, 0x21C
    ctx->pc = 0x175100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x175104: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x175104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x175108: 0xc096130  jal         func_2584C0
    ctx->pc = 0x175108u;
    SET_GPR_U32(ctx, 31, 0x175110u);
    ctx->pc = 0x2584C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2584C0u, 0x175108u, 0x175110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175110u;
label_175110:
    // 0x175110: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x175110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175114: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x175114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x175118: 0xc096268  jal         func_2589A0
    ctx->pc = 0x175118u;
    SET_GPR_U32(ctx, 31, 0x175120u);
    ctx->pc = 0x2589A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2589A0u, 0x175118u, 0x175120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175120u;
label_175120:
    // 0x175120: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x175120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175124: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x175124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x175128: 0xc096290  jal         func_258A40
    ctx->pc = 0x175128u;
    SET_GPR_U32(ctx, 31, 0x175130u);
    ctx->pc = 0x258A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A40u, 0x175128u, 0x175130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175130u;
label_175130:
    // 0x175130: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x175130u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175134: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x175134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x175138: 0x3e00008  jr          $ra
    ctx->pc = 0x175138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175140u;
}
