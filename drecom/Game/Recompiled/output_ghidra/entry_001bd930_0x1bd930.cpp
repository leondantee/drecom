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

// Function: entry_001bd930
// Address: 0x1bd930 - 0x1bd980
void entry_001bd930_0x1bd930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd930_0x1bd930");
#endif

    switch (ctx->pc) {
        case 0x1bd948u: goto label_1bd948;
        case 0x1bd958u: goto label_1bd958;
        case 0x1bd96cu: goto label_1bd96c;
        default: break;
    }

    ctx->pc = 0x1bd930u;

    // 0x1bd930: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd934: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bd934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd938: 0xc48c137c  lwc1        $f12, 0x137C($a0)
    ctx->pc = 0x1bd938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd93c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bd93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd940: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BD940u;
    SET_GPR_U32(ctx, 31, 0x1BD948u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BD940u, 0x1BD948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD948u;
label_1bd948:
    // 0x1bd948: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bd948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1bd94c: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x1bd94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd950: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x1BD950u;
    SET_GPR_U32(ctx, 31, 0x1BD958u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1BD950u, 0x1BD958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD958u;
label_1bd958:
    // 0x1bd958: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bd958u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bd95c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd960: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x1bd960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1bd964: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1BD964u;
    SET_GPR_U32(ctx, 31, 0x1BD96Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1BD964u, 0x1BD96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD96Cu;
label_1bd96c:
    // 0x1bd96c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bd96cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bd970: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd974: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x1bd974u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1bd978: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1bd978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bd97c: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1bd97cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1bd980u;
}
