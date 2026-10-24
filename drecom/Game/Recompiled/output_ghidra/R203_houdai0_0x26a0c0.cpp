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

// Function: R203_houdai0
// Address: 0x26a0c0 - 0x26a150
void R203_houdai0_0x26a0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R203_houdai0_0x26a0c0");
#endif

    ctx->pc = 0x26a0c0u;

    // 0x26a0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26a0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26a0c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a0c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a0cc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x26a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x26a0d0: 0x2471dbc0  addiu       $s1, $v1, -0x2440
    ctx->pc = 0x26a0d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x26a0d4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x26a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x26a0d8: 0x2470fd20  addiu       $s0, $v1, -0x2E0
    ctx->pc = 0x26a0d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966560));
    // 0x26a0dc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x26a0dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61FD20u));
    // 0x26a0e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x26a0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x26a0e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x26a0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x26a0e8: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x26A0E8u;
    {
        const bool branch_taken_0x26a0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a0e8) {
            ctx->pc = 0x26A13Cu;
            goto label_26a13c;
        }
    }
    ctx->pc = 0x26A0F0u;
    // 0x26a0f0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x26a0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x26a0f4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x26a0f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26a0f8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x26a0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x26a0fc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x26a0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x26a100: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x26a100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a104: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x26a104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x26a108: 0xc6210124  lwc1        $f1, 0x124($s1)
    ctx->pc = 0x26a108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a10c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x26a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x26a110: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26a110u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a114: 0x0  nop
    ctx->pc = 0x26a114u;
    // NOP
    // 0x26a118: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26a118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26a11c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x26a11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x26a120: 0xc6200128  lwc1        $f0, 0x128($s1)
    ctx->pc = 0x26a120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a124: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x26a124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x26a128: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x26a128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a12c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x26a12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x26a130: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26a130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a134: 0x0  nop
    ctx->pc = 0x26a134u;
    // NOP
    // 0x26a138: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x26a138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_26a13c:
    // 0x26a13c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a13cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a144: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26a144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26a148: 0x3e00008  jr          $ra
    ctx->pc = 0x26A148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A150u;
}
