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

// Function: R203_warp1
// Address: 0x269ac0 - 0x269b68
void R203_warp1_0x269ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R203_warp1_0x269ac0");
#endif

    switch (ctx->pc) {
        case 0x269ae0u: goto label_269ae0;
        case 0x269b54u: goto label_269b54;
        default: break;
    }

    ctx->pc = 0x269ac0u;

    // 0x269ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x269ac4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x269ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x269ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x269acc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x269accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x269ad0: 0x2450fd20  addiu       $s0, $v0, -0x2E0
    ctx->pc = 0x269ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966560));
    // 0x269ad4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x269ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269ad8: 0xc055574  jal         func_1555D0
    ctx->pc = 0x269AD8u;
    SET_GPR_U32(ctx, 31, 0x269AE0u);
    ctx->pc = 0x1555D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1555D0u, 0x269AD8u, 0x269AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269AE0u;
label_269ae0:
    // 0x269ae0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x269AE0u;
    {
        const bool branch_taken_0x269ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269ae0) {
            ctx->pc = 0x269B4Cu;
            goto label_269b4c;
        }
    }
    ctx->pc = 0x269AE8u;
    // 0x269ae8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x269ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x269aec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x269aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x269af0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x269af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x269af4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x269AF4u;
    {
        const bool branch_taken_0x269af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269af4) {
            ctx->pc = 0x269B4Cu;
            goto label_269b4c;
        }
    }
    ctx->pc = 0x269AFCu;
    // 0x269afc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269b00: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x269b00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x269b04: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x269b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x269b08: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x269b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x269b0c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x269b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x269b10: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x269b10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x269b14: 0x3c02c13c  lui         $v0, 0xC13C
    ctx->pc = 0x269b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49468 << 16));
    // 0x269b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269b1c: 0x0  nop
    ctx->pc = 0x269b1cu;
    // NOP
    // 0x269b20: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x269b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x269b24: 0x3c0245be  lui         $v0, 0x45BE
    ctx->pc = 0x269b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17854 << 16));
    // 0x269b28: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x269b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x269b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269b30: 0x0  nop
    ctx->pc = 0x269b30u;
    // NOP
    // 0x269b34: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x269b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x269b38: 0x3c02c664  lui         $v0, 0xC664
    ctx->pc = 0x269b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50788 << 16));
    // 0x269b3c: 0x3442115c  ori         $v0, $v0, 0x115C
    ctx->pc = 0x269b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4444);
    // 0x269b40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269b44: 0x0  nop
    ctx->pc = 0x269b44u;
    // NOP
    // 0x269b48: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x269b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_269b4c:
    // 0x269b4c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x269B4Cu;
    SET_GPR_U32(ctx, 31, 0x269B54u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x269B4Cu, 0x269B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B54u;
label_269b54:
    // 0x269b54: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x269b54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269b58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269b5c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x269b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x269b60: 0x3e00008  jr          $ra
    ctx->pc = 0x269B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269B68u;
}
