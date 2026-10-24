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

// Function: entry_0012ddd4
// Address: 0x12ddd4 - 0x12de28
void entry_0012ddd4_0x12ddd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ddd4_0x12ddd4");
#endif

    switch (ctx->pc) {
        case 0x12de04u: goto label_12de04;
        default: break;
    }

    ctx->pc = 0x12ddd4u;

    // 0x12ddd4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12ddd8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12ddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dddc: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x12dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x12dde0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x12dde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x12dde4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12dde4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12dde8: 0x0  nop
    ctx->pc = 0x12dde8u;
    // NOP
    // 0x12ddec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12ddecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ddf0: 0x0  nop
    ctx->pc = 0x12ddf0u;
    // NOP
    // 0x12ddf4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x12DDF4u;
    {
        const bool branch_taken_0x12ddf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12ddf4) {
            ctx->pc = 0x12DE28u;
            return;
        }
    }
    ctx->pc = 0x12DDFCu;
    // 0x12ddfc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12DDFCu;
    SET_GPR_U32(ctx, 31, 0x12DE04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12DDFCu, 0x12DE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE04u;
label_12de04:
    // 0x12de04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12de04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12de08: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12de08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12de0c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12DE0Cu;
    {
        const bool branch_taken_0x12de0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12de0c) {
            ctx->pc = 0x12DE28u;
            return;
        }
    }
    ctx->pc = 0x12DE14u;
    // 0x12de14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12de14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12de18: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12de1c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x12de1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x12de20: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x12DE20u;
    {
        const bool branch_taken_0x12de20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12de20) {
            ctx->pc = 0x12E1A4u;
            return;
        }
    }
    ctx->pc = 0x12DE28u;
}
