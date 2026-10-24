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

// Function: entry_001c7c28
// Address: 0x1c7c28 - 0x1c7c94
void entry_001c7c28_0x1c7c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7c28_0x1c7c28");
#endif

    switch (ctx->pc) {
        case 0x1c7c90u: goto label_1c7c90;
        default: break;
    }

    ctx->pc = 0x1c7c28u;

    // 0x1c7c28: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7c2c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1c7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c7c30: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1c7c30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1c7c34: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x1c7c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1c7c38: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1C7C38u;
    {
        const bool branch_taken_0x1c7c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c38) {
            ctx->pc = 0x1C7CFCu;
            return;
        }
    }
    ctx->pc = 0x1C7C40u;
    // 0x1c7c40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7c44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7c48: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1c7c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1c7c4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7c50: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c7c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7c54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7c58: 0xe4801568  swc1        $f0, 0x1568($a0)
    ctx->pc = 0x1c7c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5480), bits); }
    // 0x1c7c5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7c60: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1c7c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7c64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7c68: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1c7c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1c7c6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7c70: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1c7c70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c7c74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7c78: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1c7c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1c7c7c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7C7Cu;
    {
        const bool branch_taken_0x1c7c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c7c) {
            ctx->pc = 0x1C7C94u;
            return;
        }
    }
    ctx->pc = 0x1C7C84u;
    // 0x1c7c84: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7c88: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1C7C88u;
    SET_GPR_U32(ctx, 31, 0x1C7C90u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1C7C88u, 0x1C7C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7C90u;
label_1c7c90:
    // 0x1c7c90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7c90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1c7c94u;
}
