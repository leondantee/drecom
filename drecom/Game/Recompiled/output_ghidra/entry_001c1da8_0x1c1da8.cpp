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

// Function: entry_001c1da8
// Address: 0x1c1da8 - 0x1c1e70
void entry_001c1da8_0x1c1da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1da8_0x1c1da8");
#endif

    switch (ctx->pc) {
        case 0x1c1dc8u: goto label_1c1dc8;
        case 0x1c1dd4u: goto label_1c1dd4;
        case 0x1c1de8u: goto label_1c1de8;
        case 0x1c1df4u: goto label_1c1df4;
        case 0x1c1dfcu: goto label_1c1dfc;
        case 0x1c1e18u: goto label_1c1e18;
        default: break;
    }

    ctx->pc = 0x1c1da8u;

    // 0x1c1da8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1dac: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c1dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1db0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1db4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c1db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c1db8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1dbc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c1dbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c1dc0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C1DC0u;
    SET_GPR_U32(ctx, 31, 0x1C1DC8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C1DC0u, 0x1C1DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DC8u;
label_1c1dc8:
    // 0x1c1dc8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1dcc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C1DCCu;
    SET_GPR_U32(ctx, 31, 0x1C1DD4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C1DCCu, 0x1C1DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DD4u;
label_1c1dd4:
    // 0x1c1dd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c1dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1dd8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1ddc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c1ddcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c1de0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C1DE0u;
    SET_GPR_U32(ctx, 31, 0x1C1DE8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C1DE0u, 0x1C1DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DE8u;
label_1c1de8:
    // 0x1c1de8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c1de8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c1dec: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C1DECu;
    SET_GPR_U32(ctx, 31, 0x1C1DF4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C1DECu, 0x1C1DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DF4u;
label_1c1df4:
    // 0x1c1df4: 0xc06d390  jal         func_1B4E40
    ctx->pc = 0x1C1DF4u;
    SET_GPR_U32(ctx, 31, 0x1C1DFCu);
    ctx->pc = 0x1B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4E40u, 0x1C1DF4u, 0x1C1DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DFCu;
label_1c1dfc:
    // 0x1c1dfc: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C1DFCu;
    {
        const bool branch_taken_0x1c1dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1dfc) {
            ctx->pc = 0x1C1EB4u;
            return;
        }
    }
    ctx->pc = 0x1C1E04u;
    // 0x1c1e04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e08: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c1e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e0c: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c1e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1e10: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C1E10u;
    SET_GPR_U32(ctx, 31, 0x1C1E18u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C1E10u, 0x1C1E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E18u;
label_1c1e18:
    // 0x1c1e18: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C1E18u;
    {
        const bool branch_taken_0x1c1e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e18) {
            ctx->pc = 0x1C1E9Cu;
            return;
        }
    }
    ctx->pc = 0x1C1E20u;
    // 0x1c1e20: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c1e24: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c1e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c1e28: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C1E28u;
    {
        const bool branch_taken_0x1c1e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e28) {
            ctx->pc = 0x1C1E70u;
            return;
        }
    }
    ctx->pc = 0x1C1E30u;
    // 0x1c1e30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e34: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c1e38: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c1e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c1e3c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c1e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c1e40: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C1E40u;
    {
        const bool branch_taken_0x1c1e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e40) {
            ctx->pc = 0x1C1E70u;
            return;
        }
    }
    ctx->pc = 0x1C1E48u;
    // 0x1c1e48: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c1e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e4c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c1e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c1e50: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c1e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c1e54: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c1e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c1e58: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c1e58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c1e5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1e60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e64: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c1e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c1e68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1e6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c1e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c1e70u;
}
