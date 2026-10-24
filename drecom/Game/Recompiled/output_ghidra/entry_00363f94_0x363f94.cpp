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

// Function: entry_00363f94
// Address: 0x363f94 - 0x364018
void entry_00363f94_0x363f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363f94_0x363f94");
#endif

    switch (ctx->pc) {
        case 0x363fdcu: goto label_363fdc;
        default: break;
    }

    ctx->pc = 0x363f94u;

    // 0x363f94: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x363f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x363f98: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x363f98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x363f9c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x363f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x363fa0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x363fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x363fa4: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x363FA4u;
    {
        const bool branch_taken_0x363fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x363fa4) {
            ctx->pc = 0x3640C0u;
            return;
        }
    }
    ctx->pc = 0x363FACu;
    // 0x363fac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363fb0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x363fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363fb4: 0x3c034576  lui         $v1, 0x4576
    ctx->pc = 0x363fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17782 << 16));
    // 0x363fb8: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x363fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x363fbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363fc0: 0x0  nop
    ctx->pc = 0x363fc0u;
    // NOP
    // 0x363fc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x363fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363fc8: 0x0  nop
    ctx->pc = 0x363fc8u;
    // NOP
    // 0x363fcc: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x363FCCu;
    {
        const bool branch_taken_0x363fcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x363fcc) {
            ctx->pc = 0x3640C0u;
            return;
        }
    }
    ctx->pc = 0x363FD4u;
    // 0x363fd4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x363FD4u;
    SET_GPR_U32(ctx, 31, 0x363FDCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x363FD4u, 0x363FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363FDCu;
label_363fdc:
    // 0x363fdc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x363fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x363fe0: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x363fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x363fe4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x363fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363fe8: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x363FE8u;
    {
        const bool branch_taken_0x363fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x363fe8) {
            ctx->pc = 0x364088u;
            return;
        }
    }
    ctx->pc = 0x363FF0u;
    // 0x363ff0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x363ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363ff4: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x363FF4u;
    {
        const bool branch_taken_0x363ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x363ff4) {
            ctx->pc = 0x364050u;
            return;
        }
    }
    ctx->pc = 0x363FFCu;
    // 0x363ffc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x363ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364000: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x364000u;
    {
        const bool branch_taken_0x364000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x364000) {
            ctx->pc = 0x364018u;
            return;
        }
    }
    ctx->pc = 0x364008u;
    // 0x364008: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x364008u;
    {
        const bool branch_taken_0x364008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x364008) {
            ctx->pc = 0x364018u;
            return;
        }
    }
    ctx->pc = 0x364010u;
    // 0x364010: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x364010u;
    {
        const bool branch_taken_0x364010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364010) {
            ctx->pc = 0x3640C0u;
            return;
        }
    }
    ctx->pc = 0x364018u;
}
