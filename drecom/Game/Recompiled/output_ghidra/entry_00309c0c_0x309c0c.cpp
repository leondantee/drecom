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

// Function: entry_00309c0c
// Address: 0x309c0c - 0x309c94
void entry_00309c0c_0x309c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00309c0c_0x309c0c");
#endif

    switch (ctx->pc) {
        case 0x309c50u: goto label_309c50;
        case 0x309c60u: goto label_309c60;
        case 0x309c6cu: goto label_309c6c;
        default: break;
    }

    ctx->pc = 0x309c0cu;

    // 0x309c0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309c10: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x309c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309c14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309c18: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x309c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309c1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x309c1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x309c20: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x309c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x309c24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309c28: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x309c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309c2c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x309c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x309c30: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x309c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x309c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309c38: 0x0  nop
    ctx->pc = 0x309c38u;
    // NOP
    // 0x309c3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x309c3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x309c40: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x309c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x309c44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309c48: 0xc05cd10  jal         func_173440
    ctx->pc = 0x309C48u;
    SET_GPR_U32(ctx, 31, 0x309C50u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x309C48u, 0x309C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309C50u;
label_309c50:
    // 0x309c50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309c54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x309c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x309c58: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x309C58u;
    SET_GPR_U32(ctx, 31, 0x309C60u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x309C58u, 0x309C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309C60u;
label_309c60:
    // 0x309c60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309c64: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x309C64u;
    SET_GPR_U32(ctx, 31, 0x309C6Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x309C64u, 0x309C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309C6Cu;
label_309c6c:
    // 0x309c6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309c70: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x309c70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x309c74: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x309C74u;
    {
        const bool branch_taken_0x309c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309c74) {
            ctx->pc = 0x309EF4u;
            return;
        }
    }
    ctx->pc = 0x309C7Cu;
    // 0x309c7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309c80: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x309c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x309c84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x309c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x309c88: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x309c88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x309c8c: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x309C8Cu;
    {
        const bool branch_taken_0x309c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309c8c) {
            ctx->pc = 0x309EF4u;
            return;
        }
    }
    ctx->pc = 0x309C94u;
}
