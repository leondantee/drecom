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

// Function: Em01s_R1_walk
// Address: 0x308980 - 0x308a7c
void Em01s_R1_walk_0x308980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01s_R1_walk_0x308980");
#endif

    switch (ctx->pc) {
        case 0x3089d4u: goto label_3089d4;
        case 0x308a18u: goto label_308a18;
        case 0x308a2cu: goto label_308a2c;
        case 0x308a44u: goto label_308a44;
        case 0x308a50u: goto label_308a50;
        case 0x308a60u: goto label_308a60;
        case 0x308a6cu: goto label_308a6c;
        default: break;
    }

    ctx->pc = 0x308980u;

    // 0x308980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308984: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x308984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x308988: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x308988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x30898c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30898cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308990: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x308990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x308994: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x308994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x308998: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30899c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30899Cu;
    {
        const bool branch_taken_0x30899c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30899c) {
            ctx->pc = 0x3089ECu;
            goto label_3089ec;
        }
    }
    ctx->pc = 0x3089A4u;
    // 0x3089a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3089A4u;
    {
        const bool branch_taken_0x3089a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3089a4) {
            ctx->pc = 0x3089B4u;
            goto label_3089b4;
        }
    }
    ctx->pc = 0x3089ACu;
    // 0x3089ac: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3089ACu;
    {
        const bool branch_taken_0x3089ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3089ac) {
            ctx->pc = 0x308A6Cu;
            goto label_308a6c;
        }
    }
    ctx->pc = 0x3089B4u;
label_3089b4:
    // 0x3089b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3089b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3089b8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3089b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3089bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3089bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3089c0: 0x2406283c  addiu       $a2, $zero, 0x283C
    ctx->pc = 0x3089c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10300));
    // 0x3089c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3089c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3089c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3089c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3089cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3089CCu;
    SET_GPR_U32(ctx, 31, 0x3089D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3089CCu, 0x3089D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3089D4u;
label_3089d4:
    // 0x3089d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3089d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3089d8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x3089d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x3089dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3089dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3089e0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3089e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3089e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3089e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3089e8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3089e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3089ec:
    // 0x3089ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3089ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3089f0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x3089f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3089f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3089f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3089f8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x3089f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x3089fc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3089fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x308a00: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x308a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x308a04: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x308a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x308a08: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x308a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x308a0c: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x308a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x308a10: 0xc05c848  jal         func_172120
    ctx->pc = 0x308A10u;
    SET_GPR_U32(ctx, 31, 0x308A18u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x308A10u, 0x308A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A18u;
label_308a18:
    // 0x308a18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308a1c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x308a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308a20: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x308a20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x308a24: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x308A24u;
    SET_GPR_U32(ctx, 31, 0x308A2Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x308A24u, 0x308A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A2Cu;
label_308a2c:
    // 0x308a2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308a30: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x308a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x308a34: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308a38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x308a38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x308a3c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x308A3Cu;
    SET_GPR_U32(ctx, 31, 0x308A44u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x308A3Cu, 0x308A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A44u;
label_308a44:
    // 0x308a44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308a48: 0xc05cd10  jal         func_173440
    ctx->pc = 0x308A48u;
    SET_GPR_U32(ctx, 31, 0x308A50u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x308A48u, 0x308A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A50u;
label_308a50:
    // 0x308a50: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308a54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x308a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x308a58: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x308A58u;
    SET_GPR_U32(ctx, 31, 0x308A60u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x308A58u, 0x308A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A60u;
label_308a60:
    // 0x308a60: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308a64: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x308A64u;
    SET_GPR_U32(ctx, 31, 0x308A6Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x308A64u, 0x308A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A6Cu;
label_308a6c:
    // 0x308a6c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x308a6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308a70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x308a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x308a74: 0x3e00008  jr          $ra
    ctx->pc = 0x308A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308A7Cu;
}
