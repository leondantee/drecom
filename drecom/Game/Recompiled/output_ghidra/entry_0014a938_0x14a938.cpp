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

// Function: entry_0014a938
// Address: 0x14a938 - 0x14a994
void entry_0014a938_0x14a938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a938_0x14a938");
#endif

    switch (ctx->pc) {
        case 0x14a948u: goto label_14a948;
        case 0x14a984u: goto label_14a984;
        default: break;
    }

    ctx->pc = 0x14a938u;

    // 0x14a938: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a93c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14a93cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14a940: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14A940u;
    SET_GPR_U32(ctx, 31, 0x14A948u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14A940u, 0x14A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A948u;
label_14a948:
    // 0x14a948: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a94c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14a94cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x14a950: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A950u;
    {
        const bool branch_taken_0x14a950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a950) {
            ctx->pc = 0x14A994u;
            return;
        }
    }
    ctx->pc = 0x14A958u;
    // 0x14a958: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a95c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x14a95cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x14a960: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14a960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14a964: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x14a964u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x14a968: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a96c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x14a96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a970: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a974: 0xc4401578  lwc1        $f0, 0x1578($v0)
    ctx->pc = 0x14a974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a978: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x14a978u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14a97c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x14A97Cu;
    SET_GPR_U32(ctx, 31, 0x14A984u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x14A97Cu, 0x14A984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A984u;
label_14a984:
    // 0x14a984: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a988: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14a988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14a98c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A98Cu;
    {
        const bool branch_taken_0x14a98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a98c) {
            ctx->pc = 0x14A9A4u;
            return;
        }
    }
    ctx->pc = 0x14A994u;
}
