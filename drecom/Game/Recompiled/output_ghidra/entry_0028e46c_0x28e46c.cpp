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

// Function: entry_0028e46c
// Address: 0x28e46c - 0x28e4b8
void entry_0028e46c_0x28e46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e46c_0x28e46c");
#endif

    switch (ctx->pc) {
        case 0x28e47cu: goto label_28e47c;
        default: break;
    }

    ctx->pc = 0x28e46cu;

    // 0x28e46c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28e46cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e470: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x28e470u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28e474: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28E474u;
    SET_GPR_U32(ctx, 31, 0x28E47Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28E474u, 0x28E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E47Cu;
label_28e47c:
    // 0x28e47c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x28e47cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e480: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28e480u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e484: 0x0  nop
    ctx->pc = 0x28e484u;
    // NOP
    // 0x28e488: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e48c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x28e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x28e490: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x28e490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28e494: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28e494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e498: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x28e498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x28e49c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E49Cu;
    {
        const bool branch_taken_0x28e49c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x28e49c) {
            ctx->pc = 0x28E4B8u;
            return;
        }
    }
    ctx->pc = 0x28E4A4u;
    // 0x28e4a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28e4a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e4a8: 0x0  nop
    ctx->pc = 0x28e4a8u;
    // NOP
    // 0x28e4ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e4acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e4b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28E4B0u;
    {
        const bool branch_taken_0x28e4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e4b0) {
            ctx->pc = 0x28E4D4u;
            return;
        }
    }
    ctx->pc = 0x28E4B8u;
}
