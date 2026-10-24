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

// Function: entry_001d0f34
// Address: 0x1d0f34 - 0x1d0fa0
void entry_001d0f34_0x1d0f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0f34_0x1d0f34");
#endif

    switch (ctx->pc) {
        case 0x1d0f40u: goto label_1d0f40;
        case 0x1d0f64u: goto label_1d0f64;
        default: break;
    }

    ctx->pc = 0x1d0f34u;

    // 0x1d0f34: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d0f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0f38: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1D0F38u;
    SET_GPR_U32(ctx, 31, 0x1D0F40u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1D0F38u, 0x1D0F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0F40u;
label_1d0f40:
    // 0x1d0f40: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x1d0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x1d0f44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0f48: 0x0  nop
    ctx->pc = 0x1d0f48u;
    // NOP
    // 0x1d0f4c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1d0f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1d0f50: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d0f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d0f54: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1d0f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d0f58: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1d0f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0f5c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1D0F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D0F64u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1D0F64u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D0F64u) { return; }
    ctx->pc = 0x1D0F64u;
label_1d0f64:
    // 0x1d0f64: 0x922213a6  lbu         $v0, 0x13A6($s1)
    ctx->pc = 0x1d0f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5030)));
    // 0x1d0f68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d0f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d0f6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d0f70: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D0F70u;
    {
        const bool branch_taken_0x1d0f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0f70) {
            ctx->pc = 0x1D0FE8u;
            return;
        }
    }
    ctx->pc = 0x1D0F78u;
    // 0x1d0f78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0f7c: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D0F7Cu;
    {
        const bool branch_taken_0x1d0f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0f7c) {
            ctx->pc = 0x1D0FE8u;
            return;
        }
    }
    ctx->pc = 0x1D0F84u;
    // 0x1d0f84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0f88: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0F88u;
    {
        const bool branch_taken_0x1d0f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0f88) {
            ctx->pc = 0x1D0FA0u;
            return;
        }
    }
    ctx->pc = 0x1D0F90u;
    // 0x1d0f90: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0F90u;
    {
        const bool branch_taken_0x1d0f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f90) {
            ctx->pc = 0x1D0FA0u;
            return;
        }
    }
    ctx->pc = 0x1D0F98u;
    // 0x1d0f98: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D0F98u;
    {
        const bool branch_taken_0x1d0f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f98) {
            ctx->pc = 0x1D0FA0u;
            return;
        }
    }
    ctx->pc = 0x1D0FA0u;
}
