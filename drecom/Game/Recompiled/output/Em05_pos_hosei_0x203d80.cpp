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

// Function: Em05_pos_hosei
// Address: 0x203d80 - 0x203e94
void Em05_pos_hosei_0x203d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_pos_hosei_0x203d80");
#endif

    switch (ctx->pc) {
        case 0x203db4u: goto label_203db4;
        case 0x203dccu: goto label_203dcc;
        case 0x203e08u: goto label_203e08;
        case 0x203e24u: goto label_203e24;
        case 0x203e54u: goto label_203e54;
        default: break;
    }

    ctx->pc = 0x203d80u;

    // 0x203d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x203d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x203d84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x203d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x203d88: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x203d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x203d8c: 0xa3a50028  sb          $a1, 0x28($sp)
    ctx->pc = 0x203d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 5));
    // 0x203d90: 0x93a20028  lbu         $v0, 0x28($sp)
    ctx->pc = 0x203d90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x203d94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x203d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x203d98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x203d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x203d9c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x203D9Cu;
    {
        const bool branch_taken_0x203d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203d9c) {
            ctx->pc = 0x203DBCu;
            goto label_203dbc;
        }
    }
    ctx->pc = 0x203DA4u;
    // 0x203da4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x203da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203da8: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x203da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x203dac: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x203DACu;
    SET_GPR_U32(ctx, 31, 0x203DB4u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x203DACu, 0x203DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203DB4u;
label_203db4:
    // 0x203db4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x203DB4u;
    {
        const bool branch_taken_0x203db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203db4) {
            ctx->pc = 0x203DCCu;
            goto label_203dcc;
        }
    }
    ctx->pc = 0x203DBCu;
label_203dbc:
    // 0x203dbc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x203dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203dc0: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x203dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x203dc4: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x203DC4u;
    SET_GPR_U32(ctx, 31, 0x203DCCu);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x203DC4u, 0x203DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203DCCu;
label_203dcc:
    // 0x203dcc: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x203dccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x203dd0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x203dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x203dd4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x203dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x203dd8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x203DD8u;
    {
        const bool branch_taken_0x203dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x203dd8) {
            ctx->pc = 0x203E24u;
            goto label_203e24;
        }
    }
    ctx->pc = 0x203DE0u;
    // 0x203de0: 0x93a20028  lbu         $v0, 0x28($sp)
    ctx->pc = 0x203de0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x203de4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x203de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x203de8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x203de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x203dec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x203DECu;
    {
        const bool branch_taken_0x203dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203dec) {
            ctx->pc = 0x203E10u;
            goto label_203e10;
        }
    }
    ctx->pc = 0x203DF4u;
    // 0x203df4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x203df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203df8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x203df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x203dfc: 0x344501c7  ori         $a1, $v0, 0x1C7
    ctx->pc = 0x203dfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)455);
    // 0x203e00: 0xc05a400  jal         func_169000
    ctx->pc = 0x203E00u;
    SET_GPR_U32(ctx, 31, 0x203E08u);
    ctx->pc = 0x169000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169000u, 0x203E00u, 0x203E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203E08u;
label_203e08:
    // 0x203e08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x203E08u;
    {
        const bool branch_taken_0x203e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203e08) {
            ctx->pc = 0x203E24u;
            goto label_203e24;
        }
    }
    ctx->pc = 0x203E10u;
label_203e10:
    // 0x203e10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x203e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203e14: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x203e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x203e18: 0x34450007  ori         $a1, $v0, 0x7
    ctx->pc = 0x203e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x203e1c: 0xc05a400  jal         func_169000
    ctx->pc = 0x203E1Cu;
    SET_GPR_U32(ctx, 31, 0x203E24u);
    ctx->pc = 0x169000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169000u, 0x203E1Cu, 0x203E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203E24u;
label_203e24:
    // 0x203e24: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x203e24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x203e28: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x203e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x203e2c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x203e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x203e30: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x203E30u;
    {
        const bool branch_taken_0x203e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x203e30) {
            ctx->pc = 0x203E84u;
            goto label_203e84;
        }
    }
    ctx->pc = 0x203E38u;
    // 0x203e38: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x203e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203e3c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x203e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x203e40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x203e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203e44: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x203e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x203e48: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x203e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x203e4c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x203E4Cu;
    SET_GPR_U32(ctx, 31, 0x203E54u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x203E4Cu, 0x203E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203E54u;
label_203e54:
    // 0x203e54: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x203e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x203e58: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x203e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x203e5c: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x203e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x203e60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x203e60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x203e64: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x203e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203e68: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x203e68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203e6c: 0x0  nop
    ctx->pc = 0x203e6cu;
    // NOP
    // 0x203e70: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x203E70u;
    {
        const bool branch_taken_0x203e70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x203e70) {
            ctx->pc = 0x203E84u;
            goto label_203e84;
        }
    }
    ctx->pc = 0x203E78u;
    // 0x203e78: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x203e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203e7c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x203e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203e80: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x203e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_203e84:
    // 0x203e84: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x203e84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203e88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x203e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x203e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x203E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203E94u;
}
