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

// Function: entry_0012fc28
// Address: 0x12fc28 - 0x12fcc8
void entry_0012fc28_0x12fc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fc28_0x12fc28");
#endif

    switch (ctx->pc) {
        case 0x12fc90u: goto label_12fc90;
        default: break;
    }

    ctx->pc = 0x12fc28u;

    // 0x12fc28: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc2c: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x12fc2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x12fc30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12fc34: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x12fc34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x12fc38: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc3c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x12fc3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x12fc40: 0x14600050  bnez        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x12FC40u;
    {
        const bool branch_taken_0x12fc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fc40) {
            ctx->pc = 0x12FD84u;
            return;
        }
    }
    ctx->pc = 0x12FC48u;
    // 0x12fc48: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc4c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12fc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fc50: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x12fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x12fc54: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x12fc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x12fc58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12fc58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fc5c: 0x0  nop
    ctx->pc = 0x12fc5cu;
    // NOP
    // 0x12fc60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12fc60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fc64: 0x0  nop
    ctx->pc = 0x12fc64u;
    // NOP
    // 0x12fc68: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x12FC68u;
    {
        const bool branch_taken_0x12fc68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fc68) {
            ctx->pc = 0x12FD3Cu;
            return;
        }
    }
    ctx->pc = 0x12FC70u;
    // 0x12fc70: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc74: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc78: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x12fc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x12fc7c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x12fc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12fc80: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12fc84: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12fc88: 0xc05cc90  jal         func_173240
    ctx->pc = 0x12FC88u;
    SET_GPR_U32(ctx, 31, 0x12FC90u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x12FC88u, 0x12FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC90u;
label_12fc90:
    // 0x12fc90: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x12fc90u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12fc94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12fc98: 0x1243000b  beq         $s2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x12FC98u;
    {
        const bool branch_taken_0x12fc98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fc98) {
            ctx->pc = 0x12FCC8u;
            return;
        }
    }
    ctx->pc = 0x12FCA0u;
    // 0x12fca0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fca4: 0x12430008  beq         $s2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12FCA4u;
    {
        const bool branch_taken_0x12fca4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fca4) {
            ctx->pc = 0x12FCC8u;
            return;
        }
    }
    ctx->pc = 0x12FCACu;
    // 0x12fcac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12fcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fcb0: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FCB0u;
    {
        const bool branch_taken_0x12fcb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fcb0) {
            ctx->pc = 0x12FCC8u;
            return;
        }
    }
    ctx->pc = 0x12FCB8u;
    // 0x12fcb8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FCB8u;
    {
        const bool branch_taken_0x12fcb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fcb8) {
            ctx->pc = 0x12FCC8u;
            return;
        }
    }
    ctx->pc = 0x12FCC0u;
    // 0x12fcc0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x12FCC0u;
    {
        const bool branch_taken_0x12fcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fcc0) {
            ctx->pc = 0x12FD3Cu;
            return;
        }
    }
    ctx->pc = 0x12FCC8u;
}
