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

// Function: entry_0019fdf4
// Address: 0x19fdf4 - 0x19fe28
void entry_0019fdf4_0x19fdf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fdf4_0x19fdf4");
#endif

    switch (ctx->pc) {
        case 0x19fe0cu: goto label_19fe0c;
        default: break;
    }

    ctx->pc = 0x19fdf4u;

    // 0x19fdf4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x19fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19fdf8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19fdf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19fdfc: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x19fdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19fe00: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x19fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19fe04: 0xc05692c  jal         func_15A4B0
    ctx->pc = 0x19FE04u;
    SET_GPR_U32(ctx, 31, 0x19FE0Cu);
    ctx->pc = 0x15A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A4B0u, 0x19FE04u, 0x19FE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE0Cu;
label_19fe0c:
    // 0x19fe0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FE0Cu;
    {
        const bool branch_taken_0x19fe0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fe0c) {
            ctx->pc = 0x19FE28u;
            return;
        }
    }
    ctx->pc = 0x19FE14u;
    // 0x19fe14: 0x82030082  lb          $v1, 0x82($s0)
    ctx->pc = 0x19fe14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x19fe18: 0x38e3c  dsll32      $s1, $v1, 24
    ctx->pc = 0x19fe18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 24));
    // 0x19fe1c: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x19fe1cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x19fe20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19FE20u;
    {
        const bool branch_taken_0x19fe20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fe20) {
            ctx->pc = 0x19FE40u;
            return;
        }
    }
    ctx->pc = 0x19FE28u;
}
