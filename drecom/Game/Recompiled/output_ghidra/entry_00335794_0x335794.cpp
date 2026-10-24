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

// Function: entry_00335794
// Address: 0x335794 - 0x33581c
void entry_00335794_0x335794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335794_0x335794");
#endif

    switch (ctx->pc) {
        case 0x3357a4u: goto label_3357a4;
        case 0x3357b4u: goto label_3357b4;
        case 0x3357c4u: goto label_3357c4;
        default: break;
    }

    ctx->pc = 0x335794u;

    // 0x335794: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x335794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x335798: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x335798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x33579c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x33579Cu;
    SET_GPR_U32(ctx, 31, 0x3357A4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x33579Cu, 0x3357A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3357A4u;
label_3357a4:
    // 0x3357a4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3357a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3357a8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x3357a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3357ac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3357ACu;
    SET_GPR_U32(ctx, 31, 0x3357B4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3357ACu, 0x3357B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3357B4u;
label_3357b4:
    // 0x3357b4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3357b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3357b8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x3357b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3357bc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3357BCu;
    SET_GPR_U32(ctx, 31, 0x3357C4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3357BCu, 0x3357C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3357C4u;
label_3357c4:
    // 0x3357c4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3357c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3357c8: 0xac203350  sw          $zero, 0x3350($at)
    ctx->pc = 0x3357c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x893350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893350u, _value); } while (0);
    // 0x3357cc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3357ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3357d0: 0x8c233348  lw          $v1, 0x3348($at)
    ctx->pc = 0x3357d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x893348u));
    // 0x3357d4: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x3357d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3357d8: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3357D8u;
    {
        const bool branch_taken_0x3357d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3357d8) {
            ctx->pc = 0x33581Cu;
            return;
        }
    }
    ctx->pc = 0x3357E0u;
    // 0x3357e0: 0x3c03bd57  lui         $v1, 0xBD57
    ctx->pc = 0x3357e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48471 << 16));
    // 0x3357e4: 0x34659436  ori         $a1, $v1, 0x9436
    ctx->pc = 0x3357e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37942);
    // 0x3357e8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3357e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3357ec: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3357ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3357f0: 0x8c243348  lw          $a0, 0x3348($at)
    ctx->pc = 0x3357f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x893348u));
    // 0x3357f4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3357f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3357f8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3357f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3357fc: 0xac233348  sw          $v1, 0x3348($at)
    ctx->pc = 0x3357fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x893348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893348u, _value); } while (0);
    // 0x335800: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x335800u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335804: 0x0  nop
    ctx->pc = 0x335804u;
    // NOP
    // 0x335808: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x335808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33580c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33580cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x335810: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x335810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x335814: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x335814u;
    {
        const bool branch_taken_0x335814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335814) {
            ctx->pc = 0x335B74u;
            return;
        }
    }
    ctx->pc = 0x33581Cu;
}
