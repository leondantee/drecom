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

// Function: entry_003089ec
// Address: 0x3089ec - 0x308a58
void entry_003089ec_0x3089ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003089ec_0x3089ec");
#endif

    switch (ctx->pc) {
        case 0x308a18u: goto label_308a18;
        case 0x308a2cu: goto label_308a2c;
        case 0x308a44u: goto label_308a44;
        case 0x308a50u: goto label_308a50;
        default: break;
    }

    ctx->pc = 0x3089ecu;

    // 0x3089ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3089ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3089f0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x3089f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3089f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3089f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3089f8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x3089f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x3089fc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3089fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x308a00: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x308a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x308a04: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x308a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x308a08: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x308a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x308a0c: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x308a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x308a10: 0xc05c848  jal         func_172120
    ctx->pc = 0x308A10u;
    SET_GPR_U32(ctx, 31, 0x308A18u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x308A10u, 0x308A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A18u;
label_308a18:
    // 0x308a18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308a1c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x308a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308a20: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x308a20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x308a24: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x308A24u;
    SET_GPR_U32(ctx, 31, 0x308A2Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x308A24u, 0x308A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A2Cu;
label_308a2c:
    // 0x308a2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308a30: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x308a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x308a34: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308a38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x308a38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x308a3c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x308A3Cu;
    SET_GPR_U32(ctx, 31, 0x308A44u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x308A3Cu, 0x308A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A44u;
label_308a44:
    // 0x308a44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308a48: 0xc05cd10  jal         func_173440
    ctx->pc = 0x308A48u;
    SET_GPR_U32(ctx, 31, 0x308A50u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x308A48u, 0x308A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A50u;
label_308a50:
    // 0x308a50: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308a54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x308a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x308a58u;
}
