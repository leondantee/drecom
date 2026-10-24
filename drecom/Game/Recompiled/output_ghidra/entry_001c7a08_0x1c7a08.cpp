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

// Function: entry_001c7a08
// Address: 0x1c7a08 - 0x1c7a78
void entry_001c7a08_0x1c7a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7a08_0x1c7a08");
#endif

    switch (ctx->pc) {
        case 0x1c7a74u: goto label_1c7a74;
        default: break;
    }

    ctx->pc = 0x1c7a08u;

    // 0x1c7a08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7a0c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1c7a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c7a10: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1c7a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1c7a14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c7a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c7a18: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C7A18u;
    {
        const bool branch_taken_0x1c7a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7a18) {
            ctx->pc = 0x1C7AE0u;
            return;
        }
    }
    ctx->pc = 0x1C7A20u;
    // 0x1c7a20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7a24: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7a28: 0xe4801564  swc1        $f0, 0x1564($a0)
    ctx->pc = 0x1c7a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5476), bits); }
    // 0x1c7a2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7a30: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c7a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7a34: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7a38: 0xe4801568  swc1        $f0, 0x1568($a0)
    ctx->pc = 0x1c7a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5480), bits); }
    // 0x1c7a3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7a40: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1c7a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7a44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7a48: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1c7a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1c7a4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7a50: 0xa4801574  sh          $zero, 0x1574($a0)
    ctx->pc = 0x1c7a50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c7a54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7a58: 0x8c6413e8  lw          $a0, 0x13E8($v1)
    ctx->pc = 0x1c7a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c7a5c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7A5Cu;
    {
        const bool branch_taken_0x1c7a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7a5c) {
            ctx->pc = 0x1C7A78u;
            return;
        }
    }
    ctx->pc = 0x1C7A64u;
    // 0x1c7a64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7a68: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1c7a68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1c7a6c: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1C7A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C7A74u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1C7A6Cu, 0x1C7A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A74u;
label_1c7a74:
    // 0x1c7a74: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c7a74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1c7a78u;
}
