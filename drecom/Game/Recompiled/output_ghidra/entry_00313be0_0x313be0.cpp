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

// Function: entry_00313be0
// Address: 0x313be0 - 0x313c50
void entry_00313be0_0x313be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313be0_0x313be0");
#endif

    switch (ctx->pc) {
        case 0x313be8u: goto label_313be8;
        case 0x313c34u: goto label_313c34;
        default: break;
    }

    ctx->pc = 0x313be0u;

    // 0x313be0: 0xc067648  jal         func_19D920
    ctx->pc = 0x313BE0u;
    SET_GPR_U32(ctx, 31, 0x313BE8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x313BE0u, 0x313BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313BE8u;
label_313be8:
    // 0x313be8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x313be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x313bec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313bf0: 0x0  nop
    ctx->pc = 0x313bf0u;
    // NOP
    // 0x313bf4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x313bf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x313bf8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x313bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x313bfc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x313bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x313c00: 0x24421cc0  addiu       $v0, $v0, 0x1CC0
    ctx->pc = 0x313c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7360));
    // 0x313c04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313c08: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x313c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313c0c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x313c0cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x313c10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x313c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x313c14: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x313c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x313c18: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x313c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x313c1c: 0x24421cf0  addiu       $v0, $v0, 0x1CF0
    ctx->pc = 0x313c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7408));
    // 0x313c20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313c24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x313c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x313c28: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x313c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x313c2c: 0xc0c4e84  jal         func_313A10
    ctx->pc = 0x313C2Cu;
    SET_GPR_U32(ctx, 31, 0x313C34u);
    ctx->pc = 0x313A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313A10u, 0x313C2Cu, 0x313C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313C34u;
label_313c34:
    // 0x313c34: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x313c34u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x313c38: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x313c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x313c3c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x313c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x313c40: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x313C40u;
    {
        const bool branch_taken_0x313c40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x313c40) {
            ctx->pc = 0x313C50u;
            return;
        }
    }
    ctx->pc = 0x313C48u;
    // 0x313c48: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x313c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x313c4c: 0xa222011c  sb          $v0, 0x11C($s1)
    ctx->pc = 0x313c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 284), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x313c50u;
}
