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

// Function: entry_0032d408
// Address: 0x32d408 - 0x32d46c
void entry_0032d408_0x32d408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d408_0x32d408");
#endif

    switch (ctx->pc) {
        case 0x32d454u: goto label_32d454;
        case 0x32d460u: goto label_32d460;
        default: break;
    }

    ctx->pc = 0x32d408u;

    // 0x32d408: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32d408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32d40c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32d410: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x32d410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x32d414: 0x34423a14  ori         $v0, $v0, 0x3A14
    ctx->pc = 0x32d414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14868);
    // 0x32d418: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32d418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32d41c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32d41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32d420: 0x8c221a3c  lw          $v0, 0x1A3C($at)
    ctx->pc = 0x32d420u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32d424: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x32d424u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
    // 0x32d428: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x32d428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x32d42c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x32D42Cu;
    {
        const bool branch_taken_0x32d42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d42c) {
            ctx->pc = 0x32D578u;
            return;
        }
    }
    ctx->pc = 0x32D434u;
    // 0x32d434: 0x92825e04  lbu         $v0, 0x5E04($s4)
    ctx->pc = 0x32d434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24068)));
    // 0x32d438: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32d438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32d43c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d440: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32D440u;
    {
        const bool branch_taken_0x32d440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32d440) {
            ctx->pc = 0x32D46Cu;
            return;
        }
    }
    ctx->pc = 0x32D448u;
    // 0x32d448: 0xc68c5e00  lwc1        $f12, 0x5E00($s4)
    ctx->pc = 0x32d448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d44c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x32D44Cu;
    SET_GPR_U32(ctx, 31, 0x32D454u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x32D44Cu, 0x32D454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D454u;
label_32d454:
    // 0x32d454: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32d454u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d458: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x32D458u;
    SET_GPR_U32(ctx, 31, 0x32D460u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x32D458u, 0x32D460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D460u;
label_32d460:
    // 0x32d460: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x32d460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x32d464: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x32D464u;
    {
        const bool branch_taken_0x32d464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d464) {
            ctx->pc = 0x32D4A8u;
            return;
        }
    }
    ctx->pc = 0x32D46Cu;
}
