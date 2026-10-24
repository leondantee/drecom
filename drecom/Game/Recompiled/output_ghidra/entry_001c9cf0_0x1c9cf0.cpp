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

// Function: entry_001c9cf0
// Address: 0x1c9cf0 - 0x1c9d6c
void entry_001c9cf0_0x1c9cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9cf0_0x1c9cf0");
#endif

    switch (ctx->pc) {
        case 0x1c9d68u: goto label_1c9d68;
        default: break;
    }

    ctx->pc = 0x1c9cf0u;

    // 0x1c9cf0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9cf4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1c9cf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1c9cf8: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1C9CF8u;
    {
        const bool branch_taken_0x1c9cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9cf8) {
            ctx->pc = 0x1C9E04u;
            return;
        }
    }
    ctx->pc = 0x1C9D00u;
    // 0x1c9d00: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9d04: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c9d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c9d08: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c9d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c9d0c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c9d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c9d10: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1C9D10u;
    {
        const bool branch_taken_0x1c9d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9d10) {
            ctx->pc = 0x1C9DD4u;
            return;
        }
    }
    ctx->pc = 0x1C9D18u;
    // 0x1c9d18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9d1c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9d20: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1c9d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1c9d24: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9d28: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c9d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9d2c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9d30: 0xe4801568  swc1        $f0, 0x1568($a0)
    ctx->pc = 0x1c9d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5480), bits); }
    // 0x1c9d34: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9d38: 0xc4a01568  lwc1        $f0, 0x1568($a1)
    ctx->pc = 0x1c9d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9d3c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9d40: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1c9d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1c9d44: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9d48: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1c9d48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c9d4c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9d50: 0x8ca313e8  lw          $v1, 0x13E8($a1)
    ctx->pc = 0x1c9d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5096)));
    // 0x1c9d54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9D54u;
    {
        const bool branch_taken_0x1c9d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9d54) {
            ctx->pc = 0x1C9D6Cu;
            return;
        }
    }
    ctx->pc = 0x1C9D5Cu;
    // 0x1c9d5c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9d60: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1C9D60u;
    SET_GPR_U32(ctx, 31, 0x1C9D68u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1C9D60u, 0x1C9D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D68u;
label_1c9d68:
    // 0x1c9d68: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c9d68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1c9d6cu;
}
