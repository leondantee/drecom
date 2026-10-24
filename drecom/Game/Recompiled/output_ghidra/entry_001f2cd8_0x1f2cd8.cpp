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

// Function: entry_001f2cd8
// Address: 0x1f2cd8 - 0x1f2d58
void entry_001f2cd8_0x1f2cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2cd8_0x1f2cd8");
#endif

    switch (ctx->pc) {
        case 0x1f2ce8u: goto label_1f2ce8;
        case 0x1f2cf4u: goto label_1f2cf4;
        default: break;
    }

    ctx->pc = 0x1f2cd8u;

    // 0x1f2cd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1f2cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2cdc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f2cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f2ce0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F2CE0u;
    SET_GPR_U32(ctx, 31, 0x1F2CE8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F2CE0u, 0x1F2CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CE8u;
label_1f2ce8:
    // 0x1f2ce8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1f2ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2cec: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F2CECu;
    SET_GPR_U32(ctx, 31, 0x1F2CF4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F2CECu, 0x1F2CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CF4u;
label_1f2cf4:
    // 0x1f2cf4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1f2cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2cf8: 0x84a4127a  lh          $a0, 0x127A($a1)
    ctx->pc = 0x1f2cf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
    // 0x1f2cfc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f2cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f2d00: 0xa4a3127a  sh          $v1, 0x127A($a1)
    ctx->pc = 0x1f2d00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2d04: 0x1480008a  bnez        $a0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1F2D04u;
    {
        const bool branch_taken_0x1f2d04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2d04) {
            ctx->pc = 0x1F2F30u;
            return;
        }
    }
    ctx->pc = 0x1F2D0Cu;
    // 0x1f2d0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f2d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2d10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2d14: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f2d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f2d18: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x1f2d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x1f2d1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2d1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2d20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2d24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2d28: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1f2d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x1f2d2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2d30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2d34: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1f2d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f2d38: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x1f2d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1f2d3c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2D3Cu;
    {
        const bool branch_taken_0x1f2d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2d3c) {
            ctx->pc = 0x1F2D58u;
            return;
        }
    }
    ctx->pc = 0x1F2D44u;
    // 0x1f2d44: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x1f2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x1f2d48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2d48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2d4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2d50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2d54: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1f2d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    ctx->pc = 0x1f2d58u;
}
