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

// Function: entry_002c75ec
// Address: 0x2c75ec - 0x2c7614
void entry_002c75ec_0x2c75ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c75ec_0x2c75ec");
#endif

    switch (ctx->pc) {
        case 0x2c75f4u: goto label_2c75f4;
        default: break;
    }

    ctx->pc = 0x2c75ecu;

    // 0x2c75ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C75ECu;
    SET_GPR_U32(ctx, 31, 0x2C75F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C75ECu, 0x2C75F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C75F4u;
label_2c75f4:
    // 0x2c75f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c75f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c75f8: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x2c75f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x2c75fc: 0x24630258  addiu       $v1, $v1, 0x258
    ctx->pc = 0x2c75fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 600));
    // 0x2c7600: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2c7600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c7604: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c7604u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c7608: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c760c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c760cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7610: 0xa4640058  sh          $a0, 0x58($v1)
    ctx->pc = 0x2c7610u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 88), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2c7614u;
}
