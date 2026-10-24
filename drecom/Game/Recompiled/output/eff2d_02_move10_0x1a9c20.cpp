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

// Function: eff2d_02_move10
// Address: 0x1a9c20 - 0x1a9e2c
void eff2d_02_move10_0x1a9c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_02_move10_0x1a9c20");
#endif

    switch (ctx->pc) {
        case 0x1a9c44u: goto label_1a9c44;
        case 0x1a9d04u: goto label_1a9d04;
        case 0x1a9d8cu: goto label_1a9d8c;
        case 0x1a9db8u: goto label_1a9db8;
        case 0x1a9e18u: goto label_1a9e18;
        default: break;
    }

    ctx->pc = 0x1a9c20u;

    // 0x1a9c20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a9c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a9c24: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1a9c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a9c28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a9c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a9c2c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1a9c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1a9c30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9c34: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x1a9c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1a9c38: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a9c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a9c3c: 0xc0673dc  jal         func_19CF70
    ctx->pc = 0x1A9C3Cu;
    SET_GPR_U32(ctx, 31, 0x1A9C44u);
    ctx->pc = 0x19CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CF70u, 0x1A9C3Cu, 0x1A9C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9C44u;
label_1a9c44:
    // 0x1a9c44: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A9C44u;
    {
        const bool branch_taken_0x1a9c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c44) {
            ctx->pc = 0x1A9CE4u;
            goto label_1a9ce4;
        }
    }
    ctx->pc = 0x1A9C4Cu;
    // 0x1a9c4c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a9c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9c50: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x1a9c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x1a9c54: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x1a9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1a9c58: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a9c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a9c5c: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x1a9c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x1a9c60: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a9c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9c64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a9c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9c68: 0xac640128  sw          $a0, 0x128($v1)
    ctx->pc = 0x1a9c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 4));
    // 0x1a9c6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a9c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9c70: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1a9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1a9c74: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1a9c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1a9c78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a9c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9c7c: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x1a9c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9c80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a9c80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a9c84: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x1a9c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x1a9c88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a9c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9c8c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1a9c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1a9c90: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1a9c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1a9c94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a9c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9c98: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x1a9c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9c9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a9c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a9ca0: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x1a9ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x1a9ca4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a9ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9ca8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1a9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1a9cac: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1a9cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1a9cb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a9cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9cb4: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x1a9cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9cb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a9cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a9cbc: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x1a9cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x1a9cc0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a9cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9cc4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1a9cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1a9cc8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1a9cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1a9ccc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a9cccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9cd0: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x1a9cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9cd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a9cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a9cd8: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x1a9cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x1a9cdc: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1A9CDCu;
    {
        const bool branch_taken_0x1a9cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9cdc) {
            ctx->pc = 0x1A9E18u;
            goto label_1a9e18;
        }
    }
    ctx->pc = 0x1A9CE4u;
label_1a9ce4:
    // 0x1a9ce4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a9ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9ce8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9cec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a9cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a9cf0: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x1a9cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1a9cf4: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x1a9cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1a9cf8: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x1a9cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x1a9cfc: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1A9CFCu;
    SET_GPR_U32(ctx, 31, 0x1A9D04u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1A9CFCu, 0x1A9D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D04u;
label_1a9d04:
    // 0x1a9d04: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1a9d04u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a9d08: 0x12000043  beqz        $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1A9D08u;
    {
        const bool branch_taken_0x1a9d08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9d08) {
            ctx->pc = 0x1A9E18u;
            goto label_1a9e18;
        }
    }
    ctx->pc = 0x1A9D10u;
    // 0x1a9d10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a9d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9d14: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1a9d14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9d18: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1a9d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a9d1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a9d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9d20: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1a9d20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a9d24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9d28: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1a9d28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9d2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a9d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a9d30: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x1a9d30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a9d34: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A9D34u;
    {
        const bool branch_taken_0x1a9d34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9d34) {
            ctx->pc = 0x1A9D54u;
            goto label_1a9d54;
        }
    }
    ctx->pc = 0x1A9D3Cu;
    // 0x1a9d3c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a9d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9d40: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x1a9d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1a9d44: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1a9d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1a9d48: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x1a9d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
    // 0x1a9d4c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1A9D4Cu;
    {
        const bool branch_taken_0x1a9d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9d4c) {
            ctx->pc = 0x1A9E18u;
            goto label_1a9e18;
        }
    }
    ctx->pc = 0x1A9D54u;
label_1a9d54:
    // 0x1a9d54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9d58: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x1a9d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x1a9d5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9d60: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9D60u;
    {
        const bool branch_taken_0x1a9d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9d60) {
            ctx->pc = 0x1A9D94u;
            goto label_1a9d94;
        }
    }
    ctx->pc = 0x1A9D68u;
    // 0x1a9d68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a9d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9d6c: 0x3c02466a  lui         $v0, 0x466A
    ctx->pc = 0x1a9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18026 << 16));
    // 0x1a9d70: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x1a9d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x1a9d74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a9d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a9d78: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1a9d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1a9d7c: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x1a9d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x1a9d80: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1a9d80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a9d84: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1A9D84u;
    SET_GPR_U32(ctx, 31, 0x1A9D8Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1A9D84u, 0x1A9D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D8Cu;
label_1a9d8c:
    // 0x1a9d8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A9D8Cu;
    {
        const bool branch_taken_0x1a9d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9d8c) {
            ctx->pc = 0x1A9DB8u;
            goto label_1a9db8;
        }
    }
    ctx->pc = 0x1A9D94u;
label_1a9d94:
    // 0x1a9d94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a9d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9d98: 0x3c02466a  lui         $v0, 0x466A
    ctx->pc = 0x1a9d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18026 << 16));
    // 0x1a9d9c: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x1a9d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x1a9da0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a9da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a9da4: 0x2404010b  addiu       $a0, $zero, 0x10B
    ctx->pc = 0x1a9da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
    // 0x1a9da8: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x1a9da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x1a9dac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1a9dacu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a9db0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1A9DB0u;
    SET_GPR_U32(ctx, 31, 0x1A9DB8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1A9DB0u, 0x1A9DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9DB8u;
label_1a9db8:
    // 0x1a9db8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a9db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a9dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9dc0: 0x0  nop
    ctx->pc = 0x1a9dc0u;
    // NOP
    // 0x1a9dc4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a9dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a9dc8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a9dcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9dd0: 0x0  nop
    ctx->pc = 0x1a9dd0u;
    // NOP
    // 0x1a9dd4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1a9dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1a9dd8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a9dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a9ddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9de0: 0x0  nop
    ctx->pc = 0x1a9de0u;
    // NOP
    // 0x1a9de4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1a9de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1a9de8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a9de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9df0: 0x0  nop
    ctx->pc = 0x1a9df0u;
    // NOP
    // 0x1a9df4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1a9df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1a9df8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a9df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9dfc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9e00: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x1a9e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1a9e04: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x1a9e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1a9e08: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1a9e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a9e0c: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1a9e0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a9e10: 0xc0c9720  jal         func_325C80
    ctx->pc = 0x1A9E10u;
    SET_GPR_U32(ctx, 31, 0x1A9E18u);
    ctx->pc = 0x325C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C80u, 0x1A9E10u, 0x1A9E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E18u;
label_1a9e18:
    // 0x1a9e18: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1a9e18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9e1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a9e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9e20: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a9e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a9e24: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9E2Cu;
}
