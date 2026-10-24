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

// Function: entry_00308cb8
// Address: 0x308cb8 - 0x308d50
void entry_00308cb8_0x308cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00308cb8_0x308cb8");
#endif

    switch (ctx->pc) {
        case 0x308cd8u: goto label_308cd8;
        case 0x308ce4u: goto label_308ce4;
        default: break;
    }

    ctx->pc = 0x308cb8u;

    // 0x308cb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308cbc: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x308cbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x308cc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x308cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x308cc4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x308cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x308cc8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ccc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x308cccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x308cd0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x308CD0u;
    SET_GPR_U32(ctx, 31, 0x308CD8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x308CD0u, 0x308CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308CD8u;
label_308cd8:
    // 0x308cd8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308cdc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x308CDCu;
    SET_GPR_U32(ctx, 31, 0x308CE4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x308CDCu, 0x308CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308CE4u;
label_308ce4:
    // 0x308ce4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ce8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x308ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x308cec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x308cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x308cf0: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x308cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x308cf4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x308CF4u;
    {
        const bool branch_taken_0x308cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308cf4) {
            ctx->pc = 0x308D6Cu;
            return;
        }
    }
    ctx->pc = 0x308CFCu;
    // 0x308cfc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308d00: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x308d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308d04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308d08: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x308d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308d0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x308d0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x308d10: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x308d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x308d14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308d18: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x308d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x308d1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x308d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x308d20: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x308d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x308d24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x308D24u;
    {
        const bool branch_taken_0x308d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308d24) {
            ctx->pc = 0x308D50u;
            return;
        }
    }
    ctx->pc = 0x308D2Cu;
    // 0x308d2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308d30: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x308d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308d34: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x308d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x308d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308d3c: 0x0  nop
    ctx->pc = 0x308d3cu;
    // NOP
    // 0x308d40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x308d40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x308d44: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x308d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x308d48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x308D48u;
    {
        const bool branch_taken_0x308d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308d48) {
            ctx->pc = 0x308D6Cu;
            return;
        }
    }
    ctx->pc = 0x308D50u;
}
