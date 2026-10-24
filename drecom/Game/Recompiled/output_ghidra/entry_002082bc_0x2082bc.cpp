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

// Function: entry_002082bc
// Address: 0x2082bc - 0x208304
void entry_002082bc_0x2082bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002082bc_0x2082bc");
#endif

    switch (ctx->pc) {
        case 0x2082ccu: goto label_2082cc;
        default: break;
    }

    ctx->pc = 0x2082bcu;

    // 0x2082bc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2082bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2082c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2082c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2082c4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2082C4u;
    SET_GPR_U32(ctx, 31, 0x2082CCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2082C4u, 0x2082CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2082CCu;
label_2082cc:
    // 0x2082cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2082ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2082d0: 0x8c421340  lw          $v0, 0x1340($v0)
    ctx->pc = 0x2082d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4928)));
    // 0x2082d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2082d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2082d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2082D8u;
    {
        const bool branch_taken_0x2082d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2082d8) {
            ctx->pc = 0x208304u;
            return;
        }
    }
    ctx->pc = 0x2082E0u;
    // 0x2082e0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2082e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2082e4: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2082e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2082e8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2082e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2082ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2082ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2082f0: 0x0  nop
    ctx->pc = 0x2082f0u;
    // NOP
    // 0x2082f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2082f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2082f8: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2082f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2082fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2082FCu;
    {
        const bool branch_taken_0x2082fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2082fc) {
            ctx->pc = 0x208320u;
            return;
        }
    }
    ctx->pc = 0x208304u;
}
