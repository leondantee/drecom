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

// Function: R203_warp0
// Address: 0x269a10 - 0x269ab8
void R203_warp0_0x269a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R203_warp0_0x269a10");
#endif

    switch (ctx->pc) {
        case 0x269a30u: goto label_269a30;
        case 0x269aa4u: goto label_269aa4;
        default: break;
    }

    ctx->pc = 0x269a10u;

    // 0x269a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x269a14: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x269a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x269a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x269a1c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x269a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x269a20: 0x2450fd20  addiu       $s0, $v0, -0x2E0
    ctx->pc = 0x269a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966560));
    // 0x269a24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x269a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269a28: 0xc055574  jal         func_1555D0
    ctx->pc = 0x269A28u;
    SET_GPR_U32(ctx, 31, 0x269A30u);
    ctx->pc = 0x1555D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1555D0u, 0x269A28u, 0x269A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269A30u;
label_269a30:
    // 0x269a30: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x269A30u;
    {
        const bool branch_taken_0x269a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269a30) {
            ctx->pc = 0x269A9Cu;
            goto label_269a9c;
        }
    }
    ctx->pc = 0x269A38u;
    // 0x269a38: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x269a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x269a3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x269a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x269a40: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x269a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x269a44: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x269A44u;
    {
        const bool branch_taken_0x269a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269a44) {
            ctx->pc = 0x269A9Cu;
            goto label_269a9c;
        }
    }
    ctx->pc = 0x269A4Cu;
    // 0x269a4c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x269a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x269a50: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x269a50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x269a54: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x269a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x269a58: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x269a58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x269a5c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x269a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x269a60: 0x3c02c13a  lui         $v0, 0xC13A
    ctx->pc = 0x269a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49466 << 16));
    // 0x269a64: 0x34428f5c  ori         $v0, $v0, 0x8F5C
    ctx->pc = 0x269a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36700);
    // 0x269a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269a6c: 0x0  nop
    ctx->pc = 0x269a6cu;
    // NOP
    // 0x269a70: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x269a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x269a74: 0x3c0245be  lui         $v0, 0x45BE
    ctx->pc = 0x269a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17854 << 16));
    // 0x269a78: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x269a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x269a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269a80: 0x0  nop
    ctx->pc = 0x269a80u;
    // NOP
    // 0x269a84: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x269a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x269a88: 0x3c024662  lui         $v0, 0x4662
    ctx->pc = 0x269a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18018 << 16));
    // 0x269a8c: 0x3442f2f6  ori         $v0, $v0, 0xF2F6
    ctx->pc = 0x269a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62198);
    // 0x269a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269a94: 0x0  nop
    ctx->pc = 0x269a94u;
    // NOP
    // 0x269a98: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x269a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_269a9c:
    // 0x269a9c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x269A9Cu;
    SET_GPR_U32(ctx, 31, 0x269AA4u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x269A9Cu, 0x269AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269AA4u;
label_269aa4:
    // 0x269aa4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x269aa4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269aac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x269aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x269ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x269AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269AB8u;
}
