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

// Function: R203_warp2
// Address: 0x269b70 - 0x269c24
void R203_warp2_0x269b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R203_warp2_0x269b70");
#endif

    switch (ctx->pc) {
        case 0x269b8cu: goto label_269b8c;
        case 0x269b98u: goto label_269b98;
        case 0x269c10u: goto label_269c10;
        default: break;
    }

    ctx->pc = 0x269b70u;

    // 0x269b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x269b74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x269b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x269b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x269b7c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x269b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x269b80: 0x2450fd20  addiu       $s0, $v0, -0x2E0
    ctx->pc = 0x269b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966560));
    // 0x269b84: 0xc084934  jal         func_2124D0
    ctx->pc = 0x269B84u;
    SET_GPR_U32(ctx, 31, 0x269B8Cu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x269B84u, 0x269B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B8Cu;
label_269b8c:
    // 0x269b8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x269b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269b90: 0xc055574  jal         func_1555D0
    ctx->pc = 0x269B90u;
    SET_GPR_U32(ctx, 31, 0x269B98u);
    ctx->pc = 0x1555D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1555D0u, 0x269B90u, 0x269B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B98u;
label_269b98:
    // 0x269b98: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x269B98u;
    {
        const bool branch_taken_0x269b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269b98) {
            ctx->pc = 0x269C08u;
            goto label_269c08;
        }
    }
    ctx->pc = 0x269BA0u;
    // 0x269ba0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x269ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x269ba4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x269ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x269ba8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x269ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x269bac: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x269BACu;
    {
        const bool branch_taken_0x269bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269bac) {
            ctx->pc = 0x269C08u;
            goto label_269c08;
        }
    }
    ctx->pc = 0x269BB4u;
    // 0x269bb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x269bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x269bb8: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x269bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x269bbc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x269bbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x269bc0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x269bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x269bc4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x269bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x269bc8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x269bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x269bcc: 0x3c02c28a  lui         $v0, 0xC28A
    ctx->pc = 0x269bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49802 << 16));
    // 0x269bd0: 0x344223d7  ori         $v0, $v0, 0x23D7
    ctx->pc = 0x269bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9175);
    // 0x269bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269bd8: 0x0  nop
    ctx->pc = 0x269bd8u;
    // NOP
    // 0x269bdc: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x269bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x269be0: 0x3c0245be  lui         $v0, 0x45BE
    ctx->pc = 0x269be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17854 << 16));
    // 0x269be4: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x269be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x269be8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269bec: 0x0  nop
    ctx->pc = 0x269becu;
    // NOP
    // 0x269bf0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x269bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x269bf4: 0x3c02c277  lui         $v0, 0xC277
    ctx->pc = 0x269bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49783 << 16));
    // 0x269bf8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x269bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x269bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269c00: 0x0  nop
    ctx->pc = 0x269c00u;
    // NOP
    // 0x269c04: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x269c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_269c08:
    // 0x269c08: 0xc084934  jal         func_2124D0
    ctx->pc = 0x269C08u;
    SET_GPR_U32(ctx, 31, 0x269C10u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x269C08u, 0x269C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269C10u;
label_269c10:
    // 0x269c10: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x269c10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269c18: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x269c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x269c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x269C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269C24u;
}
