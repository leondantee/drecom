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

// Function: entry_00155528
// Address: 0x155528 - 0x15557c
void entry_00155528_0x155528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155528_0x155528");
#endif

    switch (ctx->pc) {
        case 0x15553cu: goto label_15553c;
        default: break;
    }

    ctx->pc = 0x155528u;

    // 0x155528: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x155528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15552c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15552cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x155530: 0xc44c124c  lwc1        $f12, 0x124C($v0)
    ctx->pc = 0x155530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x155534: 0xc067844  jal         func_19E110
    ctx->pc = 0x155534u;
    SET_GPR_U32(ctx, 31, 0x15553Cu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x155534u, 0x15553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15553Cu;
label_15553c:
    // 0x15553c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155540: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x155540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x155544: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x155544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155548: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x155548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x15554c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155550: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x155550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x155554: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x155554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155558: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x155558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x15555c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155560: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x155560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x155564: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x155564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155568: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x155568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x15556c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15556cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x155570: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x155570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155574: 0x0  nop
    ctx->pc = 0x155574u;
    // NOP
    // 0x155578: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x155578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    ctx->pc = 0x15557cu;
}
