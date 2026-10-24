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

// Function: Set_Fire_start
// Address: 0x31b260 - 0x31b34c
void Set_Fire_start_0x31b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_Fire_start_0x31b260");
#endif

    switch (ctx->pc) {
        case 0x31b27cu: goto label_31b27c;
        default: break;
    }

    ctx->pc = 0x31b260u;

    // 0x31b260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31b264: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31b264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31b268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31b268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31b26c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x31b26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x31b270: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x31b270u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b274: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31B274u;
    {
        const bool branch_taken_0x31b274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b274) {
            ctx->pc = 0x31B2B8u;
            goto label_31b2b8;
        }
    }
    ctx->pc = 0x31B27Cu;
label_31b27c:
    // 0x31b27c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x31b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x31b280: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x31b280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b284: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b288: 0x8c7001ac  lw          $s0, 0x1AC($v1)
    ctx->pc = 0x31b288u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x31b28c: 0x8e041338  lw          $a0, 0x1338($s0)
    ctx->pc = 0x31b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x31b290: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x31b290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x31b294: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B294u;
    {
        const bool branch_taken_0x31b294 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31b294) {
            ctx->pc = 0x31B2B0u;
            goto label_31b2b0;
        }
    }
    ctx->pc = 0x31B29Cu;
    // 0x31b29c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x31b29cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b2a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x31b2a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31b2a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b2a8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31B2A8u;
    {
        const bool branch_taken_0x31b2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31b2a8) {
            ctx->pc = 0x31B2C8u;
            goto label_31b2c8;
        }
    }
    ctx->pc = 0x31B2B0u;
label_31b2b0:
    // 0x31b2b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31b2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31b2b4: 0x0  nop
    ctx->pc = 0x31b2b4u;
    // NOP
label_31b2b8:
    // 0x31b2b8: 0x2e230003  sltiu       $v1, $s1, 0x3
    ctx->pc = 0x31b2b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x31b2bc: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x31B2BCu;
    {
        const bool branch_taken_0x31b2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b2bc) {
            ctx->pc = 0x31B27Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b27c;
        }
    }
    ctx->pc = 0x31B2C4u;
    // 0x31b2c4: 0x0  nop
    ctx->pc = 0x31b2c4u;
    // NOP
label_31b2c8:
    // 0x31b2c8: 0x2e210003  sltiu       $at, $s1, 0x3
    ctx->pc = 0x31b2c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x31b2cc: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x31B2CCu;
    {
        const bool branch_taken_0x31b2cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b2cc) {
            ctx->pc = 0x31B338u;
            goto label_31b338;
        }
    }
    ctx->pc = 0x31B2D4u;
    // 0x31b2d4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x31b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b2d8: 0xae0312a4  sw          $v1, 0x12A4($s0)
    ctx->pc = 0x31b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4772), GPR_U32(ctx, 3));
    // 0x31b2dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b2e0: 0xae031298  sw          $v1, 0x1298($s0)
    ctx->pc = 0x31b2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4760), GPR_U32(ctx, 3));
    // 0x31b2e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31b2e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b2e8: 0x0  nop
    ctx->pc = 0x31b2e8u;
    // NOP
    // 0x31b2ec: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x31b2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x31b2f0: 0x3c03c348  lui         $v1, 0xC348
    ctx->pc = 0x31b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49992 << 16));
    // 0x31b2f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31b2f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b2f8: 0x0  nop
    ctx->pc = 0x31b2f8u;
    // NOP
    // 0x31b2fc: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x31b2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x31b300: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x31b300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x31b304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31b304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b308: 0x0  nop
    ctx->pc = 0x31b308u;
    // NOP
    // 0x31b30c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x31b30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x31b310: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31b310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31b314: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31b314u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b318: 0x0  nop
    ctx->pc = 0x31b318u;
    // NOP
    // 0x31b31c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x31b31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x31b320: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b324: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x31b324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b328: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x31b328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b32c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x31b32cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b330: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x31b330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b334: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31b334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_31b338:
    // 0x31b338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31b338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b33c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31b33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b340: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x31b340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31b344: 0x3e00008  jr          $ra
    ctx->pc = 0x31B344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B34Cu;
}
